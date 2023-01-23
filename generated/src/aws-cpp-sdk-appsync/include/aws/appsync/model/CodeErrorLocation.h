/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>

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
namespace AppSync
{
namespace Model
{

  /**
   * <p>Describes the location of the error in a code sample.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/CodeErrorLocation">AWS
   * API Reference</a></p>
   */
  class CodeErrorLocation
  {
  public:
    AWS_APPSYNC_API CodeErrorLocation();
    AWS_APPSYNC_API CodeErrorLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API CodeErrorLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The line number in the code. Defaults to <code>0</code> if unknown.</p>
     */
    inline int GetLine() const{ return m_line; }

    /**
     * <p>The line number in the code. Defaults to <code>0</code> if unknown.</p>
     */
    inline bool LineHasBeenSet() const { return m_lineHasBeenSet; }

    /**
     * <p>The line number in the code. Defaults to <code>0</code> if unknown.</p>
     */
    inline void SetLine(int value) { m_lineHasBeenSet = true; m_line = value; }

    /**
     * <p>The line number in the code. Defaults to <code>0</code> if unknown.</p>
     */
    inline CodeErrorLocation& WithLine(int value) { SetLine(value); return *this;}


    /**
     * <p>The column number in the code. Defaults to <code>0</code> if unknown.</p>
     */
    inline int GetColumn() const{ return m_column; }

    /**
     * <p>The column number in the code. Defaults to <code>0</code> if unknown.</p>
     */
    inline bool ColumnHasBeenSet() const { return m_columnHasBeenSet; }

    /**
     * <p>The column number in the code. Defaults to <code>0</code> if unknown.</p>
     */
    inline void SetColumn(int value) { m_columnHasBeenSet = true; m_column = value; }

    /**
     * <p>The column number in the code. Defaults to <code>0</code> if unknown.</p>
     */
    inline CodeErrorLocation& WithColumn(int value) { SetColumn(value); return *this;}


    /**
     * <p>The span/length of the error. Defaults to <code>-1</code> if unknown.</p>
     */
    inline int GetSpan() const{ return m_span; }

    /**
     * <p>The span/length of the error. Defaults to <code>-1</code> if unknown.</p>
     */
    inline bool SpanHasBeenSet() const { return m_spanHasBeenSet; }

    /**
     * <p>The span/length of the error. Defaults to <code>-1</code> if unknown.</p>
     */
    inline void SetSpan(int value) { m_spanHasBeenSet = true; m_span = value; }

    /**
     * <p>The span/length of the error. Defaults to <code>-1</code> if unknown.</p>
     */
    inline CodeErrorLocation& WithSpan(int value) { SetSpan(value); return *this;}

  private:

    int m_line;
    bool m_lineHasBeenSet = false;

    int m_column;
    bool m_columnHasBeenSet = false;

    int m_span;
    bool m_spanHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
