/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class JobWatermark
  {
  public:
    AWS_ELASTICTRANSCODER_API JobWatermark() = default;
    AWS_ELASTICTRANSCODER_API JobWatermark(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API JobWatermark& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the watermark settings that Elastic Transcoder uses to add
     * watermarks to the video during transcoding. The settings are in the preset
     * specified by Preset for the current output. In that preset, the value of
     * Watermarks Id tells Elastic Transcoder which settings to use.</p>
     */
    inline const Aws::String& GetPresetWatermarkId() const { return m_presetWatermarkId; }
    inline bool PresetWatermarkIdHasBeenSet() const { return m_presetWatermarkIdHasBeenSet; }
    template<typename PresetWatermarkIdT = Aws::String>
    void SetPresetWatermarkId(PresetWatermarkIdT&& value) { m_presetWatermarkIdHasBeenSet = true; m_presetWatermarkId = std::forward<PresetWatermarkIdT>(value); }
    template<typename PresetWatermarkIdT = Aws::String>
    JobWatermark& WithPresetWatermarkId(PresetWatermarkIdT&& value) { SetPresetWatermarkId(std::forward<PresetWatermarkIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the .png or .jpg file that you want to use for the watermark. To
     * determine which Amazon S3 bucket contains the specified file, Elastic Transcoder
     * checks the pipeline specified by <code>Pipeline</code>; the <code>Input
     * Bucket</code> object in that pipeline identifies the bucket.</p> <p> If the file
     * name includes a prefix, for example, <b>logos/128x64.png</b>, include the prefix
     * in the key. If the file isn't in the specified bucket, Elastic Transcoder
     * returns an error. </p>
     */
    inline const Aws::String& GetInputKey() const { return m_inputKey; }
    inline bool InputKeyHasBeenSet() const { return m_inputKeyHasBeenSet; }
    template<typename InputKeyT = Aws::String>
    void SetInputKey(InputKeyT&& value) { m_inputKeyHasBeenSet = true; m_inputKey = std::forward<InputKeyT>(value); }
    template<typename InputKeyT = Aws::String>
    JobWatermark& WithInputKey(InputKeyT&& value) { SetInputKey(std::forward<InputKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption settings, if any, that you want Elastic Transcoder to apply to
     * your watermarks.</p>
     */
    inline const Encryption& GetEncryption() const { return m_encryption; }
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }
    template<typename EncryptionT = Encryption>
    void SetEncryption(EncryptionT&& value) { m_encryptionHasBeenSet = true; m_encryption = std::forward<EncryptionT>(value); }
    template<typename EncryptionT = Encryption>
    JobWatermark& WithEncryption(EncryptionT&& value) { SetEncryption(std::forward<EncryptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_presetWatermarkId;
    bool m_presetWatermarkIdHasBeenSet = false;

    Aws::String m_inputKey;
    bool m_inputKeyHasBeenSet = false;

    Encryption m_encryption;
    bool m_encryptionHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
