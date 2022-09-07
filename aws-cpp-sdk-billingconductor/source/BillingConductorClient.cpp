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

#include <aws/billingconductor/BillingConductorClient.h>
#include <aws/billingconductor/BillingConductorEndpoint.h>
#include <aws/billingconductor/BillingConductorErrorMarshaller.h>
#include <aws/billingconductor/model/AssociateAccountsRequest.h>
#include <aws/billingconductor/model/AssociatePricingRulesRequest.h>
#include <aws/billingconductor/model/BatchAssociateResourcesToCustomLineItemRequest.h>
#include <aws/billingconductor/model/BatchDisassociateResourcesFromCustomLineItemRequest.h>
#include <aws/billingconductor/model/CreateBillingGroupRequest.h>
#include <aws/billingconductor/model/CreateCustomLineItemRequest.h>
#include <aws/billingconductor/model/CreatePricingPlanRequest.h>
#include <aws/billingconductor/model/CreatePricingRuleRequest.h>
#include <aws/billingconductor/model/DeleteBillingGroupRequest.h>
#include <aws/billingconductor/model/DeleteCustomLineItemRequest.h>
#include <aws/billingconductor/model/DeletePricingPlanRequest.h>
#include <aws/billingconductor/model/DeletePricingRuleRequest.h>
#include <aws/billingconductor/model/DisassociateAccountsRequest.h>
#include <aws/billingconductor/model/DisassociatePricingRulesRequest.h>
#include <aws/billingconductor/model/ListAccountAssociationsRequest.h>
#include <aws/billingconductor/model/ListBillingGroupCostReportsRequest.h>
#include <aws/billingconductor/model/ListBillingGroupsRequest.h>
#include <aws/billingconductor/model/ListCustomLineItemsRequest.h>
#include <aws/billingconductor/model/ListPricingPlansRequest.h>
#include <aws/billingconductor/model/ListPricingPlansAssociatedWithPricingRuleRequest.h>
#include <aws/billingconductor/model/ListPricingRulesRequest.h>
#include <aws/billingconductor/model/ListPricingRulesAssociatedToPricingPlanRequest.h>
#include <aws/billingconductor/model/ListResourcesAssociatedToCustomLineItemRequest.h>
#include <aws/billingconductor/model/ListTagsForResourceRequest.h>
#include <aws/billingconductor/model/TagResourceRequest.h>
#include <aws/billingconductor/model/UntagResourceRequest.h>
#include <aws/billingconductor/model/UpdateBillingGroupRequest.h>
#include <aws/billingconductor/model/UpdateCustomLineItemRequest.h>
#include <aws/billingconductor/model/UpdatePricingPlanRequest.h>
#include <aws/billingconductor/model/UpdatePricingRuleRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::BillingConductor;
using namespace Aws::BillingConductor::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "billingconductor";
static const char* ALLOCATION_TAG = "BillingConductorClient";

BillingConductorClient::BillingConductorClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<BillingConductorErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

BillingConductorClient::BillingConductorClient(const AWSCredentials& credentials,
                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<BillingConductorErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

BillingConductorClient::BillingConductorClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<BillingConductorErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

BillingConductorClient::~BillingConductorClient()
{
}

void BillingConductorClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("billingconductor");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + BillingConductorEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void BillingConductorClient::OverrideEndpoint(const Aws::String& endpoint)
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

AssociateAccountsOutcome BillingConductorClient::AssociateAccounts(const AssociateAccountsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/associate-accounts");
  return AssociateAccountsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateAccountsOutcomeCallable BillingConductorClient::AssociateAccountsCallable(const AssociateAccountsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateAccountsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateAccounts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BillingConductorClientAssociateAccountsAsyncHelper(BillingConductorClient const * const clientThis, const AssociateAccountsRequest& request, const AssociateAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateAccounts(request), context);
}

void BillingConductorClient::AssociateAccountsAsync(const AssociateAccountsRequest& request, const AssociateAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ BillingConductorClientAssociateAccountsAsyncHelper( this, request, handler, context ); } );
}

