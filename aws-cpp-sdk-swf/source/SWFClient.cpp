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

#include <aws/swf/SWFClient.h>
#include <aws/swf/SWFEndpoint.h>
#include <aws/swf/SWFErrorMarshaller.h>
#include <aws/swf/model/CountClosedWorkflowExecutionsRequest.h>
#include <aws/swf/model/CountOpenWorkflowExecutionsRequest.h>
#include <aws/swf/model/CountPendingActivityTasksRequest.h>
#include <aws/swf/model/CountPendingDecisionTasksRequest.h>
#include <aws/swf/model/DeprecateActivityTypeRequest.h>
#include <aws/swf/model/DeprecateDomainRequest.h>
#include <aws/swf/model/DeprecateWorkflowTypeRequest.h>
#include <aws/swf/model/DescribeActivityTypeRequest.h>
#include <aws/swf/model/DescribeDomainRequest.h>
#include <aws/swf/model/DescribeWorkflowExecutionRequest.h>
#include <aws/swf/model/DescribeWorkflowTypeRequest.h>
#include <aws/swf/model/GetWorkflowExecutionHistoryRequest.h>
#include <aws/swf/model/ListActivityTypesRequest.h>
#include <aws/swf/model/ListClosedWorkflowExecutionsRequest.h>
#include <aws/swf/model/ListDomainsRequest.h>
#include <aws/swf/model/ListOpenWorkflowExecutionsRequest.h>
#include <aws/swf/model/ListTagsForResourceRequest.h>
#include <aws/swf/model/ListWorkflowTypesRequest.h>
#include <aws/swf/model/PollForActivityTaskRequest.h>
#include <aws/swf/model/PollForDecisionTaskRequest.h>
#include <aws/swf/model/RecordActivityTaskHeartbeatRequest.h>
#include <aws/swf/model/RegisterActivityTypeRequest.h>
#include <aws/swf/model/RegisterDomainRequest.h>
#include <aws/swf/model/RegisterWorkflowTypeRequest.h>
#include <aws/swf/model/RequestCancelWorkflowExecutionRequest.h>
#include <aws/swf/model/RespondActivityTaskCanceledRequest.h>
#include <aws/swf/model/RespondActivityTaskCompletedRequest.h>
#include <aws/swf/model/RespondActivityTaskFailedRequest.h>
#include <aws/swf/model/RespondDecisionTaskCompletedRequest.h>
#include <aws/swf/model/SignalWorkflowExecutionRequest.h>
#include <aws/swf/model/StartWorkflowExecutionRequest.h>
#include <aws/swf/model/TagResourceRequest.h>
#include <aws/swf/model/TerminateWorkflowExecutionRequest.h>
#include <aws/swf/model/UndeprecateActivityTypeRequest.h>
#include <aws/swf/model/UndeprecateDomainRequest.h>
#include <aws/swf/model/UndeprecateWorkflowTypeRequest.h>
#include <aws/swf/model/UntagResourceRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SWF;
using namespace Aws::SWF::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "swf";
static const char* ALLOCATION_TAG = "SWFClient";

SWFClient::SWFClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SWFErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SWFClient::SWFClient(const AWSCredentials& credentials,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SWFErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SWFClient::SWFClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SWFErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SWFClient::~SWFClient()
{
}

void SWFClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("SWF");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + SWFEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void SWFClient::OverrideEndpoint(const Aws::String& endpoint)
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

CountClosedWorkflowExecutionsOutcome SWFClient::CountClosedWorkflowExecutions(const CountClosedWorkflowExecutionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CountClosedWorkflowExecutionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CountClosedWorkflowExecutionsOutcomeCallable SWFClient::CountClosedWorkflowExecutionsCallable(const CountClosedWorkflowExecutionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CountClosedWorkflowExecutionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CountClosedWorkflowExecutions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClientCountClosedWorkflowExecutionsAsyncHelper(SWFClient const * const clientThis, const CountClosedWorkflowExecutionsRequest& request, const CountClosedWorkflowExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CountClosedWorkflowExecutions(request), context);
}

void SWFClient::CountClosedWorkflowExecutionsAsync(const CountClosedWorkflowExecutionsRequest& request, const CountClosedWorkflowExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SWFClientCountClosedWorkflowExecutionsAsyncHelper( this, request, handler, context ); } );
}

