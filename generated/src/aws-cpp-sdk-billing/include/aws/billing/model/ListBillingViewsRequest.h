/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/billing/BillingRequest.h>
#include <aws/billing/model/ActiveTimeRange.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/billing/model/BillingViewType.h>
#include <utility>

namespace Aws
{
namespace Billing
{
namespace Model
{

  /**
   */
  class ListBillingViewsRequest : public BillingRequest
  {
  public:
    AWS_BILLING_API ListBillingViewsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListBillingViews"; }

    AWS_BILLING_API Aws::String SerializePayload() const override;

    AWS_BILLING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The time range for the billing views listed. <code>PRIMARY</code> billing
     * view is always listed. <code>BILLING_GROUP</code> billing views are listed for
     * time ranges when the associated billing group resource in Billing Conductor is
     * active. The time range must be within one calendar month. </p>
     */
    inline const ActiveTimeRange& GetActiveTimeRange() const{ return m_activeTimeRange; }
    inline bool ActiveTimeRangeHasBeenSet() const { return m_activeTimeRangeHasBeenSet; }
    inline void SetActiveTimeRange(const ActiveTimeRange& value) { m_activeTimeRangeHasBeenSet = true; m_activeTimeRange = value; }
    inline void SetActiveTimeRange(ActiveTimeRange&& value) { m_activeTimeRangeHasBeenSet = true; m_activeTimeRange = std::move(value); }
    inline ListBillingViewsRequest& WithActiveTimeRange(const ActiveTimeRange& value) { SetActiveTimeRange(value); return *this;}
    inline ListBillingViewsRequest& WithActiveTimeRange(ActiveTimeRange&& value) { SetActiveTimeRange(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that can be used to uniquely identify the
     * billing view. </p>
     */
    inline const Aws::Vector<Aws::String>& GetArns() const{ return m_arns; }
    inline bool ArnsHasBeenSet() const { return m_arnsHasBeenSet; }
    inline void SetArns(const Aws::Vector<Aws::String>& value) { m_arnsHasBeenSet = true; m_arns = value; }
    inline void SetArns(Aws::Vector<Aws::String>&& value) { m_arnsHasBeenSet = true; m_arns = std::move(value); }
    inline ListBillingViewsRequest& WithArns(const Aws::Vector<Aws::String>& value) { SetArns(value); return *this;}
    inline ListBillingViewsRequest& WithArns(Aws::Vector<Aws::String>&& value) { SetArns(std::move(value)); return *this;}
    inline ListBillingViewsRequest& AddArns(const Aws::String& value) { m_arnsHasBeenSet = true; m_arns.push_back(value); return *this; }
    inline ListBillingViewsRequest& AddArns(Aws::String&& value) { m_arnsHasBeenSet = true; m_arns.push_back(std::move(value)); return *this; }
    inline ListBillingViewsRequest& AddArns(const char* value) { m_arnsHasBeenSet = true; m_arns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of billing view.</p>
     */
    inline const Aws::Vector<BillingViewType>& GetBillingViewTypes() const{ return m_billingViewTypes; }
    inline bool BillingViewTypesHasBeenSet() const { return m_billingViewTypesHasBeenSet; }
    inline void SetBillingViewTypes(const Aws::Vector<BillingViewType>& value) { m_billingViewTypesHasBeenSet = true; m_billingViewTypes = value; }
    inline void SetBillingViewTypes(Aws::Vector<BillingViewType>&& value) { m_billingViewTypesHasBeenSet = true; m_billingViewTypes = std::move(value); }
    inline ListBillingViewsRequest& WithBillingViewTypes(const Aws::Vector<BillingViewType>& value) { SetBillingViewTypes(value); return *this;}
    inline ListBillingViewsRequest& WithBillingViewTypes(Aws::Vector<BillingViewType>&& value) { SetBillingViewTypes(std::move(value)); return *this;}
    inline ListBillingViewsRequest& AddBillingViewTypes(const BillingViewType& value) { m_billingViewTypesHasBeenSet = true; m_billingViewTypes.push_back(value); return *this; }
    inline ListBillingViewsRequest& AddBillingViewTypes(BillingViewType&& value) { m_billingViewTypesHasBeenSet = true; m_billingViewTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The list of owners of the billing view. </p>
     */
    inline const Aws::String& GetOwnerAccountId() const{ return m_ownerAccountId; }
    inline bool OwnerAccountIdHasBeenSet() const { return m_ownerAccountIdHasBeenSet; }
    inline void SetOwnerAccountId(const Aws::String& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = value; }
    inline void SetOwnerAccountId(Aws::String&& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = std::move(value); }
    inline void SetOwnerAccountId(const char* value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId.assign(value); }
    inline ListBillingViewsRequest& WithOwnerAccountId(const Aws::String& value) { SetOwnerAccountId(value); return *this;}
    inline ListBillingViewsRequest& WithOwnerAccountId(Aws::String&& value) { SetOwnerAccountId(std::move(value)); return *this;}
    inline ListBillingViewsRequest& WithOwnerAccountId(const char* value) { SetOwnerAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of billing views to retrieve. Default is 100. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListBillingViewsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pagination token that is used on subsequent calls to list billing
     * views.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListBillingViewsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListBillingViewsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListBillingViewsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    ActiveTimeRange m_activeTimeRange;
    bool m_activeTimeRangeHasBeenSet = false;

    Aws::Vector<Aws::String> m_arns;
    bool m_arnsHasBeenSet = false;

    Aws::Vector<BillingViewType> m_billingViewTypes;
    bool m_billingViewTypesHasBeenSet = false;

    Aws::String m_ownerAccountId;
    bool m_ownerAccountIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Billing
} // namespace Aws