AssociatePricingRulesOutcome BillingConductorClient::AssociatePricingRules(const AssociatePricingRulesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/associate-pricing-rules");
  return AssociatePricingRulesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AssociatePricingRulesOutcomeCallable BillingConductorClient::AssociatePricingRulesCallable(const AssociatePricingRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociatePricingRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociatePricingRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BillingConductorClientAssociatePricingRulesAsyncHelper(BillingConductorClient const * const clientThis, const AssociatePricingRulesRequest& request, const AssociatePricingRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociatePricingRules(request), context);
}

void BillingConductorClient::AssociatePricingRulesAsync(const AssociatePricingRulesRequest& request, const AssociatePricingRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ BillingConductorClientAssociatePricingRulesAsyncHelper( this, request, handler, context ); } );
}

BatchAssociateResourcesToCustomLineItemOutcome BillingConductorClient::BatchAssociateResourcesToCustomLineItem(const BatchAssociateResourcesToCustomLineItemRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/batch-associate-resources-to-custom-line-item");
  return BatchAssociateResourcesToCustomLineItemOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

BatchAssociateResourcesToCustomLineItemOutcomeCallable BillingConductorClient::BatchAssociateResourcesToCustomLineItemCallable(const BatchAssociateResourcesToCustomLineItemRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchAssociateResourcesToCustomLineItemOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchAssociateResourcesToCustomLineItem(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BillingConductorClientBatchAssociateResourcesToCustomLineItemAsyncHelper(BillingConductorClient const * const clientThis, const BatchAssociateResourcesToCustomLineItemRequest& request, const BatchAssociateResourcesToCustomLineItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchAssociateResourcesToCustomLineItem(request), context);
}

void BillingConductorClient::BatchAssociateResourcesToCustomLineItemAsync(const BatchAssociateResourcesToCustomLineItemRequest& request, const BatchAssociateResourcesToCustomLineItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ BillingConductorClientBatchAssociateResourcesToCustomLineItemAsyncHelper( this, request, handler, context ); } );
}

BatchDisassociateResourcesFromCustomLineItemOutcome BillingConductorClient::BatchDisassociateResourcesFromCustomLineItem(const BatchDisassociateResourcesFromCustomLineItemRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/batch-disassociate-resources-from-custom-line-item");
  return BatchDisassociateResourcesFromCustomLineItemOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

BatchDisassociateResourcesFromCustomLineItemOutcomeCallable BillingConductorClient::BatchDisassociateResourcesFromCustomLineItemCallable(const BatchDisassociateResourcesFromCustomLineItemRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDisassociateResourcesFromCustomLineItemOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDisassociateResourcesFromCustomLineItem(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BillingConductorClientBatchDisassociateResourcesFromCustomLineItemAsyncHelper(BillingConductorClient const * const clientThis, const BatchDisassociateResourcesFromCustomLineItemRequest& request, const BatchDisassociateResourcesFromCustomLineItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchDisassociateResourcesFromCustomLineItem(request), context);
}

void BillingConductorClient::BatchDisassociateResourcesFromCustomLineItemAsync(const BatchDisassociateResourcesFromCustomLineItemRequest& request, const BatchDisassociateResourcesFromCustomLineItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ BillingConductorClientBatchDisassociateResourcesFromCustomLineItemAsyncHelper( this, request, handler, context ); } );
}

CreateBillingGroupOutcome BillingConductorClient::CreateBillingGroup(const CreateBillingGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/create-billing-group");
  return CreateBillingGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateBillingGroupOutcomeCallable BillingConductorClient::CreateBillingGroupCallable(const CreateBillingGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateBillingGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateBillingGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BillingConductorClientCreateBillingGroupAsyncHelper(BillingConductorClient const * const clientThis, const CreateBillingGroupRequest& request, const CreateBillingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateBillingGroup(request), context);
}

void BillingConductorClient::CreateBillingGroupAsync(const CreateBillingGroupRequest& request, const CreateBillingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ BillingConductorClientCreateBillingGroupAsyncHelper( this, request, handler, context ); } );
}

