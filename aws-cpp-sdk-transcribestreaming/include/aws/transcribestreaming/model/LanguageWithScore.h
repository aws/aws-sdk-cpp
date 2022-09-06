/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/transcribestreaming/model/LanguageCode.h>
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
namespace TranscribeStreamingService
{
namespace Model
{

  /**
   * <p>The language codes of the identified languages and their associated
   * confidence scores. The confidence score is a value between zero and one; a
   * larger value indicates a higher confidence in the identified
   * language.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/LanguageWithScore">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSCRIBESTREAMINGSERVICE_API LanguageWithScore
  {
  public:
    LanguageWithScore();
    LanguageWithScore(Aws::Utils::Json::JsonView jsonValue);
    LanguageWithScore& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The language code of the language identified by Amazon Transcribe.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language code of the language identified by Amazon Transcribe.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>The language code of the language identified by Amazon Transcribe.</p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>The language code of the language identified by Amazon Transcribe.</p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>The language code of the language identified by Amazon Transcribe.</p>
     */
    inline LanguageWithScore& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language code of the language identified by Amazon Transcribe.</p>
     */
    inline LanguageWithScore& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>The confidence score for the associated language code. Confidence scores are
     * values between zero and one; larger values indicate a higher confidence in the
     * identified language. </p>
     */
    inline double GetScore() const{ return m_score; }

    /**
     * <p>The confidence score for the associated language code. Confidence scores are
     * values between zero and one; larger values indicate a higher confidence in the
     * identified language. </p>
     */
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }

    /**
     * <p>The confidence score for the associated language code. Confidence scores are
     * values between zero and one; larger values indicate a higher confidence in the
     * identified language. </p>
     */
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }

    /**
     * <p>The confidence score for the associated language code. Confidence scores are
     * values between zero and one; larger values indicate a higher confidence in the
     * identified language. </p>
     */
    inline LanguageWithScore& WithScore(double value) { SetScore(value); return *this;}

  private:

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    double m_score;
    bool m_scoreHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
