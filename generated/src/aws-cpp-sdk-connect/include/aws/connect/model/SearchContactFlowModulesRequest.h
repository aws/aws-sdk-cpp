/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/ContactFlowModuleSearchFilter.h>
#include <aws/connect/model/ContactFlowModuleSearchCriteria.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class SearchContactFlowModulesRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API SearchContactFlowModulesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchContactFlowModules"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instance ID
     * in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    SearchContactFlowModulesRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    SearchContactFlowModulesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline SearchContactFlowModulesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters to be applied to search results.</p>
     */
    inline const ContactFlowModuleSearchFilter& GetSearchFilter() const { return m_searchFilter; }
    inline bool SearchFilterHasBeenSet() const { return m_searchFilterHasBeenSet; }
    template<typename SearchFilterT = ContactFlowModuleSearchFilter>
    void SetSearchFilter(SearchFilterT&& value) { m_searchFilterHasBeenSet = true; m_searchFilter = std::forward<SearchFilterT>(value); }
    template<typename SearchFilterT = ContactFlowModuleSearchFilter>
    SearchContactFlowModulesRequest& WithSearchFilter(SearchFilterT&& value) { SetSearchFilter(std::forward<SearchFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The search criteria to be used to return flow modules.</p>  <p>The
     * <code>name</code> and <code>description</code> fields support "contains" queries
     * with a minimum of 2 characters and a maximum of 25 characters. Any queries with
     * character lengths outside of this range will result in invalid results.</p>
     * 
     */
    inline const ContactFlowModuleSearchCriteria& GetSearchCriteria() const { return m_searchCriteria; }
    inline bool SearchCriteriaHasBeenSet() const { return m_searchCriteriaHasBeenSet; }
    template<typename SearchCriteriaT = ContactFlowModuleSearchCriteria>
    void SetSearchCriteria(SearchCriteriaT&& value) { m_searchCriteriaHasBeenSet = true; m_searchCriteria = std::forward<SearchCriteriaT>(value); }
    template<typename SearchCriteriaT = ContactFlowModuleSearchCriteria>
    SearchContactFlowModulesRequest& WithSearchCriteria(SearchCriteriaT&& value) { SetSearchCriteria(std::forward<SearchCriteriaT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    ContactFlowModuleSearchFilter m_searchFilter;
    bool m_searchFilterHasBeenSet = false;

    ContactFlowModuleSearchCriteria m_searchCriteria;
    bool m_searchCriteriaHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
