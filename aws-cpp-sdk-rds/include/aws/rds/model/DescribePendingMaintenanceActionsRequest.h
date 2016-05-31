/*
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
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/Filter.h>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/>
   */
  class AWS_RDS_API DescribePendingMaintenanceActionsRequest : public RDSRequest
  {
  public:
    DescribePendingMaintenanceActionsRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The ARN of a resource to return pending maintenance actions for.</p>
     */
    inline const Aws::String& GetResourceIdentifier() const{ return m_resourceIdentifier; }

    /**
     * <p>The ARN of a resource to return pending maintenance actions for.</p>
     */
    inline void SetResourceIdentifier(const Aws::String& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = value; }

    /**
     * <p>The ARN of a resource to return pending maintenance actions for.</p>
     */
    inline void SetResourceIdentifier(Aws::String&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = value; }

    /**
     * <p>The ARN of a resource to return pending maintenance actions for.</p>
     */
    inline void SetResourceIdentifier(const char* value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier.assign(value); }

    /**
     * <p>The ARN of a resource to return pending maintenance actions for.</p>
     */
    inline DescribePendingMaintenanceActionsRequest& WithResourceIdentifier(const Aws::String& value) { SetResourceIdentifier(value); return *this;}

    /**
     * <p>The ARN of a resource to return pending maintenance actions for.</p>
     */
    inline DescribePendingMaintenanceActionsRequest& WithResourceIdentifier(Aws::String&& value) { SetResourceIdentifier(value); return *this;}

    /**
     * <p>The ARN of a resource to return pending maintenance actions for.</p>
     */
    inline DescribePendingMaintenanceActionsRequest& WithResourceIdentifier(const char* value) { SetResourceIdentifier(value); return *this;}

    /**
     * <p>A filter that specifies one or more resources to return pending maintenance
     * actions for.</p> <p>Supported filters:</p> <ul> <li> <p>
     * <code>db-instance-id</code> - Accepts DB instance identifiers and DB instance
     * Amazon Resource Names (ARNs). The results list will only include pending
     * maintenance actions for the DB instances identified by these ARNs.</p> </li>
     * </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>A filter that specifies one or more resources to return pending maintenance
     * actions for.</p> <p>Supported filters:</p> <ul> <li> <p>
     * <code>db-instance-id</code> - Accepts DB instance identifiers and DB instance
     * Amazon Resource Names (ARNs). The results list will only include pending
     * maintenance actions for the DB instances identified by these ARNs.</p> </li>
     * </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>A filter that specifies one or more resources to return pending maintenance
     * actions for.</p> <p>Supported filters:</p> <ul> <li> <p>
     * <code>db-instance-id</code> - Accepts DB instance identifiers and DB instance
     * Amazon Resource Names (ARNs). The results list will only include pending
     * maintenance actions for the DB instances identified by these ARNs.</p> </li>
     * </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>A filter that specifies one or more resources to return pending maintenance
     * actions for.</p> <p>Supported filters:</p> <ul> <li> <p>
     * <code>db-instance-id</code> - Accepts DB instance identifiers and DB instance
     * Amazon Resource Names (ARNs). The results list will only include pending
     * maintenance actions for the DB instances identified by these ARNs.</p> </li>
     * </ul>
     */
    inline DescribePendingMaintenanceActionsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>A filter that specifies one or more resources to return pending maintenance
     * actions for.</p> <p>Supported filters:</p> <ul> <li> <p>
     * <code>db-instance-id</code> - Accepts DB instance identifiers and DB instance
     * Amazon Resource Names (ARNs). The results list will only include pending
     * maintenance actions for the DB instances identified by these ARNs.</p> </li>
     * </ul>
     */
    inline DescribePendingMaintenanceActionsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(value); return *this;}

    /**
     * <p>A filter that specifies one or more resources to return pending maintenance
     * actions for.</p> <p>Supported filters:</p> <ul> <li> <p>
     * <code>db-instance-id</code> - Accepts DB instance identifiers and DB instance
     * Amazon Resource Names (ARNs). The results list will only include pending
     * maintenance actions for the DB instances identified by these ARNs.</p> </li>
     * </ul>
     */
    inline DescribePendingMaintenanceActionsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>A filter that specifies one or more resources to return pending maintenance
     * actions for.</p> <p>Supported filters:</p> <ul> <li> <p>
     * <code>db-instance-id</code> - Accepts DB instance identifiers and DB instance
     * Amazon Resource Names (ARNs). The results list will only include pending
     * maintenance actions for the DB instances identified by these ARNs.</p> </li>
     * </ul>
     */
    inline DescribePendingMaintenanceActionsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribePendingMaintenanceActions</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to a number
     * of records specified by <code>MaxRecords</code>. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribePendingMaintenanceActions</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to a number
     * of records specified by <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribePendingMaintenanceActions</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to a number
     * of records specified by <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribePendingMaintenanceActions</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to a number
     * of records specified by <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribePendingMaintenanceActions</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to a number
     * of records specified by <code>MaxRecords</code>. </p>
     */
    inline DescribePendingMaintenanceActionsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribePendingMaintenanceActions</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to a number
     * of records specified by <code>MaxRecords</code>. </p>
     */
    inline DescribePendingMaintenanceActionsRequest& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribePendingMaintenanceActions</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to a number
     * of records specified by <code>MaxRecords</code>. </p>
     */
    inline DescribePendingMaintenanceActionsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

    /**
     * <p> The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that the remaining results can be
     * retrieved. </p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline long GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p> The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that the remaining results can be
     * retrieved. </p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline void SetMaxRecords(long value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p> The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that the remaining results can be
     * retrieved. </p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline DescribePendingMaintenanceActionsRequest& WithMaxRecords(long value) { SetMaxRecords(value); return *this;}

  private:
    Aws::String m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet;
    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;
    Aws::String m_marker;
    bool m_markerHasBeenSet;
    long m_maxRecords;
    bool m_maxRecordsHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
