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
#include <aws/elastictranscoder/ElasticTranscoder_EXPORTS.h>
#include <aws/elastictranscoder/model/Preset.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ElasticTranscoder
{
namespace Model
{
  /**
   * <p>The <code>CreatePresetResponse</code> structure.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/CreatePresetResponse">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICTRANSCODER_API CreatePresetResult
  {
  public:
    CreatePresetResult();
    CreatePresetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreatePresetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A section of the response body that provides information about the preset
     * that is created.</p>
     */
    inline const Preset& GetPreset() const{ return m_preset; }

    /**
     * <p>A section of the response body that provides information about the preset
     * that is created.</p>
     */
    inline void SetPreset(const Preset& value) { m_preset = value; }

    /**
     * <p>A section of the response body that provides information about the preset
     * that is created.</p>
     */
    inline void SetPreset(Preset&& value) { m_preset = std::move(value); }

    /**
     * <p>A section of the response body that provides information about the preset
     * that is created.</p>
     */
    inline CreatePresetResult& WithPreset(const Preset& value) { SetPreset(value); return *this;}

    /**
     * <p>A section of the response body that provides information about the preset
     * that is created.</p>
     */
    inline CreatePresetResult& WithPreset(Preset&& value) { SetPreset(std::move(value)); return *this;}


    /**
     * <p>If the preset settings don't comply with the standards for the video codec
     * but Elastic Transcoder created the preset, this message explains the reason the
     * preset settings don't meet the standard. Elastic Transcoder created the preset
     * because the settings might produce acceptable output.</p>
     */
    inline const Aws::String& GetWarning() const{ return m_warning; }

    /**
     * <p>If the preset settings don't comply with the standards for the video codec
     * but Elastic Transcoder created the preset, this message explains the reason the
     * preset settings don't meet the standard. Elastic Transcoder created the preset
     * because the settings might produce acceptable output.</p>
     */
    inline void SetWarning(const Aws::String& value) { m_warning = value; }

    /**
     * <p>If the preset settings don't comply with the standards for the video codec
     * but Elastic Transcoder created the preset, this message explains the reason the
     * preset settings don't meet the standard. Elastic Transcoder created the preset
     * because the settings might produce acceptable output.</p>
     */
    inline void SetWarning(Aws::String&& value) { m_warning = std::move(value); }

    /**
     * <p>If the preset settings don't comply with the standards for the video codec
     * but Elastic Transcoder created the preset, this message explains the reason the
     * preset settings don't meet the standard. Elastic Transcoder created the preset
     * because the settings might produce acceptable output.</p>
     */
    inline void SetWarning(const char* value) { m_warning.assign(value); }

    /**
     * <p>If the preset settings don't comply with the standards for the video codec
     * but Elastic Transcoder created the preset, this message explains the reason the
     * preset settings don't meet the standard. Elastic Transcoder created the preset
     * because the settings might produce acceptable output.</p>
     */
    inline CreatePresetResult& WithWarning(const Aws::String& value) { SetWarning(value); return *this;}

    /**
     * <p>If the preset settings don't comply with the standards for the video codec
     * but Elastic Transcoder created the preset, this message explains the reason the
     * preset settings don't meet the standard. Elastic Transcoder created the preset
     * because the settings might produce acceptable output.</p>
     */
    inline CreatePresetResult& WithWarning(Aws::String&& value) { SetWarning(std::move(value)); return *this;}

    /**
     * <p>If the preset settings don't comply with the standards for the video codec
     * but Elastic Transcoder created the preset, this message explains the reason the
     * preset settings don't meet the standard. Elastic Transcoder created the preset
     * because the settings might produce acceptable output.</p>
     */
    inline CreatePresetResult& WithWarning(const char* value) { SetWarning(value); return *this;}

  private:

    Preset m_preset;

    Aws::String m_warning;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
