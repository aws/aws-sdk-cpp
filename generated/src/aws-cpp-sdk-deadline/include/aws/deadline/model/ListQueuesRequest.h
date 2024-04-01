/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/DeadlineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/QueueStatus.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace deadline
{
namespace Model
{

  /**
   */
  class ListQueuesRequest : public DeadlineRequest
  {
  public:
    AWS_DEADLINE_API ListQueuesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListQueues"; }

    AWS_DEADLINE_API Aws::String SerializePayload() const override;

    AWS_DEADLINE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The farm ID of the queue.</p>
     */
    inline const Aws::String& GetFarmId() const{ return m_farmId; }

    /**
     * <p>The farm ID of the queue.</p>
     */
    inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }

    /**
     * <p>The farm ID of the queue.</p>
     */
    inline void SetFarmId(const Aws::String& value) { m_farmIdHasBeenSet = true; m_farmId = value; }

    /**
     * <p>The farm ID of the queue.</p>
     */
    inline void SetFarmId(Aws::String&& value) { m_farmIdHasBeenSet = true; m_farmId = std::move(value); }

    /**
     * <p>The farm ID of the queue.</p>
     */
    inline void SetFarmId(const char* value) { m_farmIdHasBeenSet = true; m_farmId.assign(value); }

    /**
     * <p>The farm ID of the queue.</p>
     */
    inline ListQueuesRequest& WithFarmId(const Aws::String& value) { SetFarmId(value); return *this;}

    /**
     * <p>The farm ID of the queue.</p>
     */
    inline ListQueuesRequest& WithFarmId(Aws::String&& value) { SetFarmId(std::move(value)); return *this;}

    /**
     * <p>The farm ID of the queue.</p>
     */
    inline ListQueuesRequest& WithFarmId(const char* value) { SetFarmId(value); return *this;}


    /**
     * <p>The maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages.</p>
     */
    inline ListQueuesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token for the next set of results, or <code>null</code> to start from the
     * beginning.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results, or <code>null</code> to start from the
     * beginning.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next set of results, or <code>null</code> to start from the
     * beginning.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of results, or <code>null</code> to start from the
     * beginning.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results, or <code>null</code> to start from the
     * beginning.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results, or <code>null</code> to start from the
     * beginning.</p>
     */
    inline ListQueuesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or <code>null</code> to start from the
     * beginning.</p>
     */
    inline ListQueuesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or <code>null</code> to start from the
     * beginning.</p>
     */
    inline ListQueuesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The principal ID. This filter is only valid when using Nimble Studio
     * credentials and should match the user ID in the credentials of the caller.</p>
     */
    inline const Aws::String& GetPrincipalId() const{ return m_principalId; }

    /**
     * <p>The principal ID. This filter is only valid when using Nimble Studio
     * credentials and should match the user ID in the credentials of the caller.</p>
     */
    inline bool PrincipalIdHasBeenSet() const { return m_principalIdHasBeenSet; }

    /**
     * <p>The principal ID. This filter is only valid when using Nimble Studio
     * credentials and should match the user ID in the credentials of the caller.</p>
     */
    inline void SetPrincipalId(const Aws::String& value) { m_principalIdHasBeenSet = true; m_principalId = value; }

    /**
     * <p>The principal ID. This filter is only valid when using Nimble Studio
     * credentials and should match the user ID in the credentials of the caller.</p>
     */
    inline void SetPrincipalId(Aws::String&& value) { m_principalIdHasBeenSet = true; m_principalId = std::move(value); }

    /**
     * <p>The principal ID. This filter is only valid when using Nimble Studio
     * credentials and should match the user ID in the credentials of the caller.</p>
     */
    inline void SetPrincipalId(const char* value) { m_principalIdHasBeenSet = true; m_principalId.assign(value); }

    /**
     * <p>The principal ID. This filter is only valid when using Nimble Studio
     * credentials and should match the user ID in the credentials of the caller.</p>
     */
    inline ListQueuesRequest& WithPrincipalId(const Aws::String& value) { SetPrincipalId(value); return *this;}

    /**
     * <p>The principal ID. This filter is only valid when using Nimble Studio
     * credentials and should match the user ID in the credentials of the caller.</p>
     */
    inline ListQueuesRequest& WithPrincipalId(Aws::String&& value) { SetPrincipalId(std::move(value)); return *this;}

    /**
     * <p>The principal ID. This filter is only valid when using Nimble Studio
     * credentials and should match the user ID in the credentials of the caller.</p>
     */
    inline ListQueuesRequest& WithPrincipalId(const char* value) { SetPrincipalId(value); return *this;}


    /**
     * <p>The status of the queues listed.</p> <ul> <li> <p> <code>ACTIVE</code>–The
     * queues are active.</p> </li> <li> <p> <code>SCHEDULING</code>–The queues are
     * scheduling.</p> </li> <li> <p> <code>SCHEDULING_BLOCKED</code>–The queue
     * scheduling is blocked for these queues.</p> </li> </ul>
     */
    inline const QueueStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the queues listed.</p> <ul> <li> <p> <code>ACTIVE</code>–The
     * queues are active.</p> </li> <li> <p> <code>SCHEDULING</code>–The queues are
     * scheduling.</p> </li> <li> <p> <code>SCHEDULING_BLOCKED</code>–The queue
     * scheduling is blocked for these queues.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the queues listed.</p> <ul> <li> <p> <code>ACTIVE</code>–The
     * queues are active.</p> </li> <li> <p> <code>SCHEDULING</code>–The queues are
     * scheduling.</p> </li> <li> <p> <code>SCHEDULING_BLOCKED</code>–The queue
     * scheduling is blocked for these queues.</p> </li> </ul>
     */
    inline void SetStatus(const QueueStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the queues listed.</p> <ul> <li> <p> <code>ACTIVE</code>–The
     * queues are active.</p> </li> <li> <p> <code>SCHEDULING</code>–The queues are
     * scheduling.</p> </li> <li> <p> <code>SCHEDULING_BLOCKED</code>–The queue
     * scheduling is blocked for these queues.</p> </li> </ul>
     */
    inline void SetStatus(QueueStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the queues listed.</p> <ul> <li> <p> <code>ACTIVE</code>–The
     * queues are active.</p> </li> <li> <p> <code>SCHEDULING</code>–The queues are
     * scheduling.</p> </li> <li> <p> <code>SCHEDULING_BLOCKED</code>–The queue
     * scheduling is blocked for these queues.</p> </li> </ul>
     */
    inline ListQueuesRequest& WithStatus(const QueueStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the queues listed.</p> <ul> <li> <p> <code>ACTIVE</code>–The
     * queues are active.</p> </li> <li> <p> <code>SCHEDULING</code>–The queues are
     * scheduling.</p> </li> <li> <p> <code>SCHEDULING_BLOCKED</code>–The queue
     * scheduling is blocked for these queues.</p> </li> </ul>
     */
    inline ListQueuesRequest& WithStatus(QueueStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_farmId;
    bool m_farmIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_principalId;
    bool m_principalIdHasBeenSet = false;

    QueueStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
