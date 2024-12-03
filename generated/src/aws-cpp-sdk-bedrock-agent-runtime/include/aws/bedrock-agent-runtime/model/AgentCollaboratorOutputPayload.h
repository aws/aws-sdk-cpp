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
    AWS_BEDROCKAGENTRUNTIME_API AgentCollaboratorOutputPayload();
    AWS_BEDROCKAGENTRUNTIME_API AgentCollaboratorOutputPayload(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API AgentCollaboratorOutputPayload& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An action invocation result.</p>
     */
    inline const ReturnControlPayload& GetReturnControlPayload() const{ return m_returnControlPayload; }
    inline bool ReturnControlPayloadHasBeenSet() const { return m_returnControlPayloadHasBeenSet; }
    inline void SetReturnControlPayload(const ReturnControlPayload& value) { m_returnControlPayloadHasBeenSet = true; m_returnControlPayload = value; }
    inline void SetReturnControlPayload(ReturnControlPayload&& value) { m_returnControlPayloadHasBeenSet = true; m_returnControlPayload = std::move(value); }
    inline AgentCollaboratorOutputPayload& WithReturnControlPayload(const ReturnControlPayload& value) { SetReturnControlPayload(value); return *this;}
    inline AgentCollaboratorOutputPayload& WithReturnControlPayload(ReturnControlPayload&& value) { SetReturnControlPayload(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Text output.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }
    inline AgentCollaboratorOutputPayload& WithText(const Aws::String& value) { SetText(value); return *this;}
    inline AgentCollaboratorOutputPayload& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}
    inline AgentCollaboratorOutputPayload& WithText(const char* value) { SetText(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of output.</p>
     */
    inline const PayloadType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const PayloadType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(PayloadType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline AgentCollaboratorOutputPayload& WithType(const PayloadType& value) { SetType(value); return *this;}
    inline AgentCollaboratorOutputPayload& WithType(PayloadType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    ReturnControlPayload m_returnControlPayload;
    bool m_returnControlPayloadHasBeenSet = false;

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    PayloadType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