CreateCustomLineItemOutcome BillingConductorClient::CreateCustomLineItem(const CreateCustomLineItemRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/create-custom-line-item");
  return CreateCustomLineItemOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCustomLineItemOutcomeCallable BillingConductorClient::CreateCustomLineItemCallable(const CreateCustomLineItemRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCustomLineItemOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCustomLineItem(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BillingConductorClientCreateCustomLineItemAsyncHelper(BillingConductorClient const * const clientThis, const CreateCustomLineItemRequest& request, const CreateCustomLineItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateCustomLineItem(request), context);
}

void BillingConductorClient::CreateCustomLineItemAsync(const CreateCustomLineItemRequest& request, const CreateCustomLineItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ BillingConductorClientCreateCustomLineItemAsyncHelper( this, request, handler, context ); } );
}

CreatePricingPlanOutcome BillingConductorClient::CreatePricingPlan(const CreatePricingPlanRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/create-pricing-plan");
  return CreatePricingPlanOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePricingPlanOutcomeCallable BillingConductorClient::CreatePricingPlanCallable(const CreatePricingPlanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePricingPlanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePricingPlan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BillingConductorClientCreatePricingPlanAsyncHelper(BillingConductorClient const * const clientThis, const CreatePricingPlanRequest& request, const CreatePricingPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreatePricingPlan(request), context);
}

void BillingConductorClient::CreatePricingPlanAsync(const CreatePricingPlanRequest& request, const CreatePricingPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ BillingConductorClientCreatePricingPlanAsyncHelper( this, request, handler, context ); } );
}

CreatePricingRuleOutcome BillingConductorClient::CreatePricingRule(const CreatePricingRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/create-pricing-rule");
  return CreatePricingRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePricingRuleOutcomeCallable BillingConductorClient::CreatePricingRuleCallable(const CreatePricingRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePricingRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePricingRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BillingConductorClientCreatePricingRuleAsyncHelper(BillingConductorClient const * const clientThis, const CreatePricingRuleRequest& request, const CreatePricingRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreatePricingRule(request), context);
}

void BillingConductorClient::CreatePricingRuleAsync(const CreatePricingRuleRequest& request, const CreatePricingRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ BillingConductorClientCreatePricingRuleAsyncHelper( this, request, handler, context ); } );
}

DeleteBillingGroupOutcome BillingConductorClient::DeleteBillingGroup(const DeleteBillingGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/delete-billing-group");
  return DeleteBillingGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteBillingGroupOutcomeCallable BillingConductorClient::DeleteBillingGroupCallable(const DeleteBillingGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBillingGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBillingGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BillingConductorClientDeleteBillingGroupAsyncHelper(BillingConductorClient const * const clientThis, const DeleteBillingGroupRequest& request, const DeleteBillingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteBillingGroup(request), context);
}

void BillingConductorClient::DeleteBillingGroupAsync(const DeleteBillingGroupRequest& request, const DeleteBillingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ BillingConductorClientDeleteBillingGroupAsyncHelper( this, request, handler, context ); } );
}

DeleteCustomLineItemOutcome BillingConductorClient::DeleteCustomLineItem(const DeleteCustomLineItemRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/delete-custom-line-item");
  return DeleteCustomLineItemOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteCustomLineItemOutcomeCallable BillingConductorClient::DeleteCustomLineItemCallable(const DeleteCustomLineItemRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCustomLineItemOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCustomLineItem(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BillingConductorClientDeleteCustomLineItemAsyncHelper(BillingConductorClient const * const clientThis, const DeleteCustomLineItemRequest& request, const DeleteCustomLineItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteCustomLineItem(request), context);
}

void BillingConductorClient::DeleteCustomLineItemAsync(const DeleteCustomLineItemRequest& request, const DeleteCustomLineItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ BillingConductorClientDeleteCustomLineItemAsyncHelper( this, request, handler, context ); } );
}

