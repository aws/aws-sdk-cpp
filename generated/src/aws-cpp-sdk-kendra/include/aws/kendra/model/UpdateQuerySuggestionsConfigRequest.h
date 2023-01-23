/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/KendraRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/Mode.h>
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
    AWS_KENDRA_API UpdateQuerySuggestionsConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateQuerySuggestionsConfig"; }

    AWS_KENDRA_API Aws::String SerializePayload() const override;

    AWS_KENDRA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The identifier of the index with query suggestions you want to update.</p>
     */
    inline const Aws::String& GetIndexId() const{ return m_indexId; }

    /**
     * <p> The identifier of the index with query suggestions you want to update.</p>
     */
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }

    /**
     * <p> The identifier of the index with query suggestions you want to update.</p>
     */
    inline void SetIndexId(const Aws::String& value) { m_indexIdHasBeenSet = true; m_indexId = value; }

    /**
     * <p> The identifier of the index with query suggestions you want to update.</p>
     */
    inline void SetIndexId(Aws::String&& value) { m_indexIdHasBeenSet = true; m_indexId = std::move(value); }

    /**
     * <p> The identifier of the index with query suggestions you want to update.</p>
     */
    inline void SetIndexId(const char* value) { m_indexIdHasBeenSet = true; m_indexId.assign(value); }

    /**
     * <p> The identifier of the index with query suggestions you want to update.</p>
     */
    inline UpdateQuerySuggestionsConfigRequest& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}

    /**
     * <p> The identifier of the index with query suggestions you want to update.</p>
     */
    inline UpdateQuerySuggestionsConfigRequest& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}

    /**
     * <p> The identifier of the index with query suggestions you want to update.</p>
     */
    inline UpdateQuerySuggestionsConfigRequest& WithIndexId(const char* value) { SetIndexId(value); return *this;}


    /**
     * <p>Set the mode to <code>ENABLED</code> or <code>LEARN_ONLY</code>.</p> <p>By
     * default, Amazon Kendra enables query suggestions. <code>LEARN_ONLY</code> mode
     * allows you to turn off query suggestions. You can to update this at any
     * time.</p> <p>In <code>LEARN_ONLY</code> mode, Amazon Kendra continues to learn
     * from new queries to keep suggestions up to date for when you are ready to switch
     * to ENABLED mode again.</p>
     */
    inline const Mode& GetMode() const{ return m_mode; }

    /**
     * <p>Set the mode to <code>ENABLED</code> or <code>LEARN_ONLY</code>.</p> <p>By
     * default, Amazon Kendra enables query suggestions. <code>LEARN_ONLY</code> mode
     * allows you to turn off query suggestions. You can to update this at any
     * time.</p> <p>In <code>LEARN_ONLY</code> mode, Amazon Kendra continues to learn
     * from new queries to keep suggestions up to date for when you are ready to switch
     * to ENABLED mode again.</p>
     */
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }

    /**
     * <p>Set the mode to <code>ENABLED</code> or <code>LEARN_ONLY</code>.</p> <p>By
     * default, Amazon Kendra enables query suggestions. <code>LEARN_ONLY</code> mode
     * allows you to turn off query suggestions. You can to update this at any
     * time.</p> <p>In <code>LEARN_ONLY</code> mode, Amazon Kendra continues to learn
     * from new queries to keep suggestions up to date for when you are ready to switch
     * to ENABLED mode again.</p>
     */
    inline void SetMode(const Mode& value) { m_modeHasBeenSet = true; m_mode = value; }

    /**
     * <p>Set the mode to <code>ENABLED</code> or <code>LEARN_ONLY</code>.</p> <p>By
     * default, Amazon Kendra enables query suggestions. <code>LEARN_ONLY</code> mode
     * allows you to turn off query suggestions. You can to update this at any
     * time.</p> <p>In <code>LEARN_ONLY</code> mode, Amazon Kendra continues to learn
     * from new queries to keep suggestions up to date for when you are ready to switch
     * to ENABLED mode again.</p>
     */
    inline void SetMode(Mode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }

    /**
     * <p>Set the mode to <code>ENABLED</code> or <code>LEARN_ONLY</code>.</p> <p>By
     * default, Amazon Kendra enables query suggestions. <code>LEARN_ONLY</code> mode
     * allows you to turn off query suggestions. You can to update this at any
     * time.</p> <p>In <code>LEARN_ONLY</code> mode, Amazon Kendra continues to learn
     * from new queries to keep suggestions up to date for when you are ready to switch
     * to ENABLED mode again.</p>
     */
    inline UpdateQuerySuggestionsConfigRequest& WithMode(const Mode& value) { SetMode(value); return *this;}

    /**
     * <p>Set the mode to <code>ENABLED</code> or <code>LEARN_ONLY</code>.</p> <p>By
     * default, Amazon Kendra enables query suggestions. <code>LEARN_ONLY</code> mode
     * allows you to turn off query suggestions. You can to update this at any
     * time.</p> <p>In <code>LEARN_ONLY</code> mode, Amazon Kendra continues to learn
     * from new queries to keep suggestions up to date for when you are ready to switch
     * to ENABLED mode again.</p>
     */
    inline UpdateQuerySuggestionsConfigRequest& WithMode(Mode&& value) { SetMode(std::move(value)); return *this;}


    /**
     * <p>How recent your queries are in your query log time window.</p> <p>The time
     * window is the number of days from current day to past days.</p> <p>By default,
     * Amazon Kendra sets this to 180.</p>
     */
    inline int GetQueryLogLookBackWindowInDays() const{ return m_queryLogLookBackWindowInDays; }

    /**
     * <p>How recent your queries are in your query log time window.</p> <p>The time
     * window is the number of days from current day to past days.</p> <p>By default,
     * Amazon Kendra sets this to 180.</p>
     */
    inline bool QueryLogLookBackWindowInDaysHasBeenSet() const { return m_queryLogLookBackWindowInDaysHasBeenSet; }

    /**
     * <p>How recent your queries are in your query log time window.</p> <p>The time
     * window is the number of days from current day to past days.</p> <p>By default,
     * Amazon Kendra sets this to 180.</p>
     */
    inline void SetQueryLogLookBackWindowInDays(int value) { m_queryLogLookBackWindowInDaysHasBeenSet = true; m_queryLogLookBackWindowInDays = value; }

    /**
     * <p>How recent your queries are in your query log time window.</p> <p>The time
     * window is the number of days from current day to past days.</p> <p>By default,
     * Amazon Kendra sets this to 180.</p>
     */
    inline UpdateQuerySuggestionsConfigRequest& WithQueryLogLookBackWindowInDays(int value) { SetQueryLogLookBackWindowInDays(value); return *this;}


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
    inline bool GetIncludeQueriesWithoutUserInformation() const{ return m_includeQueriesWithoutUserInformation; }

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
    inline bool IncludeQueriesWithoutUserInformationHasBeenSet() const { return m_includeQueriesWithoutUserInformationHasBeenSet; }

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
    inline void SetIncludeQueriesWithoutUserInformation(bool value) { m_includeQueriesWithoutUserInformationHasBeenSet = true; m_includeQueriesWithoutUserInformation = value; }

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
    inline UpdateQuerySuggestionsConfigRequest& WithIncludeQueriesWithoutUserInformation(bool value) { SetIncludeQueriesWithoutUserInformation(value); return *this;}


    /**
     * <p>The minimum number of unique users who must search a query in order for the
     * query to be eligible to suggest to your users.</p> <p>Increasing this number
     * might decrease the number of suggestions. However, this ensures a query is
     * searched by many users and is truly popular to suggest to users.</p> <p>How you
     * tune this setting depends on your specific needs.</p>
     */
    inline int GetMinimumNumberOfQueryingUsers() const{ return m_minimumNumberOfQueryingUsers; }

    /**
     * <p>The minimum number of unique users who must search a query in order for the
     * query to be eligible to suggest to your users.</p> <p>Increasing this number
     * might decrease the number of suggestions. However, this ensures a query is
     * searched by many users and is truly popular to suggest to users.</p> <p>How you
     * tune this setting depends on your specific needs.</p>
     */
    inline bool MinimumNumberOfQueryingUsersHasBeenSet() const { return m_minimumNumberOfQueryingUsersHasBeenSet; }

    /**
     * <p>The minimum number of unique users who must search a query in order for the
     * query to be eligible to suggest to your users.</p> <p>Increasing this number
     * might decrease the number of suggestions. However, this ensures a query is
     * searched by many users and is truly popular to suggest to users.</p> <p>How you
     * tune this setting depends on your specific needs.</p>
     */
    inline void SetMinimumNumberOfQueryingUsers(int value) { m_minimumNumberOfQueryingUsersHasBeenSet = true; m_minimumNumberOfQueryingUsers = value; }

    /**
     * <p>The minimum number of unique users who must search a query in order for the
     * query to be eligible to suggest to your users.</p> <p>Increasing this number
     * might decrease the number of suggestions. However, this ensures a query is
     * searched by many users and is truly popular to suggest to users.</p> <p>How you
     * tune this setting depends on your specific needs.</p>
     */
    inline UpdateQuerySuggestionsConfigRequest& WithMinimumNumberOfQueryingUsers(int value) { SetMinimumNumberOfQueryingUsers(value); return *this;}


    /**
     * <p>The the minimum number of times a query must be searched in order to be
     * eligible to suggest to your users.</p> <p>Decreasing this number increases the
     * number of suggestions. However, this affects the quality of suggestions as it
     * sets a low bar for a query to be considered popular to suggest to users.</p>
     * <p>How you tune this setting depends on your specific needs.</p>
     */
    inline int GetMinimumQueryCount() const{ return m_minimumQueryCount; }

    /**
     * <p>The the minimum number of times a query must be searched in order to be
     * eligible to suggest to your users.</p> <p>Decreasing this number increases the
     * number of suggestions. However, this affects the quality of suggestions as it
     * sets a low bar for a query to be considered popular to suggest to users.</p>
     * <p>How you tune this setting depends on your specific needs.</p>
     */
    inline bool MinimumQueryCountHasBeenSet() const { return m_minimumQueryCountHasBeenSet; }

    /**
     * <p>The the minimum number of times a query must be searched in order to be
     * eligible to suggest to your users.</p> <p>Decreasing this number increases the
     * number of suggestions. However, this affects the quality of suggestions as it
     * sets a low bar for a query to be considered popular to suggest to users.</p>
     * <p>How you tune this setting depends on your specific needs.</p>
     */
    inline void SetMinimumQueryCount(int value) { m_minimumQueryCountHasBeenSet = true; m_minimumQueryCount = value; }

    /**
     * <p>The the minimum number of times a query must be searched in order to be
     * eligible to suggest to your users.</p> <p>Decreasing this number increases the
     * number of suggestions. However, this affects the quality of suggestions as it
     * sets a low bar for a query to be considered popular to suggest to users.</p>
     * <p>How you tune this setting depends on your specific needs.</p>
     */
    inline UpdateQuerySuggestionsConfigRequest& WithMinimumQueryCount(int value) { SetMinimumQueryCount(value); return *this;}

  private:

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet = false;

    Mode m_mode;
    bool m_modeHasBeenSet = false;

    int m_queryLogLookBackWindowInDays;
    bool m_queryLogLookBackWindowInDaysHasBeenSet = false;

    bool m_includeQueriesWithoutUserInformation;
    bool m_includeQueriesWithoutUserInformationHasBeenSet = false;

    int m_minimumNumberOfQueryingUsers;
    bool m_minimumNumberOfQueryingUsersHasBeenSet = false;

    int m_minimumQueryCount;
    bool m_minimumQueryCountHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
