﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-zonal-shift/ARCZonalShift_EXPORTS.h>
#include <aws/arc-zonal-shift/ARCZonalShiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/arc-zonal-shift/model/AutoshiftExecutionStatus.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace ARCZonalShift
{
namespace Model
{

  /**
   */
  class ListAutoshiftsRequest : public ARCZonalShiftRequest
  {
  public:
    AWS_ARCZONALSHIFT_API ListAutoshiftsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAutoshifts"; }

    AWS_ARCZONALSHIFT_API Aws::String SerializePayload() const override;

    AWS_ARCZONALSHIFT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The number of objects that you want to return with this call.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The number of objects that you want to return with this call.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The number of objects that you want to return with this call.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The number of objects that you want to return with this call.</p>
     */
    inline ListAutoshiftsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline ListAutoshiftsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline ListAutoshiftsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline ListAutoshiftsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The status of the autoshift.</p>
     */
    inline const AutoshiftExecutionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the autoshift.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the autoshift.</p>
     */
    inline void SetStatus(const AutoshiftExecutionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the autoshift.</p>
     */
    inline void SetStatus(AutoshiftExecutionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the autoshift.</p>
     */
    inline ListAutoshiftsRequest& WithStatus(const AutoshiftExecutionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the autoshift.</p>
     */
    inline ListAutoshiftsRequest& WithStatus(AutoshiftExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    AutoshiftExecutionStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCZonalShift
} // namespace Aws
