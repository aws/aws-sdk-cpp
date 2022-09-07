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

#include <aws/dax/DAXClient.h>
#include <aws/dax/DAXEndpoint.h>
#include <aws/dax/DAXErrorMarshaller.h>
#include <aws/dax/model/CreateClusterRequest.h>
#include <aws/dax/model/CreateParameterGroupRequest.h>
#include <aws/dax/model/CreateSubnetGroupRequest.h>
#include <aws/dax/model/DecreaseReplicationFactorRequest.h>
#include <aws/dax/model/DeleteClusterRequest.h>
#include <aws/dax/model/DeleteParameterGroupRequest.h>
#include <aws/dax/model/DeleteSubnetGroupRequest.h>
#include <aws/dax/model/DescribeClustersRequest.h>
#include <aws/dax/model/DescribeDefaultParametersRequest.h>
#include <aws/dax/model/DescribeEventsRequest.h>
#include <aws/dax/model/DescribeParameterGroupsRequest.h>
#include <aws/dax/model/DescribeParametersRequest.h>
#include <aws/dax/model/DescribeSubnetGroupsRequest.h>
#include <aws/dax/model/IncreaseReplicationFactorRequest.h>
#include <aws/dax/model/ListTagsRequest.h>
#include <aws/dax/model/RebootNodeRequest.h>
#include <aws/dax/model/TagResourceRequest.h>
#include <aws/dax/model/UntagResourceRequest.h>
#include <aws/dax/model/UpdateClusterRequest.h>
#include <aws/dax/model/UpdateParameterGroupRequest.h>
#include <aws/dax/model/UpdateSubnetGroupRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::DAX;
using namespace Aws::DAX::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "dax";
static const char* ALLOCATION_TAG = "DAXClient";

DAXClient::DAXClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DAXErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DAXClient::DAXClient(const AWSCredentials& credentials,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DAXErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DAXClient::DAXClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DAXErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DAXClient::~DAXClient()
{
}

void DAXClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("DAX");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + DAXEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void DAXClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateClusterOutcome DAXClient::CreateCluster(const CreateClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateClusterOutcomeCallable DAXClient::CreateClusterCallable(const CreateClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DAXClientCreateClusterAsyncHelper(DAXClient const * const clientThis, const CreateClusterRequest& request, const CreateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateCluster(request), context);
}

void DAXClient::CreateClusterAsync(const CreateClusterRequest& request, const CreateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DAXClientCreateClusterAsyncHelper( this, request, handler, context ); } );
}

CreateParameterGroupOutcome DAXClient::CreateParameterGroup(const CreateParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateParameterGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateParameterGroupOutcomeCallable DAXClient::CreateParameterGroupCallable(const CreateParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DAXClientCreateParameterGroupAsyncHelper(DAXClient const * const clientThis, const CreateParameterGroupRequest& request, const CreateParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateParameterGroup(request), context);
}

void DAXClient::CreateParameterGroupAsync(const CreateParameterGroupRequest& request, const CreateParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DAXClientCreateParameterGroupAsyncHelper( this, request, handler, context ); } );
}

CreateSubnetGroupOutcome DAXClient::CreateSubnetGroup(const CreateSubnetGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateSubnetGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSubnetGroupOutcomeCallable DAXClient::CreateSubnetGroupCallable(const CreateSubnetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSubnetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSubnetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DAXClientCreateSubnetGroupAsyncHelper(DAXClient const * const clientThis, const CreateSubnetGroupRequest& request, const CreateSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateSubnetGroup(request), context);
}

void DAXClient::CreateSubnetGroupAsync(const CreateSubnetGroupRequest& request, const CreateSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DAXClientCreateSubnetGroupAsyncHelper( this, request, handler, context ); } );
}

DecreaseReplicationFactorOutcome DAXClient::DecreaseReplicationFactor(const DecreaseReplicationFactorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DecreaseReplicationFactorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DecreaseReplicationFactorOutcomeCallable DAXClient::DecreaseReplicationFactorCallable(const DecreaseReplicationFactorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DecreaseReplicationFactorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DecreaseReplicationFactor(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DAXClientDecreaseReplicationFactorAsyncHelper(DAXClient const * const clientThis, const DecreaseReplicationFactorRequest& request, const DecreaseReplicationFactorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DecreaseReplicationFactor(request), context);
}

void DAXClient::DecreaseReplicationFactorAsync(const DecreaseReplicationFactorRequest& request, const DecreaseReplicationFactorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DAXClientDecreaseReplicationFactorAsyncHelper( this, request, handler, context ); } );
}

