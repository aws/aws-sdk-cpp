/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/SortKey.h>
#include <aws/datazone/model/SortOrder.h>
#include <aws/datazone/model/SubscriptionRequestStatus.h>
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
  class ListSubscriptionRequestsRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API ListSubscriptionRequestsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSubscriptionRequests"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;

    AWS_DATAZONE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The identifier of the subscription request approver's project.</p>
     */
    inline const Aws::String& GetApproverProjectId() const{ return m_approverProjectId; }

    /**
     * <p>The identifier of the subscription request approver's project.</p>
     */
    inline bool ApproverProjectIdHasBeenSet() const { return m_approverProjectIdHasBeenSet; }

    /**
     * <p>The identifier of the subscription request approver's project.</p>
     */
    inline void SetApproverProjectId(const Aws::String& value) { m_approverProjectIdHasBeenSet = true; m_approverProjectId = value; }

    /**
     * <p>The identifier of the subscription request approver's project.</p>
     */
    inline void SetApproverProjectId(Aws::String&& value) { m_approverProjectIdHasBeenSet = true; m_approverProjectId = std::move(value); }

    /**
     * <p>The identifier of the subscription request approver's project.</p>
     */
    inline void SetApproverProjectId(const char* value) { m_approverProjectIdHasBeenSet = true; m_approverProjectId.assign(value); }

    /**
     * <p>The identifier of the subscription request approver's project.</p>
     */
    inline ListSubscriptionRequestsRequest& WithApproverProjectId(const Aws::String& value) { SetApproverProjectId(value); return *this;}

    /**
     * <p>The identifier of the subscription request approver's project.</p>
     */
    inline ListSubscriptionRequestsRequest& WithApproverProjectId(Aws::String&& value) { SetApproverProjectId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the subscription request approver's project.</p>
     */
    inline ListSubscriptionRequestsRequest& WithApproverProjectId(const char* value) { SetApproverProjectId(value); return *this;}


    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }

    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }

    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline ListSubscriptionRequestsRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline ListSubscriptionRequestsRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline ListSubscriptionRequestsRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}


    /**
     * <p>The maximum number of subscription requests to return in a single call to
     * <code>ListSubscriptionRequests</code>. When the number of subscription requests
     * to be listed is greater than the value of <code>MaxResults</code>, the response
     * contains a <code>NextToken</code> value that you can use in a subsequent call to
     * <code>ListSubscriptionRequests</code> to list the next set of subscription
     * requests.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of subscription requests to return in a single call to
     * <code>ListSubscriptionRequests</code>. When the number of subscription requests
     * to be listed is greater than the value of <code>MaxResults</code>, the response
     * contains a <code>NextToken</code> value that you can use in a subsequent call to
     * <code>ListSubscriptionRequests</code> to list the next set of subscription
     * requests.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of subscription requests to return in a single call to
     * <code>ListSubscriptionRequests</code>. When the number of subscription requests
     * to be listed is greater than the value of <code>MaxResults</code>, the response
     * contains a <code>NextToken</code> value that you can use in a subsequent call to
     * <code>ListSubscriptionRequests</code> to list the next set of subscription
     * requests.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of subscription requests to return in a single call to
     * <code>ListSubscriptionRequests</code>. When the number of subscription requests
     * to be listed is greater than the value of <code>MaxResults</code>, the response
     * contains a <code>NextToken</code> value that you can use in a subsequent call to
     * <code>ListSubscriptionRequests</code> to list the next set of subscription
     * requests.</p>
     */
    inline ListSubscriptionRequestsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>When the number of subscription requests is greater than the default value
     * for the <code>MaxResults</code> parameter, or if you explicitly specify a value
     * for <code>MaxResults</code> that is less than the number of subscription
     * requests, the response includes a pagination token named <code>NextToken</code>.
     * You can specify this <code>NextToken</code> value in a subsequent call to
     * <code>ListSubscriptionRequests</code> to list the next set of subscription
     * requests.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>When the number of subscription requests is greater than the default value
     * for the <code>MaxResults</code> parameter, or if you explicitly specify a value
     * for <code>MaxResults</code> that is less than the number of subscription
     * requests, the response includes a pagination token named <code>NextToken</code>.
     * You can specify this <code>NextToken</code> value in a subsequent call to
     * <code>ListSubscriptionRequests</code> to list the next set of subscription
     * requests.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>When the number of subscription requests is greater than the default value
     * for the <code>MaxResults</code> parameter, or if you explicitly specify a value
     * for <code>MaxResults</code> that is less than the number of subscription
     * requests, the response includes a pagination token named <code>NextToken</code>.
     * You can specify this <code>NextToken</code> value in a subsequent call to
     * <code>ListSubscriptionRequests</code> to list the next set of subscription
     * requests.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>When the number of subscription requests is greater than the default value
     * for the <code>MaxResults</code> parameter, or if you explicitly specify a value
     * for <code>MaxResults</code> that is less than the number of subscription
     * requests, the response includes a pagination token named <code>NextToken</code>.
     * You can specify this <code>NextToken</code> value in a subsequent call to
     * <code>ListSubscriptionRequests</code> to list the next set of subscription
     * requests.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>When the number of subscription requests is greater than the default value
     * for the <code>MaxResults</code> parameter, or if you explicitly specify a value
     * for <code>MaxResults</code> that is less than the number of subscription
     * requests, the response includes a pagination token named <code>NextToken</code>.
     * You can specify this <code>NextToken</code> value in a subsequent call to
     * <code>ListSubscriptionRequests</code> to list the next set of subscription
     * requests.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>When the number of subscription requests is greater than the default value
     * for the <code>MaxResults</code> parameter, or if you explicitly specify a value
     * for <code>MaxResults</code> that is less than the number of subscription
     * requests, the response includes a pagination token named <code>NextToken</code>.
     * You can specify this <code>NextToken</code> value in a subsequent call to
     * <code>ListSubscriptionRequests</code> to list the next set of subscription
     * requests.</p>
     */
    inline ListSubscriptionRequestsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When the number of subscription requests is greater than the default value
     * for the <code>MaxResults</code> parameter, or if you explicitly specify a value
     * for <code>MaxResults</code> that is less than the number of subscription
     * requests, the response includes a pagination token named <code>NextToken</code>.
     * You can specify this <code>NextToken</code> value in a subsequent call to
     * <code>ListSubscriptionRequests</code> to list the next set of subscription
     * requests.</p>
     */
    inline ListSubscriptionRequestsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When the number of subscription requests is greater than the default value
     * for the <code>MaxResults</code> parameter, or if you explicitly specify a value
     * for <code>MaxResults</code> that is less than the number of subscription
     * requests, the response includes a pagination token named <code>NextToken</code>.
     * You can specify this <code>NextToken</code> value in a subsequent call to
     * <code>ListSubscriptionRequests</code> to list the next set of subscription
     * requests.</p>
     */
    inline ListSubscriptionRequestsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The identifier of the project for the subscription requests.</p>
     */
    inline const Aws::String& GetOwningProjectId() const{ return m_owningProjectId; }

    /**
     * <p>The identifier of the project for the subscription requests.</p>
     */
    inline bool OwningProjectIdHasBeenSet() const { return m_owningProjectIdHasBeenSet; }

    /**
     * <p>The identifier of the project for the subscription requests.</p>
     */
    inline void SetOwningProjectId(const Aws::String& value) { m_owningProjectIdHasBeenSet = true; m_owningProjectId = value; }

    /**
     * <p>The identifier of the project for the subscription requests.</p>
     */
    inline void SetOwningProjectId(Aws::String&& value) { m_owningProjectIdHasBeenSet = true; m_owningProjectId = std::move(value); }

    /**
     * <p>The identifier of the project for the subscription requests.</p>
     */
    inline void SetOwningProjectId(const char* value) { m_owningProjectIdHasBeenSet = true; m_owningProjectId.assign(value); }

    /**
     * <p>The identifier of the project for the subscription requests.</p>
     */
    inline ListSubscriptionRequestsRequest& WithOwningProjectId(const Aws::String& value) { SetOwningProjectId(value); return *this;}

    /**
     * <p>The identifier of the project for the subscription requests.</p>
     */
    inline ListSubscriptionRequestsRequest& WithOwningProjectId(Aws::String&& value) { SetOwningProjectId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the project for the subscription requests.</p>
     */
    inline ListSubscriptionRequestsRequest& WithOwningProjectId(const char* value) { SetOwningProjectId(value); return *this;}


    /**
     * <p>Specifies the way to sort the results of this action.</p>
     */
    inline const SortKey& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>Specifies the way to sort the results of this action.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>Specifies the way to sort the results of this action.</p>
     */
    inline void SetSortBy(const SortKey& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>Specifies the way to sort the results of this action.</p>
     */
    inline void SetSortBy(SortKey&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>Specifies the way to sort the results of this action.</p>
     */
    inline ListSubscriptionRequestsRequest& WithSortBy(const SortKey& value) { SetSortBy(value); return *this;}

    /**
     * <p>Specifies the way to sort the results of this action.</p>
     */
    inline ListSubscriptionRequestsRequest& WithSortBy(SortKey&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>Specifies the sort order for the results of this action.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>Specifies the sort order for the results of this action.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>Specifies the sort order for the results of this action.</p>
     */
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>Specifies the sort order for the results of this action.</p>
     */
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>Specifies the sort order for the results of this action.</p>
     */
    inline ListSubscriptionRequestsRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>Specifies the sort order for the results of this action.</p>
     */
    inline ListSubscriptionRequestsRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}


    /**
     * <p>Specifies the status of the subscription requests.</p>
     */
    inline const SubscriptionRequestStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Specifies the status of the subscription requests.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Specifies the status of the subscription requests.</p>
     */
    inline void SetStatus(const SubscriptionRequestStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Specifies the status of the subscription requests.</p>
     */
    inline void SetStatus(SubscriptionRequestStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Specifies the status of the subscription requests.</p>
     */
    inline ListSubscriptionRequestsRequest& WithStatus(const SubscriptionRequestStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Specifies the status of the subscription requests.</p>
     */
    inline ListSubscriptionRequestsRequest& WithStatus(SubscriptionRequestStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The identifier of the subscribed listing.</p>
     */
    inline const Aws::String& GetSubscribedListingId() const{ return m_subscribedListingId; }

    /**
     * <p>The identifier of the subscribed listing.</p>
     */
    inline bool SubscribedListingIdHasBeenSet() const { return m_subscribedListingIdHasBeenSet; }

    /**
     * <p>The identifier of the subscribed listing.</p>
     */
    inline void SetSubscribedListingId(const Aws::String& value) { m_subscribedListingIdHasBeenSet = true; m_subscribedListingId = value; }

    /**
     * <p>The identifier of the subscribed listing.</p>
     */
    inline void SetSubscribedListingId(Aws::String&& value) { m_subscribedListingIdHasBeenSet = true; m_subscribedListingId = std::move(value); }

    /**
     * <p>The identifier of the subscribed listing.</p>
     */
    inline void SetSubscribedListingId(const char* value) { m_subscribedListingIdHasBeenSet = true; m_subscribedListingId.assign(value); }

    /**
     * <p>The identifier of the subscribed listing.</p>
     */
    inline ListSubscriptionRequestsRequest& WithSubscribedListingId(const Aws::String& value) { SetSubscribedListingId(value); return *this;}

    /**
     * <p>The identifier of the subscribed listing.</p>
     */
    inline ListSubscriptionRequestsRequest& WithSubscribedListingId(Aws::String&& value) { SetSubscribedListingId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the subscribed listing.</p>
     */
    inline ListSubscriptionRequestsRequest& WithSubscribedListingId(const char* value) { SetSubscribedListingId(value); return *this;}

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

    SubscriptionRequestStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_subscribedListingId;
    bool m_subscribedListingIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
