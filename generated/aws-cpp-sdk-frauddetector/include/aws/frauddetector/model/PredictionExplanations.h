/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/frauddetector/model/VariableImpactExplanation.h>
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
  class AWS_FRAUDDETECTOR_API PredictionExplanations
  {
  public:
    PredictionExplanations();
    PredictionExplanations(Aws::Utils::Json::JsonView jsonValue);
    PredictionExplanations& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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

  private:

    Aws::Vector<VariableImpactExplanation> m_variableImpactExplanations;
    bool m_variableImpactExplanationsHasBeenSet;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
