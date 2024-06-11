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
    AWS_INSPECTOR2_API CodeLine();
    AWS_INSPECTOR2_API CodeLine(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API CodeLine& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The content of a line of code</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }
    inline CodeLine& WithContent(const Aws::String& value) { SetContent(value); return *this;}
    inline CodeLine& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}
    inline CodeLine& WithContent(const char* value) { SetContent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The line number that a section of code is located at.</p>
     */
    inline int GetLineNumber() const{ return m_lineNumber; }
    inline bool LineNumberHasBeenSet() const { return m_lineNumberHasBeenSet; }
    inline void SetLineNumber(int value) { m_lineNumberHasBeenSet = true; m_lineNumber = value; }
    inline CodeLine& WithLineNumber(int value) { SetLineNumber(value); return *this;}
    ///@}
  private:

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    int m_lineNumber;
    bool m_lineNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
