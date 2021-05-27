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

#include <aws/finspace-data/FinSpaceDataClient.h>
#include <aws/finspace-data/FinSpaceDataEndpoint.h>
#include <aws/finspace-data/FinSpaceDataErrorMarshaller.h>
#include <aws/finspace-data/model/CreateChangesetRequest.h>
#include <aws/finspace-data/model/GetProgrammaticAccessCredentialsRequest.h>
#include <aws/finspace-data/model/GetWorkingLocationRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::FinSpaceData;
using namespace Aws::FinSpaceData::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "finspace-api";
static const char* ALLOCATION_TAG = "FinSpaceDataClient";


FinSpaceDataClient::FinSpaceDataClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<FinSpaceDataErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

FinSpaceDataClient::FinSpaceDataClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<FinSpaceDataErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

FinSpaceDataClient::FinSpaceDataClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<FinSpaceDataErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

FinSpaceDataClient::~FinSpaceDataClient()
{
}

void FinSpaceDataClient::init(const Client::ClientConfiguration& config)
{
  SetServiceClientName("finspace data");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + FinSpaceDataEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void FinSpaceDataClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
  {
      m_uri = endpoint;
  }
  else
  {
      m_uri = m_configScheme + "://" + endpoint;
  }
}

CreateChangesetOutcome FinSpaceDataClient::CreateChangeset(const CreateChangesetRequest& request) const
{
  if (!request.DatasetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateChangeset", "Required field: DatasetId, is not set");
    return CreateChangesetOutcome(Aws::Client::AWSError<FinSpaceDataErrors>(FinSpaceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/datasets/");
  uri.AddPathSegment(request.GetDatasetId());
  uri.AddPathSegments("/changesets");
  return CreateChangesetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateChangesetOutcomeCallable FinSpaceDataClient::CreateChangesetCallable(const CreateChangesetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateChangesetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateChangeset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FinSpaceDataClient::CreateChangesetAsync(const CreateChangesetRequest& request, const CreateChangesetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateChangesetAsyncHelper( request, handler, context ); } );
}

void FinSpaceDataClient::CreateChangesetAsyncHelper(const CreateChangesetRequest& request, const CreateChangesetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateChangeset(request), context);
}

GetProgrammaticAccessCredentialsOutcome FinSpaceDataClient::GetProgrammaticAccessCredentials(const GetProgrammaticAccessCredentialsRequest& request) const
{
  if (!request.EnvironmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetProgrammaticAccessCredentials", "Required field: EnvironmentId, is not set");
    return GetProgrammaticAccessCredentialsOutcome(Aws::Client::AWSError<FinSpaceDataErrors>(FinSpaceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/credentials/programmatic");
  return GetProgrammaticAccessCredentialsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetProgrammaticAccessCredentialsOutcomeCallable FinSpaceDataClient::GetProgrammaticAccessCredentialsCallable(const GetProgrammaticAccessCredentialsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetProgrammaticAccessCredentialsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetProgrammaticAccessCredentials(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FinSpaceDataClient::GetProgrammaticAccessCredentialsAsync(const GetProgrammaticAccessCredentialsRequest& request, const GetProgrammaticAccessCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetProgrammaticAccessCredentialsAsyncHelper( request, handler, context ); } );
}

void FinSpaceDataClient::GetProgrammaticAccessCredentialsAsyncHelper(const GetProgrammaticAccessCredentialsRequest& request, const GetProgrammaticAccessCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetProgrammaticAccessCredentials(request), context);
}

GetWorkingLocationOutcome FinSpaceDataClient::GetWorkingLocation(const GetWorkingLocationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/workingLocationV1");
  return GetWorkingLocationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetWorkingLocationOutcomeCallable FinSpaceDataClient::GetWorkingLocationCallable(const GetWorkingLocationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetWorkingLocationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetWorkingLocation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FinSpaceDataClient::GetWorkingLocationAsync(const GetWorkingLocationRequest& request, const GetWorkingLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetWorkingLocationAsyncHelper( request, handler, context ); } );
}

void FinSpaceDataClient::GetWorkingLocationAsyncHelper(const GetWorkingLocationRequest& request, const GetWorkingLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetWorkingLocation(request), context);
}