CountOpenWorkflowExecutionsOutcome SWFClient::CountOpenWorkflowExecutions(const CountOpenWorkflowExecutionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CountOpenWorkflowExecutionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CountOpenWorkflowExecutionsOutcomeCallable SWFClient::CountOpenWorkflowExecutionsCallable(const CountOpenWorkflowExecutionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CountOpenWorkflowExecutionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CountOpenWorkflowExecutions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClientCountOpenWorkflowExecutionsAsyncHelper(SWFClient const * const clientThis, const CountOpenWorkflowExecutionsRequest& request, const CountOpenWorkflowExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CountOpenWorkflowExecutions(request), context);
}

void SWFClient::CountOpenWorkflowExecutionsAsync(const CountOpenWorkflowExecutionsRequest& request, const CountOpenWorkflowExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SWFClientCountOpenWorkflowExecutionsAsyncHelper( this, request, handler, context ); } );
}

CountPendingActivityTasksOutcome SWFClient::CountPendingActivityTasks(const CountPendingActivityTasksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CountPendingActivityTasksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CountPendingActivityTasksOutcomeCallable SWFClient::CountPendingActivityTasksCallable(const CountPendingActivityTasksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CountPendingActivityTasksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CountPendingActivityTasks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClientCountPendingActivityTasksAsyncHelper(SWFClient const * const clientThis, const CountPendingActivityTasksRequest& request, const CountPendingActivityTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CountPendingActivityTasks(request), context);
}

void SWFClient::CountPendingActivityTasksAsync(const CountPendingActivityTasksRequest& request, const CountPendingActivityTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SWFClientCountPendingActivityTasksAsyncHelper( this, request, handler, context ); } );
}

CountPendingDecisionTasksOutcome SWFClient::CountPendingDecisionTasks(const CountPendingDecisionTasksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CountPendingDecisionTasksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CountPendingDecisionTasksOutcomeCallable SWFClient::CountPendingDecisionTasksCallable(const CountPendingDecisionTasksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CountPendingDecisionTasksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CountPendingDecisionTasks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClientCountPendingDecisionTasksAsyncHelper(SWFClient const * const clientThis, const CountPendingDecisionTasksRequest& request, const CountPendingDecisionTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CountPendingDecisionTasks(request), context);
}

void SWFClient::CountPendingDecisionTasksAsync(const CountPendingDecisionTasksRequest& request, const CountPendingDecisionTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SWFClientCountPendingDecisionTasksAsyncHelper( this, request, handler, context ); } );
}

DeprecateActivityTypeOutcome SWFClient::DeprecateActivityType(const DeprecateActivityTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeprecateActivityTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeprecateActivityTypeOutcomeCallable SWFClient::DeprecateActivityTypeCallable(const DeprecateActivityTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeprecateActivityTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeprecateActivityType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClientDeprecateActivityTypeAsyncHelper(SWFClient const * const clientThis, const DeprecateActivityTypeRequest& request, const DeprecateActivityTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeprecateActivityType(request), context);
}

void SWFClient::DeprecateActivityTypeAsync(const DeprecateActivityTypeRequest& request, const DeprecateActivityTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SWFClientDeprecateActivityTypeAsyncHelper( this, request, handler, context ); } );
}

DeprecateDomainOutcome SWFClient::DeprecateDomain(const DeprecateDomainRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeprecateDomainOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeprecateDomainOutcomeCallable SWFClient::DeprecateDomainCallable(const DeprecateDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeprecateDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeprecateDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClientDeprecateDomainAsyncHelper(SWFClient const * const clientThis, const DeprecateDomainRequest& request, const DeprecateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeprecateDomain(request), context);
}

void SWFClient::DeprecateDomainAsync(const DeprecateDomainRequest& request, const DeprecateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SWFClientDeprecateDomainAsyncHelper( this, request, handler, context ); } );
}

