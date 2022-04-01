/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/PiiEntityType.h>
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
   * <p>Provides information about a PII entity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/PiiEntity">AWS
   * API Reference</a></p>
   */
  class AWS_COMPREHEND_API PiiEntity
  {
  public:
    PiiEntity();
    PiiEntity(Aws::Utils::Json::JsonView jsonValue);
    PiiEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The level of confidence that Amazon Comprehend has in the accuracy of the
     * detection.</p>
     */
    inline double GetScore() const{ return m_score; }

    /**
     * <p>The level of confidence that Amazon Comprehend has in the accuracy of the
     * detection.</p>
     */
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }

    /**
     * <p>The level of confidence that Amazon Comprehend has in the accuracy of the
     * detection.</p>
     */
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }

    /**
     * <p>The level of confidence that Amazon Comprehend has in the accuracy of the
     * detection.</p>
     */
    inline PiiEntity& WithScore(double value) { SetScore(value); return *this;}


    /**
     * <p>The entity's type.</p>
     */
    inline const PiiEntityType& GetType() const{ return m_type; }

    /**
     * <p>The entity's type.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The entity's type.</p>
     */
    inline void SetType(const PiiEntityType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The entity's type.</p>
     */
    inline void SetType(PiiEntityType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The entity's type.</p>
     */
    inline PiiEntity& WithType(const PiiEntityType& value) { SetType(value); return *this;}

    /**
     * <p>The entity's type.</p>
     */
    inline PiiEntity& WithType(PiiEntityType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>A character offset in the input text that shows where the PII entity begins
     * (the first character is at position 0). The offset returns the position of each
     * UTF-8 code point in the string. A <i>code point</i> is the abstract character
     * from a particular graphical representation. For example, a multi-byte UTF-8
     * character maps to a single code point.</p>
     */
    inline int GetBeginOffset() const{ return m_beginOffset; }

    /**
     * <p>A character offset in the input text that shows where the PII entity begins
     * (the first character is at position 0). The offset returns the position of each
     * UTF-8 code point in the string. A <i>code point</i> is the abstract character
     * from a particular graphical representation. For example, a multi-byte UTF-8
     * character maps to a single code point.</p>
     */
    inline bool BeginOffsetHasBeenSet() const { return m_beginOffsetHasBeenSet; }

    /**
     * <p>A character offset in the input text that shows where the PII entity begins
     * (the first character is at position 0). The offset returns the position of each
     * UTF-8 code point in the string. A <i>code point</i> is the abstract character
     * from a particular graphical representation. For example, a multi-byte UTF-8
     * character maps to a single code point.</p>
     */
    inline void SetBeginOffset(int value) { m_beginOffsetHasBeenSet = true; m_beginOffset = value; }

    /**
     * <p>A character offset in the input text that shows where the PII entity begins
     * (the first character is at position 0). The offset returns the position of each
     * UTF-8 code point in the string. A <i>code point</i> is the abstract character
     * from a particular graphical representation. For example, a multi-byte UTF-8
     * character maps to a single code point.</p>
     */
    inline PiiEntity& WithBeginOffset(int value) { SetBeginOffset(value); return *this;}


    /**
     * <p>A character offset in the input text that shows where the PII entity ends.
     * The offset returns the position of each UTF-8 code point in the string. A
     * <i>code point</i> is the abstract character from a particular graphical
     * representation. For example, a multi-byte UTF-8 character maps to a single code
     * point.</p>
     */
    inline int GetEndOffset() const{ return m_endOffset; }

    /**
     * <p>A character offset in the input text that shows where the PII entity ends.
     * The offset returns the position of each UTF-8 code point in the string. A
     * <i>code point</i> is the abstract character from a particular graphical
     * representation. For example, a multi-byte UTF-8 character maps to a single code
     * point.</p>
     */
    inline bool EndOffsetHasBeenSet() const { return m_endOffsetHasBeenSet; }

    /**
     * <p>A character offset in the input text that shows where the PII entity ends.
     * The offset returns the position of each UTF-8 code point in the string. A
     * <i>code point</i> is the abstract character from a particular graphical
     * representation. For example, a multi-byte UTF-8 character maps to a single code
     * point.</p>
     */
    inline void SetEndOffset(int value) { m_endOffsetHasBeenSet = true; m_endOffset = value; }

    /**
     * <p>A character offset in the input text that shows where the PII entity ends.
     * The offset returns the position of each UTF-8 code point in the string. A
     * <i>code point</i> is the abstract character from a particular graphical
     * representation. For example, a multi-byte UTF-8 character maps to a single code
     * point.</p>
     */
    inline PiiEntity& WithEndOffset(int value) { SetEndOffset(value); return *this;}

  private:

    double m_score;
    bool m_scoreHasBeenSet;

    PiiEntityType m_type;
    bool m_typeHasBeenSet;

    int m_beginOffset;
    bool m_beginOffsetHasBeenSet;

    int m_endOffset;
    bool m_endOffsetHasBeenSet;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
