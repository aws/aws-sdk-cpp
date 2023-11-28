/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/ModelInvocationInput.h>
#include <aws/bedrock-agent-runtime/model/PreProcessingModelInvocationOutput.h>
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
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   * <p>Trace Part which contains information related to preprocessing
   * step</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/PreProcessingTrace">AWS
   * API Reference</a></p>
   */
  class PreProcessingTrace
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API PreProcessingTrace();
    AWS_BEDROCKAGENTRUNTIME_API PreProcessingTrace(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API PreProcessingTrace& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const ModelInvocationInput& GetModelInvocationInput() const{ return m_modelInvocationInput; }

    
    inline bool ModelInvocationInputHasBeenSet() const { return m_modelInvocationInputHasBeenSet; }

    
    inline void SetModelInvocationInput(const ModelInvocationInput& value) { m_modelInvocationInputHasBeenSet = true; m_modelInvocationInput = value; }

    
    inline void SetModelInvocationInput(ModelInvocationInput&& value) { m_modelInvocationInputHasBeenSet = true; m_modelInvocationInput = std::move(value); }

    
    inline PreProcessingTrace& WithModelInvocationInput(const ModelInvocationInput& value) { SetModelInvocationInput(value); return *this;}

    
    inline PreProcessingTrace& WithModelInvocationInput(ModelInvocationInput&& value) { SetModelInvocationInput(std::move(value)); return *this;}


    
    inline const PreProcessingModelInvocationOutput& GetModelInvocationOutput() const{ return m_modelInvocationOutput; }

    
    inline bool ModelInvocationOutputHasBeenSet() const { return m_modelInvocationOutputHasBeenSet; }

    
    inline void SetModelInvocationOutput(const PreProcessingModelInvocationOutput& value) { m_modelInvocationOutputHasBeenSet = true; m_modelInvocationOutput = value; }

    
    inline void SetModelInvocationOutput(PreProcessingModelInvocationOutput&& value) { m_modelInvocationOutputHasBeenSet = true; m_modelInvocationOutput = std::move(value); }

    
    inline PreProcessingTrace& WithModelInvocationOutput(const PreProcessingModelInvocationOutput& value) { SetModelInvocationOutput(value); return *this;}

    
    inline PreProcessingTrace& WithModelInvocationOutput(PreProcessingModelInvocationOutput&& value) { SetModelInvocationOutput(std::move(value)); return *this;}

  private:

    ModelInvocationInput m_modelInvocationInput;
    bool m_modelInvocationInputHasBeenSet = false;

    PreProcessingModelInvocationOutput m_modelInvocationOutput;
    bool m_modelInvocationOutputHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
