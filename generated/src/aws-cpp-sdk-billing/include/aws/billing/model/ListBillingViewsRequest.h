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
    AWS_BILLING_API ListBillingViewsRequest() = default;

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
    inline const ActiveTimeRange& GetActiveTimeRange() const { return m_activeTimeRange; }
    inline bool ActiveTimeRangeHasBeenSet() const { return m_activeTimeRangeHasBeenSet; }
    template<typename ActiveTimeRangeT = ActiveTimeRange>
    void SetActiveTimeRange(ActiveTimeRangeT&& value) { m_activeTimeRangeHasBeenSet = true; m_activeTimeRange = std::forward<ActiveTimeRangeT>(value); }
    template<typename ActiveTimeRangeT = ActiveTimeRange>
    ListBillingViewsRequest& WithActiveTimeRange(ActiveTimeRangeT&& value) { SetActiveTimeRange(std::forward<ActiveTimeRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that can be used to uniquely identify the
     * billing view. </p>
     */
    inline const Aws::Vector<Aws::String>& GetArns() const { return m_arns; }
    inline bool ArnsHasBeenSet() const { return m_arnsHasBeenSet; }
    template<typename ArnsT = Aws::Vector<Aws::String>>
    void SetArns(ArnsT&& value) { m_arnsHasBeenSet = true; m_arns = std::forward<ArnsT>(value); }
    template<typename ArnsT = Aws::Vector<Aws::String>>
    ListBillingViewsRequest& WithArns(ArnsT&& value) { SetArns(std::forward<ArnsT>(value)); return *this;}
    template<typename ArnsT = Aws::String>
    ListBillingViewsRequest& AddArns(ArnsT&& value) { m_arnsHasBeenSet = true; m_arns.emplace_back(std::forward<ArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of billing view.</p>
     */
    inline const Aws::Vector<BillingViewType>& GetBillingViewTypes() const { return m_billingViewTypes; }
    inline bool BillingViewTypesHasBeenSet() const { return m_billingViewTypesHasBeenSet; }
    template<typename BillingViewTypesT = Aws::Vector<BillingViewType>>
    void SetBillingViewTypes(BillingViewTypesT&& value) { m_billingViewTypesHasBeenSet = true; m_billingViewTypes = std::forward<BillingViewTypesT>(value); }
    template<typename BillingViewTypesT = Aws::Vector<BillingViewType>>
    ListBillingViewsRequest& WithBillingViewTypes(BillingViewTypesT&& value) { SetBillingViewTypes(std::forward<BillingViewTypesT>(value)); return *this;}
    inline ListBillingViewsRequest& AddBillingViewTypes(BillingViewType value) { m_billingViewTypesHasBeenSet = true; m_billingViewTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The list of owners of the billing view. </p>
     */
    inline const Aws::String& GetOwnerAccountId() const { return m_ownerAccountId; }
    inline bool OwnerAccountIdHasBeenSet() const { return m_ownerAccountIdHasBeenSet; }
    template<typename OwnerAccountIdT = Aws::String>
    void SetOwnerAccountId(OwnerAccountIdT&& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = std::forward<OwnerAccountIdT>(value); }
    template<typename OwnerAccountIdT = Aws::String>
    ListBillingViewsRequest& WithOwnerAccountId(OwnerAccountIdT&& value) { SetOwnerAccountId(std::forward<OwnerAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of billing views to retrieve. Default is 100. </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListBillingViewsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pagination token that is used on subsequent calls to list billing
     * views.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListBillingViewsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
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

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Billing
} // namespace Aws
