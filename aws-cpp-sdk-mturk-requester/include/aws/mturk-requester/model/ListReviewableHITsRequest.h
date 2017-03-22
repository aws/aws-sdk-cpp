/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/mturk-requester/MTurkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mturk-requester/model/ReviewableHITStatus.h>

namespace Aws
{
namespace MTurk
{
namespace Model
{

  /**
   */
  class AWS_MTURK_API ListReviewableHITsRequest : public MTurkRequest
  {
  public:
    ListReviewableHITsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The ID of the HIT type of the HITs to consider for the query. If not
     * specified, all HITs for the Reviewer are considered </p>
     */
    inline const Aws::String& GetHITTypeId() const{ return m_hITTypeId; }

    /**
     * <p> The ID of the HIT type of the HITs to consider for the query. If not
     * specified, all HITs for the Reviewer are considered </p>
     */
    inline void SetHITTypeId(const Aws::String& value) { m_hITTypeIdHasBeenSet = true; m_hITTypeId = value; }

    /**
     * <p> The ID of the HIT type of the HITs to consider for the query. If not
     * specified, all HITs for the Reviewer are considered </p>
     */
    inline void SetHITTypeId(Aws::String&& value) { m_hITTypeIdHasBeenSet = true; m_hITTypeId = value; }

    /**
     * <p> The ID of the HIT type of the HITs to consider for the query. If not
     * specified, all HITs for the Reviewer are considered </p>
     */
    inline void SetHITTypeId(const char* value) { m_hITTypeIdHasBeenSet = true; m_hITTypeId.assign(value); }

    /**
     * <p> The ID of the HIT type of the HITs to consider for the query. If not
     * specified, all HITs for the Reviewer are considered </p>
     */
    inline ListReviewableHITsRequest& WithHITTypeId(const Aws::String& value) { SetHITTypeId(value); return *this;}

    /**
     * <p> The ID of the HIT type of the HITs to consider for the query. If not
     * specified, all HITs for the Reviewer are considered </p>
     */
    inline ListReviewableHITsRequest& WithHITTypeId(Aws::String&& value) { SetHITTypeId(value); return *this;}

    /**
     * <p> The ID of the HIT type of the HITs to consider for the query. If not
     * specified, all HITs for the Reviewer are considered </p>
     */
    inline ListReviewableHITsRequest& WithHITTypeId(const char* value) { SetHITTypeId(value); return *this;}

    /**
     * <p> Can be either <code>Reviewable</code> or <code>Reviewing</code>. Reviewable
     * is the default value. </p>
     */
    inline const ReviewableHITStatus& GetStatus() const{ return m_status; }

    /**
     * <p> Can be either <code>Reviewable</code> or <code>Reviewing</code>. Reviewable
     * is the default value. </p>
     */
    inline void SetStatus(const ReviewableHITStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> Can be either <code>Reviewable</code> or <code>Reviewing</code>. Reviewable
     * is the default value. </p>
     */
    inline void SetStatus(ReviewableHITStatus&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> Can be either <code>Reviewable</code> or <code>Reviewing</code>. Reviewable
     * is the default value. </p>
     */
    inline ListReviewableHITsRequest& WithStatus(const ReviewableHITStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> Can be either <code>Reviewable</code> or <code>Reviewing</code>. Reviewable
     * is the default value. </p>
     */
    inline ListReviewableHITsRequest& WithStatus(ReviewableHITStatus&& value) { SetStatus(value); return *this;}

    /**
     * <p>Pagination Token</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Pagination Token</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Pagination Token</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Pagination Token</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Pagination Token</p>
     */
    inline ListReviewableHITsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Pagination Token</p>
     */
    inline ListReviewableHITsRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>Pagination Token</p>
     */
    inline ListReviewableHITsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    /**
     * <p> Limit the number of results returned. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> Limit the number of results returned. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> Limit the number of results returned. </p>
     */
    inline ListReviewableHITsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:
    Aws::String m_hITTypeId;
    bool m_hITTypeIdHasBeenSet;
    ReviewableHITStatus m_status;
    bool m_statusHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