DeletePricingPlanOutcome BillingConductorClient::DeletePricingPlan(const DeletePricingPlanRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/delete-pricing-plan");
  return DeletePricingPlanOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeletePricingPlanOutcomeCallable BillingConductorClient::DeletePricingPlanCallable(const DeletePricingPlanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePricingPlanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePricingPlan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BillingConductorClientDeletePricingPlanAsyncHelper(BillingConductorClient const * const clientThis, const DeletePricingPlanRequest& request, const DeletePricingPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeletePricingPlan(request), context);
}

void BillingConductorClient::DeletePricingPlanAsync(const DeletePricingPlanRequest& request, const DeletePricingPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ BillingConductorClientDeletePricingPlanAsyncHelper( this, request, handler, context ); } );
}

DeletePricingRuleOutcome BillingConductorClient::DeletePricingRule(const DeletePricingRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/delete-pricing-rule");
  return DeletePricingRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeletePricingRuleOutcomeCallable BillingConductorClient::DeletePricingRuleCallable(const DeletePricingRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePricingRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePricingRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BillingConductorClientDeletePricingRuleAsyncHelper(BillingConductorClient const * const clientThis, const DeletePricingRuleRequest& request, const DeletePricingRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeletePricingRule(request), context);
}

void BillingConductorClient::DeletePricingRuleAsync(const DeletePricingRuleRequest& request, const DeletePricingRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ BillingConductorClientDeletePricingRuleAsyncHelper( this, request, handler, context ); } );
}

DisassociateAccountsOutcome BillingConductorClient::DisassociateAccounts(const DisassociateAccountsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/disassociate-accounts");
  return DisassociateAccountsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateAccountsOutcomeCallable BillingConductorClient::DisassociateAccountsCallable(const DisassociateAccountsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateAccountsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateAccounts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BillingConductorClientDisassociateAccountsAsyncHelper(BillingConductorClient const * const clientThis, const DisassociateAccountsRequest& request, const DisassociateAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateAccounts(request), context);
}

void BillingConductorClient::DisassociateAccountsAsync(const DisassociateAccountsRequest& request, const DisassociateAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ BillingConductorClientDisassociateAccountsAsyncHelper( this, request, handler, context ); } );
}

DisassociatePricingRulesOutcome BillingConductorClient::DisassociatePricingRules(const DisassociatePricingRulesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/disassociate-pricing-rules");
  return DisassociatePricingRulesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

DisassociatePricingRulesOutcomeCallable BillingConductorClient::DisassociatePricingRulesCallable(const DisassociatePricingRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociatePricingRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociatePricingRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BillingConductorClientDisassociatePricingRulesAsyncHelper(BillingConductorClient const * const clientThis, const DisassociatePricingRulesRequest& request, const DisassociatePricingRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociatePricingRules(request), context);
}

void BillingConductorClient::DisassociatePricingRulesAsync(const DisassociatePricingRulesRequest& request, const DisassociatePricingRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ BillingConductorClientDisassociatePricingRulesAsyncHelper( this, request, handler, context ); } );
}

ListAccountAssociationsOutcome BillingConductorClient::ListAccountAssociations(const ListAccountAssociationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/list-account-associations");
  return ListAccountAssociationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAccountAssociationsOutcomeCallable BillingConductorClient::ListAccountAssociationsCallable(const ListAccountAssociationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAccountAssociationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAccountAssociations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BillingConductorClientListAccountAssociationsAsyncHelper(BillingConductorClient const * const clientThis, const ListAccountAssociationsRequest& request, const ListAccountAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAccountAssociations(request), context);
}

void BillingConductorClient::ListAccountAssociationsAsync(const ListAccountAssociationsRequest& request, const ListAccountAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ BillingConductorClientListAccountAssociationsAsyncHelper( this, request, handler, context ); } );
}

