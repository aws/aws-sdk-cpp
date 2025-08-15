/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/PromptFlowNodeResourceConfiguration.h>
#include <aws/bedrock-agent/model/PromptFlowNodeInlineConfiguration.h>
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
   * <p>Contains configurations for a prompt and whether it is from Prompt management
   * or defined inline.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/PromptFlowNodeSourceConfiguration">AWS
   * API Reference</a></p>
   */
  class PromptFlowNodeSourceConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API PromptFlowNodeSourceConfiguration() = default;
    AWS_BEDROCKAGENT_API PromptFlowNodeSourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API PromptFlowNodeSourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains configurations for a prompt from Prompt management.</p>
     */
    inline const PromptFlowNodeResourceConfiguration& GetResource() const { return m_resource; }
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
    template<typename ResourceT = PromptFlowNodeResourceConfiguration>
    void SetResource(ResourceT&& value) { m_resourceHasBeenSet = true; m_resource = std::forward<ResourceT>(value); }
    template<typename ResourceT = PromptFlowNodeResourceConfiguration>
    PromptFlowNodeSourceConfiguration& WithResource(ResourceT&& value) { SetResource(std::forward<ResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains configurations for a prompt that is defined inline</p>
     */
    inline const PromptFlowNodeInlineConfiguration& GetInline() const { return m_inline; }
    inline bool InlineHasBeenSet() const { return m_inlineHasBeenSet; }
    template<typename InlineT = PromptFlowNodeInlineConfiguration>
    void SetInline(InlineT&& value) { m_inlineHasBeenSet = true; m_inline = std::forward<InlineT>(value); }
    template<typename InlineT = PromptFlowNodeInlineConfiguration>
    PromptFlowNodeSourceConfiguration& WithInline(InlineT&& value) { SetInline(std::forward<InlineT>(value)); return *this;}
    ///@}
  private:

    PromptFlowNodeResourceConfiguration m_resource;
    bool m_resourceHasBeenSet = false;

    PromptFlowNodeInlineConfiguration m_inline;
    bool m_inlineHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
