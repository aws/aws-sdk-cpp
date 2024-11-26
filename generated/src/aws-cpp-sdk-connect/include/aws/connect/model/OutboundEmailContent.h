/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/OutboundMessageSourceType.h>
#include <aws/connect/model/TemplatedMessageConfig.h>
#include <aws/connect/model/OutboundRawMessage.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/OutboundEmailContent">AWS
   * API Reference</a></p>
   */
  class OutboundEmailContent
  {
  public:
    AWS_CONNECT_API OutboundEmailContent();
    AWS_CONNECT_API OutboundEmailContent(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API OutboundEmailContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The message source type, that is, <code>RAW</code> or
     * <code>TEMPLATE</code>.</p>
     */
    inline const OutboundMessageSourceType& GetMessageSourceType() const{ return m_messageSourceType; }
    inline bool MessageSourceTypeHasBeenSet() const { return m_messageSourceTypeHasBeenSet; }
    inline void SetMessageSourceType(const OutboundMessageSourceType& value) { m_messageSourceTypeHasBeenSet = true; m_messageSourceType = value; }
    inline void SetMessageSourceType(OutboundMessageSourceType&& value) { m_messageSourceTypeHasBeenSet = true; m_messageSourceType = std::move(value); }
    inline OutboundEmailContent& WithMessageSourceType(const OutboundMessageSourceType& value) { SetMessageSourceType(value); return *this;}
    inline OutboundEmailContent& WithMessageSourceType(OutboundMessageSourceType&& value) { SetMessageSourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about template message configuration.</p>
     */
    inline const TemplatedMessageConfig& GetTemplatedMessageConfig() const{ return m_templatedMessageConfig; }
    inline bool TemplatedMessageConfigHasBeenSet() const { return m_templatedMessageConfigHasBeenSet; }
    inline void SetTemplatedMessageConfig(const TemplatedMessageConfig& value) { m_templatedMessageConfigHasBeenSet = true; m_templatedMessageConfig = value; }
    inline void SetTemplatedMessageConfig(TemplatedMessageConfig&& value) { m_templatedMessageConfigHasBeenSet = true; m_templatedMessageConfig = std::move(value); }
    inline OutboundEmailContent& WithTemplatedMessageConfig(const TemplatedMessageConfig& value) { SetTemplatedMessageConfig(value); return *this;}
    inline OutboundEmailContent& WithTemplatedMessageConfig(TemplatedMessageConfig&& value) { SetTemplatedMessageConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The raw email body content.</p>
     */
    inline const OutboundRawMessage& GetRawMessage() const{ return m_rawMessage; }
    inline bool RawMessageHasBeenSet() const { return m_rawMessageHasBeenSet; }
    inline void SetRawMessage(const OutboundRawMessage& value) { m_rawMessageHasBeenSet = true; m_rawMessage = value; }
    inline void SetRawMessage(OutboundRawMessage&& value) { m_rawMessageHasBeenSet = true; m_rawMessage = std::move(value); }
    inline OutboundEmailContent& WithRawMessage(const OutboundRawMessage& value) { SetRawMessage(value); return *this;}
    inline OutboundEmailContent& WithRawMessage(OutboundRawMessage&& value) { SetRawMessage(std::move(value)); return *this;}
    ///@}
  private:

    OutboundMessageSourceType m_messageSourceType;
    bool m_messageSourceTypeHasBeenSet = false;

    TemplatedMessageConfig m_templatedMessageConfig;
    bool m_templatedMessageConfigHasBeenSet = false;

    OutboundRawMessage m_rawMessage;
    bool m_rawMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
