/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/RatingScaleItem.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>The definition of a custom metric for use in an Amazon Bedrock evaluation
   * job. A custom metric definition includes a metric name, prompt (instructions)
   * and optionally, a rating scale. Your prompt must include a task description and
   * input variables. The required input variables are different for model-as-a-judge
   * and RAG evaluations.</p> <p>For more information about how to define a custom
   * metric in Amazon Bedrock, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-evaluation-custom-metrics-prompt-formats.html">Create
   * a prompt for a custom metrics (LLM-as-a-judge model evaluations)</a> and <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/kb-evaluation-custom-metrics-prompt-formats.html">Create
   * a prompt for a custom metrics (RAG evaluations)</a>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/CustomMetricDefinition">AWS
   * API Reference</a></p>
   */
  class CustomMetricDefinition
  {
  public:
    AWS_BEDROCK_API CustomMetricDefinition() = default;
    AWS_BEDROCK_API CustomMetricDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API CustomMetricDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name for a custom metric. Names must be unique in your Amazon Web
     * Services region.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CustomMetricDefinition& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prompt for a custom metric that instructs the evaluator model how to rate
     * the model or RAG source under evaluation.</p>
     */
    inline const Aws::String& GetInstructions() const { return m_instructions; }
    inline bool InstructionsHasBeenSet() const { return m_instructionsHasBeenSet; }
    template<typename InstructionsT = Aws::String>
    void SetInstructions(InstructionsT&& value) { m_instructionsHasBeenSet = true; m_instructions = std::forward<InstructionsT>(value); }
    template<typename InstructionsT = Aws::String>
    CustomMetricDefinition& WithInstructions(InstructionsT&& value) { SetInstructions(std::forward<InstructionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the rating scale to be used for a custom metric. We recommend that
     * you always define a ratings scale when creating a custom metric. If you don't
     * define a scale, Amazon Bedrock won't be able to visually display the results of
     * the evaluation in the console or calculate average values of numerical scores.
     * For more information on specifying a rating scale, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-evaluation-custom-metrics-prompt-formats.html#model-evaluation-custom-metrics-prompt-formats-schema">Specifying
     * an output schema (rating scale)</a>.</p>
     */
    inline const Aws::Vector<RatingScaleItem>& GetRatingScale() const { return m_ratingScale; }
    inline bool RatingScaleHasBeenSet() const { return m_ratingScaleHasBeenSet; }
    template<typename RatingScaleT = Aws::Vector<RatingScaleItem>>
    void SetRatingScale(RatingScaleT&& value) { m_ratingScaleHasBeenSet = true; m_ratingScale = std::forward<RatingScaleT>(value); }
    template<typename RatingScaleT = Aws::Vector<RatingScaleItem>>
    CustomMetricDefinition& WithRatingScale(RatingScaleT&& value) { SetRatingScale(std::forward<RatingScaleT>(value)); return *this;}
    template<typename RatingScaleT = RatingScaleItem>
    CustomMetricDefinition& AddRatingScale(RatingScaleT&& value) { m_ratingScaleHasBeenSet = true; m_ratingScale.emplace_back(std::forward<RatingScaleT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_instructions;
    bool m_instructionsHasBeenSet = false;

    Aws::Vector<RatingScaleItem> m_ratingScale;
    bool m_ratingScaleHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
