/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/LexTranscriptFilter.h>
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
   * <p>The object representing the filter that Amazon Lex will use to select the
   * appropriate transcript.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/TranscriptFilter">AWS
   * API Reference</a></p>
   */
  class TranscriptFilter
  {
  public:
    AWS_LEXMODELSV2_API TranscriptFilter() = default;
    AWS_LEXMODELSV2_API TranscriptFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API TranscriptFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The object representing the filter that Amazon Lex will use to select the
     * appropriate transcript when the transcript format is the Amazon Lex format.</p>
     */
    inline const LexTranscriptFilter& GetLexTranscriptFilter() const { return m_lexTranscriptFilter; }
    inline bool LexTranscriptFilterHasBeenSet() const { return m_lexTranscriptFilterHasBeenSet; }
    template<typename LexTranscriptFilterT = LexTranscriptFilter>
    void SetLexTranscriptFilter(LexTranscriptFilterT&& value) { m_lexTranscriptFilterHasBeenSet = true; m_lexTranscriptFilter = std::forward<LexTranscriptFilterT>(value); }
    template<typename LexTranscriptFilterT = LexTranscriptFilter>
    TranscriptFilter& WithLexTranscriptFilter(LexTranscriptFilterT&& value) { SetLexTranscriptFilter(std::forward<LexTranscriptFilterT>(value)); return *this;}
    ///@}
  private:

    LexTranscriptFilter m_lexTranscriptFilter;
    bool m_lexTranscriptFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
