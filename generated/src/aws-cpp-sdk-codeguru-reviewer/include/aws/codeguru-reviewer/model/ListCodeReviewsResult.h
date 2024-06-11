﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeguru-reviewer/model/CodeReviewSummary.h>
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
namespace CodeGuruReviewer
{
namespace Model
{
  class ListCodeReviewsResult
  {
  public:
    AWS_CODEGURUREVIEWER_API ListCodeReviewsResult();
    AWS_CODEGURUREVIEWER_API ListCodeReviewsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEGURUREVIEWER_API ListCodeReviewsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of code reviews that meet the criteria of the request.</p>
     */
    inline const Aws::Vector<CodeReviewSummary>& GetCodeReviewSummaries() const{ return m_codeReviewSummaries; }
    inline void SetCodeReviewSummaries(const Aws::Vector<CodeReviewSummary>& value) { m_codeReviewSummaries = value; }
    inline void SetCodeReviewSummaries(Aws::Vector<CodeReviewSummary>&& value) { m_codeReviewSummaries = std::move(value); }
    inline ListCodeReviewsResult& WithCodeReviewSummaries(const Aws::Vector<CodeReviewSummary>& value) { SetCodeReviewSummaries(value); return *this;}
    inline ListCodeReviewsResult& WithCodeReviewSummaries(Aws::Vector<CodeReviewSummary>&& value) { SetCodeReviewSummaries(std::move(value)); return *this;}
    inline ListCodeReviewsResult& AddCodeReviewSummaries(const CodeReviewSummary& value) { m_codeReviewSummaries.push_back(value); return *this; }
    inline ListCodeReviewsResult& AddCodeReviewSummaries(CodeReviewSummary&& value) { m_codeReviewSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListCodeReviewsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListCodeReviewsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListCodeReviewsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListCodeReviewsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListCodeReviewsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListCodeReviewsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<CodeReviewSummary> m_codeReviewSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
