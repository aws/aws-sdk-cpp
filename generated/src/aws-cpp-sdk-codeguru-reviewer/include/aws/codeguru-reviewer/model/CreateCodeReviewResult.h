/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/codeguru-reviewer/model/CodeReview.h>
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
  class CreateCodeReviewResult
  {
  public:
    AWS_CODEGURUREVIEWER_API CreateCodeReviewResult();
    AWS_CODEGURUREVIEWER_API CreateCodeReviewResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEGURUREVIEWER_API CreateCodeReviewResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const CodeReview& GetCodeReview() const{ return m_codeReview; }

    
    inline void SetCodeReview(const CodeReview& value) { m_codeReview = value; }

    
    inline void SetCodeReview(CodeReview&& value) { m_codeReview = std::move(value); }

    
    inline CreateCodeReviewResult& WithCodeReview(const CodeReview& value) { SetCodeReview(value); return *this;}

    
    inline CreateCodeReviewResult& WithCodeReview(CodeReview&& value) { SetCodeReview(std::move(value)); return *this;}

  private:

    CodeReview m_codeReview;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
