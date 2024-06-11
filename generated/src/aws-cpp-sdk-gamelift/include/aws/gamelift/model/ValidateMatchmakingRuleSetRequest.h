/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
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
  class ValidateMatchmakingRuleSetRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API ValidateMatchmakingRuleSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ValidateMatchmakingRuleSet"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A collection of matchmaking rules to validate, formatted as a JSON
     * string.</p>
     */
    inline const Aws::String& GetRuleSetBody() const{ return m_ruleSetBody; }
    inline bool RuleSetBodyHasBeenSet() const { return m_ruleSetBodyHasBeenSet; }
    inline void SetRuleSetBody(const Aws::String& value) { m_ruleSetBodyHasBeenSet = true; m_ruleSetBody = value; }
    inline void SetRuleSetBody(Aws::String&& value) { m_ruleSetBodyHasBeenSet = true; m_ruleSetBody = std::move(value); }
    inline void SetRuleSetBody(const char* value) { m_ruleSetBodyHasBeenSet = true; m_ruleSetBody.assign(value); }
    inline ValidateMatchmakingRuleSetRequest& WithRuleSetBody(const Aws::String& value) { SetRuleSetBody(value); return *this;}
    inline ValidateMatchmakingRuleSetRequest& WithRuleSetBody(Aws::String&& value) { SetRuleSetBody(std::move(value)); return *this;}
    inline ValidateMatchmakingRuleSetRequest& WithRuleSetBody(const char* value) { SetRuleSetBody(value); return *this;}
    ///@}
  private:

    Aws::String m_ruleSetBody;
    bool m_ruleSetBodyHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
