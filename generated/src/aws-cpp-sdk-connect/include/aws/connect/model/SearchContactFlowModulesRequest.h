﻿/**
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
    AWS_CONNECT_API SearchContactFlowModulesRequest();

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
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline SearchContactFlowModulesRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline SearchContactFlowModulesRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline SearchContactFlowModulesRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline SearchContactFlowModulesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline SearchContactFlowModulesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline SearchContactFlowModulesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline SearchContactFlowModulesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters to be applied to search results.</p>
     */
    inline const ContactFlowModuleSearchFilter& GetSearchFilter() const{ return m_searchFilter; }
    inline bool SearchFilterHasBeenSet() const { return m_searchFilterHasBeenSet; }
    inline void SetSearchFilter(const ContactFlowModuleSearchFilter& value) { m_searchFilterHasBeenSet = true; m_searchFilter = value; }
    inline void SetSearchFilter(ContactFlowModuleSearchFilter&& value) { m_searchFilterHasBeenSet = true; m_searchFilter = std::move(value); }
    inline SearchContactFlowModulesRequest& WithSearchFilter(const ContactFlowModuleSearchFilter& value) { SetSearchFilter(value); return *this;}
    inline SearchContactFlowModulesRequest& WithSearchFilter(ContactFlowModuleSearchFilter&& value) { SetSearchFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The search criteria to be used to return flow modules.</p>  <p>The
     * <code>name</code> and <code>description</code> fields support "contains" queries
     * with a minimum of 2 characters and a maximum of 25 characters. Any queries with
     * character lengths outside of this range will result in invalid results.</p>
     * 
     */
    inline const ContactFlowModuleSearchCriteria& GetSearchCriteria() const{ return m_searchCriteria; }
    inline bool SearchCriteriaHasBeenSet() const { return m_searchCriteriaHasBeenSet; }
    inline void SetSearchCriteria(const ContactFlowModuleSearchCriteria& value) { m_searchCriteriaHasBeenSet = true; m_searchCriteria = value; }
    inline void SetSearchCriteria(ContactFlowModuleSearchCriteria&& value) { m_searchCriteriaHasBeenSet = true; m_searchCriteria = std::move(value); }
    inline SearchContactFlowModulesRequest& WithSearchCriteria(const ContactFlowModuleSearchCriteria& value) { SetSearchCriteria(value); return *this;}
    inline SearchContactFlowModulesRequest& WithSearchCriteria(ContactFlowModuleSearchCriteria&& value) { SetSearchCriteria(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    ContactFlowModuleSearchFilter m_searchFilter;
    bool m_searchFilterHasBeenSet = false;

    ContactFlowModuleSearchCriteria m_searchCriteria;
    bool m_searchCriteriaHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
