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
    AWS_ACCESSANALYZER_API Position();
    AWS_ACCESSANALYZER_API Position(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Position& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The line of the position, starting from 1.</p>
     */
    inline int GetLine() const{ return m_line; }

    /**
     * <p>The line of the position, starting from 1.</p>
     */
    inline bool LineHasBeenSet() const { return m_lineHasBeenSet; }

    /**
     * <p>The line of the position, starting from 1.</p>
     */
    inline void SetLine(int value) { m_lineHasBeenSet = true; m_line = value; }

    /**
     * <p>The line of the position, starting from 1.</p>
     */
    inline Position& WithLine(int value) { SetLine(value); return *this;}


    /**
     * <p>The column of the position, starting from 0.</p>
     */
    inline int GetColumn() const{ return m_column; }

    /**
     * <p>The column of the position, starting from 0.</p>
     */
    inline bool ColumnHasBeenSet() const { return m_columnHasBeenSet; }

    /**
     * <p>The column of the position, starting from 0.</p>
     */
    inline void SetColumn(int value) { m_columnHasBeenSet = true; m_column = value; }

    /**
     * <p>The column of the position, starting from 0.</p>
     */
    inline Position& WithColumn(int value) { SetColumn(value); return *this;}


    /**
     * <p>The offset within the policy that corresponds to the position, starting from
     * 0.</p>
     */
    inline int GetOffset() const{ return m_offset; }

    /**
     * <p>The offset within the policy that corresponds to the position, starting from
     * 0.</p>
     */
    inline bool OffsetHasBeenSet() const { return m_offsetHasBeenSet; }

    /**
     * <p>The offset within the policy that corresponds to the position, starting from
     * 0.</p>
     */
    inline void SetOffset(int value) { m_offsetHasBeenSet = true; m_offset = value; }

    /**
     * <p>The offset within the policy that corresponds to the position, starting from
     * 0.</p>
     */
    inline Position& WithOffset(int value) { SetOffset(value); return *this;}

  private:

    int m_line;
    bool m_lineHasBeenSet = false;

    int m_column;
    bool m_columnHasBeenSet = false;

    int m_offset;
    bool m_offsetHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
