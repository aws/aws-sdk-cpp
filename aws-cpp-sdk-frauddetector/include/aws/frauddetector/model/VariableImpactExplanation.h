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
    AWS_FRAUDDETECTOR_API VariableImpactExplanation();
    AWS_FRAUDDETECTOR_API VariableImpactExplanation(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API VariableImpactExplanation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The event variable name. </p>
     */
    inline const Aws::String& GetEventVariableName() const{ return m_eventVariableName; }

    /**
     * <p> The event variable name. </p>
     */
    inline bool EventVariableNameHasBeenSet() const { return m_eventVariableNameHasBeenSet; }

    /**
     * <p> The event variable name. </p>
     */
    inline void SetEventVariableName(const Aws::String& value) { m_eventVariableNameHasBeenSet = true; m_eventVariableName = value; }

    /**
     * <p> The event variable name. </p>
     */
    inline void SetEventVariableName(Aws::String&& value) { m_eventVariableNameHasBeenSet = true; m_eventVariableName = std::move(value); }

    /**
     * <p> The event variable name. </p>
     */
    inline void SetEventVariableName(const char* value) { m_eventVariableNameHasBeenSet = true; m_eventVariableName.assign(value); }

    /**
     * <p> The event variable name. </p>
     */
    inline VariableImpactExplanation& WithEventVariableName(const Aws::String& value) { SetEventVariableName(value); return *this;}

    /**
     * <p> The event variable name. </p>
     */
    inline VariableImpactExplanation& WithEventVariableName(Aws::String&& value) { SetEventVariableName(std::move(value)); return *this;}

    /**
     * <p> The event variable name. </p>
     */
    inline VariableImpactExplanation& WithEventVariableName(const char* value) { SetEventVariableName(value); return *this;}


    /**
     * <p> The event variable's relative impact in terms of magnitude on the prediction
     * scores. The relative impact values consist of a numerical rating (0-5, 5 being
     * the highest) and direction (increased/decreased) impact of the fraud risk. </p>
     */
    inline const Aws::String& GetRelativeImpact() const{ return m_relativeImpact; }

    /**
     * <p> The event variable's relative impact in terms of magnitude on the prediction
     * scores. The relative impact values consist of a numerical rating (0-5, 5 being
     * the highest) and direction (increased/decreased) impact of the fraud risk. </p>
     */
    inline bool RelativeImpactHasBeenSet() const { return m_relativeImpactHasBeenSet; }

    /**
     * <p> The event variable's relative impact in terms of magnitude on the prediction
     * scores. The relative impact values consist of a numerical rating (0-5, 5 being
     * the highest) and direction (increased/decreased) impact of the fraud risk. </p>
     */
    inline void SetRelativeImpact(const Aws::String& value) { m_relativeImpactHasBeenSet = true; m_relativeImpact = value; }

    /**
     * <p> The event variable's relative impact in terms of magnitude on the prediction
     * scores. The relative impact values consist of a numerical rating (0-5, 5 being
     * the highest) and direction (increased/decreased) impact of the fraud risk. </p>
     */
    inline void SetRelativeImpact(Aws::String&& value) { m_relativeImpactHasBeenSet = true; m_relativeImpact = std::move(value); }

    /**
     * <p> The event variable's relative impact in terms of magnitude on the prediction
     * scores. The relative impact values consist of a numerical rating (0-5, 5 being
     * the highest) and direction (increased/decreased) impact of the fraud risk. </p>
     */
    inline void SetRelativeImpact(const char* value) { m_relativeImpactHasBeenSet = true; m_relativeImpact.assign(value); }

    /**
     * <p> The event variable's relative impact in terms of magnitude on the prediction
     * scores. The relative impact values consist of a numerical rating (0-5, 5 being
     * the highest) and direction (increased/decreased) impact of the fraud risk. </p>
     */
    inline VariableImpactExplanation& WithRelativeImpact(const Aws::String& value) { SetRelativeImpact(value); return *this;}

    /**
     * <p> The event variable's relative impact in terms of magnitude on the prediction
     * scores. The relative impact values consist of a numerical rating (0-5, 5 being
     * the highest) and direction (increased/decreased) impact of the fraud risk. </p>
     */
    inline VariableImpactExplanation& WithRelativeImpact(Aws::String&& value) { SetRelativeImpact(std::move(value)); return *this;}

    /**
     * <p> The event variable's relative impact in terms of magnitude on the prediction
     * scores. The relative impact values consist of a numerical rating (0-5, 5 being
     * the highest) and direction (increased/decreased) impact of the fraud risk. </p>
     */
    inline VariableImpactExplanation& WithRelativeImpact(const char* value) { SetRelativeImpact(value); return *this;}


    /**
     * <p> The raw, uninterpreted value represented as log-odds of the fraud. These
     * values are usually between -10 to +10, but range from - infinity to +
     * infinity.</p> <ul> <li> <p>A positive value indicates that the variable drove
     * the risk score up.</p> </li> <li> <p>A negative value indicates that the
     * variable drove the risk score down.</p> </li> </ul>
     */
    inline double GetLogOddsImpact() const{ return m_logOddsImpact; }

    /**
     * <p> The raw, uninterpreted value represented as log-odds of the fraud. These
     * values are usually between -10 to +10, but range from - infinity to +
     * infinity.</p> <ul> <li> <p>A positive value indicates that the variable drove
     * the risk score up.</p> </li> <li> <p>A negative value indicates that the
     * variable drove the risk score down.</p> </li> </ul>
     */
    inline bool LogOddsImpactHasBeenSet() const { return m_logOddsImpactHasBeenSet; }

    /**
     * <p> The raw, uninterpreted value represented as log-odds of the fraud. These
     * values are usually between -10 to +10, but range from - infinity to +
     * infinity.</p> <ul> <li> <p>A positive value indicates that the variable drove
     * the risk score up.</p> </li> <li> <p>A negative value indicates that the
     * variable drove the risk score down.</p> </li> </ul>
     */
    inline void SetLogOddsImpact(double value) { m_logOddsImpactHasBeenSet = true; m_logOddsImpact = value; }

    /**
     * <p> The raw, uninterpreted value represented as log-odds of the fraud. These
     * values are usually between -10 to +10, but range from - infinity to +
     * infinity.</p> <ul> <li> <p>A positive value indicates that the variable drove
     * the risk score up.</p> </li> <li> <p>A negative value indicates that the
     * variable drove the risk score down.</p> </li> </ul>
     */
    inline VariableImpactExplanation& WithLogOddsImpact(double value) { SetLogOddsImpact(value); return *this;}

  private:

    Aws::String m_eventVariableName;
    bool m_eventVariableNameHasBeenSet = false;

    Aws::String m_relativeImpact;
    bool m_relativeImpactHasBeenSet = false;

    double m_logOddsImpact;
    bool m_logOddsImpactHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
