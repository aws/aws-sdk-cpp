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
    AWS_DATAZONE_API ListSubscriptionRequestsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSubscriptionRequests"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;

    AWS_DATAZONE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The identifier of the subscription request approver's project.</p>
     */
    inline const Aws::String& GetApproverProjectId() const { return m_approverProjectId; }
    inline bool ApproverProjectIdHasBeenSet() const { return m_approverProjectIdHasBeenSet; }
    template<typename ApproverProjectIdT = Aws::String>
    void SetApproverProjectId(ApproverProjectIdT&& value) { m_approverProjectIdHasBeenSet = true; m_approverProjectId = std::forward<ApproverProjectIdT>(value); }
    template<typename ApproverProjectIdT = Aws::String>
    ListSubscriptionRequestsRequest& WithApproverProjectId(ApproverProjectIdT&& value) { SetApproverProjectId(std::forward<ApproverProjectIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const { return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    template<typename DomainIdentifierT = Aws::String>
    void SetDomainIdentifier(DomainIdentifierT&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::forward<DomainIdentifierT>(value); }
    template<typename DomainIdentifierT = Aws::String>
    ListSubscriptionRequestsRequest& WithDomainIdentifier(DomainIdentifierT&& value) { SetDomainIdentifier(std::forward<DomainIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of subscription requests to return in a single call to
     * <code>ListSubscriptionRequests</code>. When the number of subscription requests
     * to be listed is greater than the value of <code>MaxResults</code>, the response
     * contains a <code>NextToken</code> value that you can use in a subsequent call to
     * <code>ListSubscriptionRequests</code> to list the next set of subscription
     * requests.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListSubscriptionRequestsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the number of subscription requests is greater than the default value
     * for the <code>MaxResults</code> parameter, or if you explicitly specify a value
     * for <code>MaxResults</code> that is less than the number of subscription
     * requests, the response includes a pagination token named <code>NextToken</code>.
     * You can specify this <code>NextToken</code> value in a subsequent call to
     * <code>ListSubscriptionRequests</code> to list the next set of subscription
     * requests.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSubscriptionRequestsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the project for the subscription requests.</p>
     */
    inline const Aws::String& GetOwningProjectId() const { return m_owningProjectId; }
    inline bool OwningProjectIdHasBeenSet() const { return m_owningProjectIdHasBeenSet; }
    template<typename OwningProjectIdT = Aws::String>
    void SetOwningProjectId(OwningProjectIdT&& value) { m_owningProjectIdHasBeenSet = true; m_owningProjectId = std::forward<OwningProjectIdT>(value); }
    template<typename OwningProjectIdT = Aws::String>
    ListSubscriptionRequestsRequest& WithOwningProjectId(OwningProjectIdT&& value) { SetOwningProjectId(std::forward<OwningProjectIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the way to sort the results of this action.</p>
     */
    inline SortKey GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(SortKey value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline ListSubscriptionRequestsRequest& WithSortBy(SortKey value) { SetSortBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the sort order for the results of this action.</p>
     */
    inline SortOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(SortOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline ListSubscriptionRequestsRequest& WithSortOrder(SortOrder value) { SetSortOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the status of the subscription requests.</p>  <p>This is not
     * a required parameter, but if not specified, by default, Amazon DataZone returns
     * only <code>PENDING</code> subscription requests. </p> 
     */
    inline SubscriptionRequestStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(SubscriptionRequestStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ListSubscriptionRequestsRequest& WithStatus(SubscriptionRequestStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the subscribed listing.</p>
     */
    inline const Aws::String& GetSubscribedListingId() const { return m_subscribedListingId; }
    inline bool SubscribedListingIdHasBeenSet() const { return m_subscribedListingIdHasBeenSet; }
    template<typename SubscribedListingIdT = Aws::String>
    void SetSubscribedListingId(SubscribedListingIdT&& value) { m_subscribedListingIdHasBeenSet = true; m_subscribedListingId = std::forward<SubscribedListingIdT>(value); }
    template<typename SubscribedListingIdT = Aws::String>
    ListSubscriptionRequestsRequest& WithSubscribedListingId(SubscribedListingIdT&& value) { SetSubscribedListingId(std::forward<SubscribedListingIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_approverProjectId;
    bool m_approverProjectIdHasBeenSet = false;

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_owningProjectId;
    bool m_owningProjectIdHasBeenSet = false;

    SortKey m_sortBy{SortKey::NOT_SET};
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder{SortOrder::NOT_SET};
    bool m_sortOrderHasBeenSet = false;

    SubscriptionRequestStatus m_status{SubscriptionRequestStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_subscribedListingId;
    bool m_subscribedListingIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
