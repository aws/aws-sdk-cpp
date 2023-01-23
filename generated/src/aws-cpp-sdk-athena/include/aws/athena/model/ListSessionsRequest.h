/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/AthenaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/athena/model/SessionState.h>
#include <utility>

namespace Aws
{
namespace Athena
{
namespace Model
{

  /**
   */
  class ListSessionsRequest : public AthenaRequest
  {
  public:
    AWS_ATHENA_API ListSessionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSessions"; }

    AWS_ATHENA_API Aws::String SerializePayload() const override;

    AWS_ATHENA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The workgroup to which the session belongs.</p>
     */
    inline const Aws::String& GetWorkGroup() const{ return m_workGroup; }

    /**
     * <p>The workgroup to which the session belongs.</p>
     */
    inline bool WorkGroupHasBeenSet() const { return m_workGroupHasBeenSet; }

    /**
     * <p>The workgroup to which the session belongs.</p>
     */
    inline void SetWorkGroup(const Aws::String& value) { m_workGroupHasBeenSet = true; m_workGroup = value; }

    /**
     * <p>The workgroup to which the session belongs.</p>
     */
    inline void SetWorkGroup(Aws::String&& value) { m_workGroupHasBeenSet = true; m_workGroup = std::move(value); }

    /**
     * <p>The workgroup to which the session belongs.</p>
     */
    inline void SetWorkGroup(const char* value) { m_workGroupHasBeenSet = true; m_workGroup.assign(value); }

    /**
     * <p>The workgroup to which the session belongs.</p>
     */
    inline ListSessionsRequest& WithWorkGroup(const Aws::String& value) { SetWorkGroup(value); return *this;}

    /**
     * <p>The workgroup to which the session belongs.</p>
     */
    inline ListSessionsRequest& WithWorkGroup(Aws::String&& value) { SetWorkGroup(std::move(value)); return *this;}

    /**
     * <p>The workgroup to which the session belongs.</p>
     */
    inline ListSessionsRequest& WithWorkGroup(const char* value) { SetWorkGroup(value); return *this;}


    /**
     * <p>A filter for a specific session state. A description of each state
     * follows.</p> <p> <code>CREATING</code> - The session is being started, including
     * acquiring resources.</p> <p> <code>CREATED</code> - The session has been
     * started.</p> <p> <code>IDLE</code> - The session is able to accept a
     * calculation.</p> <p> <code>BUSY</code> - The session is processing another task
     * and is unable to accept a calculation.</p> <p> <code>TERMINATING</code> - The
     * session is in the process of shutting down.</p> <p> <code>TERMINATED</code> -
     * The session and its resources are no longer running.</p> <p>
     * <code>DEGRADED</code> - The session has no healthy coordinators.</p> <p>
     * <code>FAILED</code> - Due to a failure, the session and its resources are no
     * longer running.</p>
     */
    inline const SessionState& GetStateFilter() const{ return m_stateFilter; }

    /**
     * <p>A filter for a specific session state. A description of each state
     * follows.</p> <p> <code>CREATING</code> - The session is being started, including
     * acquiring resources.</p> <p> <code>CREATED</code> - The session has been
     * started.</p> <p> <code>IDLE</code> - The session is able to accept a
     * calculation.</p> <p> <code>BUSY</code> - The session is processing another task
     * and is unable to accept a calculation.</p> <p> <code>TERMINATING</code> - The
     * session is in the process of shutting down.</p> <p> <code>TERMINATED</code> -
     * The session and its resources are no longer running.</p> <p>
     * <code>DEGRADED</code> - The session has no healthy coordinators.</p> <p>
     * <code>FAILED</code> - Due to a failure, the session and its resources are no
     * longer running.</p>
     */
    inline bool StateFilterHasBeenSet() const { return m_stateFilterHasBeenSet; }

    /**
     * <p>A filter for a specific session state. A description of each state
     * follows.</p> <p> <code>CREATING</code> - The session is being started, including
     * acquiring resources.</p> <p> <code>CREATED</code> - The session has been
     * started.</p> <p> <code>IDLE</code> - The session is able to accept a
     * calculation.</p> <p> <code>BUSY</code> - The session is processing another task
     * and is unable to accept a calculation.</p> <p> <code>TERMINATING</code> - The
     * session is in the process of shutting down.</p> <p> <code>TERMINATED</code> -
     * The session and its resources are no longer running.</p> <p>
     * <code>DEGRADED</code> - The session has no healthy coordinators.</p> <p>
     * <code>FAILED</code> - Due to a failure, the session and its resources are no
     * longer running.</p>
     */
    inline void SetStateFilter(const SessionState& value) { m_stateFilterHasBeenSet = true; m_stateFilter = value; }

