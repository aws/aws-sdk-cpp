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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MediaTailor
{
namespace Model
{

  /**
   * <p>Program configuration parameters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/Program">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIATAILOR_API Program
  {
  public:
    Program();
    Program(Aws::Utils::Json::JsonView jsonValue);
    Program& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline Program& WithAdBreaks(const Aws::Vector<AdBreak>& value) { SetAdBreaks(value); return *this;}

    /**
     * <p>The ad break configuration settings.</p>
     */
    inline Program& WithAdBreaks(Aws::Vector<AdBreak>&& value) { SetAdBreaks(std::move(value)); return *this;}

    /**
     * <p>The ad break configuration settings.</p>
     */
    inline Program& AddAdBreaks(const AdBreak& value) { m_adBreaksHasBeenSet = true; m_adBreaks.push_back(value); return *this; }

    /**
     * <p>The ad break configuration settings.</p>
     */
    inline Program& AddAdBreaks(AdBreak&& value) { m_adBreaksHasBeenSet = true; m_adBreaks.push_back(std::move(value)); return *this; }


    /**
     * <p>The ARN of the program.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the program.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the program.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the program.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the program.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the program.</p>
     */
    inline Program& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the program.</p>
     */
    inline Program& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the program.</p>
     */
    inline Program& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the channel that the program belongs to.</p>
     */
    inline const Aws::String& GetChannelName() const{ return m_channelName; }

    /**
     * <p>The name of the channel that the program belongs to.</p>
     */
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }

    /**
     * <p>The name of the channel that the program belongs to.</p>
     */
    inline void SetChannelName(const Aws::String& value) { m_channelNameHasBeenSet = true; m_channelName = value; }

    /**
     * <p>The name of the channel that the program belongs to.</p>
     */
    inline void SetChannelName(Aws::String&& value) { m_channelNameHasBeenSet = true; m_channelName = std::move(value); }

    /**
     * <p>The name of the channel that the program belongs to.</p>
     */
    inline void SetChannelName(const char* value) { m_channelNameHasBeenSet = true; m_channelName.assign(value); }

    /**
     * <p>The name of the channel that the program belongs to.</p>
     */
    inline Program& WithChannelName(const Aws::String& value) { SetChannelName(value); return *this;}

    /**
     * <p>The name of the channel that the program belongs to.</p>
     */
    inline Program& WithChannelName(Aws::String&& value) { SetChannelName(std::move(value)); return *this;}

    /**
     * <p>The name of the channel that the program belongs to.</p>
     */
    inline Program& WithChannelName(const char* value) { SetChannelName(value); return *this;}


    /**
     * <p>The timestamp of when the program was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The timestamp of when the program was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The timestamp of when the program was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The timestamp of when the program was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The timestamp of when the program was created.</p>
     */
    inline Program& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The timestamp of when the program was created.</p>
     */
    inline Program& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The timestamp of when the program was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The timestamp of when the program was last modified.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>The timestamp of when the program was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>The timestamp of when the program was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>The timestamp of when the program was last modified.</p>
     */
    inline Program& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The timestamp of when the program was last modified.</p>
     */
    inline Program& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The name of the program.</p>
     */
    inline const Aws::String& GetProgramName() const{ return m_programName; }

    /**
     * <p>The name of the program.</p>
     */
    inline bool ProgramNameHasBeenSet() const { return m_programNameHasBeenSet; }

    /**
     * <p>The name of the program.</p>
     */
    inline void SetProgramName(const Aws::String& value) { m_programNameHasBeenSet = true; m_programName = value; }

    /**
     * <p>The name of the program.</p>
     */
    inline void SetProgramName(Aws::String&& value) { m_programNameHasBeenSet = true; m_programName = std::move(value); }

    /**
     * <p>The name of the program.</p>
     */
    inline void SetProgramName(const char* value) { m_programNameHasBeenSet = true; m_programName.assign(value); }

    /**
     * <p>The name of the program.</p>
     */
    inline Program& WithProgramName(const Aws::String& value) { SetProgramName(value); return *this;}

    /**
     * <p>The name of the program.</p>
     */
    inline Program& WithProgramName(Aws::String&& value) { SetProgramName(std::move(value)); return *this;}

    /**
     * <p>The name of the program.</p>
     */
    inline Program& WithProgramName(const char* value) { SetProgramName(value); return *this;}


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
    inline Program& WithSourceLocationName(const Aws::String& value) { SetSourceLocationName(value); return *this;}

    /**
     * <p>The name of the source location.</p>
     */
    inline Program& WithSourceLocationName(Aws::String&& value) { SetSourceLocationName(std::move(value)); return *this;}

    /**
     * <p>The name of the source location.</p>
     */
    inline Program& WithSourceLocationName(const char* value) { SetSourceLocationName(value); return *this;}


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
    inline Program& WithVodSourceName(const Aws::String& value) { SetVodSourceName(value); return *this;}

    /**
     * <p>The name that's used to refer to a VOD source.</p>
     */
    inline Program& WithVodSourceName(Aws::String&& value) { SetVodSourceName(std::move(value)); return *this;}

    /**
     * <p>The name that's used to refer to a VOD source.</p>
     */
    inline Program& WithVodSourceName(const char* value) { SetVodSourceName(value); return *this;}

  private:

    Aws::Vector<AdBreak> m_adBreaks;
    bool m_adBreaksHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet;

    Aws::String m_programName;
    bool m_programNameHasBeenSet;

    Aws::String m_sourceLocationName;
    bool m_sourceLocationNameHasBeenSet;

    Aws::String m_vodSourceName;
    bool m_vodSourceNameHasBeenSet;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
