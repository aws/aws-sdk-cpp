﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/codeguru-reviewer/model/CodeReview.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DescribeCodeReviewResult
  {
  public:
    AWS_CODEGURUREVIEWER_API DescribeCodeReviewResult();
    AWS_CODEGURUREVIEWER_API DescribeCodeReviewResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEGURUREVIEWER_API DescribeCodeReviewResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the code review.</p>
     */
    inline const CodeReview& GetCodeReview() const{ return m_codeReview; }

    /**
     * <p>Information about the code review.</p>
     */
    inline void SetCodeReview(const CodeReview& value) { m_codeReview = value; }

    /**
     * <p>Information about the code review.</p>
     */
    inline void SetCodeReview(CodeReview&& value) { m_codeReview = std::move(value); }

    /**
     * <p>Information about the code review.</p>
     */
    inline DescribeCodeReviewResult& WithCodeReview(const CodeReview& value) { SetCodeReview(value); return *this;}

    /**
     * <p>Information about the code review.</p>
     */
    inline DescribeCodeReviewResult& WithCodeReview(CodeReview&& value) { SetCodeReview(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeCodeReviewResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeCodeReviewResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeCodeReviewResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    CodeReview m_codeReview;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
