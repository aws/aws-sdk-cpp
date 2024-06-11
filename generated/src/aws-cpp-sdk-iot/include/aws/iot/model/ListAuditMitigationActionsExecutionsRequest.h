/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/AuditMitigationActionsExecutionStatus.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoT
{
namespace Model
{

  /**
   */
  class ListAuditMitigationActionsExecutionsRequest : public IoTRequest
  {
  public:
    AWS_IOT_API ListAuditMitigationActionsExecutionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAuditMitigationActionsExecutions"; }

    AWS_IOT_API Aws::String SerializePayload() const override;

    AWS_IOT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>Specify this filter to limit results to actions for a specific audit
     * mitigation actions task.</p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }
    inline void SetTaskId(const Aws::String& value) { m_taskIdHasBeenSet = true; m_taskId = value; }
    inline void SetTaskId(Aws::String&& value) { m_taskIdHasBeenSet = true; m_taskId = std::move(value); }
    inline void SetTaskId(const char* value) { m_taskIdHasBeenSet = true; m_taskId.assign(value); }
    inline ListAuditMitigationActionsExecutionsRequest& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}
    inline ListAuditMitigationActionsExecutionsRequest& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}
    inline ListAuditMitigationActionsExecutionsRequest& WithTaskId(const char* value) { SetTaskId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify this filter to limit results to those with a specific status.</p>
     */
    inline const AuditMitigationActionsExecutionStatus& GetActionStatus() const{ return m_actionStatus; }
    inline bool ActionStatusHasBeenSet() const { return m_actionStatusHasBeenSet; }
    inline void SetActionStatus(const AuditMitigationActionsExecutionStatus& value) { m_actionStatusHasBeenSet = true; m_actionStatus = value; }
    inline void SetActionStatus(AuditMitigationActionsExecutionStatus&& value) { m_actionStatusHasBeenSet = true; m_actionStatus = std::move(value); }
    inline ListAuditMitigationActionsExecutionsRequest& WithActionStatus(const AuditMitigationActionsExecutionStatus& value) { SetActionStatus(value); return *this;}
    inline ListAuditMitigationActionsExecutionsRequest& WithActionStatus(AuditMitigationActionsExecutionStatus&& value) { SetActionStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify this filter to limit results to those that were applied to a specific
     * audit finding.</p>
     */
    inline const Aws::String& GetFindingId() const{ return m_findingId; }
    inline bool FindingIdHasBeenSet() const { return m_findingIdHasBeenSet; }
    inline void SetFindingId(const Aws::String& value) { m_findingIdHasBeenSet = true; m_findingId = value; }
    inline void SetFindingId(Aws::String&& value) { m_findingIdHasBeenSet = true; m_findingId = std::move(value); }
    inline void SetFindingId(const char* value) { m_findingIdHasBeenSet = true; m_findingId.assign(value); }
    inline ListAuditMitigationActionsExecutionsRequest& WithFindingId(const Aws::String& value) { SetFindingId(value); return *this;}
    inline ListAuditMitigationActionsExecutionsRequest& WithFindingId(Aws::String&& value) { SetFindingId(std::move(value)); return *this;}
    inline ListAuditMitigationActionsExecutionsRequest& WithFindingId(const char* value) { SetFindingId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return at one time. The default is 25.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListAuditMitigationActionsExecutionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListAuditMitigationActionsExecutionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAuditMitigationActionsExecutionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAuditMitigationActionsExecutionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;

    AuditMitigationActionsExecutionStatus m_actionStatus;
    bool m_actionStatusHasBeenSet = false;

    Aws::String m_findingId;
    bool m_findingIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
