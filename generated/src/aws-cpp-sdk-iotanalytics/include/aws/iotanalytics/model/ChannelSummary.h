/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotanalytics/model/ChannelStorageSummary.h>
#include <aws/iotanalytics/model/ChannelStatus.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>A summary of information about a channel.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/ChannelSummary">AWS
   * API Reference</a></p>
   */
  class ChannelSummary
  {
  public:
    AWS_IOTANALYTICS_API ChannelSummary();
    AWS_IOTANALYTICS_API ChannelSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API ChannelSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the channel.</p>
     */
    inline const Aws::String& GetChannelName() const{ return m_channelName; }
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }
    inline void SetChannelName(const Aws::String& value) { m_channelNameHasBeenSet = true; m_channelName = value; }
    inline void SetChannelName(Aws::String&& value) { m_channelNameHasBeenSet = true; m_channelName = std::move(value); }
    inline void SetChannelName(const char* value) { m_channelNameHasBeenSet = true; m_channelName.assign(value); }
    inline ChannelSummary& WithChannelName(const Aws::String& value) { SetChannelName(value); return *this;}
    inline ChannelSummary& WithChannelName(Aws::String&& value) { SetChannelName(std::move(value)); return *this;}
    inline ChannelSummary& WithChannelName(const char* value) { SetChannelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Where channel data is stored.</p>
     */
    inline const ChannelStorageSummary& GetChannelStorage() const{ return m_channelStorage; }
    inline bool ChannelStorageHasBeenSet() const { return m_channelStorageHasBeenSet; }
    inline void SetChannelStorage(const ChannelStorageSummary& value) { m_channelStorageHasBeenSet = true; m_channelStorage = value; }
    inline void SetChannelStorage(ChannelStorageSummary&& value) { m_channelStorageHasBeenSet = true; m_channelStorage = std::move(value); }
    inline ChannelSummary& WithChannelStorage(const ChannelStorageSummary& value) { SetChannelStorage(value); return *this;}
    inline ChannelSummary& WithChannelStorage(ChannelStorageSummary&& value) { SetChannelStorage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the channel.</p>
     */
    inline const ChannelStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ChannelStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ChannelStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ChannelSummary& WithStatus(const ChannelStatus& value) { SetStatus(value); return *this;}
    inline ChannelSummary& WithStatus(ChannelStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the channel was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline ChannelSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline ChannelSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time the channel was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const{ return m_lastUpdateTime; }
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }
    inline void SetLastUpdateTime(const Aws::Utils::DateTime& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = value; }
    inline void SetLastUpdateTime(Aws::Utils::DateTime&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::move(value); }
    inline ChannelSummary& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}
    inline ChannelSummary& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time when a new message arrived in the channel.</p> <p>IoT Analytics
     * updates this value at most once per minute for one channel. Hence, the
     * <code>lastMessageArrivalTime</code> value is an approximation.</p> <p>This
     * feature only applies to messages that arrived in the data store after October
     * 23, 2020. </p>
     */
    inline const Aws::Utils::DateTime& GetLastMessageArrivalTime() const{ return m_lastMessageArrivalTime; }
    inline bool LastMessageArrivalTimeHasBeenSet() const { return m_lastMessageArrivalTimeHasBeenSet; }
    inline void SetLastMessageArrivalTime(const Aws::Utils::DateTime& value) { m_lastMessageArrivalTimeHasBeenSet = true; m_lastMessageArrivalTime = value; }
    inline void SetLastMessageArrivalTime(Aws::Utils::DateTime&& value) { m_lastMessageArrivalTimeHasBeenSet = true; m_lastMessageArrivalTime = std::move(value); }
    inline ChannelSummary& WithLastMessageArrivalTime(const Aws::Utils::DateTime& value) { SetLastMessageArrivalTime(value); return *this;}
    inline ChannelSummary& WithLastMessageArrivalTime(Aws::Utils::DateTime&& value) { SetLastMessageArrivalTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet = false;

    ChannelStorageSummary m_channelStorage;
    bool m_channelStorageHasBeenSet = false;

    ChannelStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime;
    bool m_lastUpdateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastMessageArrivalTime;
    bool m_lastMessageArrivalTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
