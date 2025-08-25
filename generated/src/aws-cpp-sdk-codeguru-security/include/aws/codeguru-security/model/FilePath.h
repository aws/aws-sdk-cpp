/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-security/CodeGuruSecurity_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codeguru-security/model/CodeLine.h>
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
   * <p>Information about the location of security vulnerabilities that Amazon
   * CodeGuru Security detected in your code.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-security-2018-05-10/FilePath">AWS
   * API Reference</a></p>
   */
  class FilePath
  {
  public:
    AWS_CODEGURUSECURITY_API FilePath() = default;
    AWS_CODEGURUSECURITY_API FilePath(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUSECURITY_API FilePath& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUSECURITY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the file.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    FilePath& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the resource with the security vulnerability.</p>
     */
    inline const Aws::String& GetPath() const { return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    template<typename PathT = Aws::String>
    void SetPath(PathT&& value) { m_pathHasBeenSet = true; m_path = std::forward<PathT>(value); }
    template<typename PathT = Aws::String>
    FilePath& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The first line number of the code snippet where the security vulnerability
     * appears in your code.</p>
     */
    inline int GetStartLine() const { return m_startLine; }
    inline bool StartLineHasBeenSet() const { return m_startLineHasBeenSet; }
    inline void SetStartLine(int value) { m_startLineHasBeenSet = true; m_startLine = value; }
    inline FilePath& WithStartLine(int value) { SetStartLine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last line number of the code snippet where the security vulnerability
     * appears in your code.</p>
     */
    inline int GetEndLine() const { return m_endLine; }
    inline bool EndLineHasBeenSet() const { return m_endLineHasBeenSet; }
    inline void SetEndLine(int value) { m_endLineHasBeenSet = true; m_endLine = value; }
    inline FilePath& WithEndLine(int value) { SetEndLine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>CodeLine</code> objects that describe where the security
     * vulnerability appears in your code.</p>
     */
    inline const Aws::Vector<CodeLine>& GetCodeSnippet() const { return m_codeSnippet; }
    inline bool CodeSnippetHasBeenSet() const { return m_codeSnippetHasBeenSet; }
    template<typename CodeSnippetT = Aws::Vector<CodeLine>>
    void SetCodeSnippet(CodeSnippetT&& value) { m_codeSnippetHasBeenSet = true; m_codeSnippet = std::forward<CodeSnippetT>(value); }
    template<typename CodeSnippetT = Aws::Vector<CodeLine>>
    FilePath& WithCodeSnippet(CodeSnippetT&& value) { SetCodeSnippet(std::forward<CodeSnippetT>(value)); return *this;}
    template<typename CodeSnippetT = CodeLine>
    FilePath& AddCodeSnippet(CodeSnippetT&& value) { m_codeSnippetHasBeenSet = true; m_codeSnippet.emplace_back(std::forward<CodeSnippetT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    int m_startLine{0};
    bool m_startLineHasBeenSet = false;

    int m_endLine{0};
    bool m_endLineHasBeenSet = false;

    Aws::Vector<CodeLine> m_codeSnippet;
    bool m_codeSnippetHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
