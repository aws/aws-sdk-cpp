﻿/*
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
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   * <p/>
   */
  class AWS_REDSHIFT_API DescribeTableRestoreStatusRequest : public RedshiftRequest
  {
  public:
    DescribeTableRestoreStatusRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The Amazon Redshift cluster that the table is being restored to.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }

    /**
     * <p>The Amazon Redshift cluster that the table is being restored to.</p>
     */
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }

    /**
     * <p>The Amazon Redshift cluster that the table is being restored to.</p>
     */
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }

    /**
     * <p>The Amazon Redshift cluster that the table is being restored to.</p>
     */
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }

    /**
     * <p>The Amazon Redshift cluster that the table is being restored to.</p>
     */
    inline DescribeTableRestoreStatusRequest& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p>The Amazon Redshift cluster that the table is being restored to.</p>
     */
    inline DescribeTableRestoreStatusRequest& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p>The Amazon Redshift cluster that the table is being restored to.</p>
     */
    inline DescribeTableRestoreStatusRequest& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p>The identifier of the table restore request to return status for. If you
     * don't specify a <code>TableRestoreRequestId</code> value, then
     * <code>DescribeTableRestoreStatus</code> returns the status of all in-progress
     * table restore requests.</p>
     */
    inline const Aws::String& GetTableRestoreRequestId() const{ return m_tableRestoreRequestId; }

    /**
     * <p>The identifier of the table restore request to return status for. If you
     * don't specify a <code>TableRestoreRequestId</code> value, then
     * <code>DescribeTableRestoreStatus</code> returns the status of all in-progress
     * table restore requests.</p>
     */
    inline void SetTableRestoreRequestId(const Aws::String& value) { m_tableRestoreRequestIdHasBeenSet = true; m_tableRestoreRequestId = value; }

    /**
     * <p>The identifier of the table restore request to return status for. If you
     * don't specify a <code>TableRestoreRequestId</code> value, then
     * <code>DescribeTableRestoreStatus</code> returns the status of all in-progress
     * table restore requests.</p>
     */
    inline void SetTableRestoreRequestId(Aws::String&& value) { m_tableRestoreRequestIdHasBeenSet = true; m_tableRestoreRequestId = value; }

    /**
     * <p>The identifier of the table restore request to return status for. If you
     * don't specify a <code>TableRestoreRequestId</code> value, then
     * <code>DescribeTableRestoreStatus</code> returns the status of all in-progress
     * table restore requests.</p>
     */
    inline void SetTableRestoreRequestId(const char* value) { m_tableRestoreRequestIdHasBeenSet = true; m_tableRestoreRequestId.assign(value); }

    /**
     * <p>The identifier of the table restore request to return status for. If you
     * don't specify a <code>TableRestoreRequestId</code> value, then
     * <code>DescribeTableRestoreStatus</code> returns the status of all in-progress
     * table restore requests.</p>
     */
    inline DescribeTableRestoreStatusRequest& WithTableRestoreRequestId(const Aws::String& value) { SetTableRestoreRequestId(value); return *this;}

    /**
     * <p>The identifier of the table restore request to return status for. If you
     * don't specify a <code>TableRestoreRequestId</code> value, then
     * <code>DescribeTableRestoreStatus</code> returns the status of all in-progress
     * table restore requests.</p>
     */
    inline DescribeTableRestoreStatusRequest& WithTableRestoreRequestId(Aws::String&& value) { SetTableRestoreRequestId(value); return *this;}

    /**
     * <p>The identifier of the table restore request to return status for. If you
     * don't specify a <code>TableRestoreRequestId</code> value, then
     * <code>DescribeTableRestoreStatus</code> returns the status of all in-progress
     * table restore requests.</p>
     */
    inline DescribeTableRestoreStatusRequest& WithTableRestoreRequestId(const char* value) { SetTableRestoreRequestId(value); return *this;}

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that the remaining results can be
     * retrieved.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that the remaining results can be
     * retrieved.</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that the remaining results can be
     * retrieved.</p>
     */
    inline DescribeTableRestoreStatusRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeTableRestoreStatus</code> request. If this parameter is specified,
     * the response includes only records beyond the marker, up to the value specified
     * by the <code>MaxRecords</code> parameter.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeTableRestoreStatus</code> request. If this parameter is specified,
     * the response includes only records beyond the marker, up to the value specified
     * by the <code>MaxRecords</code> parameter.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeTableRestoreStatus</code> request. If this parameter is specified,
     * the response includes only records beyond the marker, up to the value specified
     * by the <code>MaxRecords</code> parameter.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeTableRestoreStatus</code> request. If this parameter is specified,
     * the response includes only records beyond the marker, up to the value specified
     * by the <code>MaxRecords</code> parameter.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeTableRestoreStatus</code> request. If this parameter is specified,
     * the response includes only records beyond the marker, up to the value specified
     * by the <code>MaxRecords</code> parameter.</p>
     */
    inline DescribeTableRestoreStatusRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeTableRestoreStatus</code> request. If this parameter is specified,
     * the response includes only records beyond the marker, up to the value specified
     * by the <code>MaxRecords</code> parameter.</p>
     */
    inline DescribeTableRestoreStatusRequest& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeTableRestoreStatus</code> request. If this parameter is specified,
     * the response includes only records beyond the marker, up to the value specified
     * by the <code>MaxRecords</code> parameter.</p>
     */
    inline DescribeTableRestoreStatusRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:
    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet;
    Aws::String m_tableRestoreRequestId;
    bool m_tableRestoreRequestIdHasBeenSet;
    int m_maxRecords;
    bool m_maxRecordsHasBeenSet;
    Aws::String m_marker;
    bool m_markerHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
