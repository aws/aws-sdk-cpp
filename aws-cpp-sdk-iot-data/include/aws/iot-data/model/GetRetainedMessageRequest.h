/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-data/IoTDataPlane_EXPORTS.h>
#include <aws/iot-data/IoTDataPlaneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoTDataPlane
{
namespace Model
{

  /**
   * <p>The input for the GetRetainedMessage operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-data-2015-05-28/GetRetainedMessageRequest">AWS
   * API Reference</a></p>
   */
  class GetRetainedMessageRequest : public IoTDataPlaneRequest
  {
  public:
    AWS_IOTDATAPLANE_API GetRetainedMessageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRetainedMessage"; }

    AWS_IOTDATAPLANE_API Aws::String SerializePayload() const override;


    /**
     * <p>The topic name of the retained message to retrieve.</p>
     */
    inline const Aws::String& GetTopic() const{ return m_topic; }

    /**
     * <p>The topic name of the retained message to retrieve.</p>
     */
    inline bool TopicHasBeenSet() const { return m_topicHasBeenSet; }

    /**
     * <p>The topic name of the retained message to retrieve.</p>
     */
    inline void SetTopic(const Aws::String& value) { m_topicHasBeenSet = true; m_topic = value; }

    /**
     * <p>The topic name of the retained message to retrieve.</p>
     */
    inline void SetTopic(Aws::String&& value) { m_topicHasBeenSet = true; m_topic = std::move(value); }

    /**
     * <p>The topic name of the retained message to retrieve.</p>
     */
    inline void SetTopic(const char* value) { m_topicHasBeenSet = true; m_topic.assign(value); }

    /**
     * <p>The topic name of the retained message to retrieve.</p>
     */
    inline GetRetainedMessageRequest& WithTopic(const Aws::String& value) { SetTopic(value); return *this;}

    /**
     * <p>The topic name of the retained message to retrieve.</p>
     */
    inline GetRetainedMessageRequest& WithTopic(Aws::String&& value) { SetTopic(std::move(value)); return *this;}

    /**
     * <p>The topic name of the retained message to retrieve.</p>
     */
    inline GetRetainedMessageRequest& WithTopic(const char* value) { SetTopic(value); return *this;}

  private:

    Aws::String m_topic;
    bool m_topicHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTDataPlane
} // namespace Aws
