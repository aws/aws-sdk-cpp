/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>A corrected misspelled word in a query.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/Correction">AWS
   * API Reference</a></p>
   */
  class Correction
  {
  public:
    AWS_KENDRA_API Correction() = default;
    AWS_KENDRA_API Correction(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Correction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The zero-based location in the response string or text where the corrected
     * word starts.</p>
     */
    inline int GetBeginOffset() const { return m_beginOffset; }
    inline bool BeginOffsetHasBeenSet() const { return m_beginOffsetHasBeenSet; }
    inline void SetBeginOffset(int value) { m_beginOffsetHasBeenSet = true; m_beginOffset = value; }
    inline Correction& WithBeginOffset(int value) { SetBeginOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The zero-based location in the response string or text where the corrected
     * word ends.</p>
     */
    inline int GetEndOffset() const { return m_endOffset; }
    inline bool EndOffsetHasBeenSet() const { return m_endOffsetHasBeenSet; }
    inline void SetEndOffset(int value) { m_endOffsetHasBeenSet = true; m_endOffset = value; }
    inline Correction& WithEndOffset(int value) { SetEndOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The string or text of a misspelled word in a query.</p>
     */
    inline const Aws::String& GetTerm() const { return m_term; }
    inline bool TermHasBeenSet() const { return m_termHasBeenSet; }
    template<typename TermT = Aws::String>
    void SetTerm(TermT&& value) { m_termHasBeenSet = true; m_term = std::forward<TermT>(value); }
    template<typename TermT = Aws::String>
    Correction& WithTerm(TermT&& value) { SetTerm(std::forward<TermT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The string or text of a corrected misspelled word in a query.</p>
     */
    inline const Aws::String& GetCorrectedTerm() const { return m_correctedTerm; }
    inline bool CorrectedTermHasBeenSet() const { return m_correctedTermHasBeenSet; }
    template<typename CorrectedTermT = Aws::String>
    void SetCorrectedTerm(CorrectedTermT&& value) { m_correctedTermHasBeenSet = true; m_correctedTerm = std::forward<CorrectedTermT>(value); }
    template<typename CorrectedTermT = Aws::String>
    Correction& WithCorrectedTerm(CorrectedTermT&& value) { SetCorrectedTerm(std::forward<CorrectedTermT>(value)); return *this;}
    ///@}
  private:

    int m_beginOffset{0};
    bool m_beginOffsetHasBeenSet = false;

    int m_endOffset{0};
    bool m_endOffsetHasBeenSet = false;

    Aws::String m_term;
    bool m_termHasBeenSet = false;

    Aws::String m_correctedTerm;
    bool m_correctedTermHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
