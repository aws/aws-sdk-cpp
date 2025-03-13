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
    AWS_LEXMODELSV2_API TestExecutionTarget() = default;
    AWS_LEXMODELSV2_API TestExecutionTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API TestExecutionTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains information about the bot alias used for the test execution.</p>
     */
    inline const BotAliasTestExecutionTarget& GetBotAliasTarget() const { return m_botAliasTarget; }
    inline bool BotAliasTargetHasBeenSet() const { return m_botAliasTargetHasBeenSet; }
    template<typename BotAliasTargetT = BotAliasTestExecutionTarget>
    void SetBotAliasTarget(BotAliasTargetT&& value) { m_botAliasTargetHasBeenSet = true; m_botAliasTarget = std::forward<BotAliasTargetT>(value); }
    template<typename BotAliasTargetT = BotAliasTestExecutionTarget>
    TestExecutionTarget& WithBotAliasTarget(BotAliasTargetT&& value) { SetBotAliasTarget(std::forward<BotAliasTargetT>(value)); return *this;}
    ///@}
  private:

    BotAliasTestExecutionTarget m_botAliasTarget;
    bool m_botAliasTargetHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
