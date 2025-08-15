/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/FlowValidationSeverity.h>
#include <aws/bedrock-agent/model/FlowValidationDetails.h>
#include <aws/bedrock-agent/model/FlowValidationType.h>
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
   * <p>Contains information about validation of the flow.</p> <p>This data type is
   * used in the following API operations:</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent_GetFlow.html#API_agent_GetFlow_ResponseSyntax">GetFlow
   * response</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent_GetFlowVersion.html#API_agent_GetFlowVersion_ResponseSyntax">GetFlowVersion
   * response</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/FlowValidation">AWS
   * API Reference</a></p>
   */
  class FlowValidation
  {
  public:
    AWS_BEDROCKAGENT_API FlowValidation() = default;
    AWS_BEDROCKAGENT_API FlowValidation(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API FlowValidation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A message describing the validation error.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    FlowValidation& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The severity of the issue described in the message.</p>
     */
    inline FlowValidationSeverity GetSeverity() const { return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    inline void SetSeverity(FlowValidationSeverity value) { m_severityHasBeenSet = true; m_severity = value; }
    inline FlowValidation& WithSeverity(FlowValidationSeverity value) { SetSeverity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specific details about the validation issue encountered in the flow.</p>
     */
    inline const FlowValidationDetails& GetDetails() const { return m_details; }
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }
    template<typename DetailsT = FlowValidationDetails>
    void SetDetails(DetailsT&& value) { m_detailsHasBeenSet = true; m_details = std::forward<DetailsT>(value); }
    template<typename DetailsT = FlowValidationDetails>
    FlowValidation& WithDetails(DetailsT&& value) { SetDetails(std::forward<DetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of validation issue encountered in the flow.</p>
     */
    inline FlowValidationType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(FlowValidationType value) { m_typeHasBeenSet = true; m_type = value; }
    inline FlowValidation& WithType(FlowValidationType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    FlowValidationSeverity m_severity{FlowValidationSeverity::NOT_SET};
    bool m_severityHasBeenSet = false;

    FlowValidationDetails m_details;
    bool m_detailsHasBeenSet = false;

    FlowValidationType m_type{FlowValidationType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
