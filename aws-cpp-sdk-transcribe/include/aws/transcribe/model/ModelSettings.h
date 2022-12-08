/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace TranscribeService
{
namespace Model
{

  /**
   * <p>Provides the name of the custom language model that was included in the
   * specified transcription job.</p> <p>Only use <code>ModelSettings</code> with the
   * <code>LanguageModelName</code> sub-parameter if you're <b>not</b> using
   * automatic language identification (<code/>). If using
   * <code>LanguageIdSettings</code> in your request, this parameter contains a
   * <code>LanguageModelName</code> sub-parameter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/ModelSettings">AWS
   * API Reference</a></p>
   */
  class ModelSettings
  {
  public:
    AWS_TRANSCRIBESERVICE_API ModelSettings();
    AWS_TRANSCRIBESERVICE_API ModelSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API ModelSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the custom language model you want to use when processing your
     * transcription job. Note that custom language model names are case sensitive.</p>
     * <p>The language of the specified custom language model must match the language
     * code that you specify in your transcription request. If the languages don't
     * match, the custom language model isn't applied. There are no errors or warnings
     * associated with a language mismatch.</p>
     */
    inline const Aws::String& GetLanguageModelName() const{ return m_languageModelName; }

    /**
     * <p>The name of the custom language model you want to use when processing your
     * transcription job. Note that custom language model names are case sensitive.</p>
     * <p>The language of the specified custom language model must match the language
     * code that you specify in your transcription request. If the languages don't
     * match, the custom language model isn't applied. There are no errors or warnings
     * associated with a language mismatch.</p>
     */
    inline bool LanguageModelNameHasBeenSet() const { return m_languageModelNameHasBeenSet; }

    /**
     * <p>The name of the custom language model you want to use when processing your
     * transcription job. Note that custom language model names are case sensitive.</p>
     * <p>The language of the specified custom language model must match the language
     * code that you specify in your transcription request. If the languages don't
     * match, the custom language model isn't applied. There are no errors or warnings
     * associated with a language mismatch.</p>
     */
    inline void SetLanguageModelName(const Aws::String& value) { m_languageModelNameHasBeenSet = true; m_languageModelName = value; }

    /**
     * <p>The name of the custom language model you want to use when processing your
     * transcription job. Note that custom language model names are case sensitive.</p>
     * <p>The language of the specified custom language model must match the language
     * code that you specify in your transcription request. If the languages don't
     * match, the custom language model isn't applied. There are no errors or warnings
     * associated with a language mismatch.</p>
     */
    inline void SetLanguageModelName(Aws::String&& value) { m_languageModelNameHasBeenSet = true; m_languageModelName = std::move(value); }

    /**
     * <p>The name of the custom language model you want to use when processing your
     * transcription job. Note that custom language model names are case sensitive.</p>
     * <p>The language of the specified custom language model must match the language
     * code that you specify in your transcription request. If the languages don't
     * match, the custom language model isn't applied. There are no errors or warnings
     * associated with a language mismatch.</p>
     */
    inline void SetLanguageModelName(const char* value) { m_languageModelNameHasBeenSet = true; m_languageModelName.assign(value); }

    /**
     * <p>The name of the custom language model you want to use when processing your
     * transcription job. Note that custom language model names are case sensitive.</p>
     * <p>The language of the specified custom language model must match the language
     * code that you specify in your transcription request. If the languages don't
     * match, the custom language model isn't applied. There are no errors or warnings
     * associated with a language mismatch.</p>
     */
    inline ModelSettings& WithLanguageModelName(const Aws::String& value) { SetLanguageModelName(value); return *this;}

    /**
     * <p>The name of the custom language model you want to use when processing your
     * transcription job. Note that custom language model names are case sensitive.</p>
     * <p>The language of the specified custom language model must match the language
     * code that you specify in your transcription request. If the languages don't
     * match, the custom language model isn't applied. There are no errors or warnings
     * associated with a language mismatch.</p>
     */
    inline ModelSettings& WithLanguageModelName(Aws::String&& value) { SetLanguageModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the custom language model you want to use when processing your
     * transcription job. Note that custom language model names are case sensitive.</p>
     * <p>The language of the specified custom language model must match the language
     * code that you specify in your transcription request. If the languages don't
     * match, the custom language model isn't applied. There are no errors or warnings
     * associated with a language mismatch.</p>
     */
    inline ModelSettings& WithLanguageModelName(const char* value) { SetLanguageModelName(value); return *this;}

  private:

    Aws::String m_languageModelName;
    bool m_languageModelNameHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