ListBillingGroupCostReportsOutcome BillingConductorClient::ListBillingGroupCostReports(const ListBillingGroupCostReportsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/list-billing-group-cost-reports");
  return ListBillingGroupCostReportsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListBillingGroupCostReportsOutcomeCallable BillingConductorClient::ListBillingGroupCostReportsCallable(const ListBillingGroupCostReportsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBillingGroupCostReportsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBillingGroupCostReports(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BillingConductorClientListBillingGroupCostReportsAsyncHelper(BillingConductorClient const * const clientThis, const ListBillingGroupCostReportsRequest& request, const ListBillingGroupCostReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListBillingGroupCostReports(request), context);
}

void BillingConductorClient::ListBillingGroupCostReportsAsync(const ListBillingGroupCostReportsRequest& request, const ListBillingGroupCostReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ BillingConductorClientListBillingGroupCostReportsAsyncHelper( this, request, handler, context ); } );
}

ListBillingGroupsOutcome BillingConductorClient::ListBillingGroups(const ListBillingGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/list-billing-groups");
  return ListBillingGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListBillingGroupsOutcomeCallable BillingConductorClient::ListBillingGroupsCallable(const ListBillingGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBillingGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBillingGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BillingConductorClientListBillingGroupsAsyncHelper(BillingConductorClient const * const clientThis, const ListBillingGroupsRequest& request, const ListBillingGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListBillingGroups(request), context);
}

void BillingConductorClient::ListBillingGroupsAsync(const ListBillingGroupsRequest& request, const ListBillingGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ BillingConductorClientListBillingGroupsAsyncHelper( this, request, handler, context ); } );
}

ListCustomLineItemsOutcome BillingConductorClient::ListCustomLineItems(const ListCustomLineItemsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/list-custom-line-items");
  return ListCustomLineItemsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListCustomLineItemsOutcomeCallable BillingConductorClient::ListCustomLineItemsCallable(const ListCustomLineItemsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCustomLineItemsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCustomLineItems(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BillingConductorClientListCustomLineItemsAsyncHelper(BillingConductorClient const * const clientThis, const ListCustomLineItemsRequest& request, const ListCustomLineItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListCustomLineItems(request), context);
}

void BillingConductorClient::ListCustomLineItemsAsync(const ListCustomLineItemsRequest& request, const ListCustomLineItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ BillingConductorClientListCustomLineItemsAsyncHelper( this, request, handler, context ); } );
}

ListPricingPlansOutcome BillingConductorClient::ListPricingPlans(const ListPricingPlansRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/list-pricing-plans");
  return ListPricingPlansOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPricingPlansOutcomeCallable BillingConductorClient::ListPricingPlansCallable(const ListPricingPlansRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPricingPlansOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPricingPlans(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BillingConductorClientListPricingPlansAsyncHelper(BillingConductorClient const * const clientThis, const ListPricingPlansRequest& request, const ListPricingPlansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPricingPlans(request), context);
}

void BillingConductorClient::ListPricingPlansAsync(const ListPricingPlansRequest& request, const ListPricingPlansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ BillingConductorClientListPricingPlansAsyncHelper( this, request, handler, context ); } );
}

