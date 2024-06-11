/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-security/CodeGuruSecurity_EXPORTS.h>
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
namespace CodeGuruSecurity
{
namespace Model
{

  /**
   * <p>The line of code where a finding was detected.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-security-2018-05-10/CodeLine">AWS
   * API Reference</a></p>
   */
  class CodeLine
  {
  public:
    AWS_CODEGURUSECURITY_API CodeLine();
    AWS_CODEGURUSECURITY_API CodeLine(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUSECURITY_API CodeLine& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUSECURITY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The code that contains a vulnerability.</p>
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
     * <p>The code line number.</p>
     */
    inline int GetNumber() const{ return m_number; }
    inline bool NumberHasBeenSet() const { return m_numberHasBeenSet; }
    inline void SetNumber(int value) { m_numberHasBeenSet = true; m_number = value; }
    inline CodeLine& WithNumber(int value) { SetNumber(value); return *this;}
    ///@}
  private:

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    int m_number;
    bool m_numberHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
