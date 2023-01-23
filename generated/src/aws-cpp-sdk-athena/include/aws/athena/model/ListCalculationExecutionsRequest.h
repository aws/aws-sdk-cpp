/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/AthenaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/athena/model/CalculationExecutionState.h>
#include <utility>

namespace Aws
{
namespace Athena
{
namespace Model
{

  /**
   */
  class ListCalculationExecutionsRequest : public AthenaRequest
  {
  public:
    AWS_ATHENA_API ListCalculationExecutionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListCalculationExecutions"; }

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
    inline ListCalculationExecutionsRequest& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}

    /**
     * <p>The session ID.</p>
     */
    inline ListCalculationExecutionsRequest& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}

    /**
     * <p>The session ID.</p>
     */
    inline ListCalculationExecutionsRequest& WithSessionId(const char* value) { SetSessionId(value); return *this;}


    /**
     * <p>A filter for a specific calculation execution state. A description of each
     * state follows.</p> <p> <code>CREATING</code> - The calculation is in the process
     * of being created.</p> <p> <code>CREATED</code> - The calculation has been
     * created and is ready to run.</p> <p> <code>QUEUED</code> - The calculation has
     * been queued for processing.</p> <p> <code>RUNNING</code> - The calculation is
     * running.</p> <p> <code>CANCELING</code> - A request to cancel the calculation
     * has been received and the system is working to stop it.</p> <p>
     * <code>CANCELED</code> - The calculation is no longer running as the result of a
     * cancel request.</p> <p> <code>COMPLETED</code> - The calculation has completed
     * without error.</p> <p> <code>FAILED</code> - The calculation failed and is no
     * longer running.</p>
     */
    inline const CalculationExecutionState& GetStateFilter() const{ return m_stateFilter; }

    /**
     * <p>A filter for a specific calculation execution state. A description of each
     * state follows.</p> <p> <code>CREATING</code> - The calculation is in the process
     * of being created.</p> <p> <code>CREATED</code> - The calculation has been
     * created and is ready to run.</p> <p> <code>QUEUED</code> - The calculation has
     * been queued for processing.</p> <p> <code>RUNNING</code> - The calculation is
     * running.</p> <p> <code>CANCELING</code> - A request to cancel the calculation
     * has been received and the system is working to stop it.</p> <p>
     * <code>CANCELED</code> - The calculation is no longer running as the result of a
     * cancel request.</p> <p> <code>COMPLETED</code> - The calculation has completed
     * without error.</p> <p> <code>FAILED</code> - The calculation failed and is no
     * longer running.</p>
     */
    inline bool StateFilterHasBeenSet() const { return m_stateFilterHasBeenSet; }

    /**
     * <p>A filter for a specific calculation execution state. A description of each
     * state follows.</p> <p> <code>CREATING</code> - The calculation is in the process
     * of being created.</p> <p> <code>CREATED</code> - The calculation has been
     * created and is ready to run.</p> <p> <code>QUEUED</code> - The calculation has
     * been queued for processing.</p> <p> <code>RUNNING</code> - The calculation is
     * running.</p> <p> <code>CANCELING</code> - A request to cancel the calculation
     * has been received and the system is working to stop it.</p> <p>
     * <code>CANCELED</code> - The calculation is no longer running as the result of a
     * cancel request.</p> <p> <code>COMPLETED</code> - The calculation has completed
     * without error.</p> <p> <code>FAILED</code> - The calculation failed and is no
     * longer running.</p>
     */
    inline void SetStateFilter(const CalculationExecutionState& value) { m_stateFilterHasBeenSet = true; m_stateFilter = value; }

    /**
     * <p>A filter for a specific calculation execution state. A description of each
     * state follows.</p> <p> <code>CREATING</code> - The calculation is in the process
     * of being created.</p> <p> <code>CREATED</code> - The calculation has been
     * created and is ready to run.</p> <p> <code>QUEUED</code> - The calculation has
     * been queued for processing.</p> <p> <code>RUNNING</code> - The calculation is
     * running.</p> <p> <code>CANCELING</code> - A request to cancel the calculation
     * has been received and the system is working to stop it.</p> <p>
     * <code>CANCELED</code> - The calculation is no longer running as the result of a
     * cancel request.</p> <p> <code>COMPLETED</code> - The calculation has completed
     * without error.</p> <p> <code>FAILED</code> - The calculation failed and is no
     * longer running.</p>
     */
    inline void SetStateFilter(CalculationExecutionState&& value) { m_stateFilterHasBeenSet = true; m_stateFilter = std::move(value); }

    /**
     * <p>A filter for a specific calculation execution state. A description of each
     * state follows.</p> <p> <code>CREATING</code> - The calculation is in the process
     * of being created.</p> <p> <code>CREATED</code> - The calculation has been
     * created and is ready to run.</p> <p> <code>QUEUED</code> - The calculation has
     * been queued for processing.</p> <p> <code>RUNNING</code> - The calculation is
     * running.</p> <p> <code>CANCELING</code> - A request to cancel the calculation
     * has been received and the system is working to stop it.</p> <p>
     * <code>CANCELED</code> - The calculation is no longer running as the result of a
     * cancel request.</p> <p> <code>COMPLETED</code> - The calculation has completed
     * without error.</p> <p> <code>FAILED</code> - The calculation failed and is no
     * longer running.</p>
     */
    inline ListCalculationExecutionsRequest& WithStateFilter(const CalculationExecutionState& value) { SetStateFilter(value); return *this;}

    /**
     * <p>A filter for a specific calculation execution state. A description of each
     * state follows.</p> <p> <code>CREATING</code> - The calculation is in the process
     * of being created.</p> <p> <code>CREATED</code> - The calculation has been
     * created and is ready to run.</p> <p> <code>QUEUED</code> - The calculation has
     * been queued for processing.</p> <p> <code>RUNNING</code> - The calculation is
     * running.</p> <p> <code>CANCELING</code> - A request to cancel the calculation
     * has been received and the system is working to stop it.</p> <p>
     * <code>CANCELED</code> - The calculation is no longer running as the result of a
     * cancel request.</p> <p> <code>COMPLETED</code> - The calculation has completed
     * without error.</p> <p> <code>FAILED</code> - The calculation failed and is no
     * longer running.</p>
     */
    inline ListCalculationExecutionsRequest& WithStateFilter(CalculationExecutionState&& value) { SetStateFilter(std::move(value)); return *this;}


    /**
     * <p>The maximum number of calculation executions to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of calculation executions to return.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of calculation executions to return.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of calculation executions to return.</p>
     */
    inline ListCalculationExecutionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline ListCalculationExecutionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token generated by the Athena service that specifies where to continue
     * pagination if a previous request was truncated. To obtain the next set of pages,
     * pass in the <code>NextToken</code> from the response object of the previous page
     * call.</p>
     */
    inline ListCalculationExecutionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token generated by the Athena service that specifies where to continue
     * pagination if a previous request was truncated. To obtain the next set of pages,
     * pass in the <code>NextToken</code> from the response object of the previous page
     * call.</p>
     */
    inline ListCalculationExecutionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    CalculationExecutionState m_stateFilter;
    bool m_stateFilterHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
