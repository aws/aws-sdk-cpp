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

#include <aws/support/SupportClient.h>
#include <aws/support/SupportEndpoint.h>
#include <aws/support/SupportErrorMarshaller.h>
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

static const char* SERVICE_NAME = "support";
static const char* ALLOCATION_TAG = "SupportClient";

SupportClient::SupportClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SupportErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SupportClient::SupportClient(const AWSCredentials& credentials,
                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SupportErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SupportClient::SupportClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SupportErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SupportClient::~SupportClient()
{
}

void SupportClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Support");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + SupportEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void SupportClient::OverrideEndpoint(const Aws::String& endpoint)
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

AddAttachmentsToSetOutcome SupportClient::AddAttachmentsToSet(const AddAttachmentsToSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AddAttachmentsToSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddAttachmentsToSetOutcomeCallable SupportClient::AddAttachmentsToSetCallable(const AddAttachmentsToSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddAttachmentsToSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddAttachmentsToSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SupportClientAddAttachmentsToSetAsyncHelper(SupportClient const * const clientThis, const AddAttachmentsToSetRequest& request, const AddAttachmentsToSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AddAttachmentsToSet(request), context);
}

void SupportClient::AddAttachmentsToSetAsync(const AddAttachmentsToSetRequest& request, const AddAttachmentsToSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SupportClientAddAttachmentsToSetAsyncHelper( this, request, handler, context ); } );
}

AddCommunicationToCaseOutcome SupportClient::AddCommunicationToCase(const AddCommunicationToCaseRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AddCommunicationToCaseOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddCommunicationToCaseOutcomeCallable SupportClient::AddCommunicationToCaseCallable(const AddCommunicationToCaseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddCommunicationToCaseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddCommunicationToCase(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SupportClientAddCommunicationToCaseAsyncHelper(SupportClient const * const clientThis, const AddCommunicationToCaseRequest& request, const AddCommunicationToCaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AddCommunicationToCase(request), context);
}

void SupportClient::AddCommunicationToCaseAsync(const AddCommunicationToCaseRequest& request, const AddCommunicationToCaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SupportClientAddCommunicationToCaseAsyncHelper( this, request, handler, context ); } );
}

CreateCaseOutcome SupportClient::CreateCase(const CreateCaseRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateCaseOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCaseOutcomeCallable SupportClient::CreateCaseCallable(const CreateCaseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCaseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCase(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SupportClientCreateCaseAsyncHelper(SupportClient const * const clientThis, const CreateCaseRequest& request, const CreateCaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateCase(request), context);
}

void SupportClient::CreateCaseAsync(const CreateCaseRequest& request, const CreateCaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SupportClientCreateCaseAsyncHelper( this, request, handler, context ); } );
}

DescribeAttachmentOutcome SupportClient::DescribeAttachment(const DescribeAttachmentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeAttachmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAttachmentOutcomeCallable SupportClient::DescribeAttachmentCallable(const DescribeAttachmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAttachmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAttachment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SupportClientDescribeAttachmentAsyncHelper(SupportClient const * const clientThis, const DescribeAttachmentRequest& request, const DescribeAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAttachment(request), context);
}

void SupportClient::DescribeAttachmentAsync(const DescribeAttachmentRequest& request, const DescribeAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SupportClientDescribeAttachmentAsyncHelper( this, request, handler, context ); } );
}

DescribeCasesOutcome SupportClient::DescribeCases(const DescribeCasesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeCasesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeCasesOutcomeCallable SupportClient::DescribeCasesCallable(const DescribeCasesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCasesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCases(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SupportClientDescribeCasesAsyncHelper(SupportClient const * const clientThis, const DescribeCasesRequest& request, const DescribeCasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeCases(request), context);
}

void SupportClient::DescribeCasesAsync(const DescribeCasesRequest& request, const DescribeCasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SupportClientDescribeCasesAsyncHelper( this, request, handler, context ); } );
}

