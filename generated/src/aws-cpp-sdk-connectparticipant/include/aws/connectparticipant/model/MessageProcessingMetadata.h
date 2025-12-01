/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectparticipant/ConnectParticipant_EXPORTS.h>
#include <aws/connectparticipant/model/MessageProcessingStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ConnectParticipant {
namespace Model {

/**
 * <p>Contains metadata for chat messages.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connectparticipant-2018-09-07/MessageProcessingMetadata">AWS
 * API Reference</a></p>
 */
class MessageProcessingMetadata {
 public:
  AWS_CONNECTPARTICIPANT_API MessageProcessingMetadata() = default;
  AWS_CONNECTPARTICIPANT_API MessageProcessingMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTPARTICIPANT_API MessageProcessingMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTPARTICIPANT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The status of Message Processing for the message.</p>
   */
  inline MessageProcessingStatus GetMessageProcessingStatus() const { return m_messageProcessingStatus; }
  inline bool MessageProcessingStatusHasBeenSet() const { return m_messageProcessingStatusHasBeenSet; }
  inline void SetMessageProcessingStatus(MessageProcessingStatus value) {
    m_messageProcessingStatusHasBeenSet = true;
    m_messageProcessingStatus = value;
  }
  inline MessageProcessingMetadata& WithMessageProcessingStatus(MessageProcessingStatus value) {
    SetMessageProcessingStatus(value);
    return *this;
  }
  ///@}
 private:
  MessageProcessingStatus m_messageProcessingStatus{MessageProcessingStatus::NOT_SET};
  bool m_messageProcessingStatusHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectParticipant
}  // namespace Aws
