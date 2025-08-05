/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyBuildMessageType.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>Represents a message generated during a build step, providing information
   * about what happened or any issues encountered.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningPolicyBuildStepMessage">AWS
   * API Reference</a></p>
   */
  class AutomatedReasoningPolicyBuildStepMessage
  {
  public:
    AWS_BEDROCK_API AutomatedReasoningPolicyBuildStepMessage() = default;
    AWS_BEDROCK_API AutomatedReasoningPolicyBuildStepMessage(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API AutomatedReasoningPolicyBuildStepMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The content of the message, describing what occurred during the build
     * step.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    AutomatedReasoningPolicyBuildStepMessage& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of message (e.g., INFO, WARNING, ERROR) indicating its severity and
     * purpose.</p>
     */
    inline AutomatedReasoningPolicyBuildMessageType GetMessageType() const { return m_messageType; }
    inline bool MessageTypeHasBeenSet() const { return m_messageTypeHasBeenSet; }
    inline void SetMessageType(AutomatedReasoningPolicyBuildMessageType value) { m_messageTypeHasBeenSet = true; m_messageType = value; }
    inline AutomatedReasoningPolicyBuildStepMessage& WithMessageType(AutomatedReasoningPolicyBuildMessageType value) { SetMessageType(value); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    AutomatedReasoningPolicyBuildMessageType m_messageType{AutomatedReasoningPolicyBuildMessageType::NOT_SET};
    bool m_messageTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
