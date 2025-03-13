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
    AWS_GAMELIFT_API ValidateMatchmakingRuleSetRequest() = default;

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
    inline const Aws::String& GetRuleSetBody() const { return m_ruleSetBody; }
    inline bool RuleSetBodyHasBeenSet() const { return m_ruleSetBodyHasBeenSet; }
    template<typename RuleSetBodyT = Aws::String>
    void SetRuleSetBody(RuleSetBodyT&& value) { m_ruleSetBodyHasBeenSet = true; m_ruleSetBody = std::forward<RuleSetBodyT>(value); }
    template<typename RuleSetBodyT = Aws::String>
    ValidateMatchmakingRuleSetRequest& WithRuleSetBody(RuleSetBodyT&& value) { SetRuleSetBody(std::forward<RuleSetBodyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ruleSetBody;
    bool m_ruleSetBodyHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
