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
  class PiiEntity
  {
  public:
    AWS_COMPREHEND_API PiiEntity() = default;
    AWS_COMPREHEND_API PiiEntity(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API PiiEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The level of confidence that Amazon Comprehend has in the accuracy of the
     * detection.</p>
     */
    inline double GetScore() const { return m_score; }
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }
    inline PiiEntity& WithScore(double value) { SetScore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity's type.</p>
     */
    inline PiiEntityType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(PiiEntityType value) { m_typeHasBeenSet = true; m_type = value; }
    inline PiiEntity& WithType(PiiEntityType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The zero-based offset from the beginning of the source text to the first
     * character in the entity.</p>
     */
    inline int GetBeginOffset() const { return m_beginOffset; }
    inline bool BeginOffsetHasBeenSet() const { return m_beginOffsetHasBeenSet; }
    inline void SetBeginOffset(int value) { m_beginOffsetHasBeenSet = true; m_beginOffset = value; }
    inline PiiEntity& WithBeginOffset(int value) { SetBeginOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The zero-based offset from the beginning of the source text to the last
     * character in the entity.</p>
     */
    inline int GetEndOffset() const { return m_endOffset; }
    inline bool EndOffsetHasBeenSet() const { return m_endOffsetHasBeenSet; }
    inline void SetEndOffset(int value) { m_endOffsetHasBeenSet = true; m_endOffset = value; }
    inline PiiEntity& WithEndOffset(int value) { SetEndOffset(value); return *this;}
    ///@}
  private:

    double m_score{0.0};
    bool m_scoreHasBeenSet = false;

    PiiEntityType m_type{PiiEntityType::NOT_SET};
    bool m_typeHasBeenSet = false;

    int m_beginOffset{0};
    bool m_beginOffsetHasBeenSet = false;

    int m_endOffset{0};
    bool m_endOffsetHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
