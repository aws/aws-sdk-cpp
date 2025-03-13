/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/TestSetDiscrepancyReportBotAliasTarget.h>
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
   * <p>Contains information about the resource used for the test set discrepancy
   * report.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/TestSetDiscrepancyReportResourceTarget">AWS
   * API Reference</a></p>
   */
  class TestSetDiscrepancyReportResourceTarget
  {
  public:
    AWS_LEXMODELSV2_API TestSetDiscrepancyReportResourceTarget() = default;
    AWS_LEXMODELSV2_API TestSetDiscrepancyReportResourceTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API TestSetDiscrepancyReportResourceTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains information about the bot alias used as the resource for the test
     * set discrepancy report.</p>
     */
    inline const TestSetDiscrepancyReportBotAliasTarget& GetBotAliasTarget() const { return m_botAliasTarget; }
    inline bool BotAliasTargetHasBeenSet() const { return m_botAliasTargetHasBeenSet; }
    template<typename BotAliasTargetT = TestSetDiscrepancyReportBotAliasTarget>
    void SetBotAliasTarget(BotAliasTargetT&& value) { m_botAliasTargetHasBeenSet = true; m_botAliasTarget = std::forward<BotAliasTargetT>(value); }
    template<typename BotAliasTargetT = TestSetDiscrepancyReportBotAliasTarget>
    TestSetDiscrepancyReportResourceTarget& WithBotAliasTarget(BotAliasTargetT&& value) { SetBotAliasTarget(std::forward<BotAliasTargetT>(value)); return *this;}
    ///@}
  private:

    TestSetDiscrepancyReportBotAliasTarget m_botAliasTarget;
    bool m_botAliasTargetHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
