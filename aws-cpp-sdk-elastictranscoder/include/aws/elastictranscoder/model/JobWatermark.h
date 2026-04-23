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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elastictranscoder/model/Encryption.h>
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
namespace ElasticTranscoder
{
namespace Model
{

  /**
   * <p>Watermarks can be in .png or .jpg format. If you want to display a watermark
   * that is not rectangular, use the .png format, which supports
   * transparency.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/JobWatermark">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICTRANSCODER_API JobWatermark
  {
  public:
    JobWatermark();
    JobWatermark(Aws::Utils::Json::JsonView jsonValue);
    JobWatermark& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the watermark settings that Elastic Transcoder uses to add
     * watermarks to the video during transcoding. The settings are in the preset
     * specified by Preset for the current output. In that preset, the value of
     * Watermarks Id tells Elastic Transcoder which settings to use.</p>
     */
    inline const Aws::String& GetPresetWatermarkId() const{ return m_presetWatermarkId; }

    /**
     * <p>The ID of the watermark settings that Elastic Transcoder uses to add
     * watermarks to the video during transcoding. The settings are in the preset
     * specified by Preset for the current output. In that preset, the value of
     * Watermarks Id tells Elastic Transcoder which settings to use.</p>
     */
    inline bool PresetWatermarkIdHasBeenSet() const { return m_presetWatermarkIdHasBeenSet; }

    /**
     * <p>The ID of the watermark settings that Elastic Transcoder uses to add
     * watermarks to the video during transcoding. The settings are in the preset
     * specified by Preset for the current output. In that preset, the value of
     * Watermarks Id tells Elastic Transcoder which settings to use.</p>
     */
    inline void SetPresetWatermarkId(const Aws::String& value) { m_presetWatermarkIdHasBeenSet = true; m_presetWatermarkId = value; }

    /**
     * <p>The ID of the watermark settings that Elastic Transcoder uses to add
     * watermarks to the video during transcoding. The settings are in the preset
     * specified by Preset for the current output. In that preset, the value of
     * Watermarks Id tells Elastic Transcoder which settings to use.</p>
     */
    inline void SetPresetWatermarkId(Aws::String&& value) { m_presetWatermarkIdHasBeenSet = true; m_presetWatermarkId = std::move(value); }

    /**
     * <p>The ID of the watermark settings that Elastic Transcoder uses to add
     * watermarks to the video during transcoding. The settings are in the preset
     * specified by Preset for the current output. In that preset, the value of
     * Watermarks Id tells Elastic Transcoder which settings to use.</p>
     */
    inline void SetPresetWatermarkId(const char* value) { m_presetWatermarkIdHasBeenSet = true; m_presetWatermarkId.assign(value); }

    /**
     * <p>The ID of the watermark settings that Elastic Transcoder uses to add
     * watermarks to the video during transcoding. The settings are in the preset
     * specified by Preset for the current output. In that preset, the value of
     * Watermarks Id tells Elastic Transcoder which settings to use.</p>
     */
    inline JobWatermark& WithPresetWatermarkId(const Aws::String& value) { SetPresetWatermarkId(value); return *this;}

    /**
     * <p>The ID of the watermark settings that Elastic Transcoder uses to add
     * watermarks to the video during transcoding. The settings are in the preset
     * specified by Preset for the current output. In that preset, the value of
     * Watermarks Id tells Elastic Transcoder which settings to use.</p>
     */
    inline JobWatermark& WithPresetWatermarkId(Aws::String&& value) { SetPresetWatermarkId(std::move(value)); return *this;}

    /**
     * <p>The ID of the watermark settings that Elastic Transcoder uses to add
     * watermarks to the video during transcoding. The settings are in the preset
     * specified by Preset for the current output. In that preset, the value of
     * Watermarks Id tells Elastic Transcoder which settings to use.</p>
     */
    inline JobWatermark& WithPresetWatermarkId(const char* value) { SetPresetWatermarkId(value); return *this;}


    /**
     * <p> The name of the .png or .jpg file that you want to use for the watermark. To
     * determine which Amazon S3 bucket contains the specified file, Elastic Transcoder
     * checks the pipeline specified by <code>Pipeline</code>; the <code>Input
     * Bucket</code> object in that pipeline identifies the bucket.</p> <p> If the file
     * name includes a prefix, for example, <b>logos/128x64.png</b>, include the prefix
     * in the key. If the file isn't in the specified bucket, Elastic Transcoder
     * returns an error. </p>
     */
    inline const Aws::String& GetInputKey() const{ return m_inputKey; }

    /**
     * <p> The name of the .png or .jpg file that you want to use for the watermark. To
     * determine which Amazon S3 bucket contains the specified file, Elastic Transcoder
     * checks the pipeline specified by <code>Pipeline</code>; the <code>Input
     * Bucket</code> object in that pipeline identifies the bucket.</p> <p> If the file
     * name includes a prefix, for example, <b>logos/128x64.png</b>, include the prefix
     * in the key. If the file isn't in the specified bucket, Elastic Transcoder
     * returns an error. </p>
     */
    inline bool InputKeyHasBeenSet() const { return m_inputKeyHasBeenSet; }

