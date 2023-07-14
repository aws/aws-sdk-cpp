/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/mediatailor/model/AdBreak.h>
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
namespace MediaTailor
{
namespace Model
{
  class AWS_MEDIATAILOR_API CreateProgramResult
  {
  public:
    CreateProgramResult();
    CreateProgramResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateProgramResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ad break configuration settings.</p>
     */
    inline const Aws::Vector<AdBreak>& GetAdBreaks() const{ return m_adBreaks; }

    /**
     * <p>The ad break configuration settings.</p>
     */
    inline void SetAdBreaks(const Aws::Vector<AdBreak>& value) { m_adBreaks = value; }

    /**
     * <p>The ad break configuration settings.</p>
     */
    inline void SetAdBreaks(Aws::Vector<AdBreak>&& value) { m_adBreaks = std::move(value); }

    /**
     * <p>The ad break configuration settings.</p>
     */
    inline CreateProgramResult& WithAdBreaks(const Aws::Vector<AdBreak>& value) { SetAdBreaks(value); return *this;}

    /**
     * <p>The ad break configuration settings.</p>
     */
    inline CreateProgramResult& WithAdBreaks(Aws::Vector<AdBreak>&& value) { SetAdBreaks(std::move(value)); return *this;}

    /**
     * <p>The ad break configuration settings.</p>
     */
    inline CreateProgramResult& AddAdBreaks(const AdBreak& value) { m_adBreaks.push_back(value); return *this; }

    /**
     * <p>The ad break configuration settings.</p>
     */
    inline CreateProgramResult& AddAdBreaks(AdBreak&& value) { m_adBreaks.push_back(std::move(value)); return *this; }


    /**
     * <p>The ARN of the program.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the program.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The ARN of the program.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The ARN of the program.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The ARN of the program.</p>
     */
    inline CreateProgramResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the program.</p>
     */
    inline CreateProgramResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the program.</p>
     */
    inline CreateProgramResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the channel that the program belongs to.</p>
     */
    inline const Aws::String& GetChannelName() const{ return m_channelName; }

    /**
     * <p>The name of the channel that the program belongs to.</p>
     */
    inline void SetChannelName(const Aws::String& value) { m_channelName = value; }

    /**
     * <p>The name of the channel that the program belongs to.</p>
     */
    inline void SetChannelName(Aws::String&& value) { m_channelName = std::move(value); }

    /**
     * <p>The name of the channel that the program belongs to.</p>
     */
    inline void SetChannelName(const char* value) { m_channelName.assign(value); }

    /**
     * <p>The name of the channel that the program belongs to.</p>
     */
    inline CreateProgramResult& WithChannelName(const Aws::String& value) { SetChannelName(value); return *this;}

    /**
     * <p>The name of the channel that the program belongs to.</p>
     */
    inline CreateProgramResult& WithChannelName(Aws::String&& value) { SetChannelName(std::move(value)); return *this;}

    /**
     * <p>The name of the channel that the program belongs to.</p>
     */
    inline CreateProgramResult& WithChannelName(const char* value) { SetChannelName(value); return *this;}


    /**
     * <p>The timestamp of when the program was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The timestamp of when the program was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The timestamp of when the program was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The timestamp of when the program was created.</p>
     */
    inline CreateProgramResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The timestamp of when the program was created.</p>
     */
    inline CreateProgramResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The name of the LiveSource for this Program.</p>
     */
    inline const Aws::String& GetLiveSourceName() const{ return m_liveSourceName; }

    /**
     * <p>The name of the LiveSource for this Program.</p>
     */
    inline void SetLiveSourceName(const Aws::String& value) { m_liveSourceName = value; }

    /**
     * <p>The name of the LiveSource for this Program.</p>
     */
    inline void SetLiveSourceName(Aws::String&& value) { m_liveSourceName = std::move(value); }

    /**
     * <p>The name of the LiveSource for this Program.</p>
     */
    inline void SetLiveSourceName(const char* value) { m_liveSourceName.assign(value); }

    /**
     * <p>The name of the LiveSource for this Program.</p>
     */
    inline CreateProgramResult& WithLiveSourceName(const Aws::String& value) { SetLiveSourceName(value); return *this;}

    /**
     * <p>The name of the LiveSource for this Program.</p>
     */
    inline CreateProgramResult& WithLiveSourceName(Aws::String&& value) { SetLiveSourceName(std::move(value)); return *this;}

    /**
     * <p>The name of the LiveSource for this Program.</p>
     */
    inline CreateProgramResult& WithLiveSourceName(const char* value) { SetLiveSourceName(value); return *this;}


    /**
     * <p>The name of the program.</p>
     */
    inline const Aws::String& GetProgramName() const{ return m_programName; }

    /**
     * <p>The name of the program.</p>
     */
    inline void SetProgramName(const Aws::String& value) { m_programName = value; }

    /**
     * <p>The name of the program.</p>
     */
    inline void SetProgramName(Aws::String&& value) { m_programName = std::move(value); }

    /**
     * <p>The name of the program.</p>
     */
    inline void SetProgramName(const char* value) { m_programName.assign(value); }

