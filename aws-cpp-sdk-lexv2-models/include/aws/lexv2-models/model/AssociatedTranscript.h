/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>The object containing information that associates the recommended intent/slot
   * type with a conversation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/AssociatedTranscript">AWS
   * API Reference</a></p>
   */
  class AssociatedTranscript
  {
  public:
    AWS_LEXMODELSV2_API AssociatedTranscript();
    AWS_LEXMODELSV2_API AssociatedTranscript(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API AssociatedTranscript& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The content of the transcript that meets the search filter criteria. For the
     * JSON format of the transcript, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/designing-output-format.html">Output
     * transcript format</a>.</p>
     */
    inline const Aws::String& GetTranscript() const{ return m_transcript; }

    /**
     * <p>The content of the transcript that meets the search filter criteria. For the
     * JSON format of the transcript, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/designing-output-format.html">Output
     * transcript format</a>.</p>
     */
    inline bool TranscriptHasBeenSet() const { return m_transcriptHasBeenSet; }

    /**
     * <p>The content of the transcript that meets the search filter criteria. For the
     * JSON format of the transcript, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/designing-output-format.html">Output
     * transcript format</a>.</p>
     */
    inline void SetTranscript(const Aws::String& value) { m_transcriptHasBeenSet = true; m_transcript = value; }

    /**
     * <p>The content of the transcript that meets the search filter criteria. For the
     * JSON format of the transcript, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/designing-output-format.html">Output
     * transcript format</a>.</p>
     */
    inline void SetTranscript(Aws::String&& value) { m_transcriptHasBeenSet = true; m_transcript = std::move(value); }

    /**
     * <p>The content of the transcript that meets the search filter criteria. For the
     * JSON format of the transcript, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/designing-output-format.html">Output
     * transcript format</a>.</p>
     */
    inline void SetTranscript(const char* value) { m_transcriptHasBeenSet = true; m_transcript.assign(value); }

    /**
     * <p>The content of the transcript that meets the search filter criteria. For the
     * JSON format of the transcript, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/designing-output-format.html">Output
     * transcript format</a>.</p>
     */
    inline AssociatedTranscript& WithTranscript(const Aws::String& value) { SetTranscript(value); return *this;}

    /**
     * <p>The content of the transcript that meets the search filter criteria. For the
     * JSON format of the transcript, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/designing-output-format.html">Output
     * transcript format</a>.</p>
     */
    inline AssociatedTranscript& WithTranscript(Aws::String&& value) { SetTranscript(std::move(value)); return *this;}

    /**
     * <p>The content of the transcript that meets the search filter criteria. For the
     * JSON format of the transcript, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/designing-output-format.html">Output
     * transcript format</a>.</p>
     */
    inline AssociatedTranscript& WithTranscript(const char* value) { SetTranscript(value); return *this;}

  private:

    Aws::String m_transcript;
    bool m_transcriptHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
