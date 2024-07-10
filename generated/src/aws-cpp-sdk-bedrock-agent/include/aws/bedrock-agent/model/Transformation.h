/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/StepType.h>
#include <aws/bedrock-agent/model/TransformationFunction.h>
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
    AWS_BEDROCKAGENT_API Transformation();
    AWS_BEDROCKAGENT_API Transformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Transformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>When the service applies the transformation.</p>
     */
    inline const StepType& GetStepToApply() const{ return m_stepToApply; }
    inline bool StepToApplyHasBeenSet() const { return m_stepToApplyHasBeenSet; }
    inline void SetStepToApply(const StepType& value) { m_stepToApplyHasBeenSet = true; m_stepToApply = value; }
    inline void SetStepToApply(StepType&& value) { m_stepToApplyHasBeenSet = true; m_stepToApply = std::move(value); }
    inline Transformation& WithStepToApply(const StepType& value) { SetStepToApply(value); return *this;}
    inline Transformation& WithStepToApply(StepType&& value) { SetStepToApply(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Lambda function that processes documents.</p>
     */
    inline const TransformationFunction& GetTransformationFunction() const{ return m_transformationFunction; }
    inline bool TransformationFunctionHasBeenSet() const { return m_transformationFunctionHasBeenSet; }
    inline void SetTransformationFunction(const TransformationFunction& value) { m_transformationFunctionHasBeenSet = true; m_transformationFunction = value; }
    inline void SetTransformationFunction(TransformationFunction&& value) { m_transformationFunctionHasBeenSet = true; m_transformationFunction = std::move(value); }
    inline Transformation& WithTransformationFunction(const TransformationFunction& value) { SetTransformationFunction(value); return *this;}
    inline Transformation& WithTransformationFunction(TransformationFunction&& value) { SetTransformationFunction(std::move(value)); return *this;}
    ///@}
  private:

    StepType m_stepToApply;
    bool m_stepToApplyHasBeenSet = false;

    TransformationFunction m_transformationFunction;
    bool m_transformationFunctionHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
