/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/logs/model/QueryLanguage.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

  /**
   */
  class DescribeQueryDefinitionsRequest : public CloudWatchLogsRequest
  {
  public:
    AWS_CLOUDWATCHLOGS_API DescribeQueryDefinitionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeQueryDefinitions"; }

    AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The query language used for this query. For more information about the query
     * languages that CloudWatch Logs supports, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CWL_AnalyzeLogData_Languages.html">Supported
     * query languages</a>.</p>
     */
    inline QueryLanguage GetQueryLanguage() const { return m_queryLanguage; }
    inline bool QueryLanguageHasBeenSet() const { return m_queryLanguageHasBeenSet; }
    inline void SetQueryLanguage(QueryLanguage value) { m_queryLanguageHasBeenSet = true; m_queryLanguage = value; }
    inline DescribeQueryDefinitionsRequest& WithQueryLanguage(QueryLanguage value) { SetQueryLanguage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to filter your results to only the query definitions that
     * have names that start with the prefix you specify.</p>
     */
    inline const Aws::String& GetQueryDefinitionNamePrefix() const { return m_queryDefinitionNamePrefix; }
    inline bool QueryDefinitionNamePrefixHasBeenSet() const { return m_queryDefinitionNamePrefixHasBeenSet; }
    template<typename QueryDefinitionNamePrefixT = Aws::String>
    void SetQueryDefinitionNamePrefix(QueryDefinitionNamePrefixT&& value) { m_queryDefinitionNamePrefixHasBeenSet = true; m_queryDefinitionNamePrefix = std::forward<QueryDefinitionNamePrefixT>(value); }
    template<typename QueryDefinitionNamePrefixT = Aws::String>
    DescribeQueryDefinitionsRequest& WithQueryDefinitionNamePrefix(QueryDefinitionNamePrefixT&& value) { SetQueryDefinitionNamePrefix(std::forward<QueryDefinitionNamePrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Limits the number of returned query definitions to the specified number.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeQueryDefinitionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeQueryDefinitionsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    QueryLanguage m_queryLanguage{QueryLanguage::NOT_SET};
    bool m_queryLanguageHasBeenSet = false;

    Aws::String m_queryDefinitionNamePrefix;
    bool m_queryDefinitionNamePrefixHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