DescribeCommunicationsOutcome SupportClient::DescribeCommunications(const DescribeCommunicationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeCommunicationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeCommunicationsOutcomeCallable SupportClient::DescribeCommunicationsCallable(const DescribeCommunicationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCommunicationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCommunications(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SupportClientDescribeCommunicationsAsyncHelper(SupportClient const * const clientThis, const DescribeCommunicationsRequest& request, const DescribeCommunicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeCommunications(request), context);
}

void SupportClient::DescribeCommunicationsAsync(const DescribeCommunicationsRequest& request, const DescribeCommunicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SupportClientDescribeCommunicationsAsyncHelper( this, request, handler, context ); } );
}

DescribeServicesOutcome SupportClient::DescribeServices(const DescribeServicesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeServicesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeServicesOutcomeCallable SupportClient::DescribeServicesCallable(const DescribeServicesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeServicesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeServices(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SupportClientDescribeServicesAsyncHelper(SupportClient const * const clientThis, const DescribeServicesRequest& request, const DescribeServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeServices(request), context);
}

void SupportClient::DescribeServicesAsync(const DescribeServicesRequest& request, const DescribeServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SupportClientDescribeServicesAsyncHelper( this, request, handler, context ); } );
}

DescribeSeverityLevelsOutcome SupportClient::DescribeSeverityLevels(const DescribeSeverityLevelsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeSeverityLevelsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeSeverityLevelsOutcomeCallable SupportClient::DescribeSeverityLevelsCallable(const DescribeSeverityLevelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSeverityLevelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSeverityLevels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SupportClientDescribeSeverityLevelsAsyncHelper(SupportClient const * const clientThis, const DescribeSeverityLevelsRequest& request, const DescribeSeverityLevelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeSeverityLevels(request), context);
}

void SupportClient::DescribeSeverityLevelsAsync(const DescribeSeverityLevelsRequest& request, const DescribeSeverityLevelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SupportClientDescribeSeverityLevelsAsyncHelper( this, request, handler, context ); } );
}

DescribeTrustedAdvisorCheckRefreshStatusesOutcome SupportClient::DescribeTrustedAdvisorCheckRefreshStatuses(const DescribeTrustedAdvisorCheckRefreshStatusesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeTrustedAdvisorCheckRefreshStatusesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTrustedAdvisorCheckRefreshStatusesOutcomeCallable SupportClient::DescribeTrustedAdvisorCheckRefreshStatusesCallable(const DescribeTrustedAdvisorCheckRefreshStatusesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTrustedAdvisorCheckRefreshStatusesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTrustedAdvisorCheckRefreshStatuses(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SupportClientDescribeTrustedAdvisorCheckRefreshStatusesAsyncHelper(SupportClient const * const clientThis, const DescribeTrustedAdvisorCheckRefreshStatusesRequest& request, const DescribeTrustedAdvisorCheckRefreshStatusesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeTrustedAdvisorCheckRefreshStatuses(request), context);
}

void SupportClient::DescribeTrustedAdvisorCheckRefreshStatusesAsync(const DescribeTrustedAdvisorCheckRefreshStatusesRequest& request, const DescribeTrustedAdvisorCheckRefreshStatusesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SupportClientDescribeTrustedAdvisorCheckRefreshStatusesAsyncHelper( this, request, handler, context ); } );
}

DescribeTrustedAdvisorCheckResultOutcome SupportClient::DescribeTrustedAdvisorCheckResult(const DescribeTrustedAdvisorCheckResultRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeTrustedAdvisorCheckResultOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTrustedAdvisorCheckResultOutcomeCallable SupportClient::DescribeTrustedAdvisorCheckResultCallable(const DescribeTrustedAdvisorCheckResultRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTrustedAdvisorCheckResultOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTrustedAdvisorCheckResult(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SupportClientDescribeTrustedAdvisorCheckResultAsyncHelper(SupportClient const * const clientThis, const DescribeTrustedAdvisorCheckResultRequest& request, const DescribeTrustedAdvisorCheckResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeTrustedAdvisorCheckResult(request), context);
}

void SupportClient::DescribeTrustedAdvisorCheckResultAsync(const DescribeTrustedAdvisorCheckResultRequest& request, const DescribeTrustedAdvisorCheckResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SupportClientDescribeTrustedAdvisorCheckResultAsyncHelper( this, request, handler, context ); } );
}

