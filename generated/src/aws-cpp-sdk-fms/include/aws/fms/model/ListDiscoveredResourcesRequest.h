/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/fms/FMSRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace FMS
{
namespace Model
{

  /**
   */
  class ListDiscoveredResourcesRequest : public FMSRequest
  {
  public:
    AWS_FMS_API ListDiscoveredResourcesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDiscoveredResources"; }

    AWS_FMS_API Aws::String SerializePayload() const override;

    AWS_FMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Web Services account IDs to discover resources in. Only one
     * account is supported per request. The account must be a member of your
     * organization.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMemberAccountIds() const{ return m_memberAccountIds; }
    inline bool MemberAccountIdsHasBeenSet() const { return m_memberAccountIdsHasBeenSet; }
    inline void SetMemberAccountIds(const Aws::Vector<Aws::String>& value) { m_memberAccountIdsHasBeenSet = true; m_memberAccountIds = value; }
    inline void SetMemberAccountIds(Aws::Vector<Aws::String>&& value) { m_memberAccountIdsHasBeenSet = true; m_memberAccountIds = std::move(value); }
    inline ListDiscoveredResourcesRequest& WithMemberAccountIds(const Aws::Vector<Aws::String>& value) { SetMemberAccountIds(value); return *this;}
    inline ListDiscoveredResourcesRequest& WithMemberAccountIds(Aws::Vector<Aws::String>&& value) { SetMemberAccountIds(std::move(value)); return *this;}
    inline ListDiscoveredResourcesRequest& AddMemberAccountIds(const Aws::String& value) { m_memberAccountIdsHasBeenSet = true; m_memberAccountIds.push_back(value); return *this; }
    inline ListDiscoveredResourcesRequest& AddMemberAccountIds(Aws::String&& value) { m_memberAccountIdsHasBeenSet = true; m_memberAccountIds.push_back(std::move(value)); return *this; }
    inline ListDiscoveredResourcesRequest& AddMemberAccountIds(const char* value) { m_memberAccountIdsHasBeenSet = true; m_memberAccountIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of resources to discover.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }
    inline ListDiscoveredResourcesRequest& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}
    inline ListDiscoveredResourcesRequest& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}
    inline ListDiscoveredResourcesRequest& WithResourceType(const char* value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of objects that you want Firewall Manager to return for
     * this request. If more objects are available, in the response, Firewall Manager
     * provides a <code>NextToken</code> value that you can use in a subsequent call to
     * get the next batch of objects.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListDiscoveredResourcesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When you request a list of objects with a <code>MaxResults</code> setting, if
     * the number of objects that are still available for retrieval exceeds the maximum
     * you requested, Firewall Manager returns a <code>NextToken</code> value in the
     * response. To retrieve the next batch of objects, use the token returned from the
     * prior request in your next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListDiscoveredResourcesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDiscoveredResourcesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDiscoveredResourcesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_memberAccountIds;
    bool m_memberAccountIdsHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
