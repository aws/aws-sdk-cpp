/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace FraudDetector
{
namespace Model
{

  /**
   * <p> The details of the event variable's impact on the prediction score.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/VariableImpactExplanation">AWS
   * API Reference</a></p>
   */
  class VariableImpactExplanation
  {
  public:
    AWS_FRAUDDETECTOR_API VariableImpactExplanation() = default;
    AWS_FRAUDDETECTOR_API VariableImpactExplanation(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API VariableImpactExplanation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The event variable name. </p>
     */
    inline const Aws::String& GetEventVariableName() const { return m_eventVariableName; }
    inline bool EventVariableNameHasBeenSet() const { return m_eventVariableNameHasBeenSet; }
    template<typename EventVariableNameT = Aws::String>
    void SetEventVariableName(EventVariableNameT&& value) { m_eventVariableNameHasBeenSet = true; m_eventVariableName = std::forward<EventVariableNameT>(value); }
    template<typename EventVariableNameT = Aws::String>
    VariableImpactExplanation& WithEventVariableName(EventVariableNameT&& value) { SetEventVariableName(std::forward<EventVariableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The event variable's relative impact in terms of magnitude on the prediction
     * scores. The relative impact values consist of a numerical rating (0-5, 5 being
     * the highest) and direction (increased/decreased) impact of the fraud risk. </p>
     */
    inline const Aws::String& GetRelativeImpact() const { return m_relativeImpact; }
    inline bool RelativeImpactHasBeenSet() const { return m_relativeImpactHasBeenSet; }
    template<typename RelativeImpactT = Aws::String>
    void SetRelativeImpact(RelativeImpactT&& value) { m_relativeImpactHasBeenSet = true; m_relativeImpact = std::forward<RelativeImpactT>(value); }
    template<typename RelativeImpactT = Aws::String>
    VariableImpactExplanation& WithRelativeImpact(RelativeImpactT&& value) { SetRelativeImpact(std::forward<RelativeImpactT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The raw, uninterpreted value represented as log-odds of the fraud. These
     * values are usually between -10 to +10, but range from - infinity to +
     * infinity.</p> <ul> <li> <p>A positive value indicates that the variable drove
     * the risk score up.</p> </li> <li> <p>A negative value indicates that the
     * variable drove the risk score down.</p> </li> </ul>
     */
    inline double GetLogOddsImpact() const { return m_logOddsImpact; }
    inline bool LogOddsImpactHasBeenSet() const { return m_logOddsImpactHasBeenSet; }
    inline void SetLogOddsImpact(double value) { m_logOddsImpactHasBeenSet = true; m_logOddsImpact = value; }
    inline VariableImpactExplanation& WithLogOddsImpact(double value) { SetLogOddsImpact(value); return *this;}
    ///@}
  private:

    Aws::String m_eventVariableName;
    bool m_eventVariableNameHasBeenSet = false;

    Aws::String m_relativeImpact;
    bool m_relativeImpactHasBeenSet = false;

    double m_logOddsImpact{0.0};
    bool m_logOddsImpactHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
