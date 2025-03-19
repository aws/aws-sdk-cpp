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
    AWS_FMS_API ListDiscoveredResourcesRequest() = default;

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
    inline const Aws::Vector<Aws::String>& GetMemberAccountIds() const { return m_memberAccountIds; }
    inline bool MemberAccountIdsHasBeenSet() const { return m_memberAccountIdsHasBeenSet; }
    template<typename MemberAccountIdsT = Aws::Vector<Aws::String>>
    void SetMemberAccountIds(MemberAccountIdsT&& value) { m_memberAccountIdsHasBeenSet = true; m_memberAccountIds = std::forward<MemberAccountIdsT>(value); }
    template<typename MemberAccountIdsT = Aws::Vector<Aws::String>>
    ListDiscoveredResourcesRequest& WithMemberAccountIds(MemberAccountIdsT&& value) { SetMemberAccountIds(std::forward<MemberAccountIdsT>(value)); return *this;}
    template<typename MemberAccountIdsT = Aws::String>
    ListDiscoveredResourcesRequest& AddMemberAccountIds(MemberAccountIdsT&& value) { m_memberAccountIdsHasBeenSet = true; m_memberAccountIds.emplace_back(std::forward<MemberAccountIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of resources to discover.</p>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    ListDiscoveredResourcesRequest& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of objects that you want Firewall Manager to return for
     * this request. If more objects are available, in the response, Firewall Manager
     * provides a <code>NextToken</code> value that you can use in a subsequent call to
     * get the next batch of objects.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
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
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDiscoveredResourcesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_memberAccountIds;
    bool m_memberAccountIdsHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
