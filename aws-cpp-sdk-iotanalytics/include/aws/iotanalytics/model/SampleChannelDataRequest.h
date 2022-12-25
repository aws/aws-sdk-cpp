/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/iotanalytics/IoTAnalyticsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoTAnalytics
{
namespace Model
{

  /**
   */
  class SampleChannelDataRequest : public IoTAnalyticsRequest
  {
  public:
    AWS_IOTANALYTICS_API SampleChannelDataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SampleChannelData"; }

    AWS_IOTANALYTICS_API Aws::String SerializePayload() const override;

    AWS_IOTANALYTICS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The name of the channel whose message samples are retrieved.</p>
     */
    inline const Aws::String& GetChannelName() const{ return m_channelName; }

    /**
     * <p>The name of the channel whose message samples are retrieved.</p>
     */
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }

    /**
     * <p>The name of the channel whose message samples are retrieved.</p>
     */
    inline void SetChannelName(const Aws::String& value) { m_channelNameHasBeenSet = true; m_channelName = value; }

    /**
     * <p>The name of the channel whose message samples are retrieved.</p>
     */
    inline void SetChannelName(Aws::String&& value) { m_channelNameHasBeenSet = true; m_channelName = std::move(value); }

    /**
     * <p>The name of the channel whose message samples are retrieved.</p>
     */
    inline void SetChannelName(const char* value) { m_channelNameHasBeenSet = true; m_channelName.assign(value); }

    /**
     * <p>The name of the channel whose message samples are retrieved.</p>
     */
    inline SampleChannelDataRequest& WithChannelName(const Aws::String& value) { SetChannelName(value); return *this;}

    /**
     * <p>The name of the channel whose message samples are retrieved.</p>
     */
    inline SampleChannelDataRequest& WithChannelName(Aws::String&& value) { SetChannelName(std::move(value)); return *this;}

    /**
     * <p>The name of the channel whose message samples are retrieved.</p>
     */
    inline SampleChannelDataRequest& WithChannelName(const char* value) { SetChannelName(value); return *this;}


    /**
     * <p>The number of sample messages to be retrieved. The limit is 10. The default
     * is also 10.</p>
     */
    inline int GetMaxMessages() const{ return m_maxMessages; }

    /**
     * <p>The number of sample messages to be retrieved. The limit is 10. The default
     * is also 10.</p>
     */
    inline bool MaxMessagesHasBeenSet() const { return m_maxMessagesHasBeenSet; }

    /**
     * <p>The number of sample messages to be retrieved. The limit is 10. The default
     * is also 10.</p>
     */
    inline void SetMaxMessages(int value) { m_maxMessagesHasBeenSet = true; m_maxMessages = value; }

    /**
     * <p>The number of sample messages to be retrieved. The limit is 10. The default
     * is also 10.</p>
     */
    inline SampleChannelDataRequest& WithMaxMessages(int value) { SetMaxMessages(value); return *this;}


    /**
     * <p>The start of the time window from which sample messages are retrieved.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The start of the time window from which sample messages are retrieved.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The start of the time window from which sample messages are retrieved.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The start of the time window from which sample messages are retrieved.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The start of the time window from which sample messages are retrieved.</p>
     */
    inline SampleChannelDataRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The start of the time window from which sample messages are retrieved.</p>
     */
    inline SampleChannelDataRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The end of the time window from which sample messages are retrieved.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The end of the time window from which sample messages are retrieved.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The end of the time window from which sample messages are retrieved.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The end of the time window from which sample messages are retrieved.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The end of the time window from which sample messages are retrieved.</p>
     */
    inline SampleChannelDataRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The end of the time window from which sample messages are retrieved.</p>
     */
    inline SampleChannelDataRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}

  private:

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet = false;

    int m_maxMessages;
    bool m_maxMessagesHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
