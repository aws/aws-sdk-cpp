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
   * Comprehend can identify, see <a>how-syntax</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/PartOfSpeechTag">AWS
   * API Reference</a></p>
   */
  class AWS_COMPREHEND_API PartOfSpeechTag
  {
  public:
    PartOfSpeechTag();
    PartOfSpeechTag(Aws::Utils::Json::JsonView jsonValue);
    PartOfSpeechTag& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Identifies the part of speech that the token represents.</p>
     */
    inline const PartOfSpeechTagType& GetTag() const{ return m_tag; }

    /**
     * <p>Identifies the part of speech that the token represents.</p>
     */
    inline bool TagHasBeenSet() const { return m_tagHasBeenSet; }

    /**
     * <p>Identifies the part of speech that the token represents.</p>
     */
    inline void SetTag(const PartOfSpeechTagType& value) { m_tagHasBeenSet = true; m_tag = value; }

    /**
     * <p>Identifies the part of speech that the token represents.</p>
     */
    inline void SetTag(PartOfSpeechTagType&& value) { m_tagHasBeenSet = true; m_tag = std::move(value); }

    /**
     * <p>Identifies the part of speech that the token represents.</p>
     */
    inline PartOfSpeechTag& WithTag(const PartOfSpeechTagType& value) { SetTag(value); return *this;}

    /**
     * <p>Identifies the part of speech that the token represents.</p>
     */
    inline PartOfSpeechTag& WithTag(PartOfSpeechTagType&& value) { SetTag(std::move(value)); return *this;}


    /**
     * <p>The confidence that Amazon Comprehend has that the part of speech was
     * correctly identified.</p>
     */
    inline double GetScore() const{ return m_score; }

    /**
     * <p>The confidence that Amazon Comprehend has that the part of speech was
     * correctly identified.</p>
     */
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }

    /**
     * <p>The confidence that Amazon Comprehend has that the part of speech was
     * correctly identified.</p>
     */
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }

    /**
     * <p>The confidence that Amazon Comprehend has that the part of speech was
     * correctly identified.</p>
     */
    inline PartOfSpeechTag& WithScore(double value) { SetScore(value); return *this;}

  private:

    PartOfSpeechTagType m_tag;
    bool m_tagHasBeenSet;

    double m_score;
    bool m_scoreHasBeenSet;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
