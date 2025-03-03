/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/QueryLanguage.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CloudWatchLogs
{
namespace Model
{

  /**
   * <p>This structure contains details about a saved CloudWatch Logs Insights query
   * definition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/QueryDefinition">AWS
   * API Reference</a></p>
   */
  class QueryDefinition
  {
  public:
    AWS_CLOUDWATCHLOGS_API QueryDefinition() = default;
    AWS_CLOUDWATCHLOGS_API QueryDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API QueryDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline QueryDefinition& WithQueryLanguage(QueryLanguage value) { SetQueryLanguage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of the query definition.</p>
     */
    inline const Aws::String& GetQueryDefinitionId() const { return m_queryDefinitionId; }
    inline bool QueryDefinitionIdHasBeenSet() const { return m_queryDefinitionIdHasBeenSet; }
    template<typename QueryDefinitionIdT = Aws::String>
    void SetQueryDefinitionId(QueryDefinitionIdT&& value) { m_queryDefinitionIdHasBeenSet = true; m_queryDefinitionId = std::forward<QueryDefinitionIdT>(value); }
    template<typename QueryDefinitionIdT = Aws::String>
    QueryDefinition& WithQueryDefinitionId(QueryDefinitionIdT&& value) { SetQueryDefinitionId(std::forward<QueryDefinitionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the query definition.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    QueryDefinition& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The query string to use for this definition. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CWL_QuerySyntax.html">CloudWatch
     * Logs Insights Query Syntax</a>.</p>
     */
    inline const Aws::String& GetQueryString() const { return m_queryString; }
    inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }
    template<typename QueryStringT = Aws::String>
    void SetQueryString(QueryStringT&& value) { m_queryStringHasBeenSet = true; m_queryString = std::forward<QueryStringT>(value); }
    template<typename QueryStringT = Aws::String>
    QueryDefinition& WithQueryString(QueryStringT&& value) { SetQueryString(std::forward<QueryStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that the query definition was most recently modified.</p>
     */
    inline long long GetLastModified() const { return m_lastModified; }
    inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }
    inline void SetLastModified(long long value) { m_lastModifiedHasBeenSet = true; m_lastModified = value; }
    inline QueryDefinition& WithLastModified(long long value) { SetLastModified(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this query definition contains a list of log groups that it is limited to,
     * that list appears here.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogGroupNames() const { return m_logGroupNames; }
    inline bool LogGroupNamesHasBeenSet() const { return m_logGroupNamesHasBeenSet; }
    template<typename LogGroupNamesT = Aws::Vector<Aws::String>>
    void SetLogGroupNames(LogGroupNamesT&& value) { m_logGroupNamesHasBeenSet = true; m_logGroupNames = std::forward<LogGroupNamesT>(value); }
    template<typename LogGroupNamesT = Aws::Vector<Aws::String>>
    QueryDefinition& WithLogGroupNames(LogGroupNamesT&& value) { SetLogGroupNames(std::forward<LogGroupNamesT>(value)); return *this;}
    template<typename LogGroupNamesT = Aws::String>
    QueryDefinition& AddLogGroupNames(LogGroupNamesT&& value) { m_logGroupNamesHasBeenSet = true; m_logGroupNames.emplace_back(std::forward<LogGroupNamesT>(value)); return *this; }
    ///@}
  private:

    QueryLanguage m_queryLanguage{QueryLanguage::NOT_SET};
    bool m_queryLanguageHasBeenSet = false;

    Aws::String m_queryDefinitionId;
    bool m_queryDefinitionIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_queryString;
    bool m_queryStringHasBeenSet = false;

    long long m_lastModified{0};
    bool m_lastModifiedHasBeenSet = false;

    Aws::Vector<Aws::String> m_logGroupNames;
    bool m_logGroupNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
