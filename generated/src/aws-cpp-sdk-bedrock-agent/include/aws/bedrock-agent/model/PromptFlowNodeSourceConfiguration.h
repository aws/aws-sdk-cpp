/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/PromptFlowNodeInlineConfiguration.h>
#include <aws/bedrock-agent/model/PromptFlowNodeResourceConfiguration.h>
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
    AWS_BEDROCKAGENT_API PromptFlowNodeSourceConfiguration();
    AWS_BEDROCKAGENT_API PromptFlowNodeSourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API PromptFlowNodeSourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains configurations for a prompt that is defined inline</p>
     */
    inline const PromptFlowNodeInlineConfiguration& GetInline() const{ return m_inline; }
    inline bool InlineHasBeenSet() const { return m_inlineHasBeenSet; }
    inline void SetInline(const PromptFlowNodeInlineConfiguration& value) { m_inlineHasBeenSet = true; m_inline = value; }
    inline void SetInline(PromptFlowNodeInlineConfiguration&& value) { m_inlineHasBeenSet = true; m_inline = std::move(value); }
    inline PromptFlowNodeSourceConfiguration& WithInline(const PromptFlowNodeInlineConfiguration& value) { SetInline(value); return *this;}
    inline PromptFlowNodeSourceConfiguration& WithInline(PromptFlowNodeInlineConfiguration&& value) { SetInline(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains configurations for a prompt from Prompt management.</p>
     */
    inline const PromptFlowNodeResourceConfiguration& GetResource() const{ return m_resource; }
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
    inline void SetResource(const PromptFlowNodeResourceConfiguration& value) { m_resourceHasBeenSet = true; m_resource = value; }
    inline void SetResource(PromptFlowNodeResourceConfiguration&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }
    inline PromptFlowNodeSourceConfiguration& WithResource(const PromptFlowNodeResourceConfiguration& value) { SetResource(value); return *this;}
    inline PromptFlowNodeSourceConfiguration& WithResource(PromptFlowNodeResourceConfiguration&& value) { SetResource(std::move(value)); return *this;}
    ///@}
  private:

    PromptFlowNodeInlineConfiguration m_inline;
    bool m_inlineHasBeenSet = false;

    PromptFlowNodeResourceConfiguration m_resource;
    bool m_resourceHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
