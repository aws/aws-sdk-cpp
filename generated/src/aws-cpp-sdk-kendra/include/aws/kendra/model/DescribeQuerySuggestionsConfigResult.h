/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/model/Mode.h>
#include <aws/kendra/model/QuerySuggestionsStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/kendra/model/AttributeSuggestionsDescribeConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace kendra
{
namespace Model
{
  class DescribeQuerySuggestionsConfigResult
  {
  public:
    AWS_KENDRA_API DescribeQuerySuggestionsConfigResult() = default;
    AWS_KENDRA_API DescribeQuerySuggestionsConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRA_API DescribeQuerySuggestionsConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Whether query suggestions are currently in <code>ENABLED</code> mode or
     * <code>LEARN_ONLY</code> mode.</p> <p>By default, Amazon Kendra enables query
     * suggestions.<code>LEARN_ONLY</code> turns off query suggestions for your users.
     * You can change the mode using the <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_UpdateQuerySuggestionsConfig.html">UpdateQuerySuggestionsConfig</a>
     * API.</p>
     */
    inline Mode GetMode() const { return m_mode; }
    inline void SetMode(Mode value) { m_modeHasBeenSet = true; m_mode = value; }
    inline DescribeQuerySuggestionsConfigResult& WithMode(Mode value) { SetMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the status of query suggestions settings is currently
     * <code>ACTIVE</code> or <code>UPDATING</code>.</p> <p>Active means the current
     * settings apply and Updating means your changed settings are in the process of
     * applying.</p>
     */
    inline QuerySuggestionsStatus GetStatus() const { return m_status; }
    inline void SetStatus(QuerySuggestionsStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeQuerySuggestionsConfigResult& WithStatus(QuerySuggestionsStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>How recent your queries are in your query log time window (in days).</p>
     */
    inline int GetQueryLogLookBackWindowInDays() const { return m_queryLogLookBackWindowInDays; }
    inline void SetQueryLogLookBackWindowInDays(int value) { m_queryLogLookBackWindowInDaysHasBeenSet = true; m_queryLogLookBackWindowInDays = value; }
    inline DescribeQuerySuggestionsConfigResult& WithQueryLogLookBackWindowInDays(int value) { SetQueryLogLookBackWindowInDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>TRUE</code> to use all queries, otherwise use only queries that
     * include user information to generate the query suggestions.</p>
     */
    inline bool GetIncludeQueriesWithoutUserInformation() const { return m_includeQueriesWithoutUserInformation; }
    inline void SetIncludeQueriesWithoutUserInformation(bool value) { m_includeQueriesWithoutUserInformationHasBeenSet = true; m_includeQueriesWithoutUserInformation = value; }
    inline DescribeQuerySuggestionsConfigResult& WithIncludeQueriesWithoutUserInformation(bool value) { SetIncludeQueriesWithoutUserInformation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum number of unique users who must search a query in order for the
     * query to be eligible to suggest to your users.</p>
     */
    inline int GetMinimumNumberOfQueryingUsers() const { return m_minimumNumberOfQueryingUsers; }
    inline void SetMinimumNumberOfQueryingUsers(int value) { m_minimumNumberOfQueryingUsersHasBeenSet = true; m_minimumNumberOfQueryingUsers = value; }
    inline DescribeQuerySuggestionsConfigResult& WithMinimumNumberOfQueryingUsers(int value) { SetMinimumNumberOfQueryingUsers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum number of times a query must be searched in order for the query
     * to be eligible to suggest to your users.</p>
     */
    inline int GetMinimumQueryCount() const { return m_minimumQueryCount; }
    inline void SetMinimumQueryCount(int value) { m_minimumQueryCountHasBeenSet = true; m_minimumQueryCount = value; }
    inline DescribeQuerySuggestionsConfigResult& WithMinimumQueryCount(int value) { SetMinimumQueryCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp when query suggestions for an index was last updated.</p>
     * <p>Amazon Kendra automatically updates suggestions every 24 hours, after you
     * change a setting or after you apply a <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/query-suggestions.html#query-suggestions-blocklist">block
     * list</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetLastSuggestionsBuildTime() const { return m_lastSuggestionsBuildTime; }
    template<typename LastSuggestionsBuildTimeT = Aws::Utils::DateTime>
    void SetLastSuggestionsBuildTime(LastSuggestionsBuildTimeT&& value) { m_lastSuggestionsBuildTimeHasBeenSet = true; m_lastSuggestionsBuildTime = std::forward<LastSuggestionsBuildTimeT>(value); }
    template<typename LastSuggestionsBuildTimeT = Aws::Utils::DateTime>
    DescribeQuerySuggestionsConfigResult& WithLastSuggestionsBuildTime(LastSuggestionsBuildTimeT&& value) { SetLastSuggestionsBuildTime(std::forward<LastSuggestionsBuildTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp when query suggestions for an index was last cleared.</p>
     * <p>After you clear suggestions, Amazon Kendra learns new suggestions based on
     * new queries added to the query log from the time you cleared suggestions. Amazon
     * Kendra only considers re-occurences of a query from the time you cleared
     * suggestions. </p>
     */
    inline const Aws::Utils::DateTime& GetLastClearTime() const { return m_lastClearTime; }
    template<typename LastClearTimeT = Aws::Utils::DateTime>
    void SetLastClearTime(LastClearTimeT&& value) { m_lastClearTimeHasBeenSet = true; m_lastClearTime = std::forward<LastClearTimeT>(value); }
    template<typename LastClearTimeT = Aws::Utils::DateTime>
    DescribeQuerySuggestionsConfigResult& WithLastClearTime(LastClearTimeT&& value) { SetLastClearTime(std::forward<LastClearTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current total count of query suggestions for an index.</p> <p>This count
     * can change when you update your query suggestions settings, if you filter out
     * certain queries from suggestions using a block list, and as the query log
     * accumulates more queries for Amazon Kendra to learn from.</p> <p>If the count is
     * much lower than you expected, it could be because Amazon Kendra needs more
     * queries in the query history to learn from or your current query suggestions
     * settings are too strict.</p>
     */
    inline int GetTotalSuggestionsCount() const { return m_totalSuggestionsCount; }
    inline void SetTotalSuggestionsCount(int value) { m_totalSuggestionsCountHasBeenSet = true; m_totalSuggestionsCount = value; }
    inline DescribeQuerySuggestionsConfigResult& WithTotalSuggestionsCount(int value) { SetTotalSuggestionsCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information for the document fields/attributes that you want to
     * base query suggestions on.</p>
     */
    inline const AttributeSuggestionsDescribeConfig& GetAttributeSuggestionsConfig() const { return m_attributeSuggestionsConfig; }
    template<typename AttributeSuggestionsConfigT = AttributeSuggestionsDescribeConfig>
    void SetAttributeSuggestionsConfig(AttributeSuggestionsConfigT&& value) { m_attributeSuggestionsConfigHasBeenSet = true; m_attributeSuggestionsConfig = std::forward<AttributeSuggestionsConfigT>(value); }
    template<typename AttributeSuggestionsConfigT = AttributeSuggestionsDescribeConfig>
    DescribeQuerySuggestionsConfigResult& WithAttributeSuggestionsConfig(AttributeSuggestionsConfigT&& value) { SetAttributeSuggestionsConfig(std::forward<AttributeSuggestionsConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeQuerySuggestionsConfigResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Mode m_mode{Mode::NOT_SET};
    bool m_modeHasBeenSet = false;

    QuerySuggestionsStatus m_status{QuerySuggestionsStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    int m_queryLogLookBackWindowInDays{0};
    bool m_queryLogLookBackWindowInDaysHasBeenSet = false;

    bool m_includeQueriesWithoutUserInformation{false};
    bool m_includeQueriesWithoutUserInformationHasBeenSet = false;

    int m_minimumNumberOfQueryingUsers{0};
    bool m_minimumNumberOfQueryingUsersHasBeenSet = false;

    int m_minimumQueryCount{0};
    bool m_minimumQueryCountHasBeenSet = false;

    Aws::Utils::DateTime m_lastSuggestionsBuildTime{};
    bool m_lastSuggestionsBuildTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastClearTime{};
    bool m_lastClearTimeHasBeenSet = false;

    int m_totalSuggestionsCount{0};
    bool m_totalSuggestionsCountHasBeenSet = false;

    AttributeSuggestionsDescribeConfig m_attributeSuggestionsConfig;
    bool m_attributeSuggestionsConfigHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
