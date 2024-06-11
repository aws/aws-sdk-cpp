/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/CodeLine.h>
#include <aws/inspector2/model/SuggestedFix.h>
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
   * <p>Contains information on a code snippet retrieved by Amazon Inspector from a
   * code vulnerability finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/CodeSnippetResult">AWS
   * API Reference</a></p>
   */
  class CodeSnippetResult
  {
  public:
    AWS_INSPECTOR2_API CodeSnippetResult();
    AWS_INSPECTOR2_API CodeSnippetResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API CodeSnippetResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains information on the retrieved code snippet.</p>
     */
    inline const Aws::Vector<CodeLine>& GetCodeSnippet() const{ return m_codeSnippet; }
    inline bool CodeSnippetHasBeenSet() const { return m_codeSnippetHasBeenSet; }
    inline void SetCodeSnippet(const Aws::Vector<CodeLine>& value) { m_codeSnippetHasBeenSet = true; m_codeSnippet = value; }
    inline void SetCodeSnippet(Aws::Vector<CodeLine>&& value) { m_codeSnippetHasBeenSet = true; m_codeSnippet = std::move(value); }
    inline CodeSnippetResult& WithCodeSnippet(const Aws::Vector<CodeLine>& value) { SetCodeSnippet(value); return *this;}
    inline CodeSnippetResult& WithCodeSnippet(Aws::Vector<CodeLine>&& value) { SetCodeSnippet(std::move(value)); return *this;}
    inline CodeSnippetResult& AddCodeSnippet(const CodeLine& value) { m_codeSnippetHasBeenSet = true; m_codeSnippet.push_back(value); return *this; }
    inline CodeSnippetResult& AddCodeSnippet(CodeLine&& value) { m_codeSnippetHasBeenSet = true; m_codeSnippet.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The line number of the last line of a code snippet.</p>
     */
    inline int GetEndLine() const{ return m_endLine; }
    inline bool EndLineHasBeenSet() const { return m_endLineHasBeenSet; }
    inline void SetEndLine(int value) { m_endLineHasBeenSet = true; m_endLine = value; }
    inline CodeSnippetResult& WithEndLine(int value) { SetEndLine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of a finding that the code snippet is associated with.</p>
     */
    inline const Aws::String& GetFindingArn() const{ return m_findingArn; }
    inline bool FindingArnHasBeenSet() const { return m_findingArnHasBeenSet; }
    inline void SetFindingArn(const Aws::String& value) { m_findingArnHasBeenSet = true; m_findingArn = value; }
    inline void SetFindingArn(Aws::String&& value) { m_findingArnHasBeenSet = true; m_findingArn = std::move(value); }
    inline void SetFindingArn(const char* value) { m_findingArnHasBeenSet = true; m_findingArn.assign(value); }
    inline CodeSnippetResult& WithFindingArn(const Aws::String& value) { SetFindingArn(value); return *this;}
    inline CodeSnippetResult& WithFindingArn(Aws::String&& value) { SetFindingArn(std::move(value)); return *this;}
    inline CodeSnippetResult& WithFindingArn(const char* value) { SetFindingArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The line number of the first line of a code snippet.</p>
     */
    inline int GetStartLine() const{ return m_startLine; }
    inline bool StartLineHasBeenSet() const { return m_startLineHasBeenSet; }
    inline void SetStartLine(int value) { m_startLineHasBeenSet = true; m_startLine = value; }
    inline CodeSnippetResult& WithStartLine(int value) { SetStartLine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details of a suggested code fix.</p>
     */
    inline const Aws::Vector<SuggestedFix>& GetSuggestedFixes() const{ return m_suggestedFixes; }
    inline bool SuggestedFixesHasBeenSet() const { return m_suggestedFixesHasBeenSet; }
    inline void SetSuggestedFixes(const Aws::Vector<SuggestedFix>& value) { m_suggestedFixesHasBeenSet = true; m_suggestedFixes = value; }
    inline void SetSuggestedFixes(Aws::Vector<SuggestedFix>&& value) { m_suggestedFixesHasBeenSet = true; m_suggestedFixes = std::move(value); }
    inline CodeSnippetResult& WithSuggestedFixes(const Aws::Vector<SuggestedFix>& value) { SetSuggestedFixes(value); return *this;}
    inline CodeSnippetResult& WithSuggestedFixes(Aws::Vector<SuggestedFix>&& value) { SetSuggestedFixes(std::move(value)); return *this;}
    inline CodeSnippetResult& AddSuggestedFixes(const SuggestedFix& value) { m_suggestedFixesHasBeenSet = true; m_suggestedFixes.push_back(value); return *this; }
    inline CodeSnippetResult& AddSuggestedFixes(SuggestedFix&& value) { m_suggestedFixesHasBeenSet = true; m_suggestedFixes.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<CodeLine> m_codeSnippet;
    bool m_codeSnippetHasBeenSet = false;

    int m_endLine;
    bool m_endLineHasBeenSet = false;

    Aws::String m_findingArn;
    bool m_findingArnHasBeenSet = false;

    int m_startLine;
    bool m_startLineHasBeenSet = false;

    Aws::Vector<SuggestedFix> m_suggestedFixes;
    bool m_suggestedFixesHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
