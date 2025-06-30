/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/b2bi/model/WrapFormat.h>
#include <aws/b2bi/model/LineTerminator.h>
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
namespace B2BI
{
namespace Model
{

  /**
   * <p>Contains options for wrapping (line folding) in X12 EDI files. Wrapping
   * controls how long lines are handled in the EDI output.</p><p><h3>See Also:</h3> 
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/WrapOptions">AWS
   * API Reference</a></p>
   */
  class WrapOptions
  {
  public:
    AWS_B2BI_API WrapOptions() = default;
    AWS_B2BI_API WrapOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API WrapOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the method used for wrapping lines in the EDI output. Valid
     * values:</p> <ul> <li> <p> <code>SEGMENT</code>: Wraps by segment.</p> </li> <li>
     * <p> <code>ONE_LINE</code>: Indicates that the entire content is on a single
     * line.</p>  <p>When you specify <code>ONE_LINE</code>, do not provide
     * either the line length nor the line terminator value.</p>  </li> <li> <p>
     * <code>LINE_LENGTH</code>: Wraps by character count, as specified by
     * <code>lineLength</code> value.</p> </li> </ul>
     */
    inline WrapFormat GetWrapBy() const { return m_wrapBy; }
    inline bool WrapByHasBeenSet() const { return m_wrapByHasBeenSet; }
    inline void SetWrapBy(WrapFormat value) { m_wrapByHasBeenSet = true; m_wrapBy = value; }
    inline WrapOptions& WithWrapBy(WrapFormat value) { SetWrapBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the character sequence used to terminate lines when wrapping. Valid
     * values:</p> <ul> <li> <p> <code>CRLF</code>: carriage return and line feed</p>
     * </li> <li> <p> <code>LF</code>: line feed)</p> </li> <li> <p> <code>CR</code>:
     * carriage return</p> </li> </ul>
     */
    inline LineTerminator GetLineTerminator() const { return m_lineTerminator; }
    inline bool LineTerminatorHasBeenSet() const { return m_lineTerminatorHasBeenSet; }
    inline void SetLineTerminator(LineTerminator value) { m_lineTerminatorHasBeenSet = true; m_lineTerminator = value; }
    inline WrapOptions& WithLineTerminator(LineTerminator value) { SetLineTerminator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the maximum length of a line before wrapping occurs. This value is
     * used when <code>wrapBy</code> is set to <code>LINE_LENGTH</code>.</p>
     */
    inline int GetLineLength() const { return m_lineLength; }
    inline bool LineLengthHasBeenSet() const { return m_lineLengthHasBeenSet; }
    inline void SetLineLength(int value) { m_lineLengthHasBeenSet = true; m_lineLength = value; }
    inline WrapOptions& WithLineLength(int value) { SetLineLength(value); return *this;}
    ///@}
  private:

    WrapFormat m_wrapBy{WrapFormat::NOT_SET};
    bool m_wrapByHasBeenSet = false;

    LineTerminator m_lineTerminator{LineTerminator::NOT_SET};
    bool m_lineTerminatorHasBeenSet = false;

    int m_lineLength{0};
    bool m_lineLengthHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
