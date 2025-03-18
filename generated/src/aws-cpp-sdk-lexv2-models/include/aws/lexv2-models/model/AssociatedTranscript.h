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
    AWS_LEXMODELSV2_API AssociatedTranscript() = default;
    AWS_LEXMODELSV2_API AssociatedTranscript(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API AssociatedTranscript& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The content of the transcript that meets the search filter criteria. For the
     * JSON format of the transcript, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/designing-output-format.html">Output
     * transcript format</a>.</p>
     */
    inline const Aws::String& GetTranscript() const { return m_transcript; }
    inline bool TranscriptHasBeenSet() const { return m_transcriptHasBeenSet; }
    template<typename TranscriptT = Aws::String>
    void SetTranscript(TranscriptT&& value) { m_transcriptHasBeenSet = true; m_transcript = std::forward<TranscriptT>(value); }
    template<typename TranscriptT = Aws::String>
    AssociatedTranscript& WithTranscript(TranscriptT&& value) { SetTranscript(std::forward<TranscriptT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_transcript;
    bool m_transcriptHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
