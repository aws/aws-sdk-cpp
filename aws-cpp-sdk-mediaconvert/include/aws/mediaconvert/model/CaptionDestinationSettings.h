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
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/BurninDestinationSettings.h>
#include <aws/mediaconvert/model/CaptionDestinationType.h>
#include <aws/mediaconvert/model/DvbSubDestinationSettings.h>
#include <aws/mediaconvert/model/EmbeddedDestinationSettings.h>
#include <aws/mediaconvert/model/SccDestinationSettings.h>
#include <aws/mediaconvert/model/TeletextDestinationSettings.h>
#include <aws/mediaconvert/model/TtmlDestinationSettings.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Specific settings required by destination type. Note that
   * burnin_destination_settings are not available if the source of the caption data
   * is Embedded or Teletext.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/CaptionDestinationSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API CaptionDestinationSettings
  {
  public:
    CaptionDestinationSettings();
    CaptionDestinationSettings(Aws::Utils::Json::JsonView jsonValue);
    CaptionDestinationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const BurninDestinationSettings& GetBurninDestinationSettings() const{ return m_burninDestinationSettings; }

    
    inline void SetBurninDestinationSettings(const BurninDestinationSettings& value) { m_burninDestinationSettingsHasBeenSet = true; m_burninDestinationSettings = value; }

    
    inline void SetBurninDestinationSettings(BurninDestinationSettings&& value) { m_burninDestinationSettingsHasBeenSet = true; m_burninDestinationSettings = std::move(value); }

    
    inline CaptionDestinationSettings& WithBurninDestinationSettings(const BurninDestinationSettings& value) { SetBurninDestinationSettings(value); return *this;}

    
    inline CaptionDestinationSettings& WithBurninDestinationSettings(BurninDestinationSettings&& value) { SetBurninDestinationSettings(std::move(value)); return *this;}


    
    inline const CaptionDestinationType& GetDestinationType() const{ return m_destinationType; }

    
    inline void SetDestinationType(const CaptionDestinationType& value) { m_destinationTypeHasBeenSet = true; m_destinationType = value; }

    
    inline void SetDestinationType(CaptionDestinationType&& value) { m_destinationTypeHasBeenSet = true; m_destinationType = std::move(value); }

    
    inline CaptionDestinationSettings& WithDestinationType(const CaptionDestinationType& value) { SetDestinationType(value); return *this;}

    
    inline CaptionDestinationSettings& WithDestinationType(CaptionDestinationType&& value) { SetDestinationType(std::move(value)); return *this;}


    
    inline const DvbSubDestinationSettings& GetDvbSubDestinationSettings() const{ return m_dvbSubDestinationSettings; }

    
    inline void SetDvbSubDestinationSettings(const DvbSubDestinationSettings& value) { m_dvbSubDestinationSettingsHasBeenSet = true; m_dvbSubDestinationSettings = value; }

    
    inline void SetDvbSubDestinationSettings(DvbSubDestinationSettings&& value) { m_dvbSubDestinationSettingsHasBeenSet = true; m_dvbSubDestinationSettings = std::move(value); }

    
    inline CaptionDestinationSettings& WithDvbSubDestinationSettings(const DvbSubDestinationSettings& value) { SetDvbSubDestinationSettings(value); return *this;}

    
    inline CaptionDestinationSettings& WithDvbSubDestinationSettings(DvbSubDestinationSettings&& value) { SetDvbSubDestinationSettings(std::move(value)); return *this;}


    
    inline const EmbeddedDestinationSettings& GetEmbeddedDestinationSettings() const{ return m_embeddedDestinationSettings; }

    
    inline void SetEmbeddedDestinationSettings(const EmbeddedDestinationSettings& value) { m_embeddedDestinationSettingsHasBeenSet = true; m_embeddedDestinationSettings = value; }

    
    inline void SetEmbeddedDestinationSettings(EmbeddedDestinationSettings&& value) { m_embeddedDestinationSettingsHasBeenSet = true; m_embeddedDestinationSettings = std::move(value); }

    
    inline CaptionDestinationSettings& WithEmbeddedDestinationSettings(const EmbeddedDestinationSettings& value) { SetEmbeddedDestinationSettings(value); return *this;}

    
    inline CaptionDestinationSettings& WithEmbeddedDestinationSettings(EmbeddedDestinationSettings&& value) { SetEmbeddedDestinationSettings(std::move(value)); return *this;}


    
    inline const SccDestinationSettings& GetSccDestinationSettings() const{ return m_sccDestinationSettings; }

    
    inline void SetSccDestinationSettings(const SccDestinationSettings& value) { m_sccDestinationSettingsHasBeenSet = true; m_sccDestinationSettings = value; }

    
    inline void SetSccDestinationSettings(SccDestinationSettings&& value) { m_sccDestinationSettingsHasBeenSet = true; m_sccDestinationSettings = std::move(value); }

    
    inline CaptionDestinationSettings& WithSccDestinationSettings(const SccDestinationSettings& value) { SetSccDestinationSettings(value); return *this;}

    
    inline CaptionDestinationSettings& WithSccDestinationSettings(SccDestinationSettings&& value) { SetSccDestinationSettings(std::move(value)); return *this;}


    
    inline const TeletextDestinationSettings& GetTeletextDestinationSettings() const{ return m_teletextDestinationSettings; }

    
    inline void SetTeletextDestinationSettings(const TeletextDestinationSettings& value) { m_teletextDestinationSettingsHasBeenSet = true; m_teletextDestinationSettings = value; }

    
    inline void SetTeletextDestinationSettings(TeletextDestinationSettings&& value) { m_teletextDestinationSettingsHasBeenSet = true; m_teletextDestinationSettings = std::move(value); }

    
    inline CaptionDestinationSettings& WithTeletextDestinationSettings(const TeletextDestinationSettings& value) { SetTeletextDestinationSettings(value); return *this;}

    
    inline CaptionDestinationSettings& WithTeletextDestinationSettings(TeletextDestinationSettings&& value) { SetTeletextDestinationSettings(std::move(value)); return *this;}


    
    inline const TtmlDestinationSettings& GetTtmlDestinationSettings() const{ return m_ttmlDestinationSettings; }

    
    inline void SetTtmlDestinationSettings(const TtmlDestinationSettings& value) { m_ttmlDestinationSettingsHasBeenSet = true; m_ttmlDestinationSettings = value; }

    
    inline void SetTtmlDestinationSettings(TtmlDestinationSettings&& value) { m_ttmlDestinationSettingsHasBeenSet = true; m_ttmlDestinationSettings = std::move(value); }

    
    inline CaptionDestinationSettings& WithTtmlDestinationSettings(const TtmlDestinationSettings& value) { SetTtmlDestinationSettings(value); return *this;}

    
    inline CaptionDestinationSettings& WithTtmlDestinationSettings(TtmlDestinationSettings&& value) { SetTtmlDestinationSettings(std::move(value)); return *this;}

  private:

    BurninDestinationSettings m_burninDestinationSettings;
    bool m_burninDestinationSettingsHasBeenSet;

    CaptionDestinationType m_destinationType;
    bool m_destinationTypeHasBeenSet;

    DvbSubDestinationSettings m_dvbSubDestinationSettings;
    bool m_dvbSubDestinationSettingsHasBeenSet;

    EmbeddedDestinationSettings m_embeddedDestinationSettings;
    bool m_embeddedDestinationSettingsHasBeenSet;

    SccDestinationSettings m_sccDestinationSettings;
    bool m_sccDestinationSettingsHasBeenSet;

    TeletextDestinationSettings m_teletextDestinationSettings;
    bool m_teletextDestinationSettingsHasBeenSet;

    TtmlDestinationSettings m_ttmlDestinationSettings;
    bool m_ttmlDestinationSettingsHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
