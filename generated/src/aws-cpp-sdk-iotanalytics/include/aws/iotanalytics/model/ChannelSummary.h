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
    AWS_IOTANALYTICS_API ChannelSummary() = default;
    AWS_IOTANALYTICS_API ChannelSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API ChannelSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the channel.</p>
     */
    inline const Aws::String& GetChannelName() const { return m_channelName; }
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }
    template<typename ChannelNameT = Aws::String>
    void SetChannelName(ChannelNameT&& value) { m_channelNameHasBeenSet = true; m_channelName = std::forward<ChannelNameT>(value); }
    template<typename ChannelNameT = Aws::String>
    ChannelSummary& WithChannelName(ChannelNameT&& value) { SetChannelName(std::forward<ChannelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Where channel data is stored.</p>
     */
    inline const ChannelStorageSummary& GetChannelStorage() const { return m_channelStorage; }
    inline bool ChannelStorageHasBeenSet() const { return m_channelStorageHasBeenSet; }
    template<typename ChannelStorageT = ChannelStorageSummary>
    void SetChannelStorage(ChannelStorageT&& value) { m_channelStorageHasBeenSet = true; m_channelStorage = std::forward<ChannelStorageT>(value); }
    template<typename ChannelStorageT = ChannelStorageSummary>
    ChannelSummary& WithChannelStorage(ChannelStorageT&& value) { SetChannelStorage(std::forward<ChannelStorageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the channel.</p>
     */
    inline ChannelStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ChannelStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ChannelSummary& WithStatus(ChannelStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the channel was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    ChannelSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time the channel was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const { return m_lastUpdateTime; }
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    void SetLastUpdateTime(LastUpdateTimeT&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::forward<LastUpdateTimeT>(value); }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    ChannelSummary& WithLastUpdateTime(LastUpdateTimeT&& value) { SetLastUpdateTime(std::forward<LastUpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time when a new message arrived in the channel.</p> <p>IoT Analytics
     * updates this value at most once per minute for one channel. Hence, the
     * <code>lastMessageArrivalTime</code> value is an approximation.</p> <p>This
     * feature only applies to messages that arrived in the data store after October
     * 23, 2020. </p>
     */
    inline const Aws::Utils::DateTime& GetLastMessageArrivalTime() const { return m_lastMessageArrivalTime; }
    inline bool LastMessageArrivalTimeHasBeenSet() const { return m_lastMessageArrivalTimeHasBeenSet; }
    template<typename LastMessageArrivalTimeT = Aws::Utils::DateTime>
    void SetLastMessageArrivalTime(LastMessageArrivalTimeT&& value) { m_lastMessageArrivalTimeHasBeenSet = true; m_lastMessageArrivalTime = std::forward<LastMessageArrivalTimeT>(value); }
    template<typename LastMessageArrivalTimeT = Aws::Utils::DateTime>
    ChannelSummary& WithLastMessageArrivalTime(LastMessageArrivalTimeT&& value) { SetLastMessageArrivalTime(std::forward<LastMessageArrivalTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet = false;

    ChannelStorageSummary m_channelStorage;
    bool m_channelStorageHasBeenSet = false;

    ChannelStatus m_status{ChannelStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime{};
    bool m_lastUpdateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastMessageArrivalTime{};
    bool m_lastMessageArrivalTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
