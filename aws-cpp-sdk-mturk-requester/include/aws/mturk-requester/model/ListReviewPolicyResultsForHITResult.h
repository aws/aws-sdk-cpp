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
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mturk-requester/model/ReviewPolicy.h>
#include <aws/mturk-requester/model/ReviewReport.h>
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
namespace MTurk
{
namespace Model
{
  class AWS_MTURK_API ListReviewPolicyResultsForHITResult
  {
  public:
    ListReviewPolicyResultsForHITResult();
    ListReviewPolicyResultsForHITResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListReviewPolicyResultsForHITResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The HITId of the HIT for which results have been returned.</p>
     */
    inline const Aws::String& GetHITId() const{ return m_hITId; }

    /**
     * <p>The HITId of the HIT for which results have been returned.</p>
     */
    inline void SetHITId(const Aws::String& value) { m_hITId = value; }

    /**
     * <p>The HITId of the HIT for which results have been returned.</p>
     */
    inline void SetHITId(Aws::String&& value) { m_hITId = std::move(value); }

    /**
     * <p>The HITId of the HIT for which results have been returned.</p>
     */
    inline void SetHITId(const char* value) { m_hITId.assign(value); }

    /**
     * <p>The HITId of the HIT for which results have been returned.</p>
     */
    inline ListReviewPolicyResultsForHITResult& WithHITId(const Aws::String& value) { SetHITId(value); return *this;}

    /**
     * <p>The HITId of the HIT for which results have been returned.</p>
     */
    inline ListReviewPolicyResultsForHITResult& WithHITId(Aws::String&& value) { SetHITId(std::move(value)); return *this;}

    /**
     * <p>The HITId of the HIT for which results have been returned.</p>
     */
    inline ListReviewPolicyResultsForHITResult& WithHITId(const char* value) { SetHITId(value); return *this;}


    /**
     * <p> The name of the Assignment-level Review Policy. This contains only the
     * PolicyName element. </p>
     */
    inline const ReviewPolicy& GetAssignmentReviewPolicy() const{ return m_assignmentReviewPolicy; }

    /**
     * <p> The name of the Assignment-level Review Policy. This contains only the
     * PolicyName element. </p>
     */
    inline void SetAssignmentReviewPolicy(const ReviewPolicy& value) { m_assignmentReviewPolicy = value; }

    /**
     * <p> The name of the Assignment-level Review Policy. This contains only the
     * PolicyName element. </p>
     */
    inline void SetAssignmentReviewPolicy(ReviewPolicy&& value) { m_assignmentReviewPolicy = std::move(value); }

    /**
     * <p> The name of the Assignment-level Review Policy. This contains only the
     * PolicyName element. </p>
     */
    inline ListReviewPolicyResultsForHITResult& WithAssignmentReviewPolicy(const ReviewPolicy& value) { SetAssignmentReviewPolicy(value); return *this;}

    /**
     * <p> The name of the Assignment-level Review Policy. This contains only the
     * PolicyName element. </p>
     */
    inline ListReviewPolicyResultsForHITResult& WithAssignmentReviewPolicy(ReviewPolicy&& value) { SetAssignmentReviewPolicy(std::move(value)); return *this;}


    /**
     * <p>The name of the HIT-level Review Policy. This contains only the PolicyName
     * element.</p>
     */
    inline const ReviewPolicy& GetHITReviewPolicy() const{ return m_hITReviewPolicy; }

    /**
     * <p>The name of the HIT-level Review Policy. This contains only the PolicyName
     * element.</p>
     */
    inline void SetHITReviewPolicy(const ReviewPolicy& value) { m_hITReviewPolicy = value; }

    /**
     * <p>The name of the HIT-level Review Policy. This contains only the PolicyName
     * element.</p>
     */
    inline void SetHITReviewPolicy(ReviewPolicy&& value) { m_hITReviewPolicy = std::move(value); }

    /**
     * <p>The name of the HIT-level Review Policy. This contains only the PolicyName
     * element.</p>
     */
    inline ListReviewPolicyResultsForHITResult& WithHITReviewPolicy(const ReviewPolicy& value) { SetHITReviewPolicy(value); return *this;}

    /**
     * <p>The name of the HIT-level Review Policy. This contains only the PolicyName
     * element.</p>
     */
    inline ListReviewPolicyResultsForHITResult& WithHITReviewPolicy(ReviewPolicy&& value) { SetHITReviewPolicy(std::move(value)); return *this;}


    /**
     * <p> Contains both ReviewResult and ReviewAction elements for an Assignment. </p>
     */
    inline const ReviewReport& GetAssignmentReviewReport() const{ return m_assignmentReviewReport; }

    /**
     * <p> Contains both ReviewResult and ReviewAction elements for an Assignment. </p>
     */
    inline void SetAssignmentReviewReport(const ReviewReport& value) { m_assignmentReviewReport = value; }

    /**
     * <p> Contains both ReviewResult and ReviewAction elements for an Assignment. </p>
     */
    inline void SetAssignmentReviewReport(ReviewReport&& value) { m_assignmentReviewReport = std::move(value); }

    /**
     * <p> Contains both ReviewResult and ReviewAction elements for an Assignment. </p>
     */
    inline ListReviewPolicyResultsForHITResult& WithAssignmentReviewReport(const ReviewReport& value) { SetAssignmentReviewReport(value); return *this;}

    /**
     * <p> Contains both ReviewResult and ReviewAction elements for an Assignment. </p>
     */
    inline ListReviewPolicyResultsForHITResult& WithAssignmentReviewReport(ReviewReport&& value) { SetAssignmentReviewReport(std::move(value)); return *this;}


    /**
     * <p>Contains both ReviewResult and ReviewAction elements for a particular HIT.
     * </p>
     */
    inline const ReviewReport& GetHITReviewReport() const{ return m_hITReviewReport; }

    /**
     * <p>Contains both ReviewResult and ReviewAction elements for a particular HIT.
     * </p>
     */
    inline void SetHITReviewReport(const ReviewReport& value) { m_hITReviewReport = value; }

    /**
     * <p>Contains both ReviewResult and ReviewAction elements for a particular HIT.
     * </p>
     */
    inline void SetHITReviewReport(ReviewReport&& value) { m_hITReviewReport = std::move(value); }

    /**
     * <p>Contains both ReviewResult and ReviewAction elements for a particular HIT.
     * </p>
     */
    inline ListReviewPolicyResultsForHITResult& WithHITReviewReport(const ReviewReport& value) { SetHITReviewReport(value); return *this;}

    /**
     * <p>Contains both ReviewResult and ReviewAction elements for a particular HIT.
     * </p>
     */
    inline ListReviewPolicyResultsForHITResult& WithHITReviewReport(ReviewReport&& value) { SetHITReviewReport(std::move(value)); return *this;}


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListReviewPolicyResultsForHITResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListReviewPolicyResultsForHITResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListReviewPolicyResultsForHITResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_hITId;

    ReviewPolicy m_assignmentReviewPolicy;

    ReviewPolicy m_hITReviewPolicy;

    ReviewReport m_assignmentReviewReport;

    ReviewReport m_hITReviewReport;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
