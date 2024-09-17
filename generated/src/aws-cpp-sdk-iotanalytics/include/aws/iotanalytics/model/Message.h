/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
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
namespace IoTAnalytics
{
namespace Model
{

  /**
   * <p>Information about a message.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/Message">AWS
   * API Reference</a></p>
   */
  class Message
  {
  public:
    AWS_IOTANALYTICS_API Message();
    AWS_IOTANALYTICS_API Message(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Message& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID you want to assign to the message. Each <code>messageId</code> must be
     * unique within each batch sent.</p>
     */
    inline const Aws::String& GetMessageId() const{ return m_messageId; }
    inline bool MessageIdHasBeenSet() const { return m_messageIdHasBeenSet; }
    inline void SetMessageId(const Aws::String& value) { m_messageIdHasBeenSet = true; m_messageId = value; }
    inline void SetMessageId(Aws::String&& value) { m_messageIdHasBeenSet = true; m_messageId = std::move(value); }
    inline void SetMessageId(const char* value) { m_messageIdHasBeenSet = true; m_messageId.assign(value); }
    inline Message& WithMessageId(const Aws::String& value) { SetMessageId(value); return *this;}
    inline Message& WithMessageId(Aws::String&& value) { SetMessageId(std::move(value)); return *this;}
    inline Message& WithMessageId(const char* value) { SetMessageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The payload of the message. This can be a JSON string or a base64-encoded
     * string representing binary data, in which case you must decode it by means of a
     * pipeline activity.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetPayload() const{ return m_payload; }
    inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }
    inline void SetPayload(const Aws::Utils::ByteBuffer& value) { m_payloadHasBeenSet = true; m_payload = value; }
    inline void SetPayload(Aws::Utils::ByteBuffer&& value) { m_payloadHasBeenSet = true; m_payload = std::move(value); }
    inline Message& WithPayload(const Aws::Utils::ByteBuffer& value) { SetPayload(value); return *this;}
    inline Message& WithPayload(Aws::Utils::ByteBuffer&& value) { SetPayload(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_messageId;
    bool m_messageIdHasBeenSet = false;

    Aws::Utils::ByteBuffer m_payload;
    bool m_payloadHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