DeprecateWorkflowTypeOutcome SWFClient::DeprecateWorkflowType(const DeprecateWorkflowTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeprecateWorkflowTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeprecateWorkflowTypeOutcomeCallable SWFClient::DeprecateWorkflowTypeCallable(const DeprecateWorkflowTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeprecateWorkflowTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeprecateWorkflowType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClientDeprecateWorkflowTypeAsyncHelper(SWFClient const * const clientThis, const DeprecateWorkflowTypeRequest& request, const DeprecateWorkflowTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeprecateWorkflowType(request), context);
}

void SWFClient::DeprecateWorkflowTypeAsync(const DeprecateWorkflowTypeRequest& request, const DeprecateWorkflowTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SWFClientDeprecateWorkflowTypeAsyncHelper( this, request, handler, context ); } );
}

DescribeActivityTypeOutcome SWFClient::DescribeActivityType(const DescribeActivityTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeActivityTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeActivityTypeOutcomeCallable SWFClient::DescribeActivityTypeCallable(const DescribeActivityTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeActivityTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeActivityType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClientDescribeActivityTypeAsyncHelper(SWFClient const * const clientThis, const DescribeActivityTypeRequest& request, const DescribeActivityTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeActivityType(request), context);
}

void SWFClient::DescribeActivityTypeAsync(const DescribeActivityTypeRequest& request, const DescribeActivityTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SWFClientDescribeActivityTypeAsyncHelper( this, request, handler, context ); } );
}

DescribeDomainOutcome SWFClient::DescribeDomain(const DescribeDomainRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDomainOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDomainOutcomeCallable SWFClient::DescribeDomainCallable(const DescribeDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClientDescribeDomainAsyncHelper(SWFClient const * const clientThis, const DescribeDomainRequest& request, const DescribeDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDomain(request), context);
}

void SWFClient::DescribeDomainAsync(const DescribeDomainRequest& request, const DescribeDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SWFClientDescribeDomainAsyncHelper( this, request, handler, context ); } );
}

DescribeWorkflowExecutionOutcome SWFClient::DescribeWorkflowExecution(const DescribeWorkflowExecutionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeWorkflowExecutionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeWorkflowExecutionOutcomeCallable SWFClient::DescribeWorkflowExecutionCallable(const DescribeWorkflowExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeWorkflowExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeWorkflowExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClientDescribeWorkflowExecutionAsyncHelper(SWFClient const * const clientThis, const DescribeWorkflowExecutionRequest& request, const DescribeWorkflowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeWorkflowExecution(request), context);
}

void SWFClient::DescribeWorkflowExecutionAsync(const DescribeWorkflowExecutionRequest& request, const DescribeWorkflowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SWFClientDescribeWorkflowExecutionAsyncHelper( this, request, handler, context ); } );
}

DescribeWorkflowTypeOutcome SWFClient::DescribeWorkflowType(const DescribeWorkflowTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeWorkflowTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeWorkflowTypeOutcomeCallable SWFClient::DescribeWorkflowTypeCallable(const DescribeWorkflowTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeWorkflowTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeWorkflowType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClientDescribeWorkflowTypeAsyncHelper(SWFClient const * const clientThis, const DescribeWorkflowTypeRequest& request, const DescribeWorkflowTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeWorkflowType(request), context);
}

void SWFClient::DescribeWorkflowTypeAsync(const DescribeWorkflowTypeRequest& request, const DescribeWorkflowTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SWFClientDescribeWorkflowTypeAsyncHelper( this, request, handler, context ); } );
}

GetWorkflowExecutionHistoryOutcome SWFClient::GetWorkflowExecutionHistory(const GetWorkflowExecutionHistoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetWorkflowExecutionHistoryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetWorkflowExecutionHistoryOutcomeCallable SWFClient::GetWorkflowExecutionHistoryCallable(const GetWorkflowExecutionHistoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetWorkflowExecutionHistoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetWorkflowExecutionHistory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClientGetWorkflowExecutionHistoryAsyncHelper(SWFClient const * const clientThis, const GetWorkflowExecutionHistoryRequest& request, const GetWorkflowExecutionHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetWorkflowExecutionHistory(request), context);
}

void SWFClient::GetWorkflowExecutionHistoryAsync(const GetWorkflowExecutionHistoryRequest& request, const GetWorkflowExecutionHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SWFClientGetWorkflowExecutionHistoryAsyncHelper( this, request, handler, context ); } );
}

