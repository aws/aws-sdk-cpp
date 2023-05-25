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
    AWS_FRAUDDETECTOR_API PredictionExplanations();
    AWS_FRAUDDETECTOR_API PredictionExplanations(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API PredictionExplanations& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The details of the event variable's impact on the prediction score. </p>
     */
    inline const Aws::Vector<VariableImpactExplanation>& GetVariableImpactExplanations() const{ return m_variableImpactExplanations; }

    /**
     * <p> The details of the event variable's impact on the prediction score. </p>
     */
    inline bool VariableImpactExplanationsHasBeenSet() const { return m_variableImpactExplanationsHasBeenSet; }

    /**
     * <p> The details of the event variable's impact on the prediction score. </p>
     */
    inline void SetVariableImpactExplanations(const Aws::Vector<VariableImpactExplanation>& value) { m_variableImpactExplanationsHasBeenSet = true; m_variableImpactExplanations = value; }

    /**
     * <p> The details of the event variable's impact on the prediction score. </p>
     */
    inline void SetVariableImpactExplanations(Aws::Vector<VariableImpactExplanation>&& value) { m_variableImpactExplanationsHasBeenSet = true; m_variableImpactExplanations = std::move(value); }

    /**
     * <p> The details of the event variable's impact on the prediction score. </p>
     */
    inline PredictionExplanations& WithVariableImpactExplanations(const Aws::Vector<VariableImpactExplanation>& value) { SetVariableImpactExplanations(value); return *this;}

    /**
     * <p> The details of the event variable's impact on the prediction score. </p>
     */
    inline PredictionExplanations& WithVariableImpactExplanations(Aws::Vector<VariableImpactExplanation>&& value) { SetVariableImpactExplanations(std::move(value)); return *this;}

    /**
     * <p> The details of the event variable's impact on the prediction score. </p>
     */
    inline PredictionExplanations& AddVariableImpactExplanations(const VariableImpactExplanation& value) { m_variableImpactExplanationsHasBeenSet = true; m_variableImpactExplanations.push_back(value); return *this; }

    /**
     * <p> The details of the event variable's impact on the prediction score. </p>
     */
    inline PredictionExplanations& AddVariableImpactExplanations(VariableImpactExplanation&& value) { m_variableImpactExplanationsHasBeenSet = true; m_variableImpactExplanations.push_back(std::move(value)); return *this; }


    /**
     * <p> The details of the aggregated variables impact on the prediction score. </p>
     * <p>Account Takeover Insights (ATI) model uses event variables from the login
     * data you provide to continuously calculate a set of variables (aggregated
     * variables) based on historical events. For example, your ATI model might
     * calculate the number of times an user has logged in using the same IP address.
     * In this case, event variables used to derive the aggregated variables are
     * <code>IP address</code> and <code>user</code>.</p>
     */
    inline const Aws::Vector<AggregatedVariablesImpactExplanation>& GetAggregatedVariablesImpactExplanations() const{ return m_aggregatedVariablesImpactExplanations; }

    /**
     * <p> The details of the aggregated variables impact on the prediction score. </p>
     * <p>Account Takeover Insights (ATI) model uses event variables from the login
     * data you provide to continuously calculate a set of variables (aggregated
     * variables) based on historical events. For example, your ATI model might
     * calculate the number of times an user has logged in using the same IP address.
     * In this case, event variables used to derive the aggregated variables are
     * <code>IP address</code> and <code>user</code>.</p>
     */
    inline bool AggregatedVariablesImpactExplanationsHasBeenSet() const { return m_aggregatedVariablesImpactExplanationsHasBeenSet; }

    /**
     * <p> The details of the aggregated variables impact on the prediction score. </p>
     * <p>Account Takeover Insights (ATI) model uses event variables from the login
     * data you provide to continuously calculate a set of variables (aggregated
     * variables) based on historical events. For example, your ATI model might
     * calculate the number of times an user has logged in using the same IP address.
     * In this case, event variables used to derive the aggregated variables are
     * <code>IP address</code> and <code>user</code>.</p>
     */
    inline void SetAggregatedVariablesImpactExplanations(const Aws::Vector<AggregatedVariablesImpactExplanation>& value) { m_aggregatedVariablesImpactExplanationsHasBeenSet = true; m_aggregatedVariablesImpactExplanations = value; }

    /**
     * <p> The details of the aggregated variables impact on the prediction score. </p>
     * <p>Account Takeover Insights (ATI) model uses event variables from the login
     * data you provide to continuously calculate a set of variables (aggregated
     * variables) based on historical events. For example, your ATI model might
     * calculate the number of times an user has logged in using the same IP address.
     * In this case, event variables used to derive the aggregated variables are
     * <code>IP address</code> and <code>user</code>.</p>
     */
    inline void SetAggregatedVariablesImpactExplanations(Aws::Vector<AggregatedVariablesImpactExplanation>&& value) { m_aggregatedVariablesImpactExplanationsHasBeenSet = true; m_aggregatedVariablesImpactExplanations = std::move(value); }

    /**
     * <p> The details of the aggregated variables impact on the prediction score. </p>
     * <p>Account Takeover Insights (ATI) model uses event variables from the login
     * data you provide to continuously calculate a set of variables (aggregated
     * variables) based on historical events. For example, your ATI model might
     * calculate the number of times an user has logged in using the same IP address.
     * In this case, event variables used to derive the aggregated variables are
     * <code>IP address</code> and <code>user</code>.</p>
     */
    inline PredictionExplanations& WithAggregatedVariablesImpactExplanations(const Aws::Vector<AggregatedVariablesImpactExplanation>& value) { SetAggregatedVariablesImpactExplanations(value); return *this;}

    /**
     * <p> The details of the aggregated variables impact on the prediction score. </p>
     * <p>Account Takeover Insights (ATI) model uses event variables from the login
     * data you provide to continuously calculate a set of variables (aggregated
     * variables) based on historical events. For example, your ATI model might
     * calculate the number of times an user has logged in using the same IP address.
     * In this case, event variables used to derive the aggregated variables are
     * <code>IP address</code> and <code>user</code>.</p>
     */
    inline PredictionExplanations& WithAggregatedVariablesImpactExplanations(Aws::Vector<AggregatedVariablesImpactExplanation>&& value) { SetAggregatedVariablesImpactExplanations(std::move(value)); return *this;}

    /**
     * <p> The details of the aggregated variables impact on the prediction score. </p>
     * <p>Account Takeover Insights (ATI) model uses event variables from the login
     * data you provide to continuously calculate a set of variables (aggregated
     * variables) based on historical events. For example, your ATI model might
     * calculate the number of times an user has logged in using the same IP address.
     * In this case, event variables used to derive the aggregated variables are
     * <code>IP address</code> and <code>user</code>.</p>
     */
    inline PredictionExplanations& AddAggregatedVariablesImpactExplanations(const AggregatedVariablesImpactExplanation& value) { m_aggregatedVariablesImpactExplanationsHasBeenSet = true; m_aggregatedVariablesImpactExplanations.push_back(value); return *this; }

    /**
     * <p> The details of the aggregated variables impact on the prediction score. </p>
     * <p>Account Takeover Insights (ATI) model uses event variables from the login
     * data you provide to continuously calculate a set of variables (aggregated
     * variables) based on historical events. For example, your ATI model might
     * calculate the number of times an user has logged in using the same IP address.
     * In this case, event variables used to derive the aggregated variables are
     * <code>IP address</code> and <code>user</code>.</p>
     */
    inline PredictionExplanations& AddAggregatedVariablesImpactExplanations(AggregatedVariablesImpactExplanation&& value) { m_aggregatedVariablesImpactExplanationsHasBeenSet = true; m_aggregatedVariablesImpactExplanations.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<VariableImpactExplanation> m_variableImpactExplanations;
    bool m_variableImpactExplanationsHasBeenSet = false;

    Aws::Vector<AggregatedVariablesImpactExplanation> m_aggregatedVariablesImpactExplanations;
    bool m_aggregatedVariablesImpactExplanationsHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
