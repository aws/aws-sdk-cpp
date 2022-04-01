/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/MediaTailorRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediatailor/model/ScheduleConfiguration.h>
#include <aws/mediatailor/model/AdBreak.h>
#include <utility>

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

  /**
   */
  class AWS_MEDIATAILOR_API CreateProgramRequest : public MediaTailorRequest
  {
  public:
    CreateProgramRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateProgram"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The ad break configuration settings.</p>
     */
    inline const Aws::Vector<AdBreak>& GetAdBreaks() const{ return m_adBreaks; }

    /**
     * <p>The ad break configuration settings.</p>
     */
    inline bool AdBreaksHasBeenSet() const { return m_adBreaksHasBeenSet; }

    /**
     * <p>The ad break configuration settings.</p>
     */
    inline void SetAdBreaks(const Aws::Vector<AdBreak>& value) { m_adBreaksHasBeenSet = true; m_adBreaks = value; }

    /**
     * <p>The ad break configuration settings.</p>
     */
    inline void SetAdBreaks(Aws::Vector<AdBreak>&& value) { m_adBreaksHasBeenSet = true; m_adBreaks = std::move(value); }

    /**
     * <p>The ad break configuration settings.</p>
     */
    inline CreateProgramRequest& WithAdBreaks(const Aws::Vector<AdBreak>& value) { SetAdBreaks(value); return *this;}

    /**
     * <p>The ad break configuration settings.</p>
     */
    inline CreateProgramRequest& WithAdBreaks(Aws::Vector<AdBreak>&& value) { SetAdBreaks(std::move(value)); return *this;}

    /**
     * <p>The ad break configuration settings.</p>
     */
    inline CreateProgramRequest& AddAdBreaks(const AdBreak& value) { m_adBreaksHasBeenSet = true; m_adBreaks.push_back(value); return *this; }

    /**
     * <p>The ad break configuration settings.</p>
     */
    inline CreateProgramRequest& AddAdBreaks(AdBreak&& value) { m_adBreaksHasBeenSet = true; m_adBreaks.push_back(std::move(value)); return *this; }


    /**
     * <p>The identifier for the channel you are working on.</p>
     */
    inline const Aws::String& GetChannelName() const{ return m_channelName; }

    /**
     * <p>The identifier for the channel you are working on.</p>
     */
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }

    /**
     * <p>The identifier for the channel you are working on.</p>
     */
    inline void SetChannelName(const Aws::String& value) { m_channelNameHasBeenSet = true; m_channelName = value; }

    /**
     * <p>The identifier for the channel you are working on.</p>
     */
    inline void SetChannelName(Aws::String&& value) { m_channelNameHasBeenSet = true; m_channelName = std::move(value); }

    /**
     * <p>The identifier for the channel you are working on.</p>
     */
    inline void SetChannelName(const char* value) { m_channelNameHasBeenSet = true; m_channelName.assign(value); }

    /**
     * <p>The identifier for the channel you are working on.</p>
     */
    inline CreateProgramRequest& WithChannelName(const Aws::String& value) { SetChannelName(value); return *this;}

    /**
     * <p>The identifier for the channel you are working on.</p>
     */
    inline CreateProgramRequest& WithChannelName(Aws::String&& value) { SetChannelName(std::move(value)); return *this;}

    /**
     * <p>The identifier for the channel you are working on.</p>
     */
    inline CreateProgramRequest& WithChannelName(const char* value) { SetChannelName(value); return *this;}


    /**
     * <p>The identifier for the program you are working on.</p>
     */
    inline const Aws::String& GetProgramName() const{ return m_programName; }

    /**
     * <p>The identifier for the program you are working on.</p>
     */
    inline bool ProgramNameHasBeenSet() const { return m_programNameHasBeenSet; }

    /**
     * <p>The identifier for the program you are working on.</p>
     */
    inline void SetProgramName(const Aws::String& value) { m_programNameHasBeenSet = true; m_programName = value; }

    /**
     * <p>The identifier for the program you are working on.</p>
     */
    inline void SetProgramName(Aws::String&& value) { m_programNameHasBeenSet = true; m_programName = std::move(value); }

    /**
     * <p>The identifier for the program you are working on.</p>
     */
    inline void SetProgramName(const char* value) { m_programNameHasBeenSet = true; m_programName.assign(value); }

    /**
     * <p>The identifier for the program you are working on.</p>
     */
    inline CreateProgramRequest& WithProgramName(const Aws::String& value) { SetProgramName(value); return *this;}

    /**
     * <p>The identifier for the program you are working on.</p>
     */
    inline CreateProgramRequest& WithProgramName(Aws::String&& value) { SetProgramName(std::move(value)); return *this;}

    /**
     * <p>The identifier for the program you are working on.</p>
     */
    inline CreateProgramRequest& WithProgramName(const char* value) { SetProgramName(value); return *this;}


    /**
     * <p>The schedule configuration settings.</p>
     */
    inline const ScheduleConfiguration& GetScheduleConfiguration() const{ return m_scheduleConfiguration; }

    /**
     * <p>The schedule configuration settings.</p>
     */
    inline bool ScheduleConfigurationHasBeenSet() const { return m_scheduleConfigurationHasBeenSet; }

    /**
     * <p>The schedule configuration settings.</p>
     */
    inline void SetScheduleConfiguration(const ScheduleConfiguration& value) { m_scheduleConfigurationHasBeenSet = true; m_scheduleConfiguration = value; }

    /**
     * <p>The schedule configuration settings.</p>
     */
    inline void SetScheduleConfiguration(ScheduleConfiguration&& value) { m_scheduleConfigurationHasBeenSet = true; m_scheduleConfiguration = std::move(value); }

    /**
     * <p>The schedule configuration settings.</p>
     */
    inline CreateProgramRequest& WithScheduleConfiguration(const ScheduleConfiguration& value) { SetScheduleConfiguration(value); return *this;}

    /**
     * <p>The schedule configuration settings.</p>
     */
    inline CreateProgramRequest& WithScheduleConfiguration(ScheduleConfiguration&& value) { SetScheduleConfiguration(std::move(value)); return *this;}


    /**
     * <p>The name of the source location.</p>
     */
    inline const Aws::String& GetSourceLocationName() const{ return m_sourceLocationName; }

    /**
     * <p>The name of the source location.</p>
     */
    inline bool SourceLocationNameHasBeenSet() const { return m_sourceLocationNameHasBeenSet; }

    /**
     * <p>The name of the source location.</p>
     */
    inline void SetSourceLocationName(const Aws::String& value) { m_sourceLocationNameHasBeenSet = true; m_sourceLocationName = value; }

    /**
     * <p>The name of the source location.</p>
     */
    inline void SetSourceLocationName(Aws::String&& value) { m_sourceLocationNameHasBeenSet = true; m_sourceLocationName = std::move(value); }

    /**
     * <p>The name of the source location.</p>
     */
    inline void SetSourceLocationName(const char* value) { m_sourceLocationNameHasBeenSet = true; m_sourceLocationName.assign(value); }

    /**
     * <p>The name of the source location.</p>
     */
    inline CreateProgramRequest& WithSourceLocationName(const Aws::String& value) { SetSourceLocationName(value); return *this;}

    /**
     * <p>The name of the source location.</p>
     */
    inline CreateProgramRequest& WithSourceLocationName(Aws::String&& value) { SetSourceLocationName(std::move(value)); return *this;}

    /**
     * <p>The name of the source location.</p>
     */
    inline CreateProgramRequest& WithSourceLocationName(const char* value) { SetSourceLocationName(value); return *this;}


    /**
     * <p>The name that's used to refer to a VOD source.</p>
     */
    inline const Aws::String& GetVodSourceName() const{ return m_vodSourceName; }

    /**
     * <p>The name that's used to refer to a VOD source.</p>
     */
    inline bool VodSourceNameHasBeenSet() const { return m_vodSourceNameHasBeenSet; }

    /**
     * <p>The name that's used to refer to a VOD source.</p>
     */
    inline void SetVodSourceName(const Aws::String& value) { m_vodSourceNameHasBeenSet = true; m_vodSourceName = value; }

    /**
     * <p>The name that's used to refer to a VOD source.</p>
     */
    inline void SetVodSourceName(Aws::String&& value) { m_vodSourceNameHasBeenSet = true; m_vodSourceName = std::move(value); }

    /**
     * <p>The name that's used to refer to a VOD source.</p>
     */
    inline void SetVodSourceName(const char* value) { m_vodSourceNameHasBeenSet = true; m_vodSourceName.assign(value); }

    /**
     * <p>The name that's used to refer to a VOD source.</p>
     */
    inline CreateProgramRequest& WithVodSourceName(const Aws::String& value) { SetVodSourceName(value); return *this;}

    /**
     * <p>The name that's used to refer to a VOD source.</p>
     */
    inline CreateProgramRequest& WithVodSourceName(Aws::String&& value) { SetVodSourceName(std::move(value)); return *this;}

    /**
     * <p>The name that's used to refer to a VOD source.</p>
     */
    inline CreateProgramRequest& WithVodSourceName(const char* value) { SetVodSourceName(value); return *this;}

  private:

    Aws::Vector<AdBreak> m_adBreaks;
    bool m_adBreaksHasBeenSet;

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet;

    Aws::String m_programName;
    bool m_programNameHasBeenSet;

    ScheduleConfiguration m_scheduleConfiguration;
    bool m_scheduleConfigurationHasBeenSet;

    Aws::String m_sourceLocationName;
    bool m_sourceLocationNameHasBeenSet;

    Aws::String m_vodSourceName;
    bool m_vodSourceNameHasBeenSet;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
