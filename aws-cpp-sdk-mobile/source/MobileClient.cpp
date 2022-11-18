/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/mobile/MobileClient.h>
#include <aws/mobile/MobileErrorMarshaller.h>
#include <aws/mobile/MobileEndpointProvider.h>
#include <aws/mobile/model/CreateProjectRequest.h>
#include <aws/mobile/model/DeleteProjectRequest.h>
#include <aws/mobile/model/DescribeBundleRequest.h>
#include <aws/mobile/model/DescribeProjectRequest.h>
#include <aws/mobile/model/ExportBundleRequest.h>
#include <aws/mobile/model/ExportProjectRequest.h>
#include <aws/mobile/model/ListBundlesRequest.h>
#include <aws/mobile/model/ListProjectsRequest.h>
#include <aws/mobile/model/UpdateProjectRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Mobile;
using namespace Aws::Mobile::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* MobileClient::SERVICE_NAME = "AWSMobileHubService";
const char* MobileClient::ALLOCATION_TAG = "MobileClient";

MobileClient::MobileClient(const Mobile::MobileClientConfiguration& clientConfiguration,
                           std::shared_ptr<MobileEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MobileErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

MobileClient::MobileClient(const AWSCredentials& credentials,
                           std::shared_ptr<MobileEndpointProviderBase> endpointProvider,
                           const Mobile::MobileClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MobileErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

MobileClient::MobileClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<MobileEndpointProviderBase> endpointProvider,
                           const Mobile::MobileClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  credentialsProvider,
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MobileErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  MobileClient::MobileClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MobileErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<MobileEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

MobileClient::MobileClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MobileErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<MobileEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

MobileClient::MobileClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  credentialsProvider,
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MobileErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<MobileEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
MobileClient::~MobileClient()
{
}

std::shared_ptr<MobileEndpointProviderBase>& MobileClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void MobileClient::init(const Mobile::MobileClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Mobile");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void MobileClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CreateProjectOutcome MobileClient::CreateProject(const CreateProjectRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/projects");
  return CreateProjectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateProjectOutcomeCallable MobileClient::CreateProjectCallable(const CreateProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MobileClient::CreateProjectAsync(const CreateProjectRequest& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateProject(request), context);
    } );
}

DeleteProjectOutcome MobileClient::DeleteProject(const DeleteProjectRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProjectIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteProject", "Required field: ProjectId, is not set");
    return DeleteProjectOutcome(Aws::Client::AWSError<MobileErrors>(MobileErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectId());
  return DeleteProjectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteProjectOutcomeCallable MobileClient::DeleteProjectCallable(const DeleteProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MobileClient::DeleteProjectAsync(const DeleteProjectRequest& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteProject(request), context);
    } );
}

DescribeBundleOutcome MobileClient::DescribeBundle(const DescribeBundleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeBundle, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BundleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeBundle", "Required field: BundleId, is not set");
    return DescribeBundleOutcome(Aws::Client::AWSError<MobileErrors>(MobileErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BundleId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeBundle, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/bundles/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBundleId());
  return DescribeBundleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeBundleOutcomeCallable MobileClient::DescribeBundleCallable(const DescribeBundleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeBundleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeBundle(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MobileClient::DescribeBundleAsync(const DescribeBundleRequest& request, const DescribeBundleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeBundle(request), context);
    } );
}

DescribeProjectOutcome MobileClient::DescribeProject(const DescribeProjectRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProjectIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeProject", "Required field: ProjectId, is not set");
    return DescribeProjectOutcome(Aws::Client::AWSError<MobileErrors>(MobileErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/project");
  return DescribeProjectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeProjectOutcomeCallable MobileClient::DescribeProjectCallable(const DescribeProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MobileClient::DescribeProjectAsync(const DescribeProjectRequest& request, const DescribeProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeProject(request), context);
    } );
}

ExportBundleOutcome MobileClient::ExportBundle(const ExportBundleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ExportBundle, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BundleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ExportBundle", "Required field: BundleId, is not set");
    return ExportBundleOutcome(Aws::Client::AWSError<MobileErrors>(MobileErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BundleId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ExportBundle, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/bundles/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBundleId());
  return ExportBundleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ExportBundleOutcomeCallable MobileClient::ExportBundleCallable(const ExportBundleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ExportBundleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ExportBundle(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MobileClient::ExportBundleAsync(const ExportBundleRequest& request, const ExportBundleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ExportBundle(request), context);
    } );
}

ExportProjectOutcome MobileClient::ExportProject(const ExportProjectRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ExportProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProjectIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ExportProject", "Required field: ProjectId, is not set");
    return ExportProjectOutcome(Aws::Client::AWSError<MobileErrors>(MobileErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ExportProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/exports/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectId());
  return ExportProjectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ExportProjectOutcomeCallable MobileClient::ExportProjectCallable(const ExportProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ExportProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ExportProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MobileClient::ExportProjectAsync(const ExportProjectRequest& request, const ExportProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ExportProject(request), context);
    } );
}

ListBundlesOutcome MobileClient::ListBundles(const ListBundlesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBundles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBundles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/bundles");
  return ListBundlesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListBundlesOutcomeCallable MobileClient::ListBundlesCallable(const ListBundlesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBundlesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBundles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MobileClient::ListBundlesAsync(const ListBundlesRequest& request, const ListBundlesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListBundles(request), context);
    } );
}

ListProjectsOutcome MobileClient::ListProjects(const ListProjectsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListProjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListProjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/projects");
  return ListProjectsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListProjectsOutcomeCallable MobileClient::ListProjectsCallable(const ListProjectsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProjectsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProjects(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MobileClient::ListProjectsAsync(const ListProjectsRequest& request, const ListProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListProjects(request), context);
    } );
}

UpdateProjectOutcome MobileClient::UpdateProject(const UpdateProjectRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProjectIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateProject", "Required field: ProjectId, is not set");
    return UpdateProjectOutcome(Aws::Client::AWSError<MobileErrors>(MobileErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/update");
  return UpdateProjectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateProjectOutcomeCallable MobileClient::UpdateProjectCallable(const UpdateProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MobileClient::UpdateProjectAsync(const UpdateProjectRequest& request, const UpdateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateProject(request), context);
    } );
}

