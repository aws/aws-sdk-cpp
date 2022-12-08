/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-data/IoTDataPlane_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoTDataPlane
{
namespace Model
{
  /**
   * <p>The output from the GetRetainedMessage operation.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-data-2015-05-28/GetRetainedMessageResponse">AWS
   * API Reference</a></p>
   */
  class GetRetainedMessageResult
  {
  public:
    AWS_IOTDATAPLANE_API GetRetainedMessageResult();
    AWS_IOTDATAPLANE_API GetRetainedMessageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTDATAPLANE_API GetRetainedMessageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The topic name to which the retained message was published.</p>
     */
    inline const Aws::String& GetTopic() const{ return m_topic; }

    /**
     * <p>The topic name to which the retained message was published.</p>
     */
    inline void SetTopic(const Aws::String& value) { m_topic = value; }

    /**
     * <p>The topic name to which the retained message was published.</p>
     */
    inline void SetTopic(Aws::String&& value) { m_topic = std::move(value); }

    /**
     * <p>The topic name to which the retained message was published.</p>
     */
    inline void SetTopic(const char* value) { m_topic.assign(value); }

    /**
     * <p>The topic name to which the retained message was published.</p>
     */
    inline GetRetainedMessageResult& WithTopic(const Aws::String& value) { SetTopic(value); return *this;}

    /**
     * <p>The topic name to which the retained message was published.</p>
     */
    inline GetRetainedMessageResult& WithTopic(Aws::String&& value) { SetTopic(std::move(value)); return *this;}

    /**
     * <p>The topic name to which the retained message was published.</p>
     */
    inline GetRetainedMessageResult& WithTopic(const char* value) { SetTopic(value); return *this;}


    /**
     * <p>The Base64-encoded message payload of the retained message body.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetPayload() const{ return m_payload; }

    /**
     * <p>The Base64-encoded message payload of the retained message body.</p>
     */
    inline void SetPayload(const Aws::Utils::ByteBuffer& value) { m_payload = value; }

    /**
     * <p>The Base64-encoded message payload of the retained message body.</p>
     */
    inline void SetPayload(Aws::Utils::ByteBuffer&& value) { m_payload = std::move(value); }

    /**
     * <p>The Base64-encoded message payload of the retained message body.</p>
     */
    inline GetRetainedMessageResult& WithPayload(const Aws::Utils::ByteBuffer& value) { SetPayload(value); return *this;}

    /**
     * <p>The Base64-encoded message payload of the retained message body.</p>
     */
    inline GetRetainedMessageResult& WithPayload(Aws::Utils::ByteBuffer&& value) { SetPayload(std::move(value)); return *this;}


    /**
     * <p>The quality of service (QoS) level used to publish the retained message.</p>
     */
    inline int GetQos() const{ return m_qos; }

    /**
     * <p>The quality of service (QoS) level used to publish the retained message.</p>
     */
    inline void SetQos(int value) { m_qos = value; }

    /**
     * <p>The quality of service (QoS) level used to publish the retained message.</p>
     */
    inline GetRetainedMessageResult& WithQos(int value) { SetQos(value); return *this;}


    /**
     * <p>The Epoch date and time, in milliseconds, when the retained message was
     * stored by IoT.</p>
     */
    inline long long GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The Epoch date and time, in milliseconds, when the retained message was
     * stored by IoT.</p>
     */
    inline void SetLastModifiedTime(long long value) { m_lastModifiedTime = value; }

    /**
     * <p>The Epoch date and time, in milliseconds, when the retained message was
     * stored by IoT.</p>
     */
    inline GetRetainedMessageResult& WithLastModifiedTime(long long value) { SetLastModifiedTime(value); return *this;}

  private:

    Aws::String m_topic;

    Aws::Utils::ByteBuffer m_payload;

    int m_qos;

    long long m_lastModifiedTime;
  };

} // namespace Model
} // namespace IoTDataPlane
} // namespace Aws
