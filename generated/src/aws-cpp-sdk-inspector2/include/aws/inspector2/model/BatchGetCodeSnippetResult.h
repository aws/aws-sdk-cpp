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
    AWS_INSPECTOR2_API BatchGetCodeSnippetResult();
    AWS_INSPECTOR2_API BatchGetCodeSnippetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API BatchGetCodeSnippetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The retrieved code snippets associated with the provided finding ARNs.</p>
     */
    inline const Aws::Vector<CodeSnippetResult>& GetCodeSnippetResults() const{ return m_codeSnippetResults; }

    /**
     * <p>The retrieved code snippets associated with the provided finding ARNs.</p>
     */
    inline void SetCodeSnippetResults(const Aws::Vector<CodeSnippetResult>& value) { m_codeSnippetResults = value; }

    /**
     * <p>The retrieved code snippets associated with the provided finding ARNs.</p>
     */
    inline void SetCodeSnippetResults(Aws::Vector<CodeSnippetResult>&& value) { m_codeSnippetResults = std::move(value); }

    /**
     * <p>The retrieved code snippets associated with the provided finding ARNs.</p>
     */
    inline BatchGetCodeSnippetResult& WithCodeSnippetResults(const Aws::Vector<CodeSnippetResult>& value) { SetCodeSnippetResults(value); return *this;}

    /**
     * <p>The retrieved code snippets associated with the provided finding ARNs.</p>
     */
    inline BatchGetCodeSnippetResult& WithCodeSnippetResults(Aws::Vector<CodeSnippetResult>&& value) { SetCodeSnippetResults(std::move(value)); return *this;}

    /**
     * <p>The retrieved code snippets associated with the provided finding ARNs.</p>
     */
    inline BatchGetCodeSnippetResult& AddCodeSnippetResults(const CodeSnippetResult& value) { m_codeSnippetResults.push_back(value); return *this; }

    /**
     * <p>The retrieved code snippets associated with the provided finding ARNs.</p>
     */
    inline BatchGetCodeSnippetResult& AddCodeSnippetResults(CodeSnippetResult&& value) { m_codeSnippetResults.push_back(std::move(value)); return *this; }


    /**
     * <p>Any errors Amazon Inspector encountered while trying to retrieve the
     * requested code snippets.</p>
     */
    inline const Aws::Vector<CodeSnippetError>& GetErrors() const{ return m_errors; }

    /**
     * <p>Any errors Amazon Inspector encountered while trying to retrieve the
     * requested code snippets.</p>
     */
    inline void SetErrors(const Aws::Vector<CodeSnippetError>& value) { m_errors = value; }

    /**
     * <p>Any errors Amazon Inspector encountered while trying to retrieve the
     * requested code snippets.</p>
     */
    inline void SetErrors(Aws::Vector<CodeSnippetError>&& value) { m_errors = std::move(value); }

    /**
     * <p>Any errors Amazon Inspector encountered while trying to retrieve the
     * requested code snippets.</p>
     */
    inline BatchGetCodeSnippetResult& WithErrors(const Aws::Vector<CodeSnippetError>& value) { SetErrors(value); return *this;}

    /**
     * <p>Any errors Amazon Inspector encountered while trying to retrieve the
     * requested code snippets.</p>
     */
    inline BatchGetCodeSnippetResult& WithErrors(Aws::Vector<CodeSnippetError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>Any errors Amazon Inspector encountered while trying to retrieve the
     * requested code snippets.</p>
     */
    inline BatchGetCodeSnippetResult& AddErrors(const CodeSnippetError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>Any errors Amazon Inspector encountered while trying to retrieve the
     * requested code snippets.</p>
     */
    inline BatchGetCodeSnippetResult& AddErrors(CodeSnippetError&& value) { m_errors.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline BatchGetCodeSnippetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline BatchGetCodeSnippetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline BatchGetCodeSnippetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<CodeSnippetResult> m_codeSnippetResults;

    Aws::Vector<CodeSnippetError> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
