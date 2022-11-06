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

#include <aws/support/SupportClient.h>
#include <aws/support/SupportErrorMarshaller.h>
#include <aws/support/SupportEndpointProvider.h>
#include <aws/support/model/AddAttachmentsToSetRequest.h>
#include <aws/support/model/AddCommunicationToCaseRequest.h>
#include <aws/support/model/CreateCaseRequest.h>
#include <aws/support/model/DescribeAttachmentRequest.h>
#include <aws/support/model/DescribeCasesRequest.h>
#include <aws/support/model/DescribeCommunicationsRequest.h>
#include <aws/support/model/DescribeServicesRequest.h>
#include <aws/support/model/DescribeSeverityLevelsRequest.h>
#include <aws/support/model/DescribeTrustedAdvisorCheckRefreshStatusesRequest.h>
#include <aws/support/model/DescribeTrustedAdvisorCheckResultRequest.h>
#include <aws/support/model/DescribeTrustedAdvisorCheckSummariesRequest.h>
#include <aws/support/model/DescribeTrustedAdvisorChecksRequest.h>
#include <aws/support/model/RefreshTrustedAdvisorCheckRequest.h>
#include <aws/support/model/ResolveCaseRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Support;
using namespace Aws::Support::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* SupportClient::SERVICE_NAME = "support";
const char* SupportClient::ALLOCATION_TAG = "SupportClient";

SupportClient::SupportClient(const Support::SupportClientConfiguration& clientConfiguration,
                             std::shared_ptr<SupportEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SupportErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

SupportClient::SupportClient(const AWSCredentials& credentials,
                             std::shared_ptr<SupportEndpointProviderBase> endpointProvider,
                             const Support::SupportClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SupportErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

SupportClient::SupportClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<SupportEndpointProviderBase> endpointProvider,
                             const Support::SupportClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SupportErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  SupportClient::SupportClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SupportErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<SupportEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

SupportClient::SupportClient(const AWSCredentials& credentials,
                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SupportErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<SupportEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

SupportClient::SupportClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SupportErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<SupportEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
SupportClient::~SupportClient()
{
}

std::shared_ptr<SupportEndpointProviderBase>& SupportClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void SupportClient::init(const Support::SupportClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Support");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void SupportClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AddAttachmentsToSetOutcome SupportClient::AddAttachmentsToSet(const AddAttachmentsToSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AddAttachmentsToSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AddAttachmentsToSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AddAttachmentsToSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddAttachmentsToSetOutcomeCallable SupportClient::AddAttachmentsToSetCallable(const AddAttachmentsToSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddAttachmentsToSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddAttachmentsToSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SupportClient::AddAttachmentsToSetAsync(const AddAttachmentsToSetRequest& request, const AddAttachmentsToSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AddAttachmentsToSet(request), context);
    } );
}

AddCommunicationToCaseOutcome SupportClient::AddCommunicationToCase(const AddCommunicationToCaseRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AddCommunicationToCase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AddCommunicationToCase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AddCommunicationToCaseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddCommunicationToCaseOutcomeCallable SupportClient::AddCommunicationToCaseCallable(const AddCommunicationToCaseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddCommunicationToCaseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddCommunicationToCase(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SupportClient::AddCommunicationToCaseAsync(const AddCommunicationToCaseRequest& request, const AddCommunicationToCaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AddCommunicationToCase(request), context);
    } );
}

CreateCaseOutcome SupportClient::CreateCase(const CreateCaseRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateCase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateCaseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCaseOutcomeCallable SupportClient::CreateCaseCallable(const CreateCaseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCaseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCase(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SupportClient::CreateCaseAsync(const CreateCaseRequest& request, const CreateCaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateCase(request), context);
    } );
}

DescribeAttachmentOutcome SupportClient::DescribeAttachment(const DescribeAttachmentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAttachment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAttachment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeAttachmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAttachmentOutcomeCallable SupportClient::DescribeAttachmentCallable(const DescribeAttachmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAttachmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAttachment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SupportClient::DescribeAttachmentAsync(const DescribeAttachmentRequest& request, const DescribeAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeAttachment(request), context);
    } );
}

DescribeCasesOutcome SupportClient::DescribeCases(const DescribeCasesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeCases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeCases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeCasesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeCasesOutcomeCallable SupportClient::DescribeCasesCallable(const DescribeCasesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCasesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCases(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SupportClient::DescribeCasesAsync(const DescribeCasesRequest& request, const DescribeCasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeCases(request), context);
    } );
}

DescribeCommunicationsOutcome SupportClient::DescribeCommunications(const DescribeCommunicationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeCommunications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeCommunications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeCommunicationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeCommunicationsOutcomeCallable SupportClient::DescribeCommunicationsCallable(const DescribeCommunicationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCommunicationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCommunications(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SupportClient::DescribeCommunicationsAsync(const DescribeCommunicationsRequest& request, const DescribeCommunicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeCommunications(request), context);
    } );
}

DescribeServicesOutcome SupportClient::DescribeServices(const DescribeServicesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeServices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeServices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeServicesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeServicesOutcomeCallable SupportClient::DescribeServicesCallable(const DescribeServicesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeServicesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeServices(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SupportClient::DescribeServicesAsync(const DescribeServicesRequest& request, const DescribeServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeServices(request), context);
    } );
}

