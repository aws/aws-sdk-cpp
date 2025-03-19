/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p> The details of the impact of aggregated variables on the prediction score.
   * </p> <p>Account Takeover Insights (ATI) model uses the login data you provide to
   * continuously calculate a set of variables (aggregated variables) based on
   * historical events. For example, the model might calculate the number of times an
   * user has logged in using the same IP address. In this case, event variables used
   * to derive the aggregated variables are <code>IP address</code> and
   * <code>user</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/AggregatedVariablesImpactExplanation">AWS
   * API Reference</a></p>
   */
  class AggregatedVariablesImpactExplanation
  {
  public:
    AWS_FRAUDDETECTOR_API AggregatedVariablesImpactExplanation() = default;
    AWS_FRAUDDETECTOR_API AggregatedVariablesImpactExplanation(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API AggregatedVariablesImpactExplanation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The names of all the event variables that were used to derive the aggregated
     * variables. </p>
     */
    inline const Aws::Vector<Aws::String>& GetEventVariableNames() const { return m_eventVariableNames; }
    inline bool EventVariableNamesHasBeenSet() const { return m_eventVariableNamesHasBeenSet; }
    template<typename EventVariableNamesT = Aws::Vector<Aws::String>>
    void SetEventVariableNames(EventVariableNamesT&& value) { m_eventVariableNamesHasBeenSet = true; m_eventVariableNames = std::forward<EventVariableNamesT>(value); }
    template<typename EventVariableNamesT = Aws::Vector<Aws::String>>
    AggregatedVariablesImpactExplanation& WithEventVariableNames(EventVariableNamesT&& value) { SetEventVariableNames(std::forward<EventVariableNamesT>(value)); return *this;}
    template<typename EventVariableNamesT = Aws::String>
    AggregatedVariablesImpactExplanation& AddEventVariableNames(EventVariableNamesT&& value) { m_eventVariableNamesHasBeenSet = true; m_eventVariableNames.emplace_back(std::forward<EventVariableNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The relative impact of the aggregated variables in terms of magnitude on the
     * prediction scores. </p>
     */
    inline const Aws::String& GetRelativeImpact() const { return m_relativeImpact; }
    inline bool RelativeImpactHasBeenSet() const { return m_relativeImpactHasBeenSet; }
    template<typename RelativeImpactT = Aws::String>
    void SetRelativeImpact(RelativeImpactT&& value) { m_relativeImpactHasBeenSet = true; m_relativeImpact = std::forward<RelativeImpactT>(value); }
    template<typename RelativeImpactT = Aws::String>
    AggregatedVariablesImpactExplanation& WithRelativeImpact(RelativeImpactT&& value) { SetRelativeImpact(std::forward<RelativeImpactT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The raw, uninterpreted value represented as log-odds of the fraud. These
     * values are usually between -10 to +10, but range from -infinity to
     * +infinity.</p> <ul> <li> <p>A positive value indicates that the variables drove
     * the risk score up.</p> </li> <li> <p>A negative value indicates that the
     * variables drove the risk score down.</p> </li> </ul>
     */
    inline double GetLogOddsImpact() const { return m_logOddsImpact; }
    inline bool LogOddsImpactHasBeenSet() const { return m_logOddsImpactHasBeenSet; }
    inline void SetLogOddsImpact(double value) { m_logOddsImpactHasBeenSet = true; m_logOddsImpact = value; }
    inline AggregatedVariablesImpactExplanation& WithLogOddsImpact(double value) { SetLogOddsImpact(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_eventVariableNames;
    bool m_eventVariableNamesHasBeenSet = false;

    Aws::String m_relativeImpact;
    bool m_relativeImpactHasBeenSet = false;

    double m_logOddsImpact{0.0};
    bool m_logOddsImpactHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
