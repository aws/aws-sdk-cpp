/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_CODEGURUREVIEWER_API DescribeCodeReviewResult
  {
  public:
    DescribeCodeReviewResult();
    DescribeCodeReviewResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeCodeReviewResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> Information about the code review. </p>
     */
    inline const CodeReview& GetCodeReview() const{ return m_codeReview; }

    /**
     * <p> Information about the code review. </p>
     */
    inline void SetCodeReview(const CodeReview& value) { m_codeReview = value; }

    /**
     * <p> Information about the code review. </p>
     */
    inline void SetCodeReview(CodeReview&& value) { m_codeReview = std::move(value); }

    /**
     * <p> Information about the code review. </p>
     */
    inline DescribeCodeReviewResult& WithCodeReview(const CodeReview& value) { SetCodeReview(value); return *this;}

    /**
     * <p> Information about the code review. </p>
     */
    inline DescribeCodeReviewResult& WithCodeReview(CodeReview&& value) { SetCodeReview(std::move(value)); return *this;}

  private:

    CodeReview m_codeReview;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
