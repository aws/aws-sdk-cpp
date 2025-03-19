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
    AWS_APPSYNC_API CodeErrorLocation() = default;
    AWS_APPSYNC_API CodeErrorLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API CodeErrorLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The line number in the code. Defaults to <code>0</code> if unknown.</p>
     */
    inline int GetLine() const { return m_line; }
    inline bool LineHasBeenSet() const { return m_lineHasBeenSet; }
    inline void SetLine(int value) { m_lineHasBeenSet = true; m_line = value; }
    inline CodeErrorLocation& WithLine(int value) { SetLine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The column number in the code. Defaults to <code>0</code> if unknown.</p>
     */
    inline int GetColumn() const { return m_column; }
    inline bool ColumnHasBeenSet() const { return m_columnHasBeenSet; }
    inline void SetColumn(int value) { m_columnHasBeenSet = true; m_column = value; }
    inline CodeErrorLocation& WithColumn(int value) { SetColumn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The span/length of the error. Defaults to <code>-1</code> if unknown.</p>
     */
    inline int GetSpan() const { return m_span; }
    inline bool SpanHasBeenSet() const { return m_spanHasBeenSet; }
    inline void SetSpan(int value) { m_spanHasBeenSet = true; m_span = value; }
    inline CodeErrorLocation& WithSpan(int value) { SetSpan(value); return *this;}
    ///@}
  private:

    int m_line{0};
    bool m_lineHasBeenSet = false;

    int m_column{0};
    bool m_columnHasBeenSet = false;

    int m_span{0};
    bool m_spanHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
