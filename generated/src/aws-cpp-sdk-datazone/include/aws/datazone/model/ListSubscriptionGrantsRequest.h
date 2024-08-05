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
  class ListSubscriptionGrantsRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API ListSubscriptionGrantsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSubscriptionGrants"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;

    AWS_DATAZONE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }
    inline ListSubscriptionGrantsRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}
    inline ListSubscriptionGrantsRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}
    inline ListSubscriptionGrantsRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon DataZone environment.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }
    inline ListSubscriptionGrantsRequest& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}
    inline ListSubscriptionGrantsRequest& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}
    inline ListSubscriptionGrantsRequest& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of subscription grants to return in a single call to
     * <code>ListSubscriptionGrants</code>. When the number of subscription grants to
     * be listed is greater than the value of <code>MaxResults</code>, the response
     * contains a <code>NextToken</code> value that you can use in a subsequent call to
     * <code>ListSubscriptionGrants</code> to list the next set of subscription
     * grants.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListSubscriptionGrantsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the number of subscription grants is greater than the default value for
     * the <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of subscription grants, the
     * response includes a pagination token named <code>NextToken</code>. You can
     * specify this <code>NextToken</code> value in a subsequent call to
     * <code>ListSubscriptionGrants</code> to list the next set of subscription
     * grants.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListSubscriptionGrantsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListSubscriptionGrantsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListSubscriptionGrantsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the owning project of the subscription grants.</p>
     */
    inline const Aws::String& GetOwningProjectId() const{ return m_owningProjectId; }
    inline bool OwningProjectIdHasBeenSet() const { return m_owningProjectIdHasBeenSet; }
    inline void SetOwningProjectId(const Aws::String& value) { m_owningProjectIdHasBeenSet = true; m_owningProjectId = value; }
    inline void SetOwningProjectId(Aws::String&& value) { m_owningProjectIdHasBeenSet = true; m_owningProjectId = std::move(value); }
    inline void SetOwningProjectId(const char* value) { m_owningProjectIdHasBeenSet = true; m_owningProjectId.assign(value); }
    inline ListSubscriptionGrantsRequest& WithOwningProjectId(const Aws::String& value) { SetOwningProjectId(value); return *this;}
    inline ListSubscriptionGrantsRequest& WithOwningProjectId(Aws::String&& value) { SetOwningProjectId(std::move(value)); return *this;}
    inline ListSubscriptionGrantsRequest& WithOwningProjectId(const char* value) { SetOwningProjectId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the way of sorting the results of this action.</p>
     */
    inline const SortKey& GetSortBy() const{ return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(const SortKey& value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline void SetSortBy(SortKey&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }
    inline ListSubscriptionGrantsRequest& WithSortBy(const SortKey& value) { SetSortBy(value); return *this;}
    inline ListSubscriptionGrantsRequest& WithSortBy(SortKey&& value) { SetSortBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the sort order of this action.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }
    inline ListSubscriptionGrantsRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}
    inline ListSubscriptionGrantsRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the subscribed listing.</p>
     */
    inline const Aws::String& GetSubscribedListingId() const{ return m_subscribedListingId; }
    inline bool SubscribedListingIdHasBeenSet() const { return m_subscribedListingIdHasBeenSet; }
    inline void SetSubscribedListingId(const Aws::String& value) { m_subscribedListingIdHasBeenSet = true; m_subscribedListingId = value; }
    inline void SetSubscribedListingId(Aws::String&& value) { m_subscribedListingIdHasBeenSet = true; m_subscribedListingId = std::move(value); }
    inline void SetSubscribedListingId(const char* value) { m_subscribedListingIdHasBeenSet = true; m_subscribedListingId.assign(value); }
    inline ListSubscriptionGrantsRequest& WithSubscribedListingId(const Aws::String& value) { SetSubscribedListingId(value); return *this;}
    inline ListSubscriptionGrantsRequest& WithSubscribedListingId(Aws::String&& value) { SetSubscribedListingId(std::move(value)); return *this;}
    inline ListSubscriptionGrantsRequest& WithSubscribedListingId(const char* value) { SetSubscribedListingId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the subscription.</p>
     */
    inline const Aws::String& GetSubscriptionId() const{ return m_subscriptionId; }
    inline bool SubscriptionIdHasBeenSet() const { return m_subscriptionIdHasBeenSet; }
    inline void SetSubscriptionId(const Aws::String& value) { m_subscriptionIdHasBeenSet = true; m_subscriptionId = value; }
    inline void SetSubscriptionId(Aws::String&& value) { m_subscriptionIdHasBeenSet = true; m_subscriptionId = std::move(value); }
    inline void SetSubscriptionId(const char* value) { m_subscriptionIdHasBeenSet = true; m_subscriptionId.assign(value); }
    inline ListSubscriptionGrantsRequest& WithSubscriptionId(const Aws::String& value) { SetSubscriptionId(value); return *this;}
    inline ListSubscriptionGrantsRequest& WithSubscriptionId(Aws::String&& value) { SetSubscriptionId(std::move(value)); return *this;}
    inline ListSubscriptionGrantsRequest& WithSubscriptionId(const char* value) { SetSubscriptionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the subscription target.</p>
     */
    inline const Aws::String& GetSubscriptionTargetId() const{ return m_subscriptionTargetId; }
    inline bool SubscriptionTargetIdHasBeenSet() const { return m_subscriptionTargetIdHasBeenSet; }
    inline void SetSubscriptionTargetId(const Aws::String& value) { m_subscriptionTargetIdHasBeenSet = true; m_subscriptionTargetId = value; }
    inline void SetSubscriptionTargetId(Aws::String&& value) { m_subscriptionTargetIdHasBeenSet = true; m_subscriptionTargetId = std::move(value); }
    inline void SetSubscriptionTargetId(const char* value) { m_subscriptionTargetIdHasBeenSet = true; m_subscriptionTargetId.assign(value); }
    inline ListSubscriptionGrantsRequest& WithSubscriptionTargetId(const Aws::String& value) { SetSubscriptionTargetId(value); return *this;}
    inline ListSubscriptionGrantsRequest& WithSubscriptionTargetId(Aws::String&& value) { SetSubscriptionTargetId(std::move(value)); return *this;}
    inline ListSubscriptionGrantsRequest& WithSubscriptionTargetId(const char* value) { SetSubscriptionTargetId(value); return *this;}
    ///@}
  private:

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

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

    Aws::String m_subscribedListingId;
    bool m_subscribedListingIdHasBeenSet = false;

    Aws::String m_subscriptionId;
    bool m_subscriptionIdHasBeenSet = false;

    Aws::String m_subscriptionTargetId;
    bool m_subscriptionTargetIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
