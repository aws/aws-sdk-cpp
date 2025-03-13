/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudcontrol/CloudControlApi_EXPORTS.h>
#include <aws/cloudcontrol/CloudControlApiRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudcontrol/model/ResourceRequestStatusFilter.h>
#include <utility>

namespace Aws
{
namespace CloudControlApi
{
namespace Model
{

  /**
   */
  class ListResourceRequestsRequest : public CloudControlApiRequest
  {
  public:
    AWS_CLOUDCONTROLAPI_API ListResourceRequestsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListResourceRequests"; }

    AWS_CLOUDCONTROLAPI_API Aws::String SerializePayload() const override;

    AWS_CLOUDCONTROLAPI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The maximum number of results to be returned with a single call. If the
     * number of available results exceeds this maximum, the response includes a
     * <code>NextToken</code> value that you can assign to the <code>NextToken</code>
     * request parameter to get the next set of results.</p> <p>The default is
     * <code>20</code>.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListResourceRequestsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the previous paginated request didn't return all of the remaining results,
     * the response object's <code>NextToken</code> parameter value is set to a token.
     * To retrieve the next set of results, call this action again and assign that
     * token to the request object's <code>NextToken</code> parameter. If there are no
     * remaining results, the previous response object's <code>NextToken</code>
     * parameter is set to <code>null</code>.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListResourceRequestsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filter criteria to apply to the requests returned.</p>
     */
    inline const ResourceRequestStatusFilter& GetResourceRequestStatusFilter() const { return m_resourceRequestStatusFilter; }
    inline bool ResourceRequestStatusFilterHasBeenSet() const { return m_resourceRequestStatusFilterHasBeenSet; }
    template<typename ResourceRequestStatusFilterT = ResourceRequestStatusFilter>
    void SetResourceRequestStatusFilter(ResourceRequestStatusFilterT&& value) { m_resourceRequestStatusFilterHasBeenSet = true; m_resourceRequestStatusFilter = std::forward<ResourceRequestStatusFilterT>(value); }
    template<typename ResourceRequestStatusFilterT = ResourceRequestStatusFilter>
    ListResourceRequestsRequest& WithResourceRequestStatusFilter(ResourceRequestStatusFilterT&& value) { SetResourceRequestStatusFilter(std::forward<ResourceRequestStatusFilterT>(value)); return *this;}
    ///@}
  private:

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResourceRequestStatusFilter m_resourceRequestStatusFilter;
    bool m_resourceRequestStatusFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudControlApi
} // namespace Aws
