/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>Contains information on the lines of code associated with a code
   * snippet.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/CodeLine">AWS
   * API Reference</a></p>
   */
  class CodeLine
  {
  public:
    AWS_INSPECTOR2_API CodeLine() = default;
    AWS_INSPECTOR2_API CodeLine(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API CodeLine& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The content of a line of code</p>
     */
    inline const Aws::String& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = Aws::String>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = Aws::String>
    CodeLine& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The line number that a section of code is located at.</p>
     */
    inline int GetLineNumber() const { return m_lineNumber; }
    inline bool LineNumberHasBeenSet() const { return m_lineNumberHasBeenSet; }
    inline void SetLineNumber(int value) { m_lineNumberHasBeenSet = true; m_lineNumber = value; }
    inline CodeLine& WithLineNumber(int value) { SetLineNumber(value); return *this;}
    ///@}
  private:

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    int m_lineNumber{0};
    bool m_lineNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
