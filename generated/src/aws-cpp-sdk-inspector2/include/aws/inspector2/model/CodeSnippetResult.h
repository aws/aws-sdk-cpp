/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_INSPECTOR2_API CodeSnippetResult() = default;
    AWS_INSPECTOR2_API CodeSnippetResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API CodeSnippetResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of a finding that the code snippet is associated with.</p>
     */
    inline const Aws::String& GetFindingArn() const { return m_findingArn; }
    inline bool FindingArnHasBeenSet() const { return m_findingArnHasBeenSet; }
    template<typename FindingArnT = Aws::String>
    void SetFindingArn(FindingArnT&& value) { m_findingArnHasBeenSet = true; m_findingArn = std::forward<FindingArnT>(value); }
    template<typename FindingArnT = Aws::String>
    CodeSnippetResult& WithFindingArn(FindingArnT&& value) { SetFindingArn(std::forward<FindingArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The line number of the first line of a code snippet.</p>
     */
    inline int GetStartLine() const { return m_startLine; }
    inline bool StartLineHasBeenSet() const { return m_startLineHasBeenSet; }
    inline void SetStartLine(int value) { m_startLineHasBeenSet = true; m_startLine = value; }
    inline CodeSnippetResult& WithStartLine(int value) { SetStartLine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The line number of the last line of a code snippet.</p>
     */
    inline int GetEndLine() const { return m_endLine; }
    inline bool EndLineHasBeenSet() const { return m_endLineHasBeenSet; }
    inline void SetEndLine(int value) { m_endLineHasBeenSet = true; m_endLine = value; }
    inline CodeSnippetResult& WithEndLine(int value) { SetEndLine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information on the retrieved code snippet.</p>
     */
    inline const Aws::Vector<CodeLine>& GetCodeSnippet() const { return m_codeSnippet; }
    inline bool CodeSnippetHasBeenSet() const { return m_codeSnippetHasBeenSet; }
    template<typename CodeSnippetT = Aws::Vector<CodeLine>>
    void SetCodeSnippet(CodeSnippetT&& value) { m_codeSnippetHasBeenSet = true; m_codeSnippet = std::forward<CodeSnippetT>(value); }
    template<typename CodeSnippetT = Aws::Vector<CodeLine>>
    CodeSnippetResult& WithCodeSnippet(CodeSnippetT&& value) { SetCodeSnippet(std::forward<CodeSnippetT>(value)); return *this;}
    template<typename CodeSnippetT = CodeLine>
    CodeSnippetResult& AddCodeSnippet(CodeSnippetT&& value) { m_codeSnippetHasBeenSet = true; m_codeSnippet.emplace_back(std::forward<CodeSnippetT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Details of a suggested code fix.</p>
     */
    inline const Aws::Vector<SuggestedFix>& GetSuggestedFixes() const { return m_suggestedFixes; }
    inline bool SuggestedFixesHasBeenSet() const { return m_suggestedFixesHasBeenSet; }
    template<typename SuggestedFixesT = Aws::Vector<SuggestedFix>>
    void SetSuggestedFixes(SuggestedFixesT&& value) { m_suggestedFixesHasBeenSet = true; m_suggestedFixes = std::forward<SuggestedFixesT>(value); }
    template<typename SuggestedFixesT = Aws::Vector<SuggestedFix>>
    CodeSnippetResult& WithSuggestedFixes(SuggestedFixesT&& value) { SetSuggestedFixes(std::forward<SuggestedFixesT>(value)); return *this;}
    template<typename SuggestedFixesT = SuggestedFix>
    CodeSnippetResult& AddSuggestedFixes(SuggestedFixesT&& value) { m_suggestedFixesHasBeenSet = true; m_suggestedFixes.emplace_back(std::forward<SuggestedFixesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_findingArn;
    bool m_findingArnHasBeenSet = false;

    int m_startLine{0};
    bool m_startLineHasBeenSet = false;

    int m_endLine{0};
    bool m_endLineHasBeenSet = false;

    Aws::Vector<CodeLine> m_codeSnippet;
    bool m_codeSnippetHasBeenSet = false;

    Aws::Vector<SuggestedFix> m_suggestedFixes;
    bool m_suggestedFixesHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
