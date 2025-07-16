/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/S3Configuration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agentcore-control/model/ToolDefinition.h>
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
   * <p>A tool schema for a gateway target. This structure defines the schema for a
   * tool that the target exposes through the Model Context Protocol.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ToolSchema">AWS
   * API Reference</a></p>
   */
  class ToolSchema
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API ToolSchema() = default;
    AWS_BEDROCKAGENTCORECONTROL_API ToolSchema(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API ToolSchema& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon S3 location of the tool schema. This location contains the schema
     * definition file.</p>
     */
    inline const S3Configuration& GetS3() const { return m_s3; }
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }
    template<typename S3T = S3Configuration>
    void SetS3(S3T&& value) { m_s3HasBeenSet = true; m_s3 = std::forward<S3T>(value); }
    template<typename S3T = S3Configuration>
    ToolSchema& WithS3(S3T&& value) { SetS3(std::forward<S3T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inline payload of the tool schema. This payload contains the schema
     * definition directly in the request.</p>
     */
    inline const Aws::Vector<ToolDefinition>& GetInlinePayload() const { return m_inlinePayload; }
    inline bool InlinePayloadHasBeenSet() const { return m_inlinePayloadHasBeenSet; }
    template<typename InlinePayloadT = Aws::Vector<ToolDefinition>>
    void SetInlinePayload(InlinePayloadT&& value) { m_inlinePayloadHasBeenSet = true; m_inlinePayload = std::forward<InlinePayloadT>(value); }
    template<typename InlinePayloadT = Aws::Vector<ToolDefinition>>
    ToolSchema& WithInlinePayload(InlinePayloadT&& value) { SetInlinePayload(std::forward<InlinePayloadT>(value)); return *this;}
    template<typename InlinePayloadT = ToolDefinition>
    ToolSchema& AddInlinePayload(InlinePayloadT&& value) { m_inlinePayloadHasBeenSet = true; m_inlinePayload.emplace_back(std::forward<InlinePayloadT>(value)); return *this; }
    ///@}
  private:

    S3Configuration m_s3;
    bool m_s3HasBeenSet = false;

    Aws::Vector<ToolDefinition> m_inlinePayload;
    bool m_inlinePayloadHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
