/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>

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
   * <p>Determines whether Amazon Lex will use Amazon Comprehend to detect the
   * sentiment of user utterances.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/SentimentAnalysisSettings">AWS
   * API Reference</a></p>
   */
  class SentimentAnalysisSettings
  {
  public:
    AWS_LEXMODELSV2_API SentimentAnalysisSettings() = default;
    AWS_LEXMODELSV2_API SentimentAnalysisSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API SentimentAnalysisSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Sets whether Amazon Lex uses Amazon Comprehend to detect the sentiment of
     * user utterances.</p>
     */
    inline bool GetDetectSentiment() const { return m_detectSentiment; }
    inline bool DetectSentimentHasBeenSet() const { return m_detectSentimentHasBeenSet; }
    inline void SetDetectSentiment(bool value) { m_detectSentimentHasBeenSet = true; m_detectSentiment = value; }
    inline SentimentAnalysisSettings& WithDetectSentiment(bool value) { SetDetectSentiment(value); return *this;}
    ///@}
  private:

    bool m_detectSentiment{false};
    bool m_detectSentimentHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
