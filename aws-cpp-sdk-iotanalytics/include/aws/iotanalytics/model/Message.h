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
  class AWS_IOTANALYTICS_API Message
  {
  public:
    Message();
    Message(Aws::Utils::Json::JsonView jsonValue);
    Message& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID you wish to assign to the message. Each "messageId" must be unique
     * within each batch sent.</p>
     */
    inline const Aws::String& GetMessageId() const{ return m_messageId; }

    /**
     * <p>The ID you wish to assign to the message. Each "messageId" must be unique
     * within each batch sent.</p>
     */
    inline bool MessageIdHasBeenSet() const { return m_messageIdHasBeenSet; }

    /**
     * <p>The ID you wish to assign to the message. Each "messageId" must be unique
     * within each batch sent.</p>
     */
    inline void SetMessageId(const Aws::String& value) { m_messageIdHasBeenSet = true; m_messageId = value; }

    /**
     * <p>The ID you wish to assign to the message. Each "messageId" must be unique
     * within each batch sent.</p>
     */
    inline void SetMessageId(Aws::String&& value) { m_messageIdHasBeenSet = true; m_messageId = std::move(value); }

    /**
     * <p>The ID you wish to assign to the message. Each "messageId" must be unique
     * within each batch sent.</p>
     */
    inline void SetMessageId(const char* value) { m_messageIdHasBeenSet = true; m_messageId.assign(value); }

    /**
     * <p>The ID you wish to assign to the message. Each "messageId" must be unique
     * within each batch sent.</p>
     */
    inline Message& WithMessageId(const Aws::String& value) { SetMessageId(value); return *this;}

    /**
     * <p>The ID you wish to assign to the message. Each "messageId" must be unique
     * within each batch sent.</p>
     */
    inline Message& WithMessageId(Aws::String&& value) { SetMessageId(std::move(value)); return *this;}

    /**
     * <p>The ID you wish to assign to the message. Each "messageId" must be unique
     * within each batch sent.</p>
     */
    inline Message& WithMessageId(const char* value) { SetMessageId(value); return *this;}


    /**
     * <p>The payload of the message. This may be a JSON string or a Base64-encoded
     * string representing binary data (in which case you must decode it by means of a
     * pipeline activity).</p>
     */
    inline const Aws::Utils::ByteBuffer& GetPayload() const{ return m_payload; }

    /**
     * <p>The payload of the message. This may be a JSON string or a Base64-encoded
     * string representing binary data (in which case you must decode it by means of a
     * pipeline activity).</p>
     */
    inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }

    /**
     * <p>The payload of the message. This may be a JSON string or a Base64-encoded
     * string representing binary data (in which case you must decode it by means of a
     * pipeline activity).</p>
     */
    inline void SetPayload(const Aws::Utils::ByteBuffer& value) { m_payloadHasBeenSet = true; m_payload = value; }

    /**
     * <p>The payload of the message. This may be a JSON string or a Base64-encoded
     * string representing binary data (in which case you must decode it by means of a
     * pipeline activity).</p>
     */
    inline void SetPayload(Aws::Utils::ByteBuffer&& value) { m_payloadHasBeenSet = true; m_payload = std::move(value); }

    /**
     * <p>The payload of the message. This may be a JSON string or a Base64-encoded
     * string representing binary data (in which case you must decode it by means of a
     * pipeline activity).</p>
     */
    inline Message& WithPayload(const Aws::Utils::ByteBuffer& value) { SetPayload(value); return *this;}

    /**
     * <p>The payload of the message. This may be a JSON string or a Base64-encoded
     * string representing binary data (in which case you must decode it by means of a
     * pipeline activity).</p>
     */
    inline Message& WithPayload(Aws::Utils::ByteBuffer&& value) { SetPayload(std::move(value)); return *this;}

  private:

    Aws::String m_messageId;
    bool m_messageIdHasBeenSet;

    Aws::Utils::ByteBuffer m_payload;
    bool m_payloadHasBeenSet;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
