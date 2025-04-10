﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents-data/IoTEventsData_EXPORTS.h>
#include <aws/iotevents-data/model/SimpleRuleEvaluation.h>
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
namespace IoTEventsData
{
namespace Model
{

  /**
   * <p>Information needed to evaluate data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/RuleEvaluation">AWS
   * API Reference</a></p>
   */
  class RuleEvaluation
  {
  public:
    AWS_IOTEVENTSDATA_API RuleEvaluation() = default;
    AWS_IOTEVENTSDATA_API RuleEvaluation(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTSDATA_API RuleEvaluation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTSDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information needed to compare two values with a comparison operator.</p>
     */
    inline const SimpleRuleEvaluation& GetSimpleRuleEvaluation() const { return m_simpleRuleEvaluation; }
    inline bool SimpleRuleEvaluationHasBeenSet() const { return m_simpleRuleEvaluationHasBeenSet; }
    template<typename SimpleRuleEvaluationT = SimpleRuleEvaluation>
    void SetSimpleRuleEvaluation(SimpleRuleEvaluationT&& value) { m_simpleRuleEvaluationHasBeenSet = true; m_simpleRuleEvaluation = std::forward<SimpleRuleEvaluationT>(value); }
    template<typename SimpleRuleEvaluationT = SimpleRuleEvaluation>
    RuleEvaluation& WithSimpleRuleEvaluation(SimpleRuleEvaluationT&& value) { SetSimpleRuleEvaluation(std::forward<SimpleRuleEvaluationT>(value)); return *this;}
    ///@}
  private:

    SimpleRuleEvaluation m_simpleRuleEvaluation;
    bool m_simpleRuleEvaluationHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
