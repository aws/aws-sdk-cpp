/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/TransformationFunction.h>
#include <aws/bedrock-agent/model/StepType.h>
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
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>A custom processing step for documents moving through a data source ingestion
   * pipeline. To process documents after they have been converted into chunks, set
   * the step to apply to <code>POST_CHUNKING</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/Transformation">AWS
   * API Reference</a></p>
   */
  class Transformation
  {
  public:
    AWS_BEDROCKAGENT_API Transformation() = default;
    AWS_BEDROCKAGENT_API Transformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Transformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A Lambda function that processes documents.</p>
     */
    inline const TransformationFunction& GetTransformationFunction() const { return m_transformationFunction; }
    inline bool TransformationFunctionHasBeenSet() const { return m_transformationFunctionHasBeenSet; }
    template<typename TransformationFunctionT = TransformationFunction>
    void SetTransformationFunction(TransformationFunctionT&& value) { m_transformationFunctionHasBeenSet = true; m_transformationFunction = std::forward<TransformationFunctionT>(value); }
    template<typename TransformationFunctionT = TransformationFunction>
    Transformation& WithTransformationFunction(TransformationFunctionT&& value) { SetTransformationFunction(std::forward<TransformationFunctionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the service applies the transformation.</p>
     */
    inline StepType GetStepToApply() const { return m_stepToApply; }
    inline bool StepToApplyHasBeenSet() const { return m_stepToApplyHasBeenSet; }
    inline void SetStepToApply(StepType value) { m_stepToApplyHasBeenSet = true; m_stepToApply = value; }
    inline Transformation& WithStepToApply(StepType value) { SetStepToApply(value); return *this;}
    ///@}
  private:

    TransformationFunction m_transformationFunction;
    bool m_transformationFunctionHasBeenSet = false;

    StepType m_stepToApply{StepType::NOT_SET};
    bool m_stepToApplyHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