    /**
     * <p> The name of the .png or .jpg file that you want to use for the watermark. To
     * determine which Amazon S3 bucket contains the specified file, Elastic Transcoder
     * checks the pipeline specified by <code>Pipeline</code>; the <code>Input
     * Bucket</code> object in that pipeline identifies the bucket.</p> <p> If the file
     * name includes a prefix, for example, <b>logos/128x64.png</b>, include the prefix
     * in the key. If the file isn't in the specified bucket, Elastic Transcoder
     * returns an error. </p>
     */
    inline void SetInputKey(const Aws::String& value) { m_inputKeyHasBeenSet = true; m_inputKey = value; }

    /**
     * <p> The name of the .png or .jpg file that you want to use for the watermark. To
     * determine which Amazon S3 bucket contains the specified file, Elastic Transcoder
     * checks the pipeline specified by <code>Pipeline</code>; the <code>Input
     * Bucket</code> object in that pipeline identifies the bucket.</p> <p> If the file
     * name includes a prefix, for example, <b>logos/128x64.png</b>, include the prefix
     * in the key. If the file isn't in the specified bucket, Elastic Transcoder
     * returns an error. </p>
     */
    inline void SetInputKey(Aws::String&& value) { m_inputKeyHasBeenSet = true; m_inputKey = std::move(value); }

    /**
     * <p> The name of the .png or .jpg file that you want to use for the watermark. To
     * determine which Amazon S3 bucket contains the specified file, Elastic Transcoder
     * checks the pipeline specified by <code>Pipeline</code>; the <code>Input
     * Bucket</code> object in that pipeline identifies the bucket.</p> <p> If the file
     * name includes a prefix, for example, <b>logos/128x64.png</b>, include the prefix
     * in the key. If the file isn't in the specified bucket, Elastic Transcoder
     * returns an error. </p>
     */
    inline void SetInputKey(const char* value) { m_inputKeyHasBeenSet = true; m_inputKey.assign(value); }

    /**
     * <p> The name of the .png or .jpg file that you want to use for the watermark. To
     * determine which Amazon S3 bucket contains the specified file, Elastic Transcoder
     * checks the pipeline specified by <code>Pipeline</code>; the <code>Input
     * Bucket</code> object in that pipeline identifies the bucket.</p> <p> If the file
     * name includes a prefix, for example, <b>logos/128x64.png</b>, include the prefix
     * in the key. If the file isn't in the specified bucket, Elastic Transcoder
     * returns an error. </p>
     */
    inline JobWatermark& WithInputKey(const Aws::String& value) { SetInputKey(value); return *this;}

    /**
     * <p> The name of the .png or .jpg file that you want to use for the watermark. To
     * determine which Amazon S3 bucket contains the specified file, Elastic Transcoder
     * checks the pipeline specified by <code>Pipeline</code>; the <code>Input
     * Bucket</code> object in that pipeline identifies the bucket.</p> <p> If the file
     * name includes a prefix, for example, <b>logos/128x64.png</b>, include the prefix
     * in the key. If the file isn't in the specified bucket, Elastic Transcoder
     * returns an error. </p>
     */
    inline JobWatermark& WithInputKey(Aws::String&& value) { SetInputKey(std::move(value)); return *this;}

    /**
     * <p> The name of the .png or .jpg file that you want to use for the watermark. To
     * determine which Amazon S3 bucket contains the specified file, Elastic Transcoder
     * checks the pipeline specified by <code>Pipeline</code>; the <code>Input
     * Bucket</code> object in that pipeline identifies the bucket.</p> <p> If the file
     * name includes a prefix, for example, <b>logos/128x64.png</b>, include the prefix
     * in the key. If the file isn't in the specified bucket, Elastic Transcoder
     * returns an error. </p>
     */
    inline JobWatermark& WithInputKey(const char* value) { SetInputKey(value); return *this;}


    /**
     * <p>The encryption settings, if any, that you want Elastic Transcoder to apply to
     * your watermarks.</p>
     */
    inline const Encryption& GetEncryption() const{ return m_encryption; }

    /**
     * <p>The encryption settings, if any, that you want Elastic Transcoder to apply to
     * your watermarks.</p>
     */
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }

    /**
     * <p>The encryption settings, if any, that you want Elastic Transcoder to apply to
     * your watermarks.</p>
     */
    inline void SetEncryption(const Encryption& value) { m_encryptionHasBeenSet = true; m_encryption = value; }

    /**
     * <p>The encryption settings, if any, that you want Elastic Transcoder to apply to
     * your watermarks.</p>
     */
    inline void SetEncryption(Encryption&& value) { m_encryptionHasBeenSet = true; m_encryption = std::move(value); }

    /**
     * <p>The encryption settings, if any, that you want Elastic Transcoder to apply to
     * your watermarks.</p>
     */
    inline JobWatermark& WithEncryption(const Encryption& value) { SetEncryption(value); return *this;}

    /**
     * <p>The encryption settings, if any, that you want Elastic Transcoder to apply to
     * your watermarks.</p>
     */
    inline JobWatermark& WithEncryption(Encryption&& value) { SetEncryption(std::move(value)); return *this;}

  private:

    Aws::String m_presetWatermarkId;
    bool m_presetWatermarkIdHasBeenSet;

    Aws::String m_inputKey;
    bool m_inputKeyHasBeenSet;

    Encryption m_encryption;
    bool m_encryptionHasBeenSet;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