DeleteClusterOutcome DAXClient::DeleteCluster(const DeleteClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteClusterOutcomeCallable DAXClient::DeleteClusterCallable(const DeleteClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DAXClientDeleteClusterAsyncHelper(DAXClient const * const clientThis, const DeleteClusterRequest& request, const DeleteClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteCluster(request), context);
}

void DAXClient::DeleteClusterAsync(const DeleteClusterRequest& request, const DeleteClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DAXClientDeleteClusterAsyncHelper( this, request, handler, context ); } );
}

DeleteParameterGroupOutcome DAXClient::DeleteParameterGroup(const DeleteParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteParameterGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteParameterGroupOutcomeCallable DAXClient::DeleteParameterGroupCallable(const DeleteParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DAXClientDeleteParameterGroupAsyncHelper(DAXClient const * const clientThis, const DeleteParameterGroupRequest& request, const DeleteParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteParameterGroup(request), context);
}

void DAXClient::DeleteParameterGroupAsync(const DeleteParameterGroupRequest& request, const DeleteParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DAXClientDeleteParameterGroupAsyncHelper( this, request, handler, context ); } );
}

DeleteSubnetGroupOutcome DAXClient::DeleteSubnetGroup(const DeleteSubnetGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteSubnetGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteSubnetGroupOutcomeCallable DAXClient::DeleteSubnetGroupCallable(const DeleteSubnetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSubnetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSubnetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DAXClientDeleteSubnetGroupAsyncHelper(DAXClient const * const clientThis, const DeleteSubnetGroupRequest& request, const DeleteSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteSubnetGroup(request), context);
}

void DAXClient::DeleteSubnetGroupAsync(const DeleteSubnetGroupRequest& request, const DeleteSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DAXClientDeleteSubnetGroupAsyncHelper( this, request, handler, context ); } );
}

DescribeClustersOutcome DAXClient::DescribeClusters(const DescribeClustersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeClustersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeClustersOutcomeCallable DAXClient::DescribeClustersCallable(const DescribeClustersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeClustersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeClusters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DAXClientDescribeClustersAsyncHelper(DAXClient const * const clientThis, const DescribeClustersRequest& request, const DescribeClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeClusters(request), context);
}

void DAXClient::DescribeClustersAsync(const DescribeClustersRequest& request, const DescribeClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DAXClientDescribeClustersAsyncHelper( this, request, handler, context ); } );
}

DescribeDefaultParametersOutcome DAXClient::DescribeDefaultParameters(const DescribeDefaultParametersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDefaultParametersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDefaultParametersOutcomeCallable DAXClient::DescribeDefaultParametersCallable(const DescribeDefaultParametersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDefaultParametersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDefaultParameters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DAXClientDescribeDefaultParametersAsyncHelper(DAXClient const * const clientThis, const DescribeDefaultParametersRequest& request, const DescribeDefaultParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDefaultParameters(request), context);
}

void DAXClient::DescribeDefaultParametersAsync(const DescribeDefaultParametersRequest& request, const DescribeDefaultParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DAXClientDescribeDefaultParametersAsyncHelper( this, request, handler, context ); } );
}

DescribeEventsOutcome DAXClient::DescribeEvents(const DescribeEventsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEventsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEventsOutcomeCallable DAXClient::DescribeEventsCallable(const DescribeEventsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEventsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEvents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DAXClientDescribeEventsAsyncHelper(DAXClient const * const clientThis, const DescribeEventsRequest& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeEvents(request), context);
}

void DAXClient::DescribeEventsAsync(const DescribeEventsRequest& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DAXClientDescribeEventsAsyncHelper( this, request, handler, context ); } );
}

DescribeParameterGroupsOutcome DAXClient::DescribeParameterGroups(const DescribeParameterGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeParameterGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeParameterGroupsOutcomeCallable DAXClient::DescribeParameterGroupsCallable(const DescribeParameterGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeParameterGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeParameterGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DAXClientDescribeParameterGroupsAsyncHelper(DAXClient const * const clientThis, const DescribeParameterGroupsRequest& request, const DescribeParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeParameterGroups(request), context);
}

void DAXClient::DescribeParameterGroupsAsync(const DescribeParameterGroupsRequest& request, const DescribeParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DAXClientDescribeParameterGroupsAsyncHelper( this, request, handler, context ); } );
}

DescribeParametersOutcome DAXClient::DescribeParameters(const DescribeParametersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeParametersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeParametersOutcomeCallable DAXClient::DescribeParametersCallable(const DescribeParametersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeParametersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeParameters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DAXClientDescribeParametersAsyncHelper(DAXClient const * const clientThis, const DescribeParametersRequest& request, const DescribeParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeParameters(request), context);
}

void DAXClient::DescribeParametersAsync(const DescribeParametersRequest& request, const DescribeParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DAXClientDescribeParametersAsyncHelper( this, request, handler, context ); } );
}

