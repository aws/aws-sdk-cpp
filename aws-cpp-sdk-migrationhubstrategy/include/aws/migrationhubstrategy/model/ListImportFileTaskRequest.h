﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendationsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

  /**
   */
  class AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ListImportFileTaskRequest : public MigrationHubStrategyRecommendationsRequest
  {
  public:
    ListImportFileTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListImportFileTask"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p> The total number of items to return. The maximum value is 100. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> The total number of items to return. The maximum value is 100. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p> The total number of items to return. The maximum value is 100. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> The total number of items to return. The maximum value is 100. </p>
     */
    inline ListImportFileTaskRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p> The token from a previous call that you use to retrieve the next set of
     * results. For example, if a previous call to this action returned 100 items, but
     * you set <code>maxResults</code> to 10. You'll receive a set of 10 results along
     * with a token. You then use the returned token to retrieve the next set of 10.
     * </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> The token from a previous call that you use to retrieve the next set of
     * results. For example, if a previous call to this action returned 100 items, but
     * you set <code>maxResults</code> to 10. You'll receive a set of 10 results along
     * with a token. You then use the returned token to retrieve the next set of 10.
     * </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> The token from a previous call that you use to retrieve the next set of
     * results. For example, if a previous call to this action returned 100 items, but
     * you set <code>maxResults</code> to 10. You'll receive a set of 10 results along
     * with a token. You then use the returned token to retrieve the next set of 10.
     * </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> The token from a previous call that you use to retrieve the next set of
     * results. For example, if a previous call to this action returned 100 items, but
     * you set <code>maxResults</code> to 10. You'll receive a set of 10 results along
     * with a token. You then use the returned token to retrieve the next set of 10.
     * </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> The token from a previous call that you use to retrieve the next set of
     * results. For example, if a previous call to this action returned 100 items, but
     * you set <code>maxResults</code> to 10. You'll receive a set of 10 results along
     * with a token. You then use the returned token to retrieve the next set of 10.
     * </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> The token from a previous call that you use to retrieve the next set of
     * results. For example, if a previous call to this action returned 100 items, but
     * you set <code>maxResults</code> to 10. You'll receive a set of 10 results along
     * with a token. You then use the returned token to retrieve the next set of 10.
     * </p>
     */
    inline ListImportFileTaskRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> The token from a previous call that you use to retrieve the next set of
     * results. For example, if a previous call to this action returned 100 items, but
     * you set <code>maxResults</code> to 10. You'll receive a set of 10 results along
     * with a token. You then use the returned token to retrieve the next set of 10.
     * </p>
     */
    inline ListImportFileTaskRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> The token from a previous call that you use to retrieve the next set of
     * results. For example, if a previous call to this action returned 100 items, but
     * you set <code>maxResults</code> to 10. You'll receive a set of 10 results along
     * with a token. You then use the returned token to retrieve the next set of 10.
     * </p>
     */
    inline ListImportFileTaskRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
