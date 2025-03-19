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
    AWS_IOTDATAPLANE_API GetRetainedMessageResult() = default;
    AWS_IOTDATAPLANE_API GetRetainedMessageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTDATAPLANE_API GetRetainedMessageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The topic name to which the retained message was published.</p>
     */
    inline const Aws::String& GetTopic() const { return m_topic; }
    template<typename TopicT = Aws::String>
    void SetTopic(TopicT&& value) { m_topicHasBeenSet = true; m_topic = std::forward<TopicT>(value); }
    template<typename TopicT = Aws::String>
    GetRetainedMessageResult& WithTopic(TopicT&& value) { SetTopic(std::forward<TopicT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Base64-encoded message payload of the retained message body.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetPayload() const { return m_payload; }
    template<typename PayloadT = Aws::Utils::ByteBuffer>
    void SetPayload(PayloadT&& value) { m_payloadHasBeenSet = true; m_payload = std::forward<PayloadT>(value); }
    template<typename PayloadT = Aws::Utils::ByteBuffer>
    GetRetainedMessageResult& WithPayload(PayloadT&& value) { SetPayload(std::forward<PayloadT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The quality of service (QoS) level used to publish the retained message.</p>
     */
    inline int GetQos() const { return m_qos; }
    inline void SetQos(int value) { m_qosHasBeenSet = true; m_qos = value; }
    inline GetRetainedMessageResult& WithQos(int value) { SetQos(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Epoch date and time, in milliseconds, when the retained message was
     * stored by IoT.</p>
     */
    inline long long GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline void SetLastModifiedTime(long long value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline GetRetainedMessageResult& WithLastModifiedTime(long long value) { SetLastModifiedTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A base64-encoded JSON string that includes an array of JSON objects, or null
     * if the retained message doesn't include any user properties.</p> <p>The
     * following example <code>userProperties</code> parameter is a JSON string that
     * represents two user properties. Note that it will be base64-encoded:</p> <p>
     * <code>[{"deviceName": "alpha"}, {"deviceCnt": "45"}]</code> </p>
     */
    inline const Aws::Utils::ByteBuffer& GetUserProperties() const { return m_userProperties; }
    template<typename UserPropertiesT = Aws::Utils::ByteBuffer>
    void SetUserProperties(UserPropertiesT&& value) { m_userPropertiesHasBeenSet = true; m_userProperties = std::forward<UserPropertiesT>(value); }
    template<typename UserPropertiesT = Aws::Utils::ByteBuffer>
    GetRetainedMessageResult& WithUserProperties(UserPropertiesT&& value) { SetUserProperties(std::forward<UserPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRetainedMessageResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_topic;
    bool m_topicHasBeenSet = false;

    Aws::Utils::ByteBuffer m_payload{};
    bool m_payloadHasBeenSet = false;

    int m_qos{0};
    bool m_qosHasBeenSet = false;

    long long m_lastModifiedTime{0};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::Utils::ByteBuffer m_userProperties{};
    bool m_userPropertiesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTDataPlane
} // namespace Aws
