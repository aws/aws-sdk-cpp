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
  class AWS_IOTANALYTICS_API ChannelSummary
  {
  public:
    ChannelSummary();
    ChannelSummary(Aws::Utils::Json::JsonView jsonValue);
    ChannelSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the channel.</p>
     */
    inline const Aws::String& GetChannelName() const{ return m_channelName; }

    /**
     * <p>The name of the channel.</p>
     */
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }

    /**
     * <p>The name of the channel.</p>
     */
    inline void SetChannelName(const Aws::String& value) { m_channelNameHasBeenSet = true; m_channelName = value; }

    /**
     * <p>The name of the channel.</p>
     */
    inline void SetChannelName(Aws::String&& value) { m_channelNameHasBeenSet = true; m_channelName = std::move(value); }

    /**
     * <p>The name of the channel.</p>
     */
    inline void SetChannelName(const char* value) { m_channelNameHasBeenSet = true; m_channelName.assign(value); }

    /**
     * <p>The name of the channel.</p>
     */
    inline ChannelSummary& WithChannelName(const Aws::String& value) { SetChannelName(value); return *this;}

    /**
     * <p>The name of the channel.</p>
     */
    inline ChannelSummary& WithChannelName(Aws::String&& value) { SetChannelName(std::move(value)); return *this;}

    /**
     * <p>The name of the channel.</p>
     */
    inline ChannelSummary& WithChannelName(const char* value) { SetChannelName(value); return *this;}


    /**
     * <p>Where channel data is stored.</p>
     */
    inline const ChannelStorageSummary& GetChannelStorage() const{ return m_channelStorage; }

    /**
     * <p>Where channel data is stored.</p>
     */
    inline bool ChannelStorageHasBeenSet() const { return m_channelStorageHasBeenSet; }

    /**
     * <p>Where channel data is stored.</p>
     */
    inline void SetChannelStorage(const ChannelStorageSummary& value) { m_channelStorageHasBeenSet = true; m_channelStorage = value; }

    /**
     * <p>Where channel data is stored.</p>
     */
    inline void SetChannelStorage(ChannelStorageSummary&& value) { m_channelStorageHasBeenSet = true; m_channelStorage = std::move(value); }

    /**
     * <p>Where channel data is stored.</p>
     */
    inline ChannelSummary& WithChannelStorage(const ChannelStorageSummary& value) { SetChannelStorage(value); return *this;}

    /**
     * <p>Where channel data is stored.</p>
     */
    inline ChannelSummary& WithChannelStorage(ChannelStorageSummary&& value) { SetChannelStorage(std::move(value)); return *this;}


    /**
     * <p>The status of the channel.</p>
     */
    inline const ChannelStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the channel.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the channel.</p>
     */
    inline void SetStatus(const ChannelStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the channel.</p>
     */
    inline void SetStatus(ChannelStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the channel.</p>
     */
    inline ChannelSummary& WithStatus(const ChannelStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the channel.</p>
     */
    inline ChannelSummary& WithStatus(ChannelStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>When the channel was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>When the channel was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>When the channel was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>When the channel was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>When the channel was created.</p>
     */
    inline ChannelSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>When the channel was created.</p>
     */
    inline ChannelSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The last time the channel was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const{ return m_lastUpdateTime; }

    /**
     * <p>The last time the channel was updated.</p>
     */
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }

    /**
     * <p>The last time the channel was updated.</p>
     */
    inline void SetLastUpdateTime(const Aws::Utils::DateTime& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = value; }

    /**
     * <p>The last time the channel was updated.</p>
     */
    inline void SetLastUpdateTime(Aws::Utils::DateTime&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::move(value); }

    /**
     * <p>The last time the channel was updated.</p>
     */
    inline ChannelSummary& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}

    /**
     * <p>The last time the channel was updated.</p>
     */
    inline ChannelSummary& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}

  private:

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet;

    ChannelStorageSummary m_channelStorage;
    bool m_channelStorageHasBeenSet;

    ChannelStatus m_status;
    bool m_statusHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::Utils::DateTime m_lastUpdateTime;
    bool m_lastUpdateTimeHasBeenSet;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
