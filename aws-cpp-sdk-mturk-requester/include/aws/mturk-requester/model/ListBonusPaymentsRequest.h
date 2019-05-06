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
#include <utility>

namespace Aws
{
namespace MTurk
{
namespace Model
{

  /**
   */
  class AWS_MTURK_API ListBonusPaymentsRequest : public MTurkRequest
  {
  public:
    ListBonusPaymentsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListBonusPayments"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the HIT associated with the bonus payments to retrieve. If not
     * specified, all bonus payments for all assignments for the given HIT are
     * returned. Either the HITId parameter or the AssignmentId parameter must be
     * specified</p>
     */
    inline const Aws::String& GetHITId() const{ return m_hITId; }

    /**
     * <p>The ID of the HIT associated with the bonus payments to retrieve. If not
     * specified, all bonus payments for all assignments for the given HIT are
     * returned. Either the HITId parameter or the AssignmentId parameter must be
     * specified</p>
     */
    inline bool HITIdHasBeenSet() const { return m_hITIdHasBeenSet; }

    /**
     * <p>The ID of the HIT associated with the bonus payments to retrieve. If not
     * specified, all bonus payments for all assignments for the given HIT are
     * returned. Either the HITId parameter or the AssignmentId parameter must be
     * specified</p>
     */
    inline void SetHITId(const Aws::String& value) { m_hITIdHasBeenSet = true; m_hITId = value; }

    /**
     * <p>The ID of the HIT associated with the bonus payments to retrieve. If not
     * specified, all bonus payments for all assignments for the given HIT are
     * returned. Either the HITId parameter or the AssignmentId parameter must be
     * specified</p>
     */
    inline void SetHITId(Aws::String&& value) { m_hITIdHasBeenSet = true; m_hITId = std::move(value); }

    /**
     * <p>The ID of the HIT associated with the bonus payments to retrieve. If not
     * specified, all bonus payments for all assignments for the given HIT are
     * returned. Either the HITId parameter or the AssignmentId parameter must be
     * specified</p>
     */
    inline void SetHITId(const char* value) { m_hITIdHasBeenSet = true; m_hITId.assign(value); }

    /**
     * <p>The ID of the HIT associated with the bonus payments to retrieve. If not
     * specified, all bonus payments for all assignments for the given HIT are
     * returned. Either the HITId parameter or the AssignmentId parameter must be
     * specified</p>
     */
    inline ListBonusPaymentsRequest& WithHITId(const Aws::String& value) { SetHITId(value); return *this;}

    /**
     * <p>The ID of the HIT associated with the bonus payments to retrieve. If not
     * specified, all bonus payments for all assignments for the given HIT are
     * returned. Either the HITId parameter or the AssignmentId parameter must be
     * specified</p>
     */
    inline ListBonusPaymentsRequest& WithHITId(Aws::String&& value) { SetHITId(std::move(value)); return *this;}

    /**
     * <p>The ID of the HIT associated with the bonus payments to retrieve. If not
     * specified, all bonus payments for all assignments for the given HIT are
     * returned. Either the HITId parameter or the AssignmentId parameter must be
     * specified</p>
     */
    inline ListBonusPaymentsRequest& WithHITId(const char* value) { SetHITId(value); return *this;}


    /**
     * <p>The ID of the assignment associated with the bonus payments to retrieve. If
     * specified, only bonus payments for the given assignment are returned. Either the
     * HITId parameter or the AssignmentId parameter must be specified</p>
     */
    inline const Aws::String& GetAssignmentId() const{ return m_assignmentId; }

    /**
     * <p>The ID of the assignment associated with the bonus payments to retrieve. If
     * specified, only bonus payments for the given assignment are returned. Either the
     * HITId parameter or the AssignmentId parameter must be specified</p>
     */
    inline bool AssignmentIdHasBeenSet() const { return m_assignmentIdHasBeenSet; }

    /**
     * <p>The ID of the assignment associated with the bonus payments to retrieve. If
     * specified, only bonus payments for the given assignment are returned. Either the
     * HITId parameter or the AssignmentId parameter must be specified</p>
     */
    inline void SetAssignmentId(const Aws::String& value) { m_assignmentIdHasBeenSet = true; m_assignmentId = value; }

    /**
     * <p>The ID of the assignment associated with the bonus payments to retrieve. If
     * specified, only bonus payments for the given assignment are returned. Either the
     * HITId parameter or the AssignmentId parameter must be specified</p>
     */
    inline void SetAssignmentId(Aws::String&& value) { m_assignmentIdHasBeenSet = true; m_assignmentId = std::move(value); }

    /**
     * <p>The ID of the assignment associated with the bonus payments to retrieve. If
     * specified, only bonus payments for the given assignment are returned. Either the
     * HITId parameter or the AssignmentId parameter must be specified</p>
     */
    inline void SetAssignmentId(const char* value) { m_assignmentIdHasBeenSet = true; m_assignmentId.assign(value); }

    /**
     * <p>The ID of the assignment associated with the bonus payments to retrieve. If
     * specified, only bonus payments for the given assignment are returned. Either the
     * HITId parameter or the AssignmentId parameter must be specified</p>
     */
    inline ListBonusPaymentsRequest& WithAssignmentId(const Aws::String& value) { SetAssignmentId(value); return *this;}

    /**
     * <p>The ID of the assignment associated with the bonus payments to retrieve. If
     * specified, only bonus payments for the given assignment are returned. Either the
     * HITId parameter or the AssignmentId parameter must be specified</p>
     */
    inline ListBonusPaymentsRequest& WithAssignmentId(Aws::String&& value) { SetAssignmentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the assignment associated with the bonus payments to retrieve. If
     * specified, only bonus payments for the given assignment are returned. Either the
     * HITId parameter or the AssignmentId parameter must be specified</p>
     */
    inline ListBonusPaymentsRequest& WithAssignmentId(const char* value) { SetAssignmentId(value); return *this;}


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
    inline ListBonusPaymentsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Pagination token</p>
     */
    inline ListBonusPaymentsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Pagination token</p>
     */
    inline ListBonusPaymentsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline int GetMaxResults() const{ return m_maxResults; }

    
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    
    inline ListBonusPaymentsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_hITId;
    bool m_hITIdHasBeenSet;

    Aws::String m_assignmentId;
    bool m_assignmentIdHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
