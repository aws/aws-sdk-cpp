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
    AWS_KENDRA_API Correction();
    AWS_KENDRA_API Correction(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Correction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The zero-based location in the response string or text where the corrected
     * word starts.</p>
     */
    inline int GetBeginOffset() const{ return m_beginOffset; }
    inline bool BeginOffsetHasBeenSet() const { return m_beginOffsetHasBeenSet; }
    inline void SetBeginOffset(int value) { m_beginOffsetHasBeenSet = true; m_beginOffset = value; }
    inline Correction& WithBeginOffset(int value) { SetBeginOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The zero-based location in the response string or text where the corrected
     * word ends.</p>
     */
    inline int GetEndOffset() const{ return m_endOffset; }
    inline bool EndOffsetHasBeenSet() const { return m_endOffsetHasBeenSet; }
    inline void SetEndOffset(int value) { m_endOffsetHasBeenSet = true; m_endOffset = value; }
    inline Correction& WithEndOffset(int value) { SetEndOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The string or text of a misspelled word in a query.</p>
     */
    inline const Aws::String& GetTerm() const{ return m_term; }
    inline bool TermHasBeenSet() const { return m_termHasBeenSet; }
    inline void SetTerm(const Aws::String& value) { m_termHasBeenSet = true; m_term = value; }
    inline void SetTerm(Aws::String&& value) { m_termHasBeenSet = true; m_term = std::move(value); }
    inline void SetTerm(const char* value) { m_termHasBeenSet = true; m_term.assign(value); }
    inline Correction& WithTerm(const Aws::String& value) { SetTerm(value); return *this;}
    inline Correction& WithTerm(Aws::String&& value) { SetTerm(std::move(value)); return *this;}
    inline Correction& WithTerm(const char* value) { SetTerm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The string or text of a corrected misspelled word in a query.</p>
     */
    inline const Aws::String& GetCorrectedTerm() const{ return m_correctedTerm; }
    inline bool CorrectedTermHasBeenSet() const { return m_correctedTermHasBeenSet; }
    inline void SetCorrectedTerm(const Aws::String& value) { m_correctedTermHasBeenSet = true; m_correctedTerm = value; }
    inline void SetCorrectedTerm(Aws::String&& value) { m_correctedTermHasBeenSet = true; m_correctedTerm = std::move(value); }
    inline void SetCorrectedTerm(const char* value) { m_correctedTermHasBeenSet = true; m_correctedTerm.assign(value); }
    inline Correction& WithCorrectedTerm(const Aws::String& value) { SetCorrectedTerm(value); return *this;}
    inline Correction& WithCorrectedTerm(Aws::String&& value) { SetCorrectedTerm(std::move(value)); return *this;}
    inline Correction& WithCorrectedTerm(const char* value) { SetCorrectedTerm(value); return *this;}
    ///@}
  private:

    int m_beginOffset;
    bool m_beginOffsetHasBeenSet = false;

    int m_endOffset;
    bool m_endOffsetHasBeenSet = false;

    Aws::String m_term;
    bool m_termHasBeenSet = false;

    Aws::String m_correctedTerm;
    bool m_correctedTermHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
