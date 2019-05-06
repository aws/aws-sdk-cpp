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
#include <aws/mturk-requester/MTurkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mturk-requester/model/AssignmentStatus.h>
#include <utility>

namespace Aws
{
namespace MTurk
{
namespace Model
{

  /**
   */
  class AWS_MTURK_API ListAssignmentsForHITRequest : public MTurkRequest
  {
  public:
    ListAssignmentsForHITRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAssignmentsForHIT"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the HIT.</p>
     */
    inline const Aws::String& GetHITId() const{ return m_hITId; }

    /**
     * <p>The ID of the HIT.</p>
     */
    inline bool HITIdHasBeenSet() const { return m_hITIdHasBeenSet; }

    /**
     * <p>The ID of the HIT.</p>
     */
    inline void SetHITId(const Aws::String& value) { m_hITIdHasBeenSet = true; m_hITId = value; }

    /**
     * <p>The ID of the HIT.</p>
     */
    inline void SetHITId(Aws::String&& value) { m_hITIdHasBeenSet = true; m_hITId = std::move(value); }

    /**
     * <p>The ID of the HIT.</p>
     */
    inline void SetHITId(const char* value) { m_hITIdHasBeenSet = true; m_hITId.assign(value); }

    /**
     * <p>The ID of the HIT.</p>
     */
    inline ListAssignmentsForHITRequest& WithHITId(const Aws::String& value) { SetHITId(value); return *this;}

    /**
     * <p>The ID of the HIT.</p>
     */
    inline ListAssignmentsForHITRequest& WithHITId(Aws::String&& value) { SetHITId(std::move(value)); return *this;}

    /**
     * <p>The ID of the HIT.</p>
     */
    inline ListAssignmentsForHITRequest& WithHITId(const char* value) { SetHITId(value); return *this;}


    /**
     * <p>Pagination token</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Pagination token</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Pagination token</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Pagination token</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Pagination token</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Pagination token</p>
     */
    inline ListAssignmentsForHITRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Pagination token</p>
     */
    inline ListAssignmentsForHITRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Pagination token</p>
     */
    inline ListAssignmentsForHITRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline int GetMaxResults() const{ return m_maxResults; }

    
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    
    inline ListAssignmentsForHITRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The status of the assignments to return: Submitted | Approved | Rejected</p>
     */
    inline const Aws::Vector<AssignmentStatus>& GetAssignmentStatuses() const{ return m_assignmentStatuses; }

    /**
     * <p>The status of the assignments to return: Submitted | Approved | Rejected</p>
     */
    inline bool AssignmentStatusesHasBeenSet() const { return m_assignmentStatusesHasBeenSet; }

    /**
     * <p>The status of the assignments to return: Submitted | Approved | Rejected</p>
     */
    inline void SetAssignmentStatuses(const Aws::Vector<AssignmentStatus>& value) { m_assignmentStatusesHasBeenSet = true; m_assignmentStatuses = value; }

    /**
     * <p>The status of the assignments to return: Submitted | Approved | Rejected</p>
     */
    inline void SetAssignmentStatuses(Aws::Vector<AssignmentStatus>&& value) { m_assignmentStatusesHasBeenSet = true; m_assignmentStatuses = std::move(value); }

    /**
     * <p>The status of the assignments to return: Submitted | Approved | Rejected</p>
     */
    inline ListAssignmentsForHITRequest& WithAssignmentStatuses(const Aws::Vector<AssignmentStatus>& value) { SetAssignmentStatuses(value); return *this;}

    /**
     * <p>The status of the assignments to return: Submitted | Approved | Rejected</p>
     */
    inline ListAssignmentsForHITRequest& WithAssignmentStatuses(Aws::Vector<AssignmentStatus>&& value) { SetAssignmentStatuses(std::move(value)); return *this;}

    /**
     * <p>The status of the assignments to return: Submitted | Approved | Rejected</p>
     */
    inline ListAssignmentsForHITRequest& AddAssignmentStatuses(const AssignmentStatus& value) { m_assignmentStatusesHasBeenSet = true; m_assignmentStatuses.push_back(value); return *this; }

    /**
     * <p>The status of the assignments to return: Submitted | Approved | Rejected</p>
     */
    inline ListAssignmentsForHITRequest& AddAssignmentStatuses(AssignmentStatus&& value) { m_assignmentStatusesHasBeenSet = true; m_assignmentStatuses.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_hITId;
    bool m_hITIdHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::Vector<AssignmentStatus> m_assignmentStatuses;
    bool m_assignmentStatusesHasBeenSet;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
