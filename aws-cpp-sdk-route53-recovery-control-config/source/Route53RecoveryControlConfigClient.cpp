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

#include <aws/route53-recovery-control-config/Route53RecoveryControlConfigClient.h>
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfigEndpoint.h>
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfigErrorMarshaller.h>
#include <aws/route53-recovery-control-config/model/CreateClusterRequest.h>
#include <aws/route53-recovery-control-config/model/CreateControlPanelRequest.h>
#include <aws/route53-recovery-control-config/model/CreateRoutingControlRequest.h>
#include <aws/route53-recovery-control-config/model/CreateSafetyRuleRequest.h>
#include <aws/route53-recovery-control-config/model/DeleteClusterRequest.h>
#include <aws/route53-recovery-control-config/model/DeleteControlPanelRequest.h>
#include <aws/route53-recovery-control-config/model/DeleteRoutingControlRequest.h>
#include <aws/route53-recovery-control-config/model/DeleteSafetyRuleRequest.h>
#include <aws/route53-recovery-control-config/model/DescribeClusterRequest.h>
#include <aws/route53-recovery-control-config/model/DescribeControlPanelRequest.h>
#include <aws/route53-recovery-control-config/model/DescribeRoutingControlRequest.h>
#include <aws/route53-recovery-control-config/model/DescribeSafetyRuleRequest.h>
#include <aws/route53-recovery-control-config/model/ListAssociatedRoute53HealthChecksRequest.h>
#include <aws/route53-recovery-control-config/model/ListClustersRequest.h>
#include <aws/route53-recovery-control-config/model/ListControlPanelsRequest.h>
#include <aws/route53-recovery-control-config/model/ListRoutingControlsRequest.h>
#include <aws/route53-recovery-control-config/model/ListSafetyRulesRequest.h>
#include <aws/route53-recovery-control-config/model/ListTagsForResourceRequest.h>
#include <aws/route53-recovery-control-config/model/TagResourceRequest.h>
#include <aws/route53-recovery-control-config/model/UntagResourceRequest.h>
#include <aws/route53-recovery-control-config/model/UpdateControlPanelRequest.h>
#include <aws/route53-recovery-control-config/model/UpdateRoutingControlRequest.h>
#include <aws/route53-recovery-control-config/model/UpdateSafetyRuleRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Route53RecoveryControlConfig;
using namespace Aws::Route53RecoveryControlConfig::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

const char* Route53RecoveryControlConfigClient::SERVICE_NAME = "route53-recovery-control-config";
const char* Route53RecoveryControlConfigClient::ALLOCATION_TAG = "Route53RecoveryControlConfigClient";

Route53RecoveryControlConfigClient::Route53RecoveryControlConfigClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<Route53RecoveryControlConfigErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

Route53RecoveryControlConfigClient::Route53RecoveryControlConfigClient(const AWSCredentials& credentials,
                                                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<Route53RecoveryControlConfigErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

Route53RecoveryControlConfigClient::Route53RecoveryControlConfigClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<Route53RecoveryControlConfigErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

Route53RecoveryControlConfigClient::~Route53RecoveryControlConfigClient()
{
}

void Route53RecoveryControlConfigClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Route53 Recovery Control Config");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + Route53RecoveryControlConfigEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void Route53RecoveryControlConfigClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateClusterOutcome Route53RecoveryControlConfigClient::CreateCluster(const CreateClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/cluster");
  return CreateClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateClusterOutcomeCallable Route53RecoveryControlConfigClient::CreateClusterCallable(const CreateClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryControlConfigClient::CreateClusterAsync(const CreateClusterRequest& request, const CreateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateCluster(request), context);
    } );
}

CreateControlPanelOutcome Route53RecoveryControlConfigClient::CreateControlPanel(const CreateControlPanelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/controlpanel");
  return CreateControlPanelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateControlPanelOutcomeCallable Route53RecoveryControlConfigClient::CreateControlPanelCallable(const CreateControlPanelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateControlPanelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateControlPanel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryControlConfigClient::CreateControlPanelAsync(const CreateControlPanelRequest& request, const CreateControlPanelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateControlPanel(request), context);
    } );
}

CreateRoutingControlOutcome Route53RecoveryControlConfigClient::CreateRoutingControl(const CreateRoutingControlRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/routingcontrol");
  return CreateRoutingControlOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRoutingControlOutcomeCallable Route53RecoveryControlConfigClient::CreateRoutingControlCallable(const CreateRoutingControlRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRoutingControlOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRoutingControl(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryControlConfigClient::CreateRoutingControlAsync(const CreateRoutingControlRequest& request, const CreateRoutingControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateRoutingControl(request), context);
    } );
}