DescribeTrustedAdvisorCheckSummariesOutcome SupportClient::DescribeTrustedAdvisorCheckSummaries(const DescribeTrustedAdvisorCheckSummariesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeTrustedAdvisorCheckSummariesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTrustedAdvisorCheckSummariesOutcomeCallable SupportClient::DescribeTrustedAdvisorCheckSummariesCallable(const DescribeTrustedAdvisorCheckSummariesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTrustedAdvisorCheckSummariesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTrustedAdvisorCheckSummaries(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SupportClientDescribeTrustedAdvisorCheckSummariesAsyncHelper(SupportClient const * const clientThis, const DescribeTrustedAdvisorCheckSummariesRequest& request, const DescribeTrustedAdvisorCheckSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeTrustedAdvisorCheckSummaries(request), context);
}

void SupportClient::DescribeTrustedAdvisorCheckSummariesAsync(const DescribeTrustedAdvisorCheckSummariesRequest& request, const DescribeTrustedAdvisorCheckSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SupportClientDescribeTrustedAdvisorCheckSummariesAsyncHelper( this, request, handler, context ); } );
}

DescribeTrustedAdvisorChecksOutcome SupportClient::DescribeTrustedAdvisorChecks(const DescribeTrustedAdvisorChecksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeTrustedAdvisorChecksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTrustedAdvisorChecksOutcomeCallable SupportClient::DescribeTrustedAdvisorChecksCallable(const DescribeTrustedAdvisorChecksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTrustedAdvisorChecksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTrustedAdvisorChecks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SupportClientDescribeTrustedAdvisorChecksAsyncHelper(SupportClient const * const clientThis, const DescribeTrustedAdvisorChecksRequest& request, const DescribeTrustedAdvisorChecksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeTrustedAdvisorChecks(request), context);
}

void SupportClient::DescribeTrustedAdvisorChecksAsync(const DescribeTrustedAdvisorChecksRequest& request, const DescribeTrustedAdvisorChecksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SupportClientDescribeTrustedAdvisorChecksAsyncHelper( this, request, handler, context ); } );
}

RefreshTrustedAdvisorCheckOutcome SupportClient::RefreshTrustedAdvisorCheck(const RefreshTrustedAdvisorCheckRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RefreshTrustedAdvisorCheckOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RefreshTrustedAdvisorCheckOutcomeCallable SupportClient::RefreshTrustedAdvisorCheckCallable(const RefreshTrustedAdvisorCheckRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RefreshTrustedAdvisorCheckOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RefreshTrustedAdvisorCheck(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SupportClientRefreshTrustedAdvisorCheckAsyncHelper(SupportClient const * const clientThis, const RefreshTrustedAdvisorCheckRequest& request, const RefreshTrustedAdvisorCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RefreshTrustedAdvisorCheck(request), context);
}

void SupportClient::RefreshTrustedAdvisorCheckAsync(const RefreshTrustedAdvisorCheckRequest& request, const RefreshTrustedAdvisorCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SupportClientRefreshTrustedAdvisorCheckAsyncHelper( this, request, handler, context ); } );
}

ResolveCaseOutcome SupportClient::ResolveCase(const ResolveCaseRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ResolveCaseOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ResolveCaseOutcomeCallable SupportClient::ResolveCaseCallable(const ResolveCaseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResolveCaseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResolveCase(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SupportClientResolveCaseAsyncHelper(SupportClient const * const clientThis, const ResolveCaseRequest& request, const ResolveCaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ResolveCase(request), context);
}

void SupportClient::ResolveCaseAsync(const ResolveCaseRequest& request, const ResolveCaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SupportClientResolveCaseAsyncHelper( this, request, handler, context ); } );
}