ListActivityTypesOutcome SWFClient::ListActivityTypes(const ListActivityTypesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListActivityTypesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListActivityTypesOutcomeCallable SWFClient::ListActivityTypesCallable(const ListActivityTypesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListActivityTypesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListActivityTypes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClientListActivityTypesAsyncHelper(SWFClient const * const clientThis, const ListActivityTypesRequest& request, const ListActivityTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListActivityTypes(request), context);
}

void SWFClient::ListActivityTypesAsync(const ListActivityTypesRequest& request, const ListActivityTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SWFClientListActivityTypesAsyncHelper( this, request, handler, context ); } );
}

ListClosedWorkflowExecutionsOutcome SWFClient::ListClosedWorkflowExecutions(const ListClosedWorkflowExecutionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListClosedWorkflowExecutionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListClosedWorkflowExecutionsOutcomeCallable SWFClient::ListClosedWorkflowExecutionsCallable(const ListClosedWorkflowExecutionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListClosedWorkflowExecutionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListClosedWorkflowExecutions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClientListClosedWorkflowExecutionsAsyncHelper(SWFClient const * const clientThis, const ListClosedWorkflowExecutionsRequest& request, const ListClosedWorkflowExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListClosedWorkflowExecutions(request), context);
}

void SWFClient::ListClosedWorkflowExecutionsAsync(const ListClosedWorkflowExecutionsRequest& request, const ListClosedWorkflowExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SWFClientListClosedWorkflowExecutionsAsyncHelper( this, request, handler, context ); } );
}

ListDomainsOutcome SWFClient::ListDomains(const ListDomainsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListDomainsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDomainsOutcomeCallable SWFClient::ListDomainsCallable(const ListDomainsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDomainsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDomains(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClientListDomainsAsyncHelper(SWFClient const * const clientThis, const ListDomainsRequest& request, const ListDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDomains(request), context);
}

void SWFClient::ListDomainsAsync(const ListDomainsRequest& request, const ListDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SWFClientListDomainsAsyncHelper( this, request, handler, context ); } );
}

ListOpenWorkflowExecutionsOutcome SWFClient::ListOpenWorkflowExecutions(const ListOpenWorkflowExecutionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListOpenWorkflowExecutionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListOpenWorkflowExecutionsOutcomeCallable SWFClient::ListOpenWorkflowExecutionsCallable(const ListOpenWorkflowExecutionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListOpenWorkflowExecutionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListOpenWorkflowExecutions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClientListOpenWorkflowExecutionsAsyncHelper(SWFClient const * const clientThis, const ListOpenWorkflowExecutionsRequest& request, const ListOpenWorkflowExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListOpenWorkflowExecutions(request), context);
}

void SWFClient::ListOpenWorkflowExecutionsAsync(const ListOpenWorkflowExecutionsRequest& request, const ListOpenWorkflowExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SWFClientListOpenWorkflowExecutionsAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome SWFClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable SWFClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClientListTagsForResourceAsyncHelper(SWFClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void SWFClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SWFClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

ListWorkflowTypesOutcome SWFClient::ListWorkflowTypes(const ListWorkflowTypesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListWorkflowTypesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListWorkflowTypesOutcomeCallable SWFClient::ListWorkflowTypesCallable(const ListWorkflowTypesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListWorkflowTypesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListWorkflowTypes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClientListWorkflowTypesAsyncHelper(SWFClient const * const clientThis, const ListWorkflowTypesRequest& request, const ListWorkflowTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListWorkflowTypes(request), context);
}

void SWFClient::ListWorkflowTypesAsync(const ListWorkflowTypesRequest& request, const ListWorkflowTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SWFClientListWorkflowTypesAsyncHelper( this, request, handler, context ); } );
}

PollForActivityTaskOutcome SWFClient::PollForActivityTask(const PollForActivityTaskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PollForActivityTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PollForActivityTaskOutcomeCallable SWFClient::PollForActivityTaskCallable(const PollForActivityTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PollForActivityTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PollForActivityTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClientPollForActivityTaskAsyncHelper(SWFClient const * const clientThis, const PollForActivityTaskRequest& request, const PollForActivityTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PollForActivityTask(request), context);
}

void SWFClient::PollForActivityTaskAsync(const PollForActivityTaskRequest& request, const PollForActivityTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SWFClientPollForActivityTaskAsyncHelper( this, request, handler, context ); } );
}

PollForDecisionTaskOutcome SWFClient::PollForDecisionTask(const PollForDecisionTaskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PollForDecisionTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PollForDecisionTaskOutcomeCallable SWFClient::PollForDecisionTaskCallable(const PollForDecisionTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PollForDecisionTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PollForDecisionTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClientPollForDecisionTaskAsyncHelper(SWFClient const * const clientThis, const PollForDecisionTaskRequest& request, const PollForDecisionTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PollForDecisionTask(request), context);
}

void SWFClient::PollForDecisionTaskAsync(const PollForDecisionTaskRequest& request, const PollForDecisionTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SWFClientPollForDecisionTaskAsyncHelper( this, request, handler, context ); } );
}