    /**
     * <p>The name of the program.</p>
     */
    inline CreateProgramResult& WithProgramName(const Aws::String& value) { SetProgramName(value); return *this;}

    /**
     * <p>The name of the program.</p>
     */
    inline CreateProgramResult& WithProgramName(Aws::String&& value) { SetProgramName(std::move(value)); return *this;}

    /**
     * <p>The name of the program.</p>
     */
    inline CreateProgramResult& WithProgramName(const char* value) { SetProgramName(value); return *this;}


    /**
     * <p>The date and time that the program is scheduled to start in ISO 8601 format
     * and Coordinated Universal Time (UTC). For example, the value
     * 2021-03-27T17:48:16.751Z represents March 27, 2021 at 17:48:16.751 UTC.</p>
     */
    inline const Aws::Utils::DateTime& GetScheduledStartTime() const{ return m_scheduledStartTime; }

    /**
     * <p>The date and time that the program is scheduled to start in ISO 8601 format
     * and Coordinated Universal Time (UTC). For example, the value
     * 2021-03-27T17:48:16.751Z represents March 27, 2021 at 17:48:16.751 UTC.</p>
     */
    inline void SetScheduledStartTime(const Aws::Utils::DateTime& value) { m_scheduledStartTime = value; }

    /**
     * <p>The date and time that the program is scheduled to start in ISO 8601 format
     * and Coordinated Universal Time (UTC). For example, the value
     * 2021-03-27T17:48:16.751Z represents March 27, 2021 at 17:48:16.751 UTC.</p>
     */
    inline void SetScheduledStartTime(Aws::Utils::DateTime&& value) { m_scheduledStartTime = std::move(value); }

    /**
     * <p>The date and time that the program is scheduled to start in ISO 8601 format
     * and Coordinated Universal Time (UTC). For example, the value
     * 2021-03-27T17:48:16.751Z represents March 27, 2021 at 17:48:16.751 UTC.</p>
     */
    inline CreateProgramResult& WithScheduledStartTime(const Aws::Utils::DateTime& value) { SetScheduledStartTime(value); return *this;}

    /**
     * <p>The date and time that the program is scheduled to start in ISO 8601 format
     * and Coordinated Universal Time (UTC). For example, the value
     * 2021-03-27T17:48:16.751Z represents March 27, 2021 at 17:48:16.751 UTC.</p>
     */
    inline CreateProgramResult& WithScheduledStartTime(Aws::Utils::DateTime&& value) { SetScheduledStartTime(std::move(value)); return *this;}


    /**
     * <p>The source location name.</p>
     */
    inline const Aws::String& GetSourceLocationName() const{ return m_sourceLocationName; }

    /**
     * <p>The source location name.</p>
     */
    inline void SetSourceLocationName(const Aws::String& value) { m_sourceLocationName = value; }

    /**
     * <p>The source location name.</p>
     */
    inline void SetSourceLocationName(Aws::String&& value) { m_sourceLocationName = std::move(value); }

    /**
     * <p>The source location name.</p>
     */
    inline void SetSourceLocationName(const char* value) { m_sourceLocationName.assign(value); }

    /**
     * <p>The source location name.</p>
     */
    inline CreateProgramResult& WithSourceLocationName(const Aws::String& value) { SetSourceLocationName(value); return *this;}

    /**
     * <p>The source location name.</p>
     */
    inline CreateProgramResult& WithSourceLocationName(Aws::String&& value) { SetSourceLocationName(std::move(value)); return *this;}

    /**
     * <p>The source location name.</p>
     */
    inline CreateProgramResult& WithSourceLocationName(const char* value) { SetSourceLocationName(value); return *this;}


    /**
     * <p>The name that's used to refer to a VOD source.</p>
     */
    inline const Aws::String& GetVodSourceName() const{ return m_vodSourceName; }

    /**
     * <p>The name that's used to refer to a VOD source.</p>
     */
    inline void SetVodSourceName(const Aws::String& value) { m_vodSourceName = value; }

    /**
     * <p>The name that's used to refer to a VOD source.</p>
     */
    inline void SetVodSourceName(Aws::String&& value) { m_vodSourceName = std::move(value); }

    /**
     * <p>The name that's used to refer to a VOD source.</p>
     */
    inline void SetVodSourceName(const char* value) { m_vodSourceName.assign(value); }

    /**
     * <p>The name that's used to refer to a VOD source.</p>
     */
    inline CreateProgramResult& WithVodSourceName(const Aws::String& value) { SetVodSourceName(value); return *this;}

    /**
     * <p>The name that's used to refer to a VOD source.</p>
     */
    inline CreateProgramResult& WithVodSourceName(Aws::String&& value) { SetVodSourceName(std::move(value)); return *this;}

    /**
     * <p>The name that's used to refer to a VOD source.</p>
     */
    inline CreateProgramResult& WithVodSourceName(const char* value) { SetVodSourceName(value); return *this;}

  private:

    Aws::Vector<AdBreak> m_adBreaks;

    Aws::String m_arn;

    Aws::String m_channelName;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_liveSourceName;

    Aws::String m_programName;

    Aws::Utils::DateTime m_scheduledStartTime;

    Aws::String m_sourceLocationName;

    Aws::String m_vodSourceName;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