CreateSafetyRuleOutcome Route53RecoveryControlConfigClient::CreateSafetyRule(const CreateSafetyRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/safetyrule");
  return CreateSafetyRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSafetyRuleOutcomeCallable Route53RecoveryControlConfigClient::CreateSafetyRuleCallable(const CreateSafetyRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSafetyRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSafetyRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryControlConfigClient::CreateSafetyRuleAsync(const CreateSafetyRuleRequest& request, const CreateSafetyRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateSafetyRule(request), context);
    } );
}

DeleteClusterOutcome Route53RecoveryControlConfigClient::DeleteCluster(const DeleteClusterRequest& request) const
{
  if (!request.ClusterArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteCluster", "Required field: ClusterArn, is not set");
    return DeleteClusterOutcome(Aws::Client::AWSError<Route53RecoveryControlConfigErrors>(Route53RecoveryControlConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/cluster/");
  uri.AddPathSegment(request.GetClusterArn());
  return DeleteClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteClusterOutcomeCallable Route53RecoveryControlConfigClient::DeleteClusterCallable(const DeleteClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryControlConfigClient::DeleteClusterAsync(const DeleteClusterRequest& request, const DeleteClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteCluster(request), context);
    } );
}

DeleteControlPanelOutcome Route53RecoveryControlConfigClient::DeleteControlPanel(const DeleteControlPanelRequest& request) const
{
  if (!request.ControlPanelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteControlPanel", "Required field: ControlPanelArn, is not set");
    return DeleteControlPanelOutcome(Aws::Client::AWSError<Route53RecoveryControlConfigErrors>(Route53RecoveryControlConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ControlPanelArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/controlpanel/");
  uri.AddPathSegment(request.GetControlPanelArn());
  return DeleteControlPanelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteControlPanelOutcomeCallable Route53RecoveryControlConfigClient::DeleteControlPanelCallable(const DeleteControlPanelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteControlPanelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteControlPanel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryControlConfigClient::DeleteControlPanelAsync(const DeleteControlPanelRequest& request, const DeleteControlPanelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteControlPanel(request), context);
    } );
}

DeleteRoutingControlOutcome Route53RecoveryControlConfigClient::DeleteRoutingControl(const DeleteRoutingControlRequest& request) const
{
  if (!request.RoutingControlArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRoutingControl", "Required field: RoutingControlArn, is not set");
    return DeleteRoutingControlOutcome(Aws::Client::AWSError<Route53RecoveryControlConfigErrors>(Route53RecoveryControlConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RoutingControlArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/routingcontrol/");
  uri.AddPathSegment(request.GetRoutingControlArn());
  return DeleteRoutingControlOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteRoutingControlOutcomeCallable Route53RecoveryControlConfigClient::DeleteRoutingControlCallable(const DeleteRoutingControlRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRoutingControlOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRoutingControl(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryControlConfigClient::DeleteRoutingControlAsync(const DeleteRoutingControlRequest& request, const DeleteRoutingControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteRoutingControl(request), context);
    } );
}

DeleteSafetyRuleOutcome Route53RecoveryControlConfigClient::DeleteSafetyRule(const DeleteSafetyRuleRequest& request) const
{
  if (!request.SafetyRuleArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSafetyRule", "Required field: SafetyRuleArn, is not set");
    return DeleteSafetyRuleOutcome(Aws::Client::AWSError<Route53RecoveryControlConfigErrors>(Route53RecoveryControlConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SafetyRuleArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/safetyrule/");
  uri.AddPathSegment(request.GetSafetyRuleArn());
  return DeleteSafetyRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteSafetyRuleOutcomeCallable Route53RecoveryControlConfigClient::DeleteSafetyRuleCallable(const DeleteSafetyRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSafetyRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSafetyRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryControlConfigClient::DeleteSafetyRuleAsync(const DeleteSafetyRuleRequest& request, const DeleteSafetyRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteSafetyRule(request), context);
    } );
}

DescribeClusterOutcome Route53RecoveryControlConfigClient::DescribeCluster(const DescribeClusterRequest& request) const
{
  if (!request.ClusterArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeCluster", "Required field: ClusterArn, is not set");
    return DescribeClusterOutcome(Aws::Client::AWSError<Route53RecoveryControlConfigErrors>(Route53RecoveryControlConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/cluster/");
  uri.AddPathSegment(request.GetClusterArn());
  return DescribeClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeClusterOutcomeCallable Route53RecoveryControlConfigClient::DescribeClusterCallable(const DescribeClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryControlConfigClient::DescribeClusterAsync(const DescribeClusterRequest& request, const DescribeClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeCluster(request), context);
    } );
}

DescribeControlPanelOutcome Route53RecoveryControlConfigClient::DescribeControlPanel(const DescribeControlPanelRequest& request) const
{
  if (!request.ControlPanelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeControlPanel", "Required field: ControlPanelArn, is not set");
    return DescribeControlPanelOutcome(Aws::Client::AWSError<Route53RecoveryControlConfigErrors>(Route53RecoveryControlConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ControlPanelArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/controlpanel/");
  uri.AddPathSegment(request.GetControlPanelArn());
  return DescribeControlPanelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeControlPanelOutcomeCallable Route53RecoveryControlConfigClient::DescribeControlPanelCallable(const DescribeControlPanelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeControlPanelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeControlPanel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryControlConfigClient::DescribeControlPanelAsync(const DescribeControlPanelRequest& request, const DescribeControlPanelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeControlPanel(request), context);
    } );
}

DescribeRoutingControlOutcome Route53RecoveryControlConfigClient::DescribeRoutingControl(const DescribeRoutingControlRequest& request) const
{
  if (!request.RoutingControlArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeRoutingControl", "Required field: RoutingControlArn, is not set");
    return DescribeRoutingControlOutcome(Aws::Client::AWSError<Route53RecoveryControlConfigErrors>(Route53RecoveryControlConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RoutingControlArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/routingcontrol/");
  uri.AddPathSegment(request.GetRoutingControlArn());
  return DescribeRoutingControlOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeRoutingControlOutcomeCallable Route53RecoveryControlConfigClient::DescribeRoutingControlCallable(const DescribeRoutingControlRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRoutingControlOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRoutingControl(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryControlConfigClient::DescribeRoutingControlAsync(const DescribeRoutingControlRequest& request, const DescribeRoutingControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeRoutingControl(request), context);
    } );
}

DescribeSafetyRuleOutcome Route53RecoveryControlConfigClient::DescribeSafetyRule(const DescribeSafetyRuleRequest& request) const
{
  if (!request.SafetyRuleArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeSafetyRule", "Required field: SafetyRuleArn, is not set");
    return DescribeSafetyRuleOutcome(Aws::Client::AWSError<Route53RecoveryControlConfigErrors>(Route53RecoveryControlConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SafetyRuleArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/safetyrule/");
  uri.AddPathSegment(request.GetSafetyRuleArn());
  return DescribeSafetyRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeSafetyRuleOutcomeCallable Route53RecoveryControlConfigClient::DescribeSafetyRuleCallable(const DescribeSafetyRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSafetyRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSafetyRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryControlConfigClient::DescribeSafetyRuleAsync(const DescribeSafetyRuleRequest& request, const DescribeSafetyRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeSafetyRule(request), context);
    } );
}

ListAssociatedRoute53HealthChecksOutcome Route53RecoveryControlConfigClient::ListAssociatedRoute53HealthChecks(const ListAssociatedRoute53HealthChecksRequest& request) const
{
  if (!request.RoutingControlArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAssociatedRoute53HealthChecks", "Required field: RoutingControlArn, is not set");
    return ListAssociatedRoute53HealthChecksOutcome(Aws::Client::AWSError<Route53RecoveryControlConfigErrors>(Route53RecoveryControlConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RoutingControlArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/routingcontrol/");
  uri.AddPathSegment(request.GetRoutingControlArn());
  uri.AddPathSegments("/associatedRoute53HealthChecks");
  return ListAssociatedRoute53HealthChecksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAssociatedRoute53HealthChecksOutcomeCallable Route53RecoveryControlConfigClient::ListAssociatedRoute53HealthChecksCallable(const ListAssociatedRoute53HealthChecksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAssociatedRoute53HealthChecksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAssociatedRoute53HealthChecks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryControlConfigClient::ListAssociatedRoute53HealthChecksAsync(const ListAssociatedRoute53HealthChecksRequest& request, const ListAssociatedRoute53HealthChecksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAssociatedRoute53HealthChecks(request), context);
    } );
}

ListClustersOutcome Route53RecoveryControlConfigClient::ListClusters(const ListClustersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/cluster");
  return ListClustersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListClustersOutcomeCallable Route53RecoveryControlConfigClient::ListClustersCallable(const ListClustersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListClustersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListClusters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryControlConfigClient::ListClustersAsync(const ListClustersRequest& request, const ListClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListClusters(request), context);
    } );
}

ListControlPanelsOutcome Route53RecoveryControlConfigClient::ListControlPanels(const ListControlPanelsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/controlpanels");
  return ListControlPanelsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListControlPanelsOutcomeCallable Route53RecoveryControlConfigClient::ListControlPanelsCallable(const ListControlPanelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListControlPanelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListControlPanels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryControlConfigClient::ListControlPanelsAsync(const ListControlPanelsRequest& request, const ListControlPanelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListControlPanels(request), context);
    } );
}

ListRoutingControlsOutcome Route53RecoveryControlConfigClient::ListRoutingControls(const ListRoutingControlsRequest& request) const
{
  if (!request.ControlPanelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRoutingControls", "Required field: ControlPanelArn, is not set");
    return ListRoutingControlsOutcome(Aws::Client::AWSError<Route53RecoveryControlConfigErrors>(Route53RecoveryControlConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ControlPanelArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/controlpanel/");
  uri.AddPathSegment(request.GetControlPanelArn());
  uri.AddPathSegments("/routingcontrols");
  return ListRoutingControlsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListRoutingControlsOutcomeCallable Route53RecoveryControlConfigClient::ListRoutingControlsCallable(const ListRoutingControlsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRoutingControlsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRoutingControls(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryControlConfigClient::ListRoutingControlsAsync(const ListRoutingControlsRequest& request, const ListRoutingControlsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListRoutingControls(request), context);
    } );
}

ListSafetyRulesOutcome Route53RecoveryControlConfigClient::ListSafetyRules(const ListSafetyRulesRequest& request) const
{
  if (!request.ControlPanelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSafetyRules", "Required field: ControlPanelArn, is not set");
    return ListSafetyRulesOutcome(Aws::Client::AWSError<Route53RecoveryControlConfigErrors>(Route53RecoveryControlConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ControlPanelArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/controlpanel/");
  uri.AddPathSegment(request.GetControlPanelArn());
  uri.AddPathSegments("/safetyrules");
  return ListSafetyRulesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListSafetyRulesOutcomeCallable Route53RecoveryControlConfigClient::ListSafetyRulesCallable(const ListSafetyRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSafetyRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSafetyRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryControlConfigClient::ListSafetyRulesAsync(const ListSafetyRulesRequest& request, const ListSafetyRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListSafetyRules(request), context);
    } );
}

ListTagsForResourceOutcome Route53RecoveryControlConfigClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<Route53RecoveryControlConfigErrors>(Route53RecoveryControlConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable Route53RecoveryControlConfigClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryControlConfigClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

TagResourceOutcome Route53RecoveryControlConfigClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<Route53RecoveryControlConfigErrors>(Route53RecoveryControlConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable Route53RecoveryControlConfigClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryControlConfigClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome Route53RecoveryControlConfigClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<Route53RecoveryControlConfigErrors>(Route53RecoveryControlConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<Route53RecoveryControlConfigErrors>(Route53RecoveryControlConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable Route53RecoveryControlConfigClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryControlConfigClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateControlPanelOutcome Route53RecoveryControlConfigClient::UpdateControlPanel(const UpdateControlPanelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/controlpanel");
  return UpdateControlPanelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateControlPanelOutcomeCallable Route53RecoveryControlConfigClient::UpdateControlPanelCallable(const UpdateControlPanelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateControlPanelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateControlPanel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryControlConfigClient::UpdateControlPanelAsync(const UpdateControlPanelRequest& request, const UpdateControlPanelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateControlPanel(request), context);
    } );
}

UpdateRoutingControlOutcome Route53RecoveryControlConfigClient::UpdateRoutingControl(const UpdateRoutingControlRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/routingcontrol");
  return UpdateRoutingControlOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateRoutingControlOutcomeCallable Route53RecoveryControlConfigClient::UpdateRoutingControlCallable(const UpdateRoutingControlRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRoutingControlOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRoutingControl(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryControlConfigClient::UpdateRoutingControlAsync(const UpdateRoutingControlRequest& request, const UpdateRoutingControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateRoutingControl(request), context);
    } );
}

UpdateSafetyRuleOutcome Route53RecoveryControlConfigClient::UpdateSafetyRule(const UpdateSafetyRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/safetyrule");
  return UpdateSafetyRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateSafetyRuleOutcomeCallable Route53RecoveryControlConfigClient::UpdateSafetyRuleCallable(const UpdateSafetyRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSafetyRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSafetyRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryControlConfigClient::UpdateSafetyRuleAsync(const UpdateSafetyRuleRequest& request, const UpdateSafetyRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateSafetyRule(request), context);
    } );
}

