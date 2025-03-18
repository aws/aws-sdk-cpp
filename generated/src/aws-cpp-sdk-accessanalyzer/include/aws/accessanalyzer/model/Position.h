/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>

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
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>A position in a policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/Position">AWS
   * API Reference</a></p>
   */
  class Position
  {
  public:
    AWS_ACCESSANALYZER_API Position() = default;
    AWS_ACCESSANALYZER_API Position(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Position& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The line of the position, starting from 1.</p>
     */
    inline int GetLine() const { return m_line; }
    inline bool LineHasBeenSet() const { return m_lineHasBeenSet; }
    inline void SetLine(int value) { m_lineHasBeenSet = true; m_line = value; }
    inline Position& WithLine(int value) { SetLine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The column of the position, starting from 0.</p>
     */
    inline int GetColumn() const { return m_column; }
    inline bool ColumnHasBeenSet() const { return m_columnHasBeenSet; }
    inline void SetColumn(int value) { m_columnHasBeenSet = true; m_column = value; }
    inline Position& WithColumn(int value) { SetColumn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The offset within the policy that corresponds to the position, starting from
     * 0.</p>
     */
    inline int GetOffset() const { return m_offset; }
    inline bool OffsetHasBeenSet() const { return m_offsetHasBeenSet; }
    inline void SetOffset(int value) { m_offsetHasBeenSet = true; m_offset = value; }
    inline Position& WithOffset(int value) { SetOffset(value); return *this;}
    ///@}
  private:

    int m_line{0};
    bool m_lineHasBeenSet = false;

    int m_column{0};
    bool m_columnHasBeenSet = false;

    int m_offset{0};
    bool m_offsetHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
