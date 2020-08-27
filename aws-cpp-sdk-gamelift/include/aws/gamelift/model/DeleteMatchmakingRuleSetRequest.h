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
   * <p>Represents the input for a request operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteMatchmakingRuleSetInput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API DeleteMatchmakingRuleSetRequest : public GameLiftRequest
  {
  public:
    DeleteMatchmakingRuleSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteMatchmakingRuleSet"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique identifier for a matchmaking rule set to be deleted. (Note: The rule
     * set name is different from the optional "name" field in the rule set body.) You
     * can use either the rule set name or ARN value.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A unique identifier for a matchmaking rule set to be deleted. (Note: The rule
     * set name is different from the optional "name" field in the rule set body.) You
     * can use either the rule set name or ARN value.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A unique identifier for a matchmaking rule set to be deleted. (Note: The rule
     * set name is different from the optional "name" field in the rule set body.) You
     * can use either the rule set name or ARN value.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A unique identifier for a matchmaking rule set to be deleted. (Note: The rule
     * set name is different from the optional "name" field in the rule set body.) You
     * can use either the rule set name or ARN value.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A unique identifier for a matchmaking rule set to be deleted. (Note: The rule
     * set name is different from the optional "name" field in the rule set body.) You
     * can use either the rule set name or ARN value.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A unique identifier for a matchmaking rule set to be deleted. (Note: The rule
     * set name is different from the optional "name" field in the rule set body.) You
     * can use either the rule set name or ARN value.</p>
     */
    inline DeleteMatchmakingRuleSetRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A unique identifier for a matchmaking rule set to be deleted. (Note: The rule
     * set name is different from the optional "name" field in the rule set body.) You
     * can use either the rule set name or ARN value.</p>
     */
    inline DeleteMatchmakingRuleSetRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for a matchmaking rule set to be deleted. (Note: The rule
     * set name is different from the optional "name" field in the rule set body.) You
     * can use either the rule set name or ARN value.</p>
     */
    inline DeleteMatchmakingRuleSetRequest& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
