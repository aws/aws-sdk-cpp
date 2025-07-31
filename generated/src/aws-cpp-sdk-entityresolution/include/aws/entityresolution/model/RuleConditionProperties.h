/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/entityresolution/model/RuleCondition.h>
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
namespace EntityResolution
{
namespace Model
{

  /**
   * <p>The properties of a rule condition that provides the ability to use more
   * complex syntax.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/entityresolution-2018-05-10/RuleConditionProperties">AWS
   * API Reference</a></p>
   */
  class RuleConditionProperties
  {
  public:
    AWS_ENTITYRESOLUTION_API RuleConditionProperties() = default;
    AWS_ENTITYRESOLUTION_API RuleConditionProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API RuleConditionProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A list of rule objects, each of which have fields <code>ruleName</code> and
     * <code>condition</code>. </p>
     */
    inline const Aws::Vector<RuleCondition>& GetRules() const { return m_rules; }
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }
    template<typename RulesT = Aws::Vector<RuleCondition>>
    void SetRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules = std::forward<RulesT>(value); }
    template<typename RulesT = Aws::Vector<RuleCondition>>
    RuleConditionProperties& WithRules(RulesT&& value) { SetRules(std::forward<RulesT>(value)); return *this;}
    template<typename RulesT = RuleCondition>
    RuleConditionProperties& AddRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules.emplace_back(std::forward<RulesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<RuleCondition> m_rules;
    bool m_rulesHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
