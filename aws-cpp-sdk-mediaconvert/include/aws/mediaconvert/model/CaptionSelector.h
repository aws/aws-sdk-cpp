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
#include <aws/mediaconvert/model/LanguageCode.h>
#include <aws/mediaconvert/model/CaptionSourceSettings.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MediaConvert
{
namespace Model
{

  /**
   * Caption inputs to be mapped to caption outputs.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/CaptionSelector">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API CaptionSelector
  {
  public:
    CaptionSelector();
    CaptionSelector(const Aws::Utils::Json::JsonValue& jsonValue);
    CaptionSelector& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The specific language to extract from source. If input is SCTE-27, complete this
     * field and/or PID to select the caption language to extract. If input is DVB-Sub
     * and output is Burn-in or SMPTE-TT, complete this field and/or PID to select the
     * caption language to extract. If input is DVB-Sub that is being passed through,
     * omit this field (and PID field); there is no way to extract a specific language
     * with pass-through captions.
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * The specific language to extract from source. If input is SCTE-27, complete this
     * field and/or PID to select the caption language to extract. If input is DVB-Sub
     * and output is Burn-in or SMPTE-TT, complete this field and/or PID to select the
     * caption language to extract. If input is DVB-Sub that is being passed through,
     * omit this field (and PID field); there is no way to extract a specific language
     * with pass-through captions.
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * The specific language to extract from source. If input is SCTE-27, complete this
     * field and/or PID to select the caption language to extract. If input is DVB-Sub
     * and output is Burn-in or SMPTE-TT, complete this field and/or PID to select the
     * caption language to extract. If input is DVB-Sub that is being passed through,
     * omit this field (and PID field); there is no way to extract a specific language
     * with pass-through captions.
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * The specific language to extract from source. If input is SCTE-27, complete this
     * field and/or PID to select the caption language to extract. If input is DVB-Sub
     * and output is Burn-in or SMPTE-TT, complete this field and/or PID to select the
     * caption language to extract. If input is DVB-Sub that is being passed through,
     * omit this field (and PID field); there is no way to extract a specific language
     * with pass-through captions.
     */
    inline CaptionSelector& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * The specific language to extract from source. If input is SCTE-27, complete this
     * field and/or PID to select the caption language to extract. If input is DVB-Sub
     * and output is Burn-in or SMPTE-TT, complete this field and/or PID to select the
     * caption language to extract. If input is DVB-Sub that is being passed through,
     * omit this field (and PID field); there is no way to extract a specific language
     * with pass-through captions.
     */
    inline CaptionSelector& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    
    inline const CaptionSourceSettings& GetSourceSettings() const{ return m_sourceSettings; }

    
    inline void SetSourceSettings(const CaptionSourceSettings& value) { m_sourceSettingsHasBeenSet = true; m_sourceSettings = value; }

    
    inline void SetSourceSettings(CaptionSourceSettings&& value) { m_sourceSettingsHasBeenSet = true; m_sourceSettings = std::move(value); }

    
    inline CaptionSelector& WithSourceSettings(const CaptionSourceSettings& value) { SetSourceSettings(value); return *this;}

    
    inline CaptionSelector& WithSourceSettings(CaptionSourceSettings&& value) { SetSourceSettings(std::move(value)); return *this;}

  private:

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet;

    CaptionSourceSettings m_sourceSettings;
    bool m_sourceSettingsHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
