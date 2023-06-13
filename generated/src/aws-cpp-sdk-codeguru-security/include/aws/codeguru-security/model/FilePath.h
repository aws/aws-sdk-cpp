/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-security/CodeGuruSecurity_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_CODEGURUSECURITY_API FilePath();
    AWS_CODEGURUSECURITY_API FilePath(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUSECURITY_API FilePath& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUSECURITY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of <code>CodeLine</code> objects that describe where the security
     * vulnerability appears in your code.</p>
     */
    inline const Aws::Vector<CodeLine>& GetCodeSnippet() const{ return m_codeSnippet; }

    /**
     * <p>A list of <code>CodeLine</code> objects that describe where the security
     * vulnerability appears in your code.</p>
     */
    inline bool CodeSnippetHasBeenSet() const { return m_codeSnippetHasBeenSet; }

    /**
     * <p>A list of <code>CodeLine</code> objects that describe where the security
     * vulnerability appears in your code.</p>
     */
    inline void SetCodeSnippet(const Aws::Vector<CodeLine>& value) { m_codeSnippetHasBeenSet = true; m_codeSnippet = value; }

    /**
     * <p>A list of <code>CodeLine</code> objects that describe where the security
     * vulnerability appears in your code.</p>
     */
    inline void SetCodeSnippet(Aws::Vector<CodeLine>&& value) { m_codeSnippetHasBeenSet = true; m_codeSnippet = std::move(value); }

    /**
     * <p>A list of <code>CodeLine</code> objects that describe where the security
     * vulnerability appears in your code.</p>
     */
    inline FilePath& WithCodeSnippet(const Aws::Vector<CodeLine>& value) { SetCodeSnippet(value); return *this;}

    /**
     * <p>A list of <code>CodeLine</code> objects that describe where the security
     * vulnerability appears in your code.</p>
     */
    inline FilePath& WithCodeSnippet(Aws::Vector<CodeLine>&& value) { SetCodeSnippet(std::move(value)); return *this;}

    /**
     * <p>A list of <code>CodeLine</code> objects that describe where the security
     * vulnerability appears in your code.</p>
     */
    inline FilePath& AddCodeSnippet(const CodeLine& value) { m_codeSnippetHasBeenSet = true; m_codeSnippet.push_back(value); return *this; }

    /**
     * <p>A list of <code>CodeLine</code> objects that describe where the security
     * vulnerability appears in your code.</p>
     */
    inline FilePath& AddCodeSnippet(CodeLine&& value) { m_codeSnippetHasBeenSet = true; m_codeSnippet.push_back(std::move(value)); return *this; }


    /**
     * <p>The last line number of the code snippet where the security vulnerability
     * appears in your code.</p>
     */
    inline int GetEndLine() const{ return m_endLine; }

    /**
     * <p>The last line number of the code snippet where the security vulnerability
     * appears in your code.</p>
     */
    inline bool EndLineHasBeenSet() const { return m_endLineHasBeenSet; }

    /**
     * <p>The last line number of the code snippet where the security vulnerability
     * appears in your code.</p>
     */
    inline void SetEndLine(int value) { m_endLineHasBeenSet = true; m_endLine = value; }

    /**
     * <p>The last line number of the code snippet where the security vulnerability
     * appears in your code.</p>
     */
    inline FilePath& WithEndLine(int value) { SetEndLine(value); return *this;}


    /**
     * <p>The name of the file.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the file.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the file.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the file.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the file.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the file.</p>
     */
    inline FilePath& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the file.</p>
     */
    inline FilePath& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the file.</p>
     */
    inline FilePath& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The path to the resource with the security vulnerability.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The path to the resource with the security vulnerability.</p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>The path to the resource with the security vulnerability.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The path to the resource with the security vulnerability.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>The path to the resource with the security vulnerability.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>The path to the resource with the security vulnerability.</p>
     */
    inline FilePath& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The path to the resource with the security vulnerability.</p>
     */
    inline FilePath& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>The path to the resource with the security vulnerability.</p>
     */
    inline FilePath& WithPath(const char* value) { SetPath(value); return *this;}


    /**
     * <p>The first line number of the code snippet where the security vulnerability
     * appears in your code.</p>
     */
    inline int GetStartLine() const{ return m_startLine; }

    /**
     * <p>The first line number of the code snippet where the security vulnerability
     * appears in your code.</p>
     */
    inline bool StartLineHasBeenSet() const { return m_startLineHasBeenSet; }

    /**
     * <p>The first line number of the code snippet where the security vulnerability
     * appears in your code.</p>
     */
    inline void SetStartLine(int value) { m_startLineHasBeenSet = true; m_startLine = value; }

    /**
     * <p>The first line number of the code snippet where the security vulnerability
     * appears in your code.</p>
     */
    inline FilePath& WithStartLine(int value) { SetStartLine(value); return *this;}

  private:

    Aws::Vector<CodeLine> m_codeSnippet;
    bool m_codeSnippetHasBeenSet = false;

    int m_endLine;
    bool m_endLineHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    int m_startLine;
    bool m_startLineHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