RecordActivityTaskHeartbeatOutcome SWFClient::RecordActivityTaskHeartbeat(const RecordActivityTaskHeartbeatRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RecordActivityTaskHeartbeatOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RecordActivityTaskHeartbeatOutcomeCallable SWFClient::RecordActivityTaskHeartbeatCallable(const RecordActivityTaskHeartbeatRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RecordActivityTaskHeartbeatOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RecordActivityTaskHeartbeat(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClientRecordActivityTaskHeartbeatAsyncHelper(SWFClient const * const clientThis, const RecordActivityTaskHeartbeatRequest& request, const RecordActivityTaskHeartbeatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RecordActivityTaskHeartbeat(request), context);
}

void SWFClient::RecordActivityTaskHeartbeatAsync(const RecordActivityTaskHeartbeatRequest& request, const RecordActivityTaskHeartbeatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SWFClientRecordActivityTaskHeartbeatAsyncHelper( this, request, handler, context ); } );
}

RegisterActivityTypeOutcome SWFClient::RegisterActivityType(const RegisterActivityTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RegisterActivityTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterActivityTypeOutcomeCallable SWFClient::RegisterActivityTypeCallable(const RegisterActivityTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterActivityTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterActivityType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClientRegisterActivityTypeAsyncHelper(SWFClient const * const clientThis, const RegisterActivityTypeRequest& request, const RegisterActivityTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RegisterActivityType(request), context);
}

void SWFClient::RegisterActivityTypeAsync(const RegisterActivityTypeRequest& request, const RegisterActivityTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SWFClientRegisterActivityTypeAsyncHelper( this, request, handler, context ); } );
}

RegisterDomainOutcome SWFClient::RegisterDomain(const RegisterDomainRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RegisterDomainOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterDomainOutcomeCallable SWFClient::RegisterDomainCallable(const RegisterDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClientRegisterDomainAsyncHelper(SWFClient const * const clientThis, const RegisterDomainRequest& request, const RegisterDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RegisterDomain(request), context);
}

void SWFClient::RegisterDomainAsync(const RegisterDomainRequest& request, const RegisterDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SWFClientRegisterDomainAsyncHelper( this, request, handler, context ); } );
}

RegisterWorkflowTypeOutcome SWFClient::RegisterWorkflowType(const RegisterWorkflowTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RegisterWorkflowTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterWorkflowTypeOutcomeCallable SWFClient::RegisterWorkflowTypeCallable(const RegisterWorkflowTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterWorkflowTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterWorkflowType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClientRegisterWorkflowTypeAsyncHelper(SWFClient const * const clientThis, const RegisterWorkflowTypeRequest& request, const RegisterWorkflowTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RegisterWorkflowType(request), context);
}

void SWFClient::RegisterWorkflowTypeAsync(const RegisterWorkflowTypeRequest& request, const RegisterWorkflowTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SWFClientRegisterWorkflowTypeAsyncHelper( this, request, handler, context ); } );
}

RequestCancelWorkflowExecutionOutcome SWFClient::RequestCancelWorkflowExecution(const RequestCancelWorkflowExecutionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RequestCancelWorkflowExecutionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RequestCancelWorkflowExecutionOutcomeCallable SWFClient::RequestCancelWorkflowExecutionCallable(const RequestCancelWorkflowExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RequestCancelWorkflowExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RequestCancelWorkflowExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClientRequestCancelWorkflowExecutionAsyncHelper(SWFClient const * const clientThis, const RequestCancelWorkflowExecutionRequest& request, const RequestCancelWorkflowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RequestCancelWorkflowExecution(request), context);
}

void SWFClient::RequestCancelWorkflowExecutionAsync(const RequestCancelWorkflowExecutionRequest& request, const RequestCancelWorkflowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SWFClientRequestCancelWorkflowExecutionAsyncHelper( this, request, handler, context ); } );
}

