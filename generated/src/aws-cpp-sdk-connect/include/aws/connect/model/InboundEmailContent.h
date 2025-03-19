/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/InboundMessageSourceType.h>
#include <aws/connect/model/InboundRawMessage.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Information about email body content.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/InboundEmailContent">AWS
   * API Reference</a></p>
   */
  class InboundEmailContent
  {
  public:
    AWS_CONNECT_API InboundEmailContent() = default;
    AWS_CONNECT_API InboundEmailContent(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API InboundEmailContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The message source type, that is, <code>RAW</code>.</p>
     */
    inline InboundMessageSourceType GetMessageSourceType() const { return m_messageSourceType; }
    inline bool MessageSourceTypeHasBeenSet() const { return m_messageSourceTypeHasBeenSet; }
    inline void SetMessageSourceType(InboundMessageSourceType value) { m_messageSourceTypeHasBeenSet = true; m_messageSourceType = value; }
    inline InboundEmailContent& WithMessageSourceType(InboundMessageSourceType value) { SetMessageSourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The raw email body content.</p>
     */
    inline const InboundRawMessage& GetRawMessage() const { return m_rawMessage; }
    inline bool RawMessageHasBeenSet() const { return m_rawMessageHasBeenSet; }
    template<typename RawMessageT = InboundRawMessage>
    void SetRawMessage(RawMessageT&& value) { m_rawMessageHasBeenSet = true; m_rawMessage = std::forward<RawMessageT>(value); }
    template<typename RawMessageT = InboundRawMessage>
    InboundEmailContent& WithRawMessage(RawMessageT&& value) { SetRawMessage(std::forward<RawMessageT>(value)); return *this;}
    ///@}
  private:

    InboundMessageSourceType m_messageSourceType{InboundMessageSourceType::NOT_SET};
    bool m_messageSourceTypeHasBeenSet = false;

    InboundRawMessage m_rawMessage;
    bool m_rawMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
