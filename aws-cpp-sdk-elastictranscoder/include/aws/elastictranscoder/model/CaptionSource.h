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
   * <p>A source file for the input sidecar captions used during the transcoding
   * process.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/CaptionSource">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICTRANSCODER_API CaptionSource
  {
  public:
    CaptionSource();
    CaptionSource(Aws::Utils::Json::JsonView jsonValue);
    CaptionSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the sidecar caption file that you want Elastic Transcoder to
     * include in the output file.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The name of the sidecar caption file that you want Elastic Transcoder to
     * include in the output file.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The name of the sidecar caption file that you want Elastic Transcoder to
     * include in the output file.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The name of the sidecar caption file that you want Elastic Transcoder to
     * include in the output file.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The name of the sidecar caption file that you want Elastic Transcoder to
     * include in the output file.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The name of the sidecar caption file that you want Elastic Transcoder to
     * include in the output file.</p>
     */
    inline CaptionSource& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The name of the sidecar caption file that you want Elastic Transcoder to
     * include in the output file.</p>
     */
    inline CaptionSource& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The name of the sidecar caption file that you want Elastic Transcoder to
     * include in the output file.</p>
     */
    inline CaptionSource& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>A string that specifies the language of the caption. If you specified
     * multiple inputs with captions, the caption language must match in order to be
     * included in the output. Specify this as one of:</p> <ul> <li> <p>2-character ISO
     * 639-1 code</p> </li> <li> <p>3-character ISO 639-2 code</p> </li> </ul> <p>For
     * more information on ISO language codes and language names, see the List of ISO
     * 639-1 codes.</p>
     */
    inline const Aws::String& GetLanguage() const{ return m_language; }

    /**
     * <p>A string that specifies the language of the caption. If you specified
     * multiple inputs with captions, the caption language must match in order to be
     * included in the output. Specify this as one of:</p> <ul> <li> <p>2-character ISO
     * 639-1 code</p> </li> <li> <p>3-character ISO 639-2 code</p> </li> </ul> <p>For
     * more information on ISO language codes and language names, see the List of ISO
     * 639-1 codes.</p>
     */
    inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }

    /**
     * <p>A string that specifies the language of the caption. If you specified
     * multiple inputs with captions, the caption language must match in order to be
     * included in the output. Specify this as one of:</p> <ul> <li> <p>2-character ISO
     * 639-1 code</p> </li> <li> <p>3-character ISO 639-2 code</p> </li> </ul> <p>For
     * more information on ISO language codes and language names, see the List of ISO
     * 639-1 codes.</p>
     */
    inline void SetLanguage(const Aws::String& value) { m_languageHasBeenSet = true; m_language = value; }

    /**
     * <p>A string that specifies the language of the caption. If you specified
     * multiple inputs with captions, the caption language must match in order to be
     * included in the output. Specify this as one of:</p> <ul> <li> <p>2-character ISO
     * 639-1 code</p> </li> <li> <p>3-character ISO 639-2 code</p> </li> </ul> <p>For
     * more information on ISO language codes and language names, see the List of ISO
     * 639-1 codes.</p>
     */
    inline void SetLanguage(Aws::String&& value) { m_languageHasBeenSet = true; m_language = std::move(value); }

    /**
     * <p>A string that specifies the language of the caption. If you specified
     * multiple inputs with captions, the caption language must match in order to be
     * included in the output. Specify this as one of:</p> <ul> <li> <p>2-character ISO
     * 639-1 code</p> </li> <li> <p>3-character ISO 639-2 code</p> </li> </ul> <p>For
     * more information on ISO language codes and language names, see the List of ISO
     * 639-1 codes.</p>
     */
    inline void SetLanguage(const char* value) { m_languageHasBeenSet = true; m_language.assign(value); }

    /**
     * <p>A string that specifies the language of the caption. If you specified
     * multiple inputs with captions, the caption language must match in order to be
     * included in the output. Specify this as one of:</p> <ul> <li> <p>2-character ISO
     * 639-1 code</p> </li> <li> <p>3-character ISO 639-2 code</p> </li> </ul> <p>For
     * more information on ISO language codes and language names, see the List of ISO
     * 639-1 codes.</p>
     */
    inline CaptionSource& WithLanguage(const Aws::String& value) { SetLanguage(value); return *this;}

    /**
     * <p>A string that specifies the language of the caption. If you specified
     * multiple inputs with captions, the caption language must match in order to be
     * included in the output. Specify this as one of:</p> <ul> <li> <p>2-character ISO
     * 639-1 code</p> </li> <li> <p>3-character ISO 639-2 code</p> </li> </ul> <p>For
     * more information on ISO language codes and language names, see the List of ISO
     * 639-1 codes.</p>
     */
    inline CaptionSource& WithLanguage(Aws::String&& value) { SetLanguage(std::move(value)); return *this;}

    /**
     * <p>A string that specifies the language of the caption. If you specified
     * multiple inputs with captions, the caption language must match in order to be
     * included in the output. Specify this as one of:</p> <ul> <li> <p>2-character ISO
     * 639-1 code</p> </li> <li> <p>3-character ISO 639-2 code</p> </li> </ul> <p>For
     * more information on ISO language codes and language names, see the List of ISO
     * 639-1 codes.</p>
     */
    inline CaptionSource& WithLanguage(const char* value) { SetLanguage(value); return *this;}


    /**
     * <p>For clip generation or captions that do not start at the same time as the
     * associated video file, the <code>TimeOffset</code> tells Elastic Transcoder how
     * much of the video to encode before including captions.</p> <p>Specify the
     * TimeOffset in the form [+-]SS.sss or [+-]HH:mm:SS.ss.</p>
     */
    inline const Aws::String& GetTimeOffset() const{ return m_timeOffset; }

    /**
     * <p>For clip generation or captions that do not start at the same time as the
     * associated video file, the <code>TimeOffset</code> tells Elastic Transcoder how
     * much of the video to encode before including captions.</p> <p>Specify the
     * TimeOffset in the form [+-]SS.sss or [+-]HH:mm:SS.ss.</p>
     */
    inline bool TimeOffsetHasBeenSet() const { return m_timeOffsetHasBeenSet; }

    /**
     * <p>For clip generation or captions that do not start at the same time as the
     * associated video file, the <code>TimeOffset</code> tells Elastic Transcoder how
     * much of the video to encode before including captions.</p> <p>Specify the
     * TimeOffset in the form [+-]SS.sss or [+-]HH:mm:SS.ss.</p>
     */
    inline void SetTimeOffset(const Aws::String& value) { m_timeOffsetHasBeenSet = true; m_timeOffset = value; }

    /**
     * <p>For clip generation or captions that do not start at the same time as the
     * associated video file, the <code>TimeOffset</code> tells Elastic Transcoder how
     * much of the video to encode before including captions.</p> <p>Specify the
     * TimeOffset in the form [+-]SS.sss or [+-]HH:mm:SS.ss.</p>
     */
    inline void SetTimeOffset(Aws::String&& value) { m_timeOffsetHasBeenSet = true; m_timeOffset = std::move(value); }

    /**
     * <p>For clip generation or captions that do not start at the same time as the
     * associated video file, the <code>TimeOffset</code> tells Elastic Transcoder how
     * much of the video to encode before including captions.</p> <p>Specify the
     * TimeOffset in the form [+-]SS.sss or [+-]HH:mm:SS.ss.</p>
     */
    inline void SetTimeOffset(const char* value) { m_timeOffsetHasBeenSet = true; m_timeOffset.assign(value); }

    /**
     * <p>For clip generation or captions that do not start at the same time as the
     * associated video file, the <code>TimeOffset</code> tells Elastic Transcoder how
     * much of the video to encode before including captions.</p> <p>Specify the
     * TimeOffset in the form [+-]SS.sss or [+-]HH:mm:SS.ss.</p>
     */
    inline CaptionSource& WithTimeOffset(const Aws::String& value) { SetTimeOffset(value); return *this;}

    /**
     * <p>For clip generation or captions that do not start at the same time as the
     * associated video file, the <code>TimeOffset</code> tells Elastic Transcoder how
     * much of the video to encode before including captions.</p> <p>Specify the
     * TimeOffset in the form [+-]SS.sss or [+-]HH:mm:SS.ss.</p>
     */
    inline CaptionSource& WithTimeOffset(Aws::String&& value) { SetTimeOffset(std::move(value)); return *this;}

    /**
     * <p>For clip generation or captions that do not start at the same time as the
     * associated video file, the <code>TimeOffset</code> tells Elastic Transcoder how
     * much of the video to encode before including captions.</p> <p>Specify the
     * TimeOffset in the form [+-]SS.sss or [+-]HH:mm:SS.ss.</p>
     */
    inline CaptionSource& WithTimeOffset(const char* value) { SetTimeOffset(value); return *this;}


    /**
     * <p>The label of the caption shown in the player when choosing a language. We
     * recommend that you put the caption language name here, in the language of the
     * captions.</p>
     */
    inline const Aws::String& GetLabel() const{ return m_label; }

    /**
     * <p>The label of the caption shown in the player when choosing a language. We
     * recommend that you put the caption language name here, in the language of the
     * captions.</p>
     */
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }

    /**
     * <p>The label of the caption shown in the player when choosing a language. We
     * recommend that you put the caption language name here, in the language of the
     * captions.</p>
     */
    inline void SetLabel(const Aws::String& value) { m_labelHasBeenSet = true; m_label = value; }

    /**
     * <p>The label of the caption shown in the player when choosing a language. We
     * recommend that you put the caption language name here, in the language of the
     * captions.</p>
     */
    inline void SetLabel(Aws::String&& value) { m_labelHasBeenSet = true; m_label = std::move(value); }

    /**
     * <p>The label of the caption shown in the player when choosing a language. We
     * recommend that you put the caption language name here, in the language of the
     * captions.</p>
     */
    inline void SetLabel(const char* value) { m_labelHasBeenSet = true; m_label.assign(value); }

    /**
     * <p>The label of the caption shown in the player when choosing a language. We
     * recommend that you put the caption language name here, in the language of the
     * captions.</p>
     */
    inline CaptionSource& WithLabel(const Aws::String& value) { SetLabel(value); return *this;}

    /**
     * <p>The label of the caption shown in the player when choosing a language. We
     * recommend that you put the caption language name here, in the language of the
     * captions.</p>
     */
    inline CaptionSource& WithLabel(Aws::String&& value) { SetLabel(std::move(value)); return *this;}

    /**
     * <p>The label of the caption shown in the player when choosing a language. We
     * recommend that you put the caption language name here, in the language of the
     * captions.</p>
     */
    inline CaptionSource& WithLabel(const char* value) { SetLabel(value); return *this;}


    /**
     * <p>The encryption settings, if any, that Elastic Transcoder needs to decyrpt
     * your caption sources, or that you want Elastic Transcoder to apply to your
     * caption sources.</p>
     */
    inline const Encryption& GetEncryption() const{ return m_encryption; }

    /**
     * <p>The encryption settings, if any, that Elastic Transcoder needs to decyrpt
     * your caption sources, or that you want Elastic Transcoder to apply to your
     * caption sources.</p>
     */
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }

    /**
     * <p>The encryption settings, if any, that Elastic Transcoder needs to decyrpt
     * your caption sources, or that you want Elastic Transcoder to apply to your
     * caption sources.</p>
     */
    inline void SetEncryption(const Encryption& value) { m_encryptionHasBeenSet = true; m_encryption = value; }

    /**
     * <p>The encryption settings, if any, that Elastic Transcoder needs to decyrpt
     * your caption sources, or that you want Elastic Transcoder to apply to your
     * caption sources.</p>
     */
    inline void SetEncryption(Encryption&& value) { m_encryptionHasBeenSet = true; m_encryption = std::move(value); }

    /**
     * <p>The encryption settings, if any, that Elastic Transcoder needs to decyrpt
     * your caption sources, or that you want Elastic Transcoder to apply to your
     * caption sources.</p>
     */
    inline CaptionSource& WithEncryption(const Encryption& value) { SetEncryption(value); return *this;}

    /**
     * <p>The encryption settings, if any, that Elastic Transcoder needs to decyrpt
     * your caption sources, or that you want Elastic Transcoder to apply to your
     * caption sources.</p>
     */
    inline CaptionSource& WithEncryption(Encryption&& value) { SetEncryption(std::move(value)); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet;

    Aws::String m_language;
    bool m_languageHasBeenSet;

    Aws::String m_timeOffset;
    bool m_timeOffsetHasBeenSet;

    Aws::String m_label;
    bool m_labelHasBeenSet;

    Encryption m_encryption;
    bool m_encryptionHasBeenSet;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
