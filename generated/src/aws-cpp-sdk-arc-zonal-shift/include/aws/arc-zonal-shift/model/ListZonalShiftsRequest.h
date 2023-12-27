﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-zonal-shift/ARCZonalShift_EXPORTS.h>
#include <aws/arc-zonal-shift/ARCZonalShiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/arc-zonal-shift/model/ZonalShiftStatus.h>
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
  class ListZonalShiftsRequest : public ARCZonalShiftRequest
  {
  public:
    AWS_ARCZONALSHIFT_API ListZonalShiftsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListZonalShifts"; }

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
    inline ListZonalShiftsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline ListZonalShiftsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline ListZonalShiftsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline ListZonalShiftsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The identifier for the resource that you want to list zonal shifts for. The
     * identifier is the Amazon Resource Name (ARN) for the resource.</p>
     */
    inline const Aws::String& GetResourceIdentifier() const{ return m_resourceIdentifier; }

    /**
     * <p>The identifier for the resource that you want to list zonal shifts for. The
     * identifier is the Amazon Resource Name (ARN) for the resource.</p>
     */
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }

    /**
     * <p>The identifier for the resource that you want to list zonal shifts for. The
     * identifier is the Amazon Resource Name (ARN) for the resource.</p>
     */
    inline void SetResourceIdentifier(const Aws::String& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = value; }

    /**
     * <p>The identifier for the resource that you want to list zonal shifts for. The
     * identifier is the Amazon Resource Name (ARN) for the resource.</p>
     */
    inline void SetResourceIdentifier(Aws::String&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::move(value); }

    /**
     * <p>The identifier for the resource that you want to list zonal shifts for. The
     * identifier is the Amazon Resource Name (ARN) for the resource.</p>
     */
    inline void SetResourceIdentifier(const char* value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier.assign(value); }

    /**
     * <p>The identifier for the resource that you want to list zonal shifts for. The
     * identifier is the Amazon Resource Name (ARN) for the resource.</p>
     */
    inline ListZonalShiftsRequest& WithResourceIdentifier(const Aws::String& value) { SetResourceIdentifier(value); return *this;}

    /**
     * <p>The identifier for the resource that you want to list zonal shifts for. The
     * identifier is the Amazon Resource Name (ARN) for the resource.</p>
     */
    inline ListZonalShiftsRequest& WithResourceIdentifier(Aws::String&& value) { SetResourceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier for the resource that you want to list zonal shifts for. The
     * identifier is the Amazon Resource Name (ARN) for the resource.</p>
     */
    inline ListZonalShiftsRequest& WithResourceIdentifier(const char* value) { SetResourceIdentifier(value); return *this;}


    /**
     * <p>A status for a zonal shift.</p> <p>The <code>Status</code> for a zonal shift
     * can have one of the following values:</p> <ul> <li> <p> <b>ACTIVE</b>: The zonal
     * shift has been started and active.</p> </li> <li> <p> <b>EXPIRED</b>: The zonal
     * shift has expired (the expiry time was exceeded).</p> </li> <li> <p>
     * <b>CANCELED</b>: The zonal shift was canceled.</p> </li> </ul>
     */
    inline const ZonalShiftStatus& GetStatus() const{ return m_status; }

    /**
     * <p>A status for a zonal shift.</p> <p>The <code>Status</code> for a zonal shift
     * can have one of the following values:</p> <ul> <li> <p> <b>ACTIVE</b>: The zonal
     * shift has been started and active.</p> </li> <li> <p> <b>EXPIRED</b>: The zonal
     * shift has expired (the expiry time was exceeded).</p> </li> <li> <p>
     * <b>CANCELED</b>: The zonal shift was canceled.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>A status for a zonal shift.</p> <p>The <code>Status</code> for a zonal shift
     * can have one of the following values:</p> <ul> <li> <p> <b>ACTIVE</b>: The zonal
     * shift has been started and active.</p> </li> <li> <p> <b>EXPIRED</b>: The zonal
     * shift has expired (the expiry time was exceeded).</p> </li> <li> <p>
     * <b>CANCELED</b>: The zonal shift was canceled.</p> </li> </ul>
     */
    inline void SetStatus(const ZonalShiftStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>A status for a zonal shift.</p> <p>The <code>Status</code> for a zonal shift
     * can have one of the following values:</p> <ul> <li> <p> <b>ACTIVE</b>: The zonal
     * shift has been started and active.</p> </li> <li> <p> <b>EXPIRED</b>: The zonal
     * shift has expired (the expiry time was exceeded).</p> </li> <li> <p>
     * <b>CANCELED</b>: The zonal shift was canceled.</p> </li> </ul>
     */
    inline void SetStatus(ZonalShiftStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>A status for a zonal shift.</p> <p>The <code>Status</code> for a zonal shift
     * can have one of the following values:</p> <ul> <li> <p> <b>ACTIVE</b>: The zonal
     * shift has been started and active.</p> </li> <li> <p> <b>EXPIRED</b>: The zonal
     * shift has expired (the expiry time was exceeded).</p> </li> <li> <p>
     * <b>CANCELED</b>: The zonal shift was canceled.</p> </li> </ul>
     */
    inline ListZonalShiftsRequest& WithStatus(const ZonalShiftStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>A status for a zonal shift.</p> <p>The <code>Status</code> for a zonal shift
     * can have one of the following values:</p> <ul> <li> <p> <b>ACTIVE</b>: The zonal
     * shift has been started and active.</p> </li> <li> <p> <b>EXPIRED</b>: The zonal
     * shift has expired (the expiry time was exceeded).</p> </li> <li> <p>
     * <b>CANCELED</b>: The zonal shift was canceled.</p> </li> </ul>
     */
    inline ListZonalShiftsRequest& WithStatus(ZonalShiftStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;

    ZonalShiftStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCZonalShift
} // namespace Aws
