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


    /**
     * <p>Contains information on the retrieved code snippet.</p>
     */
    inline const Aws::Vector<CodeLine>& GetCodeSnippet() const{ return m_codeSnippet; }

    /**
     * <p>Contains information on the retrieved code snippet.</p>
     */
    inline bool CodeSnippetHasBeenSet() const { return m_codeSnippetHasBeenSet; }

    /**
     * <p>Contains information on the retrieved code snippet.</p>
     */
    inline void SetCodeSnippet(const Aws::Vector<CodeLine>& value) { m_codeSnippetHasBeenSet = true; m_codeSnippet = value; }

    /**
     * <p>Contains information on the retrieved code snippet.</p>
     */
    inline void SetCodeSnippet(Aws::Vector<CodeLine>&& value) { m_codeSnippetHasBeenSet = true; m_codeSnippet = std::move(value); }

    /**
     * <p>Contains information on the retrieved code snippet.</p>
     */
    inline CodeSnippetResult& WithCodeSnippet(const Aws::Vector<CodeLine>& value) { SetCodeSnippet(value); return *this;}

    /**
     * <p>Contains information on the retrieved code snippet.</p>
     */
    inline CodeSnippetResult& WithCodeSnippet(Aws::Vector<CodeLine>&& value) { SetCodeSnippet(std::move(value)); return *this;}

    /**
     * <p>Contains information on the retrieved code snippet.</p>
     */
    inline CodeSnippetResult& AddCodeSnippet(const CodeLine& value) { m_codeSnippetHasBeenSet = true; m_codeSnippet.push_back(value); return *this; }

    /**
     * <p>Contains information on the retrieved code snippet.</p>
     */
    inline CodeSnippetResult& AddCodeSnippet(CodeLine&& value) { m_codeSnippetHasBeenSet = true; m_codeSnippet.push_back(std::move(value)); return *this; }


    /**
     * <p>The line number of the last line of a code snippet.</p>
     */
    inline int GetEndLine() const{ return m_endLine; }

    /**
     * <p>The line number of the last line of a code snippet.</p>
     */
    inline bool EndLineHasBeenSet() const { return m_endLineHasBeenSet; }

    /**
     * <p>The line number of the last line of a code snippet.</p>
     */
    inline void SetEndLine(int value) { m_endLineHasBeenSet = true; m_endLine = value; }

    /**
     * <p>The line number of the last line of a code snippet.</p>
     */
    inline CodeSnippetResult& WithEndLine(int value) { SetEndLine(value); return *this;}


    /**
     * <p>The ARN of a finding that the code snippet is associated with.</p>
     */
    inline const Aws::String& GetFindingArn() const{ return m_findingArn; }

    /**
     * <p>The ARN of a finding that the code snippet is associated with.</p>
     */
    inline bool FindingArnHasBeenSet() const { return m_findingArnHasBeenSet; }

    /**
     * <p>The ARN of a finding that the code snippet is associated with.</p>
     */
    inline void SetFindingArn(const Aws::String& value) { m_findingArnHasBeenSet = true; m_findingArn = value; }

    /**
     * <p>The ARN of a finding that the code snippet is associated with.</p>
     */
    inline void SetFindingArn(Aws::String&& value) { m_findingArnHasBeenSet = true; m_findingArn = std::move(value); }

    /**
     * <p>The ARN of a finding that the code snippet is associated with.</p>
     */
    inline void SetFindingArn(const char* value) { m_findingArnHasBeenSet = true; m_findingArn.assign(value); }

    /**
     * <p>The ARN of a finding that the code snippet is associated with.</p>
     */
    inline CodeSnippetResult& WithFindingArn(const Aws::String& value) { SetFindingArn(value); return *this;}

    /**
     * <p>The ARN of a finding that the code snippet is associated with.</p>
     */
    inline CodeSnippetResult& WithFindingArn(Aws::String&& value) { SetFindingArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of a finding that the code snippet is associated with.</p>
     */
    inline CodeSnippetResult& WithFindingArn(const char* value) { SetFindingArn(value); return *this;}


    /**
     * <p>The line number of the first line of a code snippet.</p>
     */
    inline int GetStartLine() const{ return m_startLine; }

    /**
     * <p>The line number of the first line of a code snippet.</p>
     */
    inline bool StartLineHasBeenSet() const { return m_startLineHasBeenSet; }

    /**
     * <p>The line number of the first line of a code snippet.</p>
     */
    inline void SetStartLine(int value) { m_startLineHasBeenSet = true; m_startLine = value; }

    /**
     * <p>The line number of the first line of a code snippet.</p>
     */
    inline CodeSnippetResult& WithStartLine(int value) { SetStartLine(value); return *this;}


    /**
     * <p>Details of a suggested code fix.</p>
     */
    inline const Aws::Vector<SuggestedFix>& GetSuggestedFixes() const{ return m_suggestedFixes; }

    /**
     * <p>Details of a suggested code fix.</p>
     */
    inline bool SuggestedFixesHasBeenSet() const { return m_suggestedFixesHasBeenSet; }

    /**
     * <p>Details of a suggested code fix.</p>
     */
    inline void SetSuggestedFixes(const Aws::Vector<SuggestedFix>& value) { m_suggestedFixesHasBeenSet = true; m_suggestedFixes = value; }

    /**
     * <p>Details of a suggested code fix.</p>
     */
    inline void SetSuggestedFixes(Aws::Vector<SuggestedFix>&& value) { m_suggestedFixesHasBeenSet = true; m_suggestedFixes = std::move(value); }

    /**
     * <p>Details of a suggested code fix.</p>
     */
    inline CodeSnippetResult& WithSuggestedFixes(const Aws::Vector<SuggestedFix>& value) { SetSuggestedFixes(value); return *this;}

    /**
     * <p>Details of a suggested code fix.</p>
     */
    inline CodeSnippetResult& WithSuggestedFixes(Aws::Vector<SuggestedFix>&& value) { SetSuggestedFixes(std::move(value)); return *this;}

    /**
     * <p>Details of a suggested code fix.</p>
     */
    inline CodeSnippetResult& AddSuggestedFixes(const SuggestedFix& value) { m_suggestedFixesHasBeenSet = true; m_suggestedFixes.push_back(value); return *this; }

    /**
     * <p>Details of a suggested code fix.</p>
     */
    inline CodeSnippetResult& AddSuggestedFixes(SuggestedFix&& value) { m_suggestedFixesHasBeenSet = true; m_suggestedFixes.push_back(std::move(value)); return *this; }

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
