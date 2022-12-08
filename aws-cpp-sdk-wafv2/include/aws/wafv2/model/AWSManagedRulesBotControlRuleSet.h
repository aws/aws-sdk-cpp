/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/InspectionLevel.h>
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
namespace WAFV2
{
namespace Model
{

  /**
   * <p>Details for your use of the Bot Control managed rule group, used in
   * <code>ManagedRuleGroupConfig</code>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/AWSManagedRulesBotControlRuleSet">AWS
   * API Reference</a></p>
   */
  class AWSManagedRulesBotControlRuleSet
  {
  public:
    AWS_WAFV2_API AWSManagedRulesBotControlRuleSet();
    AWS_WAFV2_API AWSManagedRulesBotControlRuleSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API AWSManagedRulesBotControlRuleSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The inspection level to use for the Bot Control rule group. The common level
     * is the least expensive. The targeted level includes all common level rules and
     * adds rules with more advanced inspection criteria. For details, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/aws-managed-rule-groups-bot.html">WAF
     * Bot Control rule group</a>.</p>
     */
    inline const InspectionLevel& GetInspectionLevel() const{ return m_inspectionLevel; }

    /**
     * <p>The inspection level to use for the Bot Control rule group. The common level
     * is the least expensive. The targeted level includes all common level rules and
     * adds rules with more advanced inspection criteria. For details, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/aws-managed-rule-groups-bot.html">WAF
     * Bot Control rule group</a>.</p>
     */
    inline bool InspectionLevelHasBeenSet() const { return m_inspectionLevelHasBeenSet; }

    /**
     * <p>The inspection level to use for the Bot Control rule group. The common level
     * is the least expensive. The targeted level includes all common level rules and
     * adds rules with more advanced inspection criteria. For details, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/aws-managed-rule-groups-bot.html">WAF
     * Bot Control rule group</a>.</p>
     */
    inline void SetInspectionLevel(const InspectionLevel& value) { m_inspectionLevelHasBeenSet = true; m_inspectionLevel = value; }

    /**
     * <p>The inspection level to use for the Bot Control rule group. The common level
     * is the least expensive. The targeted level includes all common level rules and
     * adds rules with more advanced inspection criteria. For details, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/aws-managed-rule-groups-bot.html">WAF
     * Bot Control rule group</a>.</p>
     */
    inline void SetInspectionLevel(InspectionLevel&& value) { m_inspectionLevelHasBeenSet = true; m_inspectionLevel = std::move(value); }

    /**
     * <p>The inspection level to use for the Bot Control rule group. The common level
     * is the least expensive. The targeted level includes all common level rules and
     * adds rules with more advanced inspection criteria. For details, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/aws-managed-rule-groups-bot.html">WAF
     * Bot Control rule group</a>.</p>
     */
    inline AWSManagedRulesBotControlRuleSet& WithInspectionLevel(const InspectionLevel& value) { SetInspectionLevel(value); return *this;}

    /**
     * <p>The inspection level to use for the Bot Control rule group. The common level
     * is the least expensive. The targeted level includes all common level rules and
     * adds rules with more advanced inspection criteria. For details, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/aws-managed-rule-groups-bot.html">WAF
     * Bot Control rule group</a>.</p>
     */
    inline AWSManagedRulesBotControlRuleSet& WithInspectionLevel(InspectionLevel&& value) { SetInspectionLevel(std::move(value)); return *this;}

  private:

    InspectionLevel m_inspectionLevel;
    bool m_inspectionLevelHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
