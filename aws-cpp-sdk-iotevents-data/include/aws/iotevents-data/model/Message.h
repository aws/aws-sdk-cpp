/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/iotevents-data/IoTEventsData_EXPORTS.h>
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
namespace IoTEventsData
{
namespace Model
{

  /**
   * <p>Information about a message.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/Message">AWS
   * API Reference</a></p>
   */
  class AWS_IOTEVENTSDATA_API Message
  {
  public:
    Message();
    Message(Aws::Utils::Json::JsonView jsonValue);
    Message& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID to assign to the message. Within each batch sent, each
     * <code>"messageId"</code> must be unique.</p>
     */
    inline const Aws::String& GetMessageId() const{ return m_messageId; }

    /**
     * <p>The ID to assign to the message. Within each batch sent, each
     * <code>"messageId"</code> must be unique.</p>
     */
    inline bool MessageIdHasBeenSet() const { return m_messageIdHasBeenSet; }

    /**
     * <p>The ID to assign to the message. Within each batch sent, each
     * <code>"messageId"</code> must be unique.</p>
     */
    inline void SetMessageId(const Aws::String& value) { m_messageIdHasBeenSet = true; m_messageId = value; }

    /**
     * <p>The ID to assign to the message. Within each batch sent, each
     * <code>"messageId"</code> must be unique.</p>
     */
    inline void SetMessageId(Aws::String&& value) { m_messageIdHasBeenSet = true; m_messageId = std::move(value); }

    /**
     * <p>The ID to assign to the message. Within each batch sent, each
     * <code>"messageId"</code> must be unique.</p>
     */
    inline void SetMessageId(const char* value) { m_messageIdHasBeenSet = true; m_messageId.assign(value); }

    /**
     * <p>The ID to assign to the message. Within each batch sent, each
     * <code>"messageId"</code> must be unique.</p>
     */
    inline Message& WithMessageId(const Aws::String& value) { SetMessageId(value); return *this;}

    /**
     * <p>The ID to assign to the message. Within each batch sent, each
     * <code>"messageId"</code> must be unique.</p>
     */
    inline Message& WithMessageId(Aws::String&& value) { SetMessageId(std::move(value)); return *this;}

    /**
     * <p>The ID to assign to the message. Within each batch sent, each
     * <code>"messageId"</code> must be unique.</p>
     */
    inline Message& WithMessageId(const char* value) { SetMessageId(value); return *this;}


    /**
     * <p>The name of the input into which the message payload is transformed.</p>
     */
    inline const Aws::String& GetInputName() const{ return m_inputName; }

    /**
     * <p>The name of the input into which the message payload is transformed.</p>
     */
    inline bool InputNameHasBeenSet() const { return m_inputNameHasBeenSet; }

    /**
     * <p>The name of the input into which the message payload is transformed.</p>
     */
    inline void SetInputName(const Aws::String& value) { m_inputNameHasBeenSet = true; m_inputName = value; }

    /**
     * <p>The name of the input into which the message payload is transformed.</p>
     */
    inline void SetInputName(Aws::String&& value) { m_inputNameHasBeenSet = true; m_inputName = std::move(value); }

    /**
     * <p>The name of the input into which the message payload is transformed.</p>
     */
    inline void SetInputName(const char* value) { m_inputNameHasBeenSet = true; m_inputName.assign(value); }

    /**
     * <p>The name of the input into which the message payload is transformed.</p>
     */
    inline Message& WithInputName(const Aws::String& value) { SetInputName(value); return *this;}

    /**
     * <p>The name of the input into which the message payload is transformed.</p>
     */
    inline Message& WithInputName(Aws::String&& value) { SetInputName(std::move(value)); return *this;}

    /**
     * <p>The name of the input into which the message payload is transformed.</p>
     */
    inline Message& WithInputName(const char* value) { SetInputName(value); return *this;}


    /**
     * <p>The payload of the message. This can be a JSON string or a Base-64-encoded
     * string representing binary data (in which case you must decode it).</p>
     */
    inline const Aws::Utils::ByteBuffer& GetPayload() const{ return m_payload; }

    /**
     * <p>The payload of the message. This can be a JSON string or a Base-64-encoded
     * string representing binary data (in which case you must decode it).</p>
     */
    inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }

    /**
     * <p>The payload of the message. This can be a JSON string or a Base-64-encoded
     * string representing binary data (in which case you must decode it).</p>
     */
    inline void SetPayload(const Aws::Utils::ByteBuffer& value) { m_payloadHasBeenSet = true; m_payload = value; }

    /**
     * <p>The payload of the message. This can be a JSON string or a Base-64-encoded
     * string representing binary data (in which case you must decode it).</p>
     */
    inline void SetPayload(Aws::Utils::ByteBuffer&& value) { m_payloadHasBeenSet = true; m_payload = std::move(value); }

    /**
     * <p>The payload of the message. This can be a JSON string or a Base-64-encoded
     * string representing binary data (in which case you must decode it).</p>
     */
    inline Message& WithPayload(const Aws::Utils::ByteBuffer& value) { SetPayload(value); return *this;}

    /**
     * <p>The payload of the message. This can be a JSON string or a Base-64-encoded
     * string representing binary data (in which case you must decode it).</p>
     */
    inline Message& WithPayload(Aws::Utils::ByteBuffer&& value) { SetPayload(std::move(value)); return *this;}

  private:

    Aws::String m_messageId;
    bool m_messageIdHasBeenSet;

    Aws::String m_inputName;
    bool m_inputNameHasBeenSet;

    Aws::Utils::ByteBuffer m_payload;
    bool m_payloadHasBeenSet;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
