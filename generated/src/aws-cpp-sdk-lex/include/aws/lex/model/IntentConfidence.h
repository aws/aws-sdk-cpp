/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex/LexRuntimeService_EXPORTS.h>

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
namespace LexRuntimeService
{
namespace Model
{

  /**
   * <p>Provides a score that indicates the confidence that Amazon Lex has that an
   * intent is the one that satisfies the user's intent.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex-2016-11-28/IntentConfidence">AWS
   * API Reference</a></p>
   */
  class IntentConfidence
  {
  public:
    AWS_LEXRUNTIMESERVICE_API IntentConfidence();
    AWS_LEXRUNTIMESERVICE_API IntentConfidence(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMESERVICE_API IntentConfidence& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A score that indicates how confident Amazon Lex is that an intent satisfies
     * the user's intent. Ranges between 0.00 and 1.00. Higher scores indicate higher
     * confidence.</p>
     */
    inline double GetScore() const{ return m_score; }

    /**
     * <p>A score that indicates how confident Amazon Lex is that an intent satisfies
     * the user's intent. Ranges between 0.00 and 1.00. Higher scores indicate higher
     * confidence.</p>
     */
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }

    /**
     * <p>A score that indicates how confident Amazon Lex is that an intent satisfies
     * the user's intent. Ranges between 0.00 and 1.00. Higher scores indicate higher
     * confidence.</p>
     */
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }

    /**
     * <p>A score that indicates how confident Amazon Lex is that an intent satisfies
     * the user's intent. Ranges between 0.00 and 1.00. Higher scores indicate higher
     * confidence.</p>
     */
    inline IntentConfidence& WithScore(double value) { SetScore(value); return *this;}

  private:

    double m_score;
    bool m_scoreHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeService
} // namespace Aws
