/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/iotevents/model/SimpleRule.h>
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
namespace IoTEvents
{
namespace Model
{

  /**
   * <p>Defines when your alarm is invoked.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/AlarmRule">AWS
   * API Reference</a></p>
   */
  class AlarmRule
  {
  public:
    AWS_IOTEVENTS_API AlarmRule() = default;
    AWS_IOTEVENTS_API AlarmRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API AlarmRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A rule that compares an input property value to a threshold value with a
     * comparison operator.</p>
     */
    inline const SimpleRule& GetSimpleRule() const { return m_simpleRule; }
    inline bool SimpleRuleHasBeenSet() const { return m_simpleRuleHasBeenSet; }
    template<typename SimpleRuleT = SimpleRule>
    void SetSimpleRule(SimpleRuleT&& value) { m_simpleRuleHasBeenSet = true; m_simpleRule = std::forward<SimpleRuleT>(value); }
    template<typename SimpleRuleT = SimpleRule>
    AlarmRule& WithSimpleRule(SimpleRuleT&& value) { SetSimpleRule(std::forward<SimpleRuleT>(value)); return *this;}
    ///@}
  private:

    SimpleRule m_simpleRule;
    bool m_simpleRuleHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
