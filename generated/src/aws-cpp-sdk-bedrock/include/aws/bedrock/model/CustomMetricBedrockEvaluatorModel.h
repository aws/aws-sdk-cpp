/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>Defines the model you want to evaluate custom metrics in an Amazon Bedrock
   * evaluation job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/CustomMetricBedrockEvaluatorModel">AWS
   * API Reference</a></p>
   */
  class CustomMetricBedrockEvaluatorModel
  {
  public:
    AWS_BEDROCK_API CustomMetricBedrockEvaluatorModel() = default;
    AWS_BEDROCK_API CustomMetricBedrockEvaluatorModel(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API CustomMetricBedrockEvaluatorModel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the evaluator model for custom metrics. For
     * a list of supported evaluator models, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/evaluation-judge.html">Evaluate
     * model performance using another LLM as a judge</a> and <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/evaluation-kb.html">Evaluate
     * the performance of RAG sources using Amazon Bedrock evaluations</a>.</p>
     */
    inline const Aws::String& GetModelIdentifier() const { return m_modelIdentifier; }
    inline bool ModelIdentifierHasBeenSet() const { return m_modelIdentifierHasBeenSet; }
    template<typename ModelIdentifierT = Aws::String>
    void SetModelIdentifier(ModelIdentifierT&& value) { m_modelIdentifierHasBeenSet = true; m_modelIdentifier = std::forward<ModelIdentifierT>(value); }
    template<typename ModelIdentifierT = Aws::String>
    CustomMetricBedrockEvaluatorModel& WithModelIdentifier(ModelIdentifierT&& value) { SetModelIdentifier(std::forward<ModelIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelIdentifier;
    bool m_modelIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
