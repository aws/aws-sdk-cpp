﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/ReturnControlResults.h>
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
   * <p>Input for an agent collaborator. The input can be text or an action
   * invocation result.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/AgentCollaboratorInputPayload">AWS
   * API Reference</a></p>
   */
  class AgentCollaboratorInputPayload
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API AgentCollaboratorInputPayload();
    AWS_BEDROCKAGENTRUNTIME_API AgentCollaboratorInputPayload(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API AgentCollaboratorInputPayload& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An action invocation result.</p>
     */
    inline const ReturnControlResults& GetReturnControlResults() const{ return m_returnControlResults; }
    inline bool ReturnControlResultsHasBeenSet() const { return m_returnControlResultsHasBeenSet; }
    inline void SetReturnControlResults(const ReturnControlResults& value) { m_returnControlResultsHasBeenSet = true; m_returnControlResults = value; }
    inline void SetReturnControlResults(ReturnControlResults&& value) { m_returnControlResultsHasBeenSet = true; m_returnControlResults = std::move(value); }
    inline AgentCollaboratorInputPayload& WithReturnControlResults(const ReturnControlResults& value) { SetReturnControlResults(value); return *this;}
    inline AgentCollaboratorInputPayload& WithReturnControlResults(ReturnControlResults&& value) { SetReturnControlResults(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Input text.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }
    inline AgentCollaboratorInputPayload& WithText(const Aws::String& value) { SetText(value); return *this;}
    inline AgentCollaboratorInputPayload& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}
    inline AgentCollaboratorInputPayload& WithText(const char* value) { SetText(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input type.</p>
     */
    inline const PayloadType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const PayloadType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(PayloadType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline AgentCollaboratorInputPayload& WithType(const PayloadType& value) { SetType(value); return *this;}
    inline AgentCollaboratorInputPayload& WithType(PayloadType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    ReturnControlResults m_returnControlResults;
    bool m_returnControlResultsHasBeenSet = false;

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    PayloadType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
