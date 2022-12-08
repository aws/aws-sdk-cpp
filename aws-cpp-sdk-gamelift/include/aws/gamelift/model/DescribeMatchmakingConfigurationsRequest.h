/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   */
  class DescribeMatchmakingConfigurationsRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API DescribeMatchmakingConfigurationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeMatchmakingConfigurations"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique identifier for the matchmaking configuration(s) to retrieve. You can
     * use either the configuration name or ARN value. To request all existing
     * configurations, leave this parameter empty.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNames() const{ return m_names; }

    /**
     * <p>A unique identifier for the matchmaking configuration(s) to retrieve. You can
     * use either the configuration name or ARN value. To request all existing
     * configurations, leave this parameter empty.</p>
     */
    inline bool NamesHasBeenSet() const { return m_namesHasBeenSet; }

    /**
     * <p>A unique identifier for the matchmaking configuration(s) to retrieve. You can
     * use either the configuration name or ARN value. To request all existing
     * configurations, leave this parameter empty.</p>
     */
    inline void SetNames(const Aws::Vector<Aws::String>& value) { m_namesHasBeenSet = true; m_names = value; }

    /**
     * <p>A unique identifier for the matchmaking configuration(s) to retrieve. You can
     * use either the configuration name or ARN value. To request all existing
     * configurations, leave this parameter empty.</p>
     */
    inline void SetNames(Aws::Vector<Aws::String>&& value) { m_namesHasBeenSet = true; m_names = std::move(value); }

    /**
     * <p>A unique identifier for the matchmaking configuration(s) to retrieve. You can
     * use either the configuration name or ARN value. To request all existing
     * configurations, leave this parameter empty.</p>
     */
    inline DescribeMatchmakingConfigurationsRequest& WithNames(const Aws::Vector<Aws::String>& value) { SetNames(value); return *this;}

    /**
     * <p>A unique identifier for the matchmaking configuration(s) to retrieve. You can
     * use either the configuration name or ARN value. To request all existing
     * configurations, leave this parameter empty.</p>
     */
    inline DescribeMatchmakingConfigurationsRequest& WithNames(Aws::Vector<Aws::String>&& value) { SetNames(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the matchmaking configuration(s) to retrieve. You can
     * use either the configuration name or ARN value. To request all existing
     * configurations, leave this parameter empty.</p>
     */
    inline DescribeMatchmakingConfigurationsRequest& AddNames(const Aws::String& value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }

    /**
     * <p>A unique identifier for the matchmaking configuration(s) to retrieve. You can
     * use either the configuration name or ARN value. To request all existing
     * configurations, leave this parameter empty.</p>
     */
    inline DescribeMatchmakingConfigurationsRequest& AddNames(Aws::String&& value) { m_namesHasBeenSet = true; m_names.push_back(std::move(value)); return *this; }

    /**
     * <p>A unique identifier for the matchmaking configuration(s) to retrieve. You can
     * use either the configuration name or ARN value. To request all existing
     * configurations, leave this parameter empty.</p>
     */
    inline DescribeMatchmakingConfigurationsRequest& AddNames(const char* value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }


    /**
     * <p>A unique identifier for the matchmaking rule set. You can use either the rule
     * set name or ARN value. Use this parameter to retrieve all matchmaking
     * configurations that use this rule set.</p>
     */
    inline const Aws::String& GetRuleSetName() const{ return m_ruleSetName; }

    /**
     * <p>A unique identifier for the matchmaking rule set. You can use either the rule
     * set name or ARN value. Use this parameter to retrieve all matchmaking
     * configurations that use this rule set.</p>
     */
    inline bool RuleSetNameHasBeenSet() const { return m_ruleSetNameHasBeenSet; }

    /**
     * <p>A unique identifier for the matchmaking rule set. You can use either the rule
     * set name or ARN value. Use this parameter to retrieve all matchmaking
     * configurations that use this rule set.</p>
     */
    inline void SetRuleSetName(const Aws::String& value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName = value; }

    /**
     * <p>A unique identifier for the matchmaking rule set. You can use either the rule
     * set name or ARN value. Use this parameter to retrieve all matchmaking
     * configurations that use this rule set.</p>
     */
    inline void SetRuleSetName(Aws::String&& value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName = std::move(value); }

    /**
     * <p>A unique identifier for the matchmaking rule set. You can use either the rule
     * set name or ARN value. Use this parameter to retrieve all matchmaking
     * configurations that use this rule set.</p>
     */
    inline void SetRuleSetName(const char* value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName.assign(value); }

    /**
     * <p>A unique identifier for the matchmaking rule set. You can use either the rule
     * set name or ARN value. Use this parameter to retrieve all matchmaking
     * configurations that use this rule set.</p>
     */
    inline DescribeMatchmakingConfigurationsRequest& WithRuleSetName(const Aws::String& value) { SetRuleSetName(value); return *this;}

    /**
     * <p>A unique identifier for the matchmaking rule set. You can use either the rule
     * set name or ARN value. Use this parameter to retrieve all matchmaking
     * configurations that use this rule set.</p>
     */
    inline DescribeMatchmakingConfigurationsRequest& WithRuleSetName(Aws::String&& value) { SetRuleSetName(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the matchmaking rule set. You can use either the rule
     * set name or ARN value. Use this parameter to retrieve all matchmaking
     * configurations that use this rule set.</p>
     */
    inline DescribeMatchmakingConfigurationsRequest& WithRuleSetName(const char* value) { SetRuleSetName(value); return *this;}


    /**
     * <p>The maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages. This
     * parameter is limited to 10.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages. This
     * parameter is limited to 10.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages. This
     * parameter is limited to 10.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages. This
     * parameter is limited to 10.</p>
     */
    inline DescribeMatchmakingConfigurationsRequest& WithLimit(int value) { SetLimit(value); return *this;}


    /**
     * <p>A token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline DescribeMatchmakingConfigurationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline DescribeMatchmakingConfigurationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline DescribeMatchmakingConfigurationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_names;
    bool m_namesHasBeenSet = false;

    Aws::String m_ruleSetName;
    bool m_ruleSetNameHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
