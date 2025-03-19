/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/CodeSnippetResult.h>
#include <aws/inspector2/model/CodeSnippetError.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Inspector2
{
namespace Model
{
  class BatchGetCodeSnippetResult
  {
  public:
    AWS_INSPECTOR2_API BatchGetCodeSnippetResult() = default;
    AWS_INSPECTOR2_API BatchGetCodeSnippetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API BatchGetCodeSnippetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The retrieved code snippets associated with the provided finding ARNs.</p>
     */
    inline const Aws::Vector<CodeSnippetResult>& GetCodeSnippetResults() const { return m_codeSnippetResults; }
    template<typename CodeSnippetResultsT = Aws::Vector<CodeSnippetResult>>
    void SetCodeSnippetResults(CodeSnippetResultsT&& value) { m_codeSnippetResultsHasBeenSet = true; m_codeSnippetResults = std::forward<CodeSnippetResultsT>(value); }
    template<typename CodeSnippetResultsT = Aws::Vector<CodeSnippetResult>>
    BatchGetCodeSnippetResult& WithCodeSnippetResults(CodeSnippetResultsT&& value) { SetCodeSnippetResults(std::forward<CodeSnippetResultsT>(value)); return *this;}
    template<typename CodeSnippetResultsT = CodeSnippetResult>
    BatchGetCodeSnippetResult& AddCodeSnippetResults(CodeSnippetResultsT&& value) { m_codeSnippetResultsHasBeenSet = true; m_codeSnippetResults.emplace_back(std::forward<CodeSnippetResultsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Any errors Amazon Inspector encountered while trying to retrieve the
     * requested code snippets.</p>
     */
    inline const Aws::Vector<CodeSnippetError>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<CodeSnippetError>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<CodeSnippetError>>
    BatchGetCodeSnippetResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = CodeSnippetError>
    BatchGetCodeSnippetResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetCodeSnippetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CodeSnippetResult> m_codeSnippetResults;
    bool m_codeSnippetResultsHasBeenSet = false;

    Aws::Vector<CodeSnippetError> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
