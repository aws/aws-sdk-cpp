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
#include <aws/iot-data/IoTDataPlane_EXPORTS.h>
#include <aws/iot-data/IoTDataPlaneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoTDataPlane
{
namespace Model
{

  /**
   * <p>The input for the Publish operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-data-2015-05-28/PublishRequest">AWS
   * API Reference</a></p>
   */
  class AWS_IOTDATAPLANE_API PublishRequest : public StreamingIoTDataPlaneRequest
  {
  public:
    PublishRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "Publish"; }

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The name of the MQTT topic.</p>
     */
    inline const Aws::String& GetTopic() const{ return m_topic; }

    /**
     * <p>The name of the MQTT topic.</p>
     */
    inline bool TopicHasBeenSet() const { return m_topicHasBeenSet; }

    /**
     * <p>The name of the MQTT topic.</p>
     */
    inline void SetTopic(const Aws::String& value) { m_topicHasBeenSet = true; m_topic = value; }

    /**
     * <p>The name of the MQTT topic.</p>
     */
    inline void SetTopic(Aws::String&& value) { m_topicHasBeenSet = true; m_topic = std::move(value); }

    /**
     * <p>The name of the MQTT topic.</p>
     */
    inline void SetTopic(const char* value) { m_topicHasBeenSet = true; m_topic.assign(value); }

    /**
     * <p>The name of the MQTT topic.</p>
     */
    inline PublishRequest& WithTopic(const Aws::String& value) { SetTopic(value); return *this;}

    /**
     * <p>The name of the MQTT topic.</p>
     */
    inline PublishRequest& WithTopic(Aws::String&& value) { SetTopic(std::move(value)); return *this;}

    /**
     * <p>The name of the MQTT topic.</p>
     */
    inline PublishRequest& WithTopic(const char* value) { SetTopic(value); return *this;}


    /**
     * <p>The Quality of Service (QoS) level.</p>
     */
    inline int GetQos() const{ return m_qos; }

    /**
     * <p>The Quality of Service (QoS) level.</p>
     */
    inline bool QosHasBeenSet() const { return m_qosHasBeenSet; }

    /**
     * <p>The Quality of Service (QoS) level.</p>
     */
    inline void SetQos(int value) { m_qosHasBeenSet = true; m_qos = value; }

    /**
     * <p>The Quality of Service (QoS) level.</p>
     */
    inline PublishRequest& WithQos(int value) { SetQos(value); return *this;}

  private:

    Aws::String m_topic;
    bool m_topicHasBeenSet;

    int m_qos;
    bool m_qosHasBeenSet;

  };

} // namespace Model
} // namespace IoTDataPlane
} // namespace Aws
