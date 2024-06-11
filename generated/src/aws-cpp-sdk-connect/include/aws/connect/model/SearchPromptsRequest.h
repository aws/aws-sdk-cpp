﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/PromptSearchFilter.h>
#include <aws/connect/model/PromptSearchCriteria.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class SearchPromptsRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API SearchPromptsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchPrompts"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline SearchPromptsRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline SearchPromptsRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline SearchPromptsRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
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
    inline SearchPromptsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline SearchPromptsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline SearchPromptsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline SearchPromptsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters to be applied to search results.</p>
     */
    inline const PromptSearchFilter& GetSearchFilter() const{ return m_searchFilter; }
    inline bool SearchFilterHasBeenSet() const { return m_searchFilterHasBeenSet; }
    inline void SetSearchFilter(const PromptSearchFilter& value) { m_searchFilterHasBeenSet = true; m_searchFilter = value; }
    inline void SetSearchFilter(PromptSearchFilter&& value) { m_searchFilterHasBeenSet = true; m_searchFilter = std::move(value); }
    inline SearchPromptsRequest& WithSearchFilter(const PromptSearchFilter& value) { SetSearchFilter(value); return *this;}
    inline SearchPromptsRequest& WithSearchFilter(PromptSearchFilter&& value) { SetSearchFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The search criteria to be used to return prompts.</p>
     */
    inline const PromptSearchCriteria& GetSearchCriteria() const{ return m_searchCriteria; }
    inline bool SearchCriteriaHasBeenSet() const { return m_searchCriteriaHasBeenSet; }
    inline void SetSearchCriteria(const PromptSearchCriteria& value) { m_searchCriteriaHasBeenSet = true; m_searchCriteria = value; }
    inline void SetSearchCriteria(PromptSearchCriteria&& value) { m_searchCriteriaHasBeenSet = true; m_searchCriteria = std::move(value); }
    inline SearchPromptsRequest& WithSearchCriteria(const PromptSearchCriteria& value) { SetSearchCriteria(value); return *this;}
    inline SearchPromptsRequest& WithSearchCriteria(PromptSearchCriteria&& value) { SetSearchCriteria(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    PromptSearchFilter m_searchFilter;
    bool m_searchFilterHasBeenSet = false;

    PromptSearchCriteria m_searchCriteria;
    bool m_searchCriteriaHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
