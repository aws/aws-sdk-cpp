/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/PayloadType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/ReturnControlResults.h>
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
    AWS_BEDROCKAGENTRUNTIME_API AgentCollaboratorInputPayload() = default;
    AWS_BEDROCKAGENTRUNTIME_API AgentCollaboratorInputPayload(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API AgentCollaboratorInputPayload& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The input type.</p>
     */
    inline PayloadType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(PayloadType value) { m_typeHasBeenSet = true; m_type = value; }
    inline AgentCollaboratorInputPayload& WithType(PayloadType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Input text.</p>
     */
    inline const Aws::String& GetText() const { return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    template<typename TextT = Aws::String>
    void SetText(TextT&& value) { m_textHasBeenSet = true; m_text = std::forward<TextT>(value); }
    template<typename TextT = Aws::String>
    AgentCollaboratorInputPayload& WithText(TextT&& value) { SetText(std::forward<TextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An action invocation result.</p>
     */
    inline const ReturnControlResults& GetReturnControlResults() const { return m_returnControlResults; }
    inline bool ReturnControlResultsHasBeenSet() const { return m_returnControlResultsHasBeenSet; }
    template<typename ReturnControlResultsT = ReturnControlResults>
    void SetReturnControlResults(ReturnControlResultsT&& value) { m_returnControlResultsHasBeenSet = true; m_returnControlResults = std::forward<ReturnControlResultsT>(value); }
    template<typename ReturnControlResultsT = ReturnControlResults>
    AgentCollaboratorInputPayload& WithReturnControlResults(ReturnControlResultsT&& value) { SetReturnControlResults(std::forward<ReturnControlResultsT>(value)); return *this;}
    ///@}
  private:

    PayloadType m_type{PayloadType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    ReturnControlResults m_returnControlResults;
    bool m_returnControlResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
