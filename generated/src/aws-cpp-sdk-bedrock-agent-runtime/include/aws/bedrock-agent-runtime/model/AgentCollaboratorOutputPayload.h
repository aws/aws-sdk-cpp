/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/ReturnControlPayload.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/PayloadType.h>
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
   * <p>Output from an agent collaborator. The output can be text or an action
   * invocation result.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/AgentCollaboratorOutputPayload">AWS
   * API Reference</a></p>
   */
  class AgentCollaboratorOutputPayload
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API AgentCollaboratorOutputPayload() = default;
    AWS_BEDROCKAGENTRUNTIME_API AgentCollaboratorOutputPayload(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API AgentCollaboratorOutputPayload& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An action invocation result.</p>
     */
    inline const ReturnControlPayload& GetReturnControlPayload() const { return m_returnControlPayload; }
    inline bool ReturnControlPayloadHasBeenSet() const { return m_returnControlPayloadHasBeenSet; }
    template<typename ReturnControlPayloadT = ReturnControlPayload>
    void SetReturnControlPayload(ReturnControlPayloadT&& value) { m_returnControlPayloadHasBeenSet = true; m_returnControlPayload = std::forward<ReturnControlPayloadT>(value); }
    template<typename ReturnControlPayloadT = ReturnControlPayload>
    AgentCollaboratorOutputPayload& WithReturnControlPayload(ReturnControlPayloadT&& value) { SetReturnControlPayload(std::forward<ReturnControlPayloadT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Text output.</p>
     */
    inline const Aws::String& GetText() const { return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    template<typename TextT = Aws::String>
    void SetText(TextT&& value) { m_textHasBeenSet = true; m_text = std::forward<TextT>(value); }
    template<typename TextT = Aws::String>
    AgentCollaboratorOutputPayload& WithText(TextT&& value) { SetText(std::forward<TextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of output.</p>
     */
    inline PayloadType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(PayloadType value) { m_typeHasBeenSet = true; m_type = value; }
    inline AgentCollaboratorOutputPayload& WithType(PayloadType value) { SetType(value); return *this;}
    ///@}
  private:

    ReturnControlPayload m_returnControlPayload;
    bool m_returnControlPayloadHasBeenSet = false;

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    PayloadType m_type{PayloadType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