RespondActivityTaskCanceledOutcome SWFClient::RespondActivityTaskCanceled(const RespondActivityTaskCanceledRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RespondActivityTaskCanceledOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RespondActivityTaskCanceledOutcomeCallable SWFClient::RespondActivityTaskCanceledCallable(const RespondActivityTaskCanceledRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RespondActivityTaskCanceledOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RespondActivityTaskCanceled(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClientRespondActivityTaskCanceledAsyncHelper(SWFClient const * const clientThis, const RespondActivityTaskCanceledRequest& request, const RespondActivityTaskCanceledResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RespondActivityTaskCanceled(request), context);
}

void SWFClient::RespondActivityTaskCanceledAsync(const RespondActivityTaskCanceledRequest& request, const RespondActivityTaskCanceledResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SWFClientRespondActivityTaskCanceledAsyncHelper( this, request, handler, context ); } );
}

RespondActivityTaskCompletedOutcome SWFClient::RespondActivityTaskCompleted(const RespondActivityTaskCompletedRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RespondActivityTaskCompletedOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RespondActivityTaskCompletedOutcomeCallable SWFClient::RespondActivityTaskCompletedCallable(const RespondActivityTaskCompletedRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RespondActivityTaskCompletedOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RespondActivityTaskCompleted(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClientRespondActivityTaskCompletedAsyncHelper(SWFClient const * const clientThis, const RespondActivityTaskCompletedRequest& request, const RespondActivityTaskCompletedResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RespondActivityTaskCompleted(request), context);
}

void SWFClient::RespondActivityTaskCompletedAsync(const RespondActivityTaskCompletedRequest& request, const RespondActivityTaskCompletedResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SWFClientRespondActivityTaskCompletedAsyncHelper( this, request, handler, context ); } );
}

RespondActivityTaskFailedOutcome SWFClient::RespondActivityTaskFailed(const RespondActivityTaskFailedRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RespondActivityTaskFailedOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RespondActivityTaskFailedOutcomeCallable SWFClient::RespondActivityTaskFailedCallable(const RespondActivityTaskFailedRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RespondActivityTaskFailedOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RespondActivityTaskFailed(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClientRespondActivityTaskFailedAsyncHelper(SWFClient const * const clientThis, const RespondActivityTaskFailedRequest& request, const RespondActivityTaskFailedResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RespondActivityTaskFailed(request), context);
}

void SWFClient::RespondActivityTaskFailedAsync(const RespondActivityTaskFailedRequest& request, const RespondActivityTaskFailedResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SWFClientRespondActivityTaskFailedAsyncHelper( this, request, handler, context ); } );
}

RespondDecisionTaskCompletedOutcome SWFClient::RespondDecisionTaskCompleted(const RespondDecisionTaskCompletedRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RespondDecisionTaskCompletedOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RespondDecisionTaskCompletedOutcomeCallable SWFClient::RespondDecisionTaskCompletedCallable(const RespondDecisionTaskCompletedRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RespondDecisionTaskCompletedOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RespondDecisionTaskCompleted(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClientRespondDecisionTaskCompletedAsyncHelper(SWFClient const * const clientThis, const RespondDecisionTaskCompletedRequest& request, const RespondDecisionTaskCompletedResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RespondDecisionTaskCompleted(request), context);
}

void SWFClient::RespondDecisionTaskCompletedAsync(const RespondDecisionTaskCompletedRequest& request, const RespondDecisionTaskCompletedResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SWFClientRespondDecisionTaskCompletedAsyncHelper( this, request, handler, context ); } );
}

SignalWorkflowExecutionOutcome SWFClient::SignalWorkflowExecution(const SignalWorkflowExecutionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SignalWorkflowExecutionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SignalWorkflowExecutionOutcomeCallable SWFClient::SignalWorkflowExecutionCallable(const SignalWorkflowExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SignalWorkflowExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SignalWorkflowExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClientSignalWorkflowExecutionAsyncHelper(SWFClient const * const clientThis, const SignalWorkflowExecutionRequest& request, const SignalWorkflowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SignalWorkflowExecution(request), context);
}

void SWFClient::SignalWorkflowExecutionAsync(const SignalWorkflowExecutionRequest& request, const SignalWorkflowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SWFClientSignalWorkflowExecutionAsyncHelper( this, request, handler, context ); } );
}