    /**
     * <p>A filter for a specific session state. A description of each state
     * follows.</p> <p> <code>CREATING</code> - The session is being started, including
     * acquiring resources.</p> <p> <code>CREATED</code> - The session has been
     * started.</p> <p> <code>IDLE</code> - The session is able to accept a
     * calculation.</p> <p> <code>BUSY</code> - The session is processing another task
     * and is unable to accept a calculation.</p> <p> <code>TERMINATING</code> - The
     * session is in the process of shutting down.</p> <p> <code>TERMINATED</code> -
     * The session and its resources are no longer running.</p> <p>
     * <code>DEGRADED</code> - The session has no healthy coordinators.</p> <p>
     * <code>FAILED</code> - Due to a failure, the session and its resources are no
     * longer running.</p>
     */
    inline void SetStateFilter(SessionState&& value) { m_stateFilterHasBeenSet = true; m_stateFilter = std::move(value); }

    /**
     * <p>A filter for a specific session state. A description of each state
     * follows.</p> <p> <code>CREATING</code> - The session is being started, including
     * acquiring resources.</p> <p> <code>CREATED</code> - The session has been
     * started.</p> <p> <code>IDLE</code> - The session is able to accept a
     * calculation.</p> <p> <code>BUSY</code> - The session is processing another task
     * and is unable to accept a calculation.</p> <p> <code>TERMINATING</code> - The
     * session is in the process of shutting down.</p> <p> <code>TERMINATED</code> -
     * The session and its resources are no longer running.</p> <p>
     * <code>DEGRADED</code> - The session has no healthy coordinators.</p> <p>
     * <code>FAILED</code> - Due to a failure, the session and its resources are no
     * longer running.</p>
     */
    inline ListSessionsRequest& WithStateFilter(const SessionState& value) { SetStateFilter(value); return *this;}

    /**
     * <p>A filter for a specific session state. A description of each state
     * follows.</p> <p> <code>CREATING</code> - The session is being started, including
     * acquiring resources.</p> <p> <code>CREATED</code> - The session has been
     * started.</p> <p> <code>IDLE</code> - The session is able to accept a
     * calculation.</p> <p> <code>BUSY</code> - The session is processing another task
     * and is unable to accept a calculation.</p> <p> <code>TERMINATING</code> - The
     * session is in the process of shutting down.</p> <p> <code>TERMINATED</code> -
     * The session and its resources are no longer running.</p> <p>
     * <code>DEGRADED</code> - The session has no healthy coordinators.</p> <p>
     * <code>FAILED</code> - Due to a failure, the session and its resources are no
     * longer running.</p>
     */
    inline ListSessionsRequest& WithStateFilter(SessionState&& value) { SetStateFilter(std::move(value)); return *this;}


    /**
     * <p>The maximum number of sessions to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of sessions to return.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of sessions to return.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of sessions to return.</p>
     */
    inline ListSessionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A token generated by the Athena service that specifies where to continue
     * pagination if a previous request was truncated. To obtain the next set of pages,
     * pass in the <code>NextToken</code> from the response object of the previous page
     * call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token generated by the Athena service that specifies where to continue
     * pagination if a previous request was truncated. To obtain the next set of pages,
     * pass in the <code>NextToken</code> from the response object of the previous page
     * call.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token generated by the Athena service that specifies where to continue
     * pagination if a previous request was truncated. To obtain the next set of pages,
     * pass in the <code>NextToken</code> from the response object of the previous page
     * call.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token generated by the Athena service that specifies where to continue
     * pagination if a previous request was truncated. To obtain the next set of pages,
     * pass in the <code>NextToken</code> from the response object of the previous page
     * call.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token generated by the Athena service that specifies where to continue
     * pagination if a previous request was truncated. To obtain the next set of pages,
     * pass in the <code>NextToken</code> from the response object of the previous page
     * call.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token generated by the Athena service that specifies where to continue
     * pagination if a previous request was truncated. To obtain the next set of pages,
     * pass in the <code>NextToken</code> from the response object of the previous page
     * call.</p>
     */
    inline ListSessionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token generated by the Athena service that specifies where to continue
     * pagination if a previous request was truncated. To obtain the next set of pages,
     * pass in the <code>NextToken</code> from the response object of the previous page
     * call.</p>
     */
    inline ListSessionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token generated by the Athena service that specifies where to continue
     * pagination if a previous request was truncated. To obtain the next set of pages,
     * pass in the <code>NextToken</code> from the response object of the previous page
     * call.</p>
     */
    inline ListSessionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_workGroup;
    bool m_workGroupHasBeenSet = false;

    SessionState m_stateFilter;
    bool m_stateFilterHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
