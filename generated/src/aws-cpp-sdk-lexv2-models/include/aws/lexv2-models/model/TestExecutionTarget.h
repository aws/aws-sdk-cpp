/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/BotAliasTestExecutionTarget.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Contains information about the bot used for the test execution.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/TestExecutionTarget">AWS
   * API Reference</a></p>
   */
  class TestExecutionTarget
  {
  public:
    AWS_LEXMODELSV2_API TestExecutionTarget();
    AWS_LEXMODELSV2_API TestExecutionTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API TestExecutionTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains information about the bot alias used for the test execution.</p>
     */
    inline const BotAliasTestExecutionTarget& GetBotAliasTarget() const{ return m_botAliasTarget; }

    /**
     * <p>Contains information about the bot alias used for the test execution.</p>
     */
    inline bool BotAliasTargetHasBeenSet() const { return m_botAliasTargetHasBeenSet; }

    /**
     * <p>Contains information about the bot alias used for the test execution.</p>
     */
    inline void SetBotAliasTarget(const BotAliasTestExecutionTarget& value) { m_botAliasTargetHasBeenSet = true; m_botAliasTarget = value; }

    /**
     * <p>Contains information about the bot alias used for the test execution.</p>
     */
    inline void SetBotAliasTarget(BotAliasTestExecutionTarget&& value) { m_botAliasTargetHasBeenSet = true; m_botAliasTarget = std::move(value); }

    /**
     * <p>Contains information about the bot alias used for the test execution.</p>
     */
    inline TestExecutionTarget& WithBotAliasTarget(const BotAliasTestExecutionTarget& value) { SetBotAliasTarget(value); return *this;}

    /**
     * <p>Contains information about the bot alias used for the test execution.</p>
     */
    inline TestExecutionTarget& WithBotAliasTarget(BotAliasTestExecutionTarget&& value) { SetBotAliasTarget(std::move(value)); return *this;}

  private:

    BotAliasTestExecutionTarget m_botAliasTarget;
    bool m_botAliasTargetHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