DescribeSeverityLevelsOutcome SupportClient::DescribeSeverityLevels(const DescribeSeverityLevelsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSeverityLevels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSeverityLevels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeSeverityLevelsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeSeverityLevelsOutcomeCallable SupportClient::DescribeSeverityLevelsCallable(const DescribeSeverityLevelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSeverityLevelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSeverityLevels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SupportClient::DescribeSeverityLevelsAsync(const DescribeSeverityLevelsRequest& request, const DescribeSeverityLevelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeSeverityLevels(request), context);
    } );
}

DescribeTrustedAdvisorCheckRefreshStatusesOutcome SupportClient::DescribeTrustedAdvisorCheckRefreshStatuses(const DescribeTrustedAdvisorCheckRefreshStatusesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTrustedAdvisorCheckRefreshStatuses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTrustedAdvisorCheckRefreshStatuses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeTrustedAdvisorCheckRefreshStatusesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTrustedAdvisorCheckRefreshStatusesOutcomeCallable SupportClient::DescribeTrustedAdvisorCheckRefreshStatusesCallable(const DescribeTrustedAdvisorCheckRefreshStatusesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTrustedAdvisorCheckRefreshStatusesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTrustedAdvisorCheckRefreshStatuses(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SupportClient::DescribeTrustedAdvisorCheckRefreshStatusesAsync(const DescribeTrustedAdvisorCheckRefreshStatusesRequest& request, const DescribeTrustedAdvisorCheckRefreshStatusesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeTrustedAdvisorCheckRefreshStatuses(request), context);
    } );
}

DescribeTrustedAdvisorCheckResultOutcome SupportClient::DescribeTrustedAdvisorCheckResult(const DescribeTrustedAdvisorCheckResultRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTrustedAdvisorCheckResult, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTrustedAdvisorCheckResult, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeTrustedAdvisorCheckResultOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTrustedAdvisorCheckResultOutcomeCallable SupportClient::DescribeTrustedAdvisorCheckResultCallable(const DescribeTrustedAdvisorCheckResultRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTrustedAdvisorCheckResultOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTrustedAdvisorCheckResult(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SupportClient::DescribeTrustedAdvisorCheckResultAsync(const DescribeTrustedAdvisorCheckResultRequest& request, const DescribeTrustedAdvisorCheckResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeTrustedAdvisorCheckResult(request), context);
    } );
}

DescribeTrustedAdvisorCheckSummariesOutcome SupportClient::DescribeTrustedAdvisorCheckSummaries(const DescribeTrustedAdvisorCheckSummariesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTrustedAdvisorCheckSummaries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTrustedAdvisorCheckSummaries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeTrustedAdvisorCheckSummariesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTrustedAdvisorCheckSummariesOutcomeCallable SupportClient::DescribeTrustedAdvisorCheckSummariesCallable(const DescribeTrustedAdvisorCheckSummariesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTrustedAdvisorCheckSummariesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTrustedAdvisorCheckSummaries(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SupportClient::DescribeTrustedAdvisorCheckSummariesAsync(const DescribeTrustedAdvisorCheckSummariesRequest& request, const DescribeTrustedAdvisorCheckSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeTrustedAdvisorCheckSummaries(request), context);
    } );
}

DescribeTrustedAdvisorChecksOutcome SupportClient::DescribeTrustedAdvisorChecks(const DescribeTrustedAdvisorChecksRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTrustedAdvisorChecks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTrustedAdvisorChecks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeTrustedAdvisorChecksOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTrustedAdvisorChecksOutcomeCallable SupportClient::DescribeTrustedAdvisorChecksCallable(const DescribeTrustedAdvisorChecksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTrustedAdvisorChecksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTrustedAdvisorChecks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SupportClient::DescribeTrustedAdvisorChecksAsync(const DescribeTrustedAdvisorChecksRequest& request, const DescribeTrustedAdvisorChecksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeTrustedAdvisorChecks(request), context);
    } );
}

RefreshTrustedAdvisorCheckOutcome SupportClient::RefreshTrustedAdvisorCheck(const RefreshTrustedAdvisorCheckRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RefreshTrustedAdvisorCheck, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RefreshTrustedAdvisorCheck, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RefreshTrustedAdvisorCheckOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RefreshTrustedAdvisorCheckOutcomeCallable SupportClient::RefreshTrustedAdvisorCheckCallable(const RefreshTrustedAdvisorCheckRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RefreshTrustedAdvisorCheckOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RefreshTrustedAdvisorCheck(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SupportClient::RefreshTrustedAdvisorCheckAsync(const RefreshTrustedAdvisorCheckRequest& request, const RefreshTrustedAdvisorCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RefreshTrustedAdvisorCheck(request), context);
    } );
}

ResolveCaseOutcome SupportClient::ResolveCase(const ResolveCaseRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ResolveCase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ResolveCase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ResolveCaseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ResolveCaseOutcomeCallable SupportClient::ResolveCaseCallable(const ResolveCaseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResolveCaseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResolveCase(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SupportClient::ResolveCaseAsync(const ResolveCaseRequest& request, const ResolveCaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ResolveCase(request), context);
    } );
}

