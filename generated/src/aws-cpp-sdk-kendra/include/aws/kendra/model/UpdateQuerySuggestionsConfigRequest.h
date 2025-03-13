/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/KendraRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/Mode.h>
#include <aws/kendra/model/AttributeSuggestionsUpdateConfig.h>
#include <utility>

namespace Aws
{
namespace kendra
{
namespace Model
{

  /**
   */
  class UpdateQuerySuggestionsConfigRequest : public KendraRequest
  {
  public:
    AWS_KENDRA_API UpdateQuerySuggestionsConfigRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateQuerySuggestionsConfig"; }

    AWS_KENDRA_API Aws::String SerializePayload() const override;

    AWS_KENDRA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The identifier of the index with query suggestions you want to update.</p>
     */
    inline const Aws::String& GetIndexId() const { return m_indexId; }
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }
    template<typename IndexIdT = Aws::String>
    void SetIndexId(IndexIdT&& value) { m_indexIdHasBeenSet = true; m_indexId = std::forward<IndexIdT>(value); }
    template<typename IndexIdT = Aws::String>
    UpdateQuerySuggestionsConfigRequest& WithIndexId(IndexIdT&& value) { SetIndexId(std::forward<IndexIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set the mode to <code>ENABLED</code> or <code>LEARN_ONLY</code>.</p> <p>By
     * default, Amazon Kendra enables query suggestions. <code>LEARN_ONLY</code> mode
     * allows you to turn off query suggestions. You can to update this at any
     * time.</p> <p>In <code>LEARN_ONLY</code> mode, Amazon Kendra continues to learn
     * from new queries to keep suggestions up to date for when you are ready to switch
     * to ENABLED mode again.</p>
     */
    inline Mode GetMode() const { return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(Mode value) { m_modeHasBeenSet = true; m_mode = value; }
    inline UpdateQuerySuggestionsConfigRequest& WithMode(Mode value) { SetMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>How recent your queries are in your query log time window.</p> <p>The time
     * window is the number of days from current day to past days.</p> <p>By default,
     * Amazon Kendra sets this to 180.</p>
     */
    inline int GetQueryLogLookBackWindowInDays() const { return m_queryLogLookBackWindowInDays; }
    inline bool QueryLogLookBackWindowInDaysHasBeenSet() const { return m_queryLogLookBackWindowInDaysHasBeenSet; }
    inline void SetQueryLogLookBackWindowInDays(int value) { m_queryLogLookBackWindowInDaysHasBeenSet = true; m_queryLogLookBackWindowInDays = value; }
    inline UpdateQuerySuggestionsConfigRequest& WithQueryLogLookBackWindowInDays(int value) { SetQueryLogLookBackWindowInDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>TRUE</code> to include queries without user information (i.e. all
     * queries, irrespective of the user), otherwise <code>FALSE</code> to only include
     * queries with user information.</p> <p>If you pass user information to Amazon
     * Kendra along with the queries, you can set this flag to <code>FALSE</code> and
     * instruct Amazon Kendra to only consider queries with user information.</p> <p>If
     * you set to <code>FALSE</code>, Amazon Kendra only considers queries searched at
     * least <code>MinimumQueryCount</code> times across
     * <code>MinimumNumberOfQueryingUsers</code> unique users for suggestions.</p>
     * <p>If you set to <code>TRUE</code>, Amazon Kendra ignores all user information
     * and learns from all queries.</p>
     */
    inline bool GetIncludeQueriesWithoutUserInformation() const { return m_includeQueriesWithoutUserInformation; }
    inline bool IncludeQueriesWithoutUserInformationHasBeenSet() const { return m_includeQueriesWithoutUserInformationHasBeenSet; }
    inline void SetIncludeQueriesWithoutUserInformation(bool value) { m_includeQueriesWithoutUserInformationHasBeenSet = true; m_includeQueriesWithoutUserInformation = value; }
    inline UpdateQuerySuggestionsConfigRequest& WithIncludeQueriesWithoutUserInformation(bool value) { SetIncludeQueriesWithoutUserInformation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum number of unique users who must search a query in order for the
     * query to be eligible to suggest to your users.</p> <p>Increasing this number
     * might decrease the number of suggestions. However, this ensures a query is
     * searched by many users and is truly popular to suggest to users.</p> <p>How you
     * tune this setting depends on your specific needs.</p>
     */
    inline int GetMinimumNumberOfQueryingUsers() const { return m_minimumNumberOfQueryingUsers; }
    inline bool MinimumNumberOfQueryingUsersHasBeenSet() const { return m_minimumNumberOfQueryingUsersHasBeenSet; }
    inline void SetMinimumNumberOfQueryingUsers(int value) { m_minimumNumberOfQueryingUsersHasBeenSet = true; m_minimumNumberOfQueryingUsers = value; }
    inline UpdateQuerySuggestionsConfigRequest& WithMinimumNumberOfQueryingUsers(int value) { SetMinimumNumberOfQueryingUsers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The the minimum number of times a query must be searched in order to be
     * eligible to suggest to your users.</p> <p>Decreasing this number increases the
     * number of suggestions. However, this affects the quality of suggestions as it
     * sets a low bar for a query to be considered popular to suggest to users.</p>
     * <p>How you tune this setting depends on your specific needs.</p>
     */
    inline int GetMinimumQueryCount() const { return m_minimumQueryCount; }
    inline bool MinimumQueryCountHasBeenSet() const { return m_minimumQueryCountHasBeenSet; }
    inline void SetMinimumQueryCount(int value) { m_minimumQueryCountHasBeenSet = true; m_minimumQueryCount = value; }
    inline UpdateQuerySuggestionsConfigRequest& WithMinimumQueryCount(int value) { SetMinimumQueryCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information for the document fields/attributes that you want to
     * base query suggestions on.</p>
     */
    inline const AttributeSuggestionsUpdateConfig& GetAttributeSuggestionsConfig() const { return m_attributeSuggestionsConfig; }
    inline bool AttributeSuggestionsConfigHasBeenSet() const { return m_attributeSuggestionsConfigHasBeenSet; }
    template<typename AttributeSuggestionsConfigT = AttributeSuggestionsUpdateConfig>
    void SetAttributeSuggestionsConfig(AttributeSuggestionsConfigT&& value) { m_attributeSuggestionsConfigHasBeenSet = true; m_attributeSuggestionsConfig = std::forward<AttributeSuggestionsConfigT>(value); }
    template<typename AttributeSuggestionsConfigT = AttributeSuggestionsUpdateConfig>
    UpdateQuerySuggestionsConfigRequest& WithAttributeSuggestionsConfig(AttributeSuggestionsConfigT&& value) { SetAttributeSuggestionsConfig(std::forward<AttributeSuggestionsConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet = false;

    Mode m_mode{Mode::NOT_SET};
    bool m_modeHasBeenSet = false;

    int m_queryLogLookBackWindowInDays{0};
    bool m_queryLogLookBackWindowInDaysHasBeenSet = false;

    bool m_includeQueriesWithoutUserInformation{false};
    bool m_includeQueriesWithoutUserInformationHasBeenSet = false;

    int m_minimumNumberOfQueryingUsers{0};
    bool m_minimumNumberOfQueryingUsersHasBeenSet = false;

    int m_minimumQueryCount{0};
    bool m_minimumQueryCountHasBeenSet = false;

    AttributeSuggestionsUpdateConfig m_attributeSuggestionsConfig;
    bool m_attributeSuggestionsConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
