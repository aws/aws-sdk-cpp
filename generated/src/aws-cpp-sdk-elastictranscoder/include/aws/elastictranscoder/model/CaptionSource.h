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
   * <p>A source file for the input sidecar captions used during the transcoding
   * process.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/CaptionSource">AWS
   * API Reference</a></p>
   */
  class CaptionSource
  {
  public:
    AWS_ELASTICTRANSCODER_API CaptionSource() = default;
    AWS_ELASTICTRANSCODER_API CaptionSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API CaptionSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the sidecar caption file that you want Elastic Transcoder to
     * include in the output file.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    CaptionSource& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string that specifies the language of the caption. If you specified
     * multiple inputs with captions, the caption language must match in order to be
     * included in the output. Specify this as one of:</p> <ul> <li> <p>2-character ISO
     * 639-1 code</p> </li> <li> <p>3-character ISO 639-2 code</p> </li> </ul> <p>For
     * more information on ISO language codes and language names, see the List of ISO
     * 639-1 codes.</p>
     */
    inline const Aws::String& GetLanguage() const { return m_language; }
    inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }
    template<typename LanguageT = Aws::String>
    void SetLanguage(LanguageT&& value) { m_languageHasBeenSet = true; m_language = std::forward<LanguageT>(value); }
    template<typename LanguageT = Aws::String>
    CaptionSource& WithLanguage(LanguageT&& value) { SetLanguage(std::forward<LanguageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For clip generation or captions that do not start at the same time as the
     * associated video file, the <code>TimeOffset</code> tells Elastic Transcoder how
     * much of the video to encode before including captions.</p> <p>Specify the
     * TimeOffset in the form [+-]SS.sss or [+-]HH:mm:SS.ss.</p>
     */
    inline const Aws::String& GetTimeOffset() const { return m_timeOffset; }
    inline bool TimeOffsetHasBeenSet() const { return m_timeOffsetHasBeenSet; }
    template<typename TimeOffsetT = Aws::String>
    void SetTimeOffset(TimeOffsetT&& value) { m_timeOffsetHasBeenSet = true; m_timeOffset = std::forward<TimeOffsetT>(value); }
    template<typename TimeOffsetT = Aws::String>
    CaptionSource& WithTimeOffset(TimeOffsetT&& value) { SetTimeOffset(std::forward<TimeOffsetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The label of the caption shown in the player when choosing a language. We
     * recommend that you put the caption language name here, in the language of the
     * captions.</p>
     */
    inline const Aws::String& GetLabel() const { return m_label; }
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }
    template<typename LabelT = Aws::String>
    void SetLabel(LabelT&& value) { m_labelHasBeenSet = true; m_label = std::forward<LabelT>(value); }
    template<typename LabelT = Aws::String>
    CaptionSource& WithLabel(LabelT&& value) { SetLabel(std::forward<LabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption settings, if any, that Elastic Transcoder needs to decyrpt
     * your caption sources, or that you want Elastic Transcoder to apply to your
     * caption sources.</p>
     */
    inline const Encryption& GetEncryption() const { return m_encryption; }
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }
    template<typename EncryptionT = Encryption>
    void SetEncryption(EncryptionT&& value) { m_encryptionHasBeenSet = true; m_encryption = std::forward<EncryptionT>(value); }
    template<typename EncryptionT = Encryption>
    CaptionSource& WithEncryption(EncryptionT&& value) { SetEncryption(std::forward<EncryptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_language;
    bool m_languageHasBeenSet = false;

    Aws::String m_timeOffset;
    bool m_timeOffsetHasBeenSet = false;

    Aws::String m_label;
    bool m_labelHasBeenSet = false;

    Encryption m_encryption;
    bool m_encryptionHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