ListPricingPlansAssociatedWithPricingRuleOutcome BillingConductorClient::ListPricingPlansAssociatedWithPricingRule(const ListPricingPlansAssociatedWithPricingRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/list-pricing-plans-associated-with-pricing-rule");
  return ListPricingPlansAssociatedWithPricingRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPricingPlansAssociatedWithPricingRuleOutcomeCallable BillingConductorClient::ListPricingPlansAssociatedWithPricingRuleCallable(const ListPricingPlansAssociatedWithPricingRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPricingPlansAssociatedWithPricingRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPricingPlansAssociatedWithPricingRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BillingConductorClientListPricingPlansAssociatedWithPricingRuleAsyncHelper(BillingConductorClient const * const clientThis, const ListPricingPlansAssociatedWithPricingRuleRequest& request, const ListPricingPlansAssociatedWithPricingRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPricingPlansAssociatedWithPricingRule(request), context);
}

void BillingConductorClient::ListPricingPlansAssociatedWithPricingRuleAsync(const ListPricingPlansAssociatedWithPricingRuleRequest& request, const ListPricingPlansAssociatedWithPricingRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ BillingConductorClientListPricingPlansAssociatedWithPricingRuleAsyncHelper( this, request, handler, context ); } );
}

ListPricingRulesOutcome BillingConductorClient::ListPricingRules(const ListPricingRulesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/list-pricing-rules");
  return ListPricingRulesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPricingRulesOutcomeCallable BillingConductorClient::ListPricingRulesCallable(const ListPricingRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPricingRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPricingRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BillingConductorClientListPricingRulesAsyncHelper(BillingConductorClient const * const clientThis, const ListPricingRulesRequest& request, const ListPricingRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPricingRules(request), context);
}

void BillingConductorClient::ListPricingRulesAsync(const ListPricingRulesRequest& request, const ListPricingRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ BillingConductorClientListPricingRulesAsyncHelper( this, request, handler, context ); } );
}

ListPricingRulesAssociatedToPricingPlanOutcome BillingConductorClient::ListPricingRulesAssociatedToPricingPlan(const ListPricingRulesAssociatedToPricingPlanRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/list-pricing-rules-associated-to-pricing-plan");
  return ListPricingRulesAssociatedToPricingPlanOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPricingRulesAssociatedToPricingPlanOutcomeCallable BillingConductorClient::ListPricingRulesAssociatedToPricingPlanCallable(const ListPricingRulesAssociatedToPricingPlanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPricingRulesAssociatedToPricingPlanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPricingRulesAssociatedToPricingPlan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BillingConductorClientListPricingRulesAssociatedToPricingPlanAsyncHelper(BillingConductorClient const * const clientThis, const ListPricingRulesAssociatedToPricingPlanRequest& request, const ListPricingRulesAssociatedToPricingPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPricingRulesAssociatedToPricingPlan(request), context);
}

void BillingConductorClient::ListPricingRulesAssociatedToPricingPlanAsync(const ListPricingRulesAssociatedToPricingPlanRequest& request, const ListPricingRulesAssociatedToPricingPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ BillingConductorClientListPricingRulesAssociatedToPricingPlanAsyncHelper( this, request, handler, context ); } );
}

