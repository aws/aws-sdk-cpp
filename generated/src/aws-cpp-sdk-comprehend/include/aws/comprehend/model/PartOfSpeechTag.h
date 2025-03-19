/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/PartOfSpeechTagType.h>
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
namespace Comprehend
{
namespace Model
{

  /**
   * <p>Identifies the part of speech represented by the token and gives the
   * confidence that Amazon Comprehend has that the part of speech was correctly
   * identified. For more information about the parts of speech that Amazon
   * Comprehend can identify, see <a
   * href="https://docs.aws.amazon.com/comprehend/latest/dg/how-syntax.html">Syntax</a>
   * in the Comprehend Developer Guide. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/PartOfSpeechTag">AWS
   * API Reference</a></p>
   */
  class PartOfSpeechTag
  {
  public:
    AWS_COMPREHEND_API PartOfSpeechTag() = default;
    AWS_COMPREHEND_API PartOfSpeechTag(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API PartOfSpeechTag& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Identifies the part of speech that the token represents.</p>
     */
    inline PartOfSpeechTagType GetTag() const { return m_tag; }
    inline bool TagHasBeenSet() const { return m_tagHasBeenSet; }
    inline void SetTag(PartOfSpeechTagType value) { m_tagHasBeenSet = true; m_tag = value; }
    inline PartOfSpeechTag& WithTag(PartOfSpeechTagType value) { SetTag(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The confidence that Amazon Comprehend has that the part of speech was
     * correctly identified.</p>
     */
    inline double GetScore() const { return m_score; }
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }
    inline PartOfSpeechTag& WithScore(double value) { SetScore(value); return *this;}
    ///@}
  private:

    PartOfSpeechTagType m_tag{PartOfSpeechTagType::NOT_SET};
    bool m_tagHasBeenSet = false;

    double m_score{0.0};
    bool m_scoreHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
