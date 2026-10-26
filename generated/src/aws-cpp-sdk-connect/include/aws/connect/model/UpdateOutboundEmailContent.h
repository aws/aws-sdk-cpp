/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/UpdateOutboundEmailMessageSourceType.h>
#include <aws/connect/model/UpdateOutboundRawMessage.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>Contains the updated body content for an outbound email draft.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateOutboundEmailContent">AWS
 * API Reference</a></p>
 */
class UpdateOutboundEmailContent {
 public:
  AWS_CONNECT_API UpdateOutboundEmailContent() = default;
  AWS_CONNECT_API UpdateOutboundEmailContent(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API UpdateOutboundEmailContent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The message source type. The only supported value is <code>RAW</code>.</p>
   */
  inline UpdateOutboundEmailMessageSourceType GetMessageSourceType() const { return m_messageSourceType; }
  inline bool MessageSourceTypeHasBeenSet() const { return m_messageSourceTypeHasBeenSet; }
  inline void SetMessageSourceType(UpdateOutboundEmailMessageSourceType value) {
    m_messageSourceTypeHasBeenSet = true;
    m_messageSourceType = value;
  }
  inline UpdateOutboundEmailContent& WithMessageSourceType(UpdateOutboundEmailMessageSourceType value) {
    SetMessageSourceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The raw email body content.</p>
   */
  inline const UpdateOutboundRawMessage& GetRawMessage() const { return m_rawMessage; }
  inline bool RawMessageHasBeenSet() const { return m_rawMessageHasBeenSet; }
  template <typename RawMessageT = UpdateOutboundRawMessage>
  void SetRawMessage(RawMessageT&& value) {
    m_rawMessageHasBeenSet = true;
    m_rawMessage = std::forward<RawMessageT>(value);
  }
  template <typename RawMessageT = UpdateOutboundRawMessage>
  UpdateOutboundEmailContent& WithRawMessage(RawMessageT&& value) {
    SetRawMessage(std::forward<RawMessageT>(value));
    return *this;
  }
  ///@}
 private:
  UpdateOutboundEmailMessageSourceType m_messageSourceType{UpdateOutboundEmailMessageSourceType::NOT_SET};

  UpdateOutboundRawMessage m_rawMessage;
  bool m_messageSourceTypeHasBeenSet = false;
  bool m_rawMessageHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