ListResourcesAssociatedToCustomLineItemOutcome BillingConductorClient::ListResourcesAssociatedToCustomLineItem(const ListResourcesAssociatedToCustomLineItemRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/list-resources-associated-to-custom-line-item");
  return ListResourcesAssociatedToCustomLineItemOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListResourcesAssociatedToCustomLineItemOutcomeCallable BillingConductorClient::ListResourcesAssociatedToCustomLineItemCallable(const ListResourcesAssociatedToCustomLineItemRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListResourcesAssociatedToCustomLineItemOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListResourcesAssociatedToCustomLineItem(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BillingConductorClientListResourcesAssociatedToCustomLineItemAsyncHelper(BillingConductorClient const * const clientThis, const ListResourcesAssociatedToCustomLineItemRequest& request, const ListResourcesAssociatedToCustomLineItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListResourcesAssociatedToCustomLineItem(request), context);
}

void BillingConductorClient::ListResourcesAssociatedToCustomLineItemAsync(const ListResourcesAssociatedToCustomLineItemRequest& request, const ListResourcesAssociatedToCustomLineItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ BillingConductorClientListResourcesAssociatedToCustomLineItemAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome BillingConductorClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<BillingConductorErrors>(BillingConductorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable BillingConductorClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BillingConductorClientListTagsForResourceAsyncHelper(BillingConductorClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void BillingConductorClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ BillingConductorClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome BillingConductorClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<BillingConductorErrors>(BillingConductorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable BillingConductorClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BillingConductorClientTagResourceAsyncHelper(BillingConductorClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void BillingConductorClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ BillingConductorClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome BillingConductorClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<BillingConductorErrors>(BillingConductorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<BillingConductorErrors>(BillingConductorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable BillingConductorClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BillingConductorClientUntagResourceAsyncHelper(BillingConductorClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void BillingConductorClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ BillingConductorClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateBillingGroupOutcome BillingConductorClient::UpdateBillingGroup(const UpdateBillingGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/update-billing-group");
  return UpdateBillingGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateBillingGroupOutcomeCallable BillingConductorClient::UpdateBillingGroupCallable(const UpdateBillingGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateBillingGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateBillingGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BillingConductorClientUpdateBillingGroupAsyncHelper(BillingConductorClient const * const clientThis, const UpdateBillingGroupRequest& request, const UpdateBillingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateBillingGroup(request), context);
}

void BillingConductorClient::UpdateBillingGroupAsync(const UpdateBillingGroupRequest& request, const UpdateBillingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ BillingConductorClientUpdateBillingGroupAsyncHelper( this, request, handler, context ); } );
}

UpdateCustomLineItemOutcome BillingConductorClient::UpdateCustomLineItem(const UpdateCustomLineItemRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/update-custom-line-item");
  return UpdateCustomLineItemOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateCustomLineItemOutcomeCallable BillingConductorClient::UpdateCustomLineItemCallable(const UpdateCustomLineItemRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCustomLineItemOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCustomLineItem(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BillingConductorClientUpdateCustomLineItemAsyncHelper(BillingConductorClient const * const clientThis, const UpdateCustomLineItemRequest& request, const UpdateCustomLineItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateCustomLineItem(request), context);
}

void BillingConductorClient::UpdateCustomLineItemAsync(const UpdateCustomLineItemRequest& request, const UpdateCustomLineItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ BillingConductorClientUpdateCustomLineItemAsyncHelper( this, request, handler, context ); } );
}

UpdatePricingPlanOutcome BillingConductorClient::UpdatePricingPlan(const UpdatePricingPlanRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/update-pricing-plan");
  return UpdatePricingPlanOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdatePricingPlanOutcomeCallable BillingConductorClient::UpdatePricingPlanCallable(const UpdatePricingPlanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePricingPlanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePricingPlan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BillingConductorClientUpdatePricingPlanAsyncHelper(BillingConductorClient const * const clientThis, const UpdatePricingPlanRequest& request, const UpdatePricingPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdatePricingPlan(request), context);
}

void BillingConductorClient::UpdatePricingPlanAsync(const UpdatePricingPlanRequest& request, const UpdatePricingPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ BillingConductorClientUpdatePricingPlanAsyncHelper( this, request, handler, context ); } );
}

UpdatePricingRuleOutcome BillingConductorClient::UpdatePricingRule(const UpdatePricingRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/update-pricing-rule");
  return UpdatePricingRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdatePricingRuleOutcomeCallable BillingConductorClient::UpdatePricingRuleCallable(const UpdatePricingRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePricingRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePricingRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BillingConductorClientUpdatePricingRuleAsyncHelper(BillingConductorClient const * const clientThis, const UpdatePricingRuleRequest& request, const UpdatePricingRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdatePricingRule(request), context);
}

void BillingConductorClient::UpdatePricingRuleAsync(const UpdatePricingRuleRequest& request, const UpdatePricingRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ BillingConductorClientUpdatePricingRuleAsyncHelper( this, request, handler, context ); } );
}

