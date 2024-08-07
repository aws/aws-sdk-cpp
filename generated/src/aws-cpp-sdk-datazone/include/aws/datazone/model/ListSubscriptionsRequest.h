﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/SortKey.h>
#include <aws/datazone/model/SortOrder.h>
#include <aws/datazone/model/SubscriptionStatus.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace DataZone
{
namespace Model
{

  /**
   */
  class ListSubscriptionsRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API ListSubscriptionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSubscriptions"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;

    AWS_DATAZONE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The identifier of the project for the subscription's approver.</p>
     */
    inline const Aws::String& GetApproverProjectId() const{ return m_approverProjectId; }
    inline bool ApproverProjectIdHasBeenSet() const { return m_approverProjectIdHasBeenSet; }
    inline void SetApproverProjectId(const Aws::String& value) { m_approverProjectIdHasBeenSet = true; m_approverProjectId = value; }
    inline void SetApproverProjectId(Aws::String&& value) { m_approverProjectIdHasBeenSet = true; m_approverProjectId = std::move(value); }
    inline void SetApproverProjectId(const char* value) { m_approverProjectIdHasBeenSet = true; m_approverProjectId.assign(value); }
    inline ListSubscriptionsRequest& WithApproverProjectId(const Aws::String& value) { SetApproverProjectId(value); return *this;}
    inline ListSubscriptionsRequest& WithApproverProjectId(Aws::String&& value) { SetApproverProjectId(std::move(value)); return *this;}
    inline ListSubscriptionsRequest& WithApproverProjectId(const char* value) { SetApproverProjectId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }
    inline ListSubscriptionsRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}
    inline ListSubscriptionsRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}
    inline ListSubscriptionsRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of subscriptions to return in a single call to
     * <code>ListSubscriptions</code>. When the number of subscriptions to be listed is
     * greater than the value of <code>MaxResults</code>, the response contains a
     * <code>NextToken</code> value that you can use in a subsequent call to
     * <code>ListSubscriptions</code> to list the next set of Subscriptions. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListSubscriptionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the number of subscriptions is greater than the default value for the
     * <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of subscriptions, the
     * response includes a pagination token named <code>NextToken</code>. You can
     * specify this <code>NextToken</code> value in a subsequent call to
     * <code>ListSubscriptions</code> to list the next set of subscriptions.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListSubscriptionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListSubscriptionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListSubscriptionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the owning project.</p>
     */
    inline const Aws::String& GetOwningProjectId() const{ return m_owningProjectId; }
    inline bool OwningProjectIdHasBeenSet() const { return m_owningProjectIdHasBeenSet; }
    inline void SetOwningProjectId(const Aws::String& value) { m_owningProjectIdHasBeenSet = true; m_owningProjectId = value; }
    inline void SetOwningProjectId(Aws::String&& value) { m_owningProjectIdHasBeenSet = true; m_owningProjectId = std::move(value); }
    inline void SetOwningProjectId(const char* value) { m_owningProjectIdHasBeenSet = true; m_owningProjectId.assign(value); }
    inline ListSubscriptionsRequest& WithOwningProjectId(const Aws::String& value) { SetOwningProjectId(value); return *this;}
    inline ListSubscriptionsRequest& WithOwningProjectId(Aws::String&& value) { SetOwningProjectId(std::move(value)); return *this;}
    inline ListSubscriptionsRequest& WithOwningProjectId(const char* value) { SetOwningProjectId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the way in which the results of this action are to be sorted.</p>
     */
    inline const SortKey& GetSortBy() const{ return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(const SortKey& value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline void SetSortBy(SortKey&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }
    inline ListSubscriptionsRequest& WithSortBy(const SortKey& value) { SetSortBy(value); return *this;}
    inline ListSubscriptionsRequest& WithSortBy(SortKey&& value) { SetSortBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the sort order for the results of this action.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }
    inline ListSubscriptionsRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}
    inline ListSubscriptionsRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the subscriptions that you want to list.</p>  <p>This is
     * not a required parameter, but if not provided, by default, Amazon DataZone
     * returns only <code>APPROVED</code> subscriptions. </p> 
     */
    inline const SubscriptionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const SubscriptionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(SubscriptionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ListSubscriptionsRequest& WithStatus(const SubscriptionStatus& value) { SetStatus(value); return *this;}
    inline ListSubscriptionsRequest& WithStatus(SubscriptionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the subscribed listing for the subscriptions that you want
     * to list.</p>
     */
    inline const Aws::String& GetSubscribedListingId() const{ return m_subscribedListingId; }
    inline bool SubscribedListingIdHasBeenSet() const { return m_subscribedListingIdHasBeenSet; }
    inline void SetSubscribedListingId(const Aws::String& value) { m_subscribedListingIdHasBeenSet = true; m_subscribedListingId = value; }
    inline void SetSubscribedListingId(Aws::String&& value) { m_subscribedListingIdHasBeenSet = true; m_subscribedListingId = std::move(value); }
    inline void SetSubscribedListingId(const char* value) { m_subscribedListingIdHasBeenSet = true; m_subscribedListingId.assign(value); }
    inline ListSubscriptionsRequest& WithSubscribedListingId(const Aws::String& value) { SetSubscribedListingId(value); return *this;}
    inline ListSubscriptionsRequest& WithSubscribedListingId(Aws::String&& value) { SetSubscribedListingId(std::move(value)); return *this;}
    inline ListSubscriptionsRequest& WithSubscribedListingId(const char* value) { SetSubscribedListingId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the subscription request for the subscriptions that you
     * want to list.</p>
     */
    inline const Aws::String& GetSubscriptionRequestIdentifier() const{ return m_subscriptionRequestIdentifier; }
    inline bool SubscriptionRequestIdentifierHasBeenSet() const { return m_subscriptionRequestIdentifierHasBeenSet; }
    inline void SetSubscriptionRequestIdentifier(const Aws::String& value) { m_subscriptionRequestIdentifierHasBeenSet = true; m_subscriptionRequestIdentifier = value; }
    inline void SetSubscriptionRequestIdentifier(Aws::String&& value) { m_subscriptionRequestIdentifierHasBeenSet = true; m_subscriptionRequestIdentifier = std::move(value); }
    inline void SetSubscriptionRequestIdentifier(const char* value) { m_subscriptionRequestIdentifierHasBeenSet = true; m_subscriptionRequestIdentifier.assign(value); }
    inline ListSubscriptionsRequest& WithSubscriptionRequestIdentifier(const Aws::String& value) { SetSubscriptionRequestIdentifier(value); return *this;}
    inline ListSubscriptionsRequest& WithSubscriptionRequestIdentifier(Aws::String&& value) { SetSubscriptionRequestIdentifier(std::move(value)); return *this;}
    inline ListSubscriptionsRequest& WithSubscriptionRequestIdentifier(const char* value) { SetSubscriptionRequestIdentifier(value); return *this;}
    ///@}
  private:

    Aws::String m_approverProjectId;
    bool m_approverProjectIdHasBeenSet = false;

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_owningProjectId;
    bool m_owningProjectIdHasBeenSet = false;

    SortKey m_sortBy;
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;

    SubscriptionStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_subscribedListingId;
    bool m_subscribedListingIdHasBeenSet = false;

    Aws::String m_subscriptionRequestIdentifier;
    bool m_subscriptionRequestIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
