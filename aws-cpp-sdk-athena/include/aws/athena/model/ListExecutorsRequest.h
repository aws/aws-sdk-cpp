/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/AthenaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/athena/model/ExecutorState.h>
#include <utility>

namespace Aws
{
namespace Athena
{
namespace Model
{

  /**
   */
  class ListExecutorsRequest : public AthenaRequest
  {
  public:
    AWS_ATHENA_API ListExecutorsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListExecutors"; }

    AWS_ATHENA_API Aws::String SerializePayload() const override;

    AWS_ATHENA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The session ID.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }

    /**
     * <p>The session ID.</p>
     */
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }

    /**
     * <p>The session ID.</p>
     */
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }

    /**
     * <p>The session ID.</p>
     */
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }

    /**
     * <p>The session ID.</p>
     */
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }

    /**
     * <p>The session ID.</p>
     */
    inline ListExecutorsRequest& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}

    /**
     * <p>The session ID.</p>
     */
    inline ListExecutorsRequest& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}

    /**
     * <p>The session ID.</p>
     */
    inline ListExecutorsRequest& WithSessionId(const char* value) { SetSessionId(value); return *this;}


    /**
     * <p>A filter for a specific executor state. A description of each state
     * follows.</p> <p> <code>CREATING</code> - The executor is being started,
     * including acquiring resources.</p> <p> <code>CREATED</code> - The executor has
     * been started.</p> <p> <code>REGISTERED</code> - The executor has been
     * registered.</p> <p> <code>TERMINATING</code> - The executor is in the process of
     * shutting down.</p> <p> <code>TERMINATED</code> - The executor is no longer
     * running.</p> <p> <code>FAILED</code> - Due to a failure, the executor is no
     * longer running.</p>
     */
    inline const ExecutorState& GetExecutorStateFilter() const{ return m_executorStateFilter; }

    /**
     * <p>A filter for a specific executor state. A description of each state
     * follows.</p> <p> <code>CREATING</code> - The executor is being started,
     * including acquiring resources.</p> <p> <code>CREATED</code> - The executor has
     * been started.</p> <p> <code>REGISTERED</code> - The executor has been
     * registered.</p> <p> <code>TERMINATING</code> - The executor is in the process of
     * shutting down.</p> <p> <code>TERMINATED</code> - The executor is no longer
     * running.</p> <p> <code>FAILED</code> - Due to a failure, the executor is no
     * longer running.</p>
     */
    inline bool ExecutorStateFilterHasBeenSet() const { return m_executorStateFilterHasBeenSet; }

    /**
     * <p>A filter for a specific executor state. A description of each state
     * follows.</p> <p> <code>CREATING</code> - The executor is being started,
     * including acquiring resources.</p> <p> <code>CREATED</code> - The executor has
     * been started.</p> <p> <code>REGISTERED</code> - The executor has been
     * registered.</p> <p> <code>TERMINATING</code> - The executor is in the process of
     * shutting down.</p> <p> <code>TERMINATED</code> - The executor is no longer
     * running.</p> <p> <code>FAILED</code> - Due to a failure, the executor is no
     * longer running.</p>
     */
    inline void SetExecutorStateFilter(const ExecutorState& value) { m_executorStateFilterHasBeenSet = true; m_executorStateFilter = value; }

    /**
     * <p>A filter for a specific executor state. A description of each state
     * follows.</p> <p> <code>CREATING</code> - The executor is being started,
     * including acquiring resources.</p> <p> <code>CREATED</code> - The executor has
     * been started.</p> <p> <code>REGISTERED</code> - The executor has been
     * registered.</p> <p> <code>TERMINATING</code> - The executor is in the process of
     * shutting down.</p> <p> <code>TERMINATED</code> - The executor is no longer
     * running.</p> <p> <code>FAILED</code> - Due to a failure, the executor is no
     * longer running.</p>
     */
    inline void SetExecutorStateFilter(ExecutorState&& value) { m_executorStateFilterHasBeenSet = true; m_executorStateFilter = std::move(value); }

    /**
     * <p>A filter for a specific executor state. A description of each state
     * follows.</p> <p> <code>CREATING</code> - The executor is being started,
     * including acquiring resources.</p> <p> <code>CREATED</code> - The executor has
     * been started.</p> <p> <code>REGISTERED</code> - The executor has been
     * registered.</p> <p> <code>TERMINATING</code> - The executor is in the process of
     * shutting down.</p> <p> <code>TERMINATED</code> - The executor is no longer
     * running.</p> <p> <code>FAILED</code> - Due to a failure, the executor is no
     * longer running.</p>
     */
    inline ListExecutorsRequest& WithExecutorStateFilter(const ExecutorState& value) { SetExecutorStateFilter(value); return *this;}

    /**
     * <p>A filter for a specific executor state. A description of each state
     * follows.</p> <p> <code>CREATING</code> - The executor is being started,
     * including acquiring resources.</p> <p> <code>CREATED</code> - The executor has
     * been started.</p> <p> <code>REGISTERED</code> - The executor has been
     * registered.</p> <p> <code>TERMINATING</code> - The executor is in the process of
     * shutting down.</p> <p> <code>TERMINATED</code> - The executor is no longer
     * running.</p> <p> <code>FAILED</code> - Due to a failure, the executor is no
     * longer running.</p>
     */
    inline ListExecutorsRequest& WithExecutorStateFilter(ExecutorState&& value) { SetExecutorStateFilter(std::move(value)); return *this;}


    /**
     * <p>The maximum number of executors to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of executors to return.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of executors to return.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of executors to return.</p>
     */
    inline ListExecutorsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline ListExecutorsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token generated by the Athena service that specifies where to continue
     * pagination if a previous request was truncated. To obtain the next set of pages,
     * pass in the <code>NextToken</code> from the response object of the previous page
     * call.</p>
     */
    inline ListExecutorsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token generated by the Athena service that specifies where to continue
     * pagination if a previous request was truncated. To obtain the next set of pages,
     * pass in the <code>NextToken</code> from the response object of the previous page
     * call.</p>
     */
    inline ListExecutorsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    ExecutorState m_executorStateFilter;
    bool m_executorStateFilterHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
