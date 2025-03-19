/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/frauddetector/model/VariableImpactExplanation.h>
#include <aws/frauddetector/model/AggregatedVariablesImpactExplanation.h>
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
   * <p> The prediction explanations that provide insight into how each event
   * variable impacted the model version's fraud prediction score. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/PredictionExplanations">AWS
   * API Reference</a></p>
   */
  class PredictionExplanations
  {
  public:
    AWS_FRAUDDETECTOR_API PredictionExplanations() = default;
    AWS_FRAUDDETECTOR_API PredictionExplanations(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API PredictionExplanations& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The details of the event variable's impact on the prediction score. </p>
     */
    inline const Aws::Vector<VariableImpactExplanation>& GetVariableImpactExplanations() const { return m_variableImpactExplanations; }
    inline bool VariableImpactExplanationsHasBeenSet() const { return m_variableImpactExplanationsHasBeenSet; }
    template<typename VariableImpactExplanationsT = Aws::Vector<VariableImpactExplanation>>
    void SetVariableImpactExplanations(VariableImpactExplanationsT&& value) { m_variableImpactExplanationsHasBeenSet = true; m_variableImpactExplanations = std::forward<VariableImpactExplanationsT>(value); }
    template<typename VariableImpactExplanationsT = Aws::Vector<VariableImpactExplanation>>
    PredictionExplanations& WithVariableImpactExplanations(VariableImpactExplanationsT&& value) { SetVariableImpactExplanations(std::forward<VariableImpactExplanationsT>(value)); return *this;}
    template<typename VariableImpactExplanationsT = VariableImpactExplanation>
    PredictionExplanations& AddVariableImpactExplanations(VariableImpactExplanationsT&& value) { m_variableImpactExplanationsHasBeenSet = true; m_variableImpactExplanations.emplace_back(std::forward<VariableImpactExplanationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The details of the aggregated variables impact on the prediction score. </p>
     * <p>Account Takeover Insights (ATI) model uses event variables from the login
     * data you provide to continuously calculate a set of variables (aggregated
     * variables) based on historical events. For example, your ATI model might
     * calculate the number of times an user has logged in using the same IP address.
     * In this case, event variables used to derive the aggregated variables are
     * <code>IP address</code> and <code>user</code>.</p>
     */
    inline const Aws::Vector<AggregatedVariablesImpactExplanation>& GetAggregatedVariablesImpactExplanations() const { return m_aggregatedVariablesImpactExplanations; }
    inline bool AggregatedVariablesImpactExplanationsHasBeenSet() const { return m_aggregatedVariablesImpactExplanationsHasBeenSet; }
    template<typename AggregatedVariablesImpactExplanationsT = Aws::Vector<AggregatedVariablesImpactExplanation>>
    void SetAggregatedVariablesImpactExplanations(AggregatedVariablesImpactExplanationsT&& value) { m_aggregatedVariablesImpactExplanationsHasBeenSet = true; m_aggregatedVariablesImpactExplanations = std::forward<AggregatedVariablesImpactExplanationsT>(value); }
    template<typename AggregatedVariablesImpactExplanationsT = Aws::Vector<AggregatedVariablesImpactExplanation>>
    PredictionExplanations& WithAggregatedVariablesImpactExplanations(AggregatedVariablesImpactExplanationsT&& value) { SetAggregatedVariablesImpactExplanations(std::forward<AggregatedVariablesImpactExplanationsT>(value)); return *this;}
    template<typename AggregatedVariablesImpactExplanationsT = AggregatedVariablesImpactExplanation>
    PredictionExplanations& AddAggregatedVariablesImpactExplanations(AggregatedVariablesImpactExplanationsT&& value) { m_aggregatedVariablesImpactExplanationsHasBeenSet = true; m_aggregatedVariablesImpactExplanations.emplace_back(std::forward<AggregatedVariablesImpactExplanationsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<VariableImpactExplanation> m_variableImpactExplanations;
    bool m_variableImpactExplanationsHasBeenSet = false;

    Aws::Vector<AggregatedVariablesImpactExplanation> m_aggregatedVariablesImpactExplanations;
    bool m_aggregatedVariablesImpactExplanationsHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