StartWorkflowExecutionOutcome SWFClient::StartWorkflowExecution(const StartWorkflowExecutionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartWorkflowExecutionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartWorkflowExecutionOutcomeCallable SWFClient::StartWorkflowExecutionCallable(const StartWorkflowExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartWorkflowExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartWorkflowExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClientStartWorkflowExecutionAsyncHelper(SWFClient const * const clientThis, const StartWorkflowExecutionRequest& request, const StartWorkflowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartWorkflowExecution(request), context);
}

void SWFClient::StartWorkflowExecutionAsync(const StartWorkflowExecutionRequest& request, const StartWorkflowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SWFClientStartWorkflowExecutionAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome SWFClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable SWFClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClientTagResourceAsyncHelper(SWFClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void SWFClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SWFClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

TerminateWorkflowExecutionOutcome SWFClient::TerminateWorkflowExecution(const TerminateWorkflowExecutionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TerminateWorkflowExecutionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TerminateWorkflowExecutionOutcomeCallable SWFClient::TerminateWorkflowExecutionCallable(const TerminateWorkflowExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TerminateWorkflowExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TerminateWorkflowExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClientTerminateWorkflowExecutionAsyncHelper(SWFClient const * const clientThis, const TerminateWorkflowExecutionRequest& request, const TerminateWorkflowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TerminateWorkflowExecution(request), context);
}

void SWFClient::TerminateWorkflowExecutionAsync(const TerminateWorkflowExecutionRequest& request, const TerminateWorkflowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SWFClientTerminateWorkflowExecutionAsyncHelper( this, request, handler, context ); } );
}

UndeprecateActivityTypeOutcome SWFClient::UndeprecateActivityType(const UndeprecateActivityTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UndeprecateActivityTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UndeprecateActivityTypeOutcomeCallable SWFClient::UndeprecateActivityTypeCallable(const UndeprecateActivityTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UndeprecateActivityTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UndeprecateActivityType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClientUndeprecateActivityTypeAsyncHelper(SWFClient const * const clientThis, const UndeprecateActivityTypeRequest& request, const UndeprecateActivityTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UndeprecateActivityType(request), context);
}

void SWFClient::UndeprecateActivityTypeAsync(const UndeprecateActivityTypeRequest& request, const UndeprecateActivityTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SWFClientUndeprecateActivityTypeAsyncHelper( this, request, handler, context ); } );
}

UndeprecateDomainOutcome SWFClient::UndeprecateDomain(const UndeprecateDomainRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UndeprecateDomainOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UndeprecateDomainOutcomeCallable SWFClient::UndeprecateDomainCallable(const UndeprecateDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UndeprecateDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UndeprecateDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClientUndeprecateDomainAsyncHelper(SWFClient const * const clientThis, const UndeprecateDomainRequest& request, const UndeprecateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UndeprecateDomain(request), context);
}

void SWFClient::UndeprecateDomainAsync(const UndeprecateDomainRequest& request, const UndeprecateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SWFClientUndeprecateDomainAsyncHelper( this, request, handler, context ); } );
}

UndeprecateWorkflowTypeOutcome SWFClient::UndeprecateWorkflowType(const UndeprecateWorkflowTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UndeprecateWorkflowTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UndeprecateWorkflowTypeOutcomeCallable SWFClient::UndeprecateWorkflowTypeCallable(const UndeprecateWorkflowTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UndeprecateWorkflowTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UndeprecateWorkflowType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClientUndeprecateWorkflowTypeAsyncHelper(SWFClient const * const clientThis, const UndeprecateWorkflowTypeRequest& request, const UndeprecateWorkflowTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UndeprecateWorkflowType(request), context);
}

void SWFClient::UndeprecateWorkflowTypeAsync(const UndeprecateWorkflowTypeRequest& request, const UndeprecateWorkflowTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SWFClientUndeprecateWorkflowTypeAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome SWFClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable SWFClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SWFClientUntagResourceAsyncHelper(SWFClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void SWFClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SWFClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

