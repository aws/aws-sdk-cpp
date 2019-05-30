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
#include <aws/iotanalytics/IoTAnalyticsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotanalytics/model/ChannelStorage.h>
#include <aws/iotanalytics/model/RetentionPeriod.h>
#include <utility>

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{

  /**
   */
  class AWS_IOTANALYTICS_API UpdateChannelRequest : public IoTAnalyticsRequest
  {
  public:
    UpdateChannelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateChannel"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the channel to be updated.</p>
     */
    inline const Aws::String& GetChannelName() const{ return m_channelName; }

    /**
     * <p>The name of the channel to be updated.</p>
     */
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }

    /**
     * <p>The name of the channel to be updated.</p>
     */
    inline void SetChannelName(const Aws::String& value) { m_channelNameHasBeenSet = true; m_channelName = value; }

    /**
     * <p>The name of the channel to be updated.</p>
     */
    inline void SetChannelName(Aws::String&& value) { m_channelNameHasBeenSet = true; m_channelName = std::move(value); }

    /**
     * <p>The name of the channel to be updated.</p>
     */
    inline void SetChannelName(const char* value) { m_channelNameHasBeenSet = true; m_channelName.assign(value); }

    /**
     * <p>The name of the channel to be updated.</p>
     */
    inline UpdateChannelRequest& WithChannelName(const Aws::String& value) { SetChannelName(value); return *this;}

    /**
     * <p>The name of the channel to be updated.</p>
     */
    inline UpdateChannelRequest& WithChannelName(Aws::String&& value) { SetChannelName(std::move(value)); return *this;}

    /**
     * <p>The name of the channel to be updated.</p>
     */
    inline UpdateChannelRequest& WithChannelName(const char* value) { SetChannelName(value); return *this;}


    /**
     * <p>Where channel data is stored.</p>
     */
    inline const ChannelStorage& GetChannelStorage() const{ return m_channelStorage; }

    /**
     * <p>Where channel data is stored.</p>
     */
    inline bool ChannelStorageHasBeenSet() const { return m_channelStorageHasBeenSet; }

    /**
     * <p>Where channel data is stored.</p>
     */
    inline void SetChannelStorage(const ChannelStorage& value) { m_channelStorageHasBeenSet = true; m_channelStorage = value; }

    /**
     * <p>Where channel data is stored.</p>
     */
    inline void SetChannelStorage(ChannelStorage&& value) { m_channelStorageHasBeenSet = true; m_channelStorage = std::move(value); }

    /**
     * <p>Where channel data is stored.</p>
     */
    inline UpdateChannelRequest& WithChannelStorage(const ChannelStorage& value) { SetChannelStorage(value); return *this;}

    /**
     * <p>Where channel data is stored.</p>
     */
    inline UpdateChannelRequest& WithChannelStorage(ChannelStorage&& value) { SetChannelStorage(std::move(value)); return *this;}


    /**
     * <p>How long, in days, message data is kept for the channel.</p>
     */
    inline const RetentionPeriod& GetRetentionPeriod() const{ return m_retentionPeriod; }

    /**
     * <p>How long, in days, message data is kept for the channel.</p>
     */
    inline bool RetentionPeriodHasBeenSet() const { return m_retentionPeriodHasBeenSet; }

    /**
     * <p>How long, in days, message data is kept for the channel.</p>
     */
    inline void SetRetentionPeriod(const RetentionPeriod& value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = value; }

    /**
     * <p>How long, in days, message data is kept for the channel.</p>
     */
    inline void SetRetentionPeriod(RetentionPeriod&& value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = std::move(value); }

    /**
     * <p>How long, in days, message data is kept for the channel.</p>
     */
    inline UpdateChannelRequest& WithRetentionPeriod(const RetentionPeriod& value) { SetRetentionPeriod(value); return *this;}

    /**
     * <p>How long, in days, message data is kept for the channel.</p>
     */
    inline UpdateChannelRequest& WithRetentionPeriod(RetentionPeriod&& value) { SetRetentionPeriod(std::move(value)); return *this;}

  private:

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet;

    ChannelStorage m_channelStorage;
    bool m_channelStorageHasBeenSet;

    RetentionPeriod m_retentionPeriod;
    bool m_retentionPeriodHasBeenSet;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