DescribeSubnetGroupsOutcome DAXClient::DescribeSubnetGroups(const DescribeSubnetGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeSubnetGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeSubnetGroupsOutcomeCallable DAXClient::DescribeSubnetGroupsCallable(const DescribeSubnetGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSubnetGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSubnetGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DAXClientDescribeSubnetGroupsAsyncHelper(DAXClient const * const clientThis, const DescribeSubnetGroupsRequest& request, const DescribeSubnetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeSubnetGroups(request), context);
}

void DAXClient::DescribeSubnetGroupsAsync(const DescribeSubnetGroupsRequest& request, const DescribeSubnetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DAXClientDescribeSubnetGroupsAsyncHelper( this, request, handler, context ); } );
}

IncreaseReplicationFactorOutcome DAXClient::IncreaseReplicationFactor(const IncreaseReplicationFactorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return IncreaseReplicationFactorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

IncreaseReplicationFactorOutcomeCallable DAXClient::IncreaseReplicationFactorCallable(const IncreaseReplicationFactorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< IncreaseReplicationFactorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->IncreaseReplicationFactor(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DAXClientIncreaseReplicationFactorAsyncHelper(DAXClient const * const clientThis, const IncreaseReplicationFactorRequest& request, const IncreaseReplicationFactorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->IncreaseReplicationFactor(request), context);
}

void DAXClient::IncreaseReplicationFactorAsync(const IncreaseReplicationFactorRequest& request, const IncreaseReplicationFactorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DAXClientIncreaseReplicationFactorAsyncHelper( this, request, handler, context ); } );
}

ListTagsOutcome DAXClient::ListTags(const ListTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsOutcomeCallable DAXClient::ListTagsCallable(const ListTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DAXClientListTagsAsyncHelper(DAXClient const * const clientThis, const ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTags(request), context);
}

void DAXClient::ListTagsAsync(const ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DAXClientListTagsAsyncHelper( this, request, handler, context ); } );
}

RebootNodeOutcome DAXClient::RebootNode(const RebootNodeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RebootNodeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RebootNodeOutcomeCallable DAXClient::RebootNodeCallable(const RebootNodeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RebootNodeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RebootNode(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DAXClientRebootNodeAsyncHelper(DAXClient const * const clientThis, const RebootNodeRequest& request, const RebootNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RebootNode(request), context);
}

void DAXClient::RebootNodeAsync(const RebootNodeRequest& request, const RebootNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DAXClientRebootNodeAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome DAXClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable DAXClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DAXClientTagResourceAsyncHelper(DAXClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void DAXClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DAXClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome DAXClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable DAXClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DAXClientUntagResourceAsyncHelper(DAXClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void DAXClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DAXClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateClusterOutcome DAXClient::UpdateCluster(const UpdateClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateClusterOutcomeCallable DAXClient::UpdateClusterCallable(const UpdateClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DAXClientUpdateClusterAsyncHelper(DAXClient const * const clientThis, const UpdateClusterRequest& request, const UpdateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateCluster(request), context);
}

void DAXClient::UpdateClusterAsync(const UpdateClusterRequest& request, const UpdateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DAXClientUpdateClusterAsyncHelper( this, request, handler, context ); } );
}

UpdateParameterGroupOutcome DAXClient::UpdateParameterGroup(const UpdateParameterGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateParameterGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateParameterGroupOutcomeCallable DAXClient::UpdateParameterGroupCallable(const UpdateParameterGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateParameterGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateParameterGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DAXClientUpdateParameterGroupAsyncHelper(DAXClient const * const clientThis, const UpdateParameterGroupRequest& request, const UpdateParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateParameterGroup(request), context);
}

void DAXClient::UpdateParameterGroupAsync(const UpdateParameterGroupRequest& request, const UpdateParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DAXClientUpdateParameterGroupAsyncHelper( this, request, handler, context ); } );
}

UpdateSubnetGroupOutcome DAXClient::UpdateSubnetGroup(const UpdateSubnetGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateSubnetGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateSubnetGroupOutcomeCallable DAXClient::UpdateSubnetGroupCallable(const UpdateSubnetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSubnetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSubnetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DAXClientUpdateSubnetGroupAsyncHelper(DAXClient const * const clientThis, const UpdateSubnetGroupRequest& request, const UpdateSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateSubnetGroup(request), context);
}

void DAXClient::UpdateSubnetGroupAsync(const UpdateSubnetGroupRequest& request, const UpdateSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DAXClientUpdateSubnetGroupAsyncHelper( this, request, handler, context ); } );
}

