﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
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
namespace BedrockAgentCoreControl
{
namespace Model
{

  /**
   * <p>Input for semantic override extraction configuration in a memory
   * strategy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/SemanticOverrideExtractionConfigurationInput">AWS
   * API Reference</a></p>
   */
  class SemanticOverrideExtractionConfigurationInput
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API SemanticOverrideExtractionConfigurationInput() = default;
    AWS_BEDROCKAGENTCORECONTROL_API SemanticOverrideExtractionConfigurationInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API SemanticOverrideExtractionConfigurationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The text to append to the prompt for semantic extraction.</p>
     */
    inline const Aws::String& GetAppendToPrompt() const { return m_appendToPrompt; }
    inline bool AppendToPromptHasBeenSet() const { return m_appendToPromptHasBeenSet; }
    template<typename AppendToPromptT = Aws::String>
    void SetAppendToPrompt(AppendToPromptT&& value) { m_appendToPromptHasBeenSet = true; m_appendToPrompt = std::forward<AppendToPromptT>(value); }
    template<typename AppendToPromptT = Aws::String>
    SemanticOverrideExtractionConfigurationInput& WithAppendToPrompt(AppendToPromptT&& value) { SetAppendToPrompt(std::forward<AppendToPromptT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model ID to use for semantic extraction.</p>
     */
    inline const Aws::String& GetModelId() const { return m_modelId; }
    inline bool ModelIdHasBeenSet() const { return m_modelIdHasBeenSet; }
    template<typename ModelIdT = Aws::String>
    void SetModelId(ModelIdT&& value) { m_modelIdHasBeenSet = true; m_modelId = std::forward<ModelIdT>(value); }
    template<typename ModelIdT = Aws::String>
    SemanticOverrideExtractionConfigurationInput& WithModelId(ModelIdT&& value) { SetModelId(std::forward<ModelIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_appendToPrompt;
    bool m_appendToPromptHasBeenSet = false;

    Aws::String m_modelId;
    bool m_modelIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
