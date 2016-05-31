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
  class AWS_RDS_API DescribeReservedDBInstancesRequest : public RDSRequest
  {
  public:
    DescribeReservedDBInstancesRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The reserved DB instance identifier filter value. Specify this parameter to
     * show only the reservation that matches the specified reservation ID.</p>
     */
    inline const Aws::String& GetReservedDBInstanceId() const{ return m_reservedDBInstanceId; }

    /**
     * <p>The reserved DB instance identifier filter value. Specify this parameter to
     * show only the reservation that matches the specified reservation ID.</p>
     */
    inline void SetReservedDBInstanceId(const Aws::String& value) { m_reservedDBInstanceIdHasBeenSet = true; m_reservedDBInstanceId = value; }

    /**
     * <p>The reserved DB instance identifier filter value. Specify this parameter to
     * show only the reservation that matches the specified reservation ID.</p>
     */
    inline void SetReservedDBInstanceId(Aws::String&& value) { m_reservedDBInstanceIdHasBeenSet = true; m_reservedDBInstanceId = value; }

    /**
     * <p>The reserved DB instance identifier filter value. Specify this parameter to
     * show only the reservation that matches the specified reservation ID.</p>
     */
    inline void SetReservedDBInstanceId(const char* value) { m_reservedDBInstanceIdHasBeenSet = true; m_reservedDBInstanceId.assign(value); }

    /**
     * <p>The reserved DB instance identifier filter value. Specify this parameter to
     * show only the reservation that matches the specified reservation ID.</p>
     */
    inline DescribeReservedDBInstancesRequest& WithReservedDBInstanceId(const Aws::String& value) { SetReservedDBInstanceId(value); return *this;}

    /**
     * <p>The reserved DB instance identifier filter value. Specify this parameter to
     * show only the reservation that matches the specified reservation ID.</p>
     */
    inline DescribeReservedDBInstancesRequest& WithReservedDBInstanceId(Aws::String&& value) { SetReservedDBInstanceId(value); return *this;}

    /**
     * <p>The reserved DB instance identifier filter value. Specify this parameter to
     * show only the reservation that matches the specified reservation ID.</p>
     */
    inline DescribeReservedDBInstancesRequest& WithReservedDBInstanceId(const char* value) { SetReservedDBInstanceId(value); return *this;}

    /**
     * <p>The offering identifier filter value. Specify this parameter to show only
     * purchased reservations matching the specified offering identifier.</p>
     */
    inline const Aws::String& GetReservedDBInstancesOfferingId() const{ return m_reservedDBInstancesOfferingId; }

    /**
     * <p>The offering identifier filter value. Specify this parameter to show only
     * purchased reservations matching the specified offering identifier.</p>
     */
    inline void SetReservedDBInstancesOfferingId(const Aws::String& value) { m_reservedDBInstancesOfferingIdHasBeenSet = true; m_reservedDBInstancesOfferingId = value; }

    /**
     * <p>The offering identifier filter value. Specify this parameter to show only
     * purchased reservations matching the specified offering identifier.</p>
     */
    inline void SetReservedDBInstancesOfferingId(Aws::String&& value) { m_reservedDBInstancesOfferingIdHasBeenSet = true; m_reservedDBInstancesOfferingId = value; }

    /**
     * <p>The offering identifier filter value. Specify this parameter to show only
     * purchased reservations matching the specified offering identifier.</p>
     */
    inline void SetReservedDBInstancesOfferingId(const char* value) { m_reservedDBInstancesOfferingIdHasBeenSet = true; m_reservedDBInstancesOfferingId.assign(value); }

    /**
     * <p>The offering identifier filter value. Specify this parameter to show only
     * purchased reservations matching the specified offering identifier.</p>
     */
    inline DescribeReservedDBInstancesRequest& WithReservedDBInstancesOfferingId(const Aws::String& value) { SetReservedDBInstancesOfferingId(value); return *this;}

    /**
     * <p>The offering identifier filter value. Specify this parameter to show only
     * purchased reservations matching the specified offering identifier.</p>
     */
    inline DescribeReservedDBInstancesRequest& WithReservedDBInstancesOfferingId(Aws::String&& value) { SetReservedDBInstancesOfferingId(value); return *this;}

    /**
     * <p>The offering identifier filter value. Specify this parameter to show only
     * purchased reservations matching the specified offering identifier.</p>
     */
    inline DescribeReservedDBInstancesRequest& WithReservedDBInstancesOfferingId(const char* value) { SetReservedDBInstancesOfferingId(value); return *this;}

    /**
     * <p>The DB instance class filter value. Specify this parameter to show only those
     * reservations matching the specified DB instances class.</p>
     */
    inline const Aws::String& GetDBInstanceClass() const{ return m_dBInstanceClass; }

    /**
     * <p>The DB instance class filter value. Specify this parameter to show only those
     * reservations matching the specified DB instances class.</p>
     */
    inline void SetDBInstanceClass(const Aws::String& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = value; }

    /**
     * <p>The DB instance class filter value. Specify this parameter to show only those
     * reservations matching the specified DB instances class.</p>
     */
    inline void SetDBInstanceClass(Aws::String&& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = value; }

    /**
     * <p>The DB instance class filter value. Specify this parameter to show only those
     * reservations matching the specified DB instances class.</p>
     */
    inline void SetDBInstanceClass(const char* value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass.assign(value); }

    /**
     * <p>The DB instance class filter value. Specify this parameter to show only those
     * reservations matching the specified DB instances class.</p>
     */
    inline DescribeReservedDBInstancesRequest& WithDBInstanceClass(const Aws::String& value) { SetDBInstanceClass(value); return *this;}

    /**
     * <p>The DB instance class filter value. Specify this parameter to show only those
     * reservations matching the specified DB instances class.</p>
     */
    inline DescribeReservedDBInstancesRequest& WithDBInstanceClass(Aws::String&& value) { SetDBInstanceClass(value); return *this;}

    /**
     * <p>The DB instance class filter value. Specify this parameter to show only those
     * reservations matching the specified DB instances class.</p>
     */
    inline DescribeReservedDBInstancesRequest& WithDBInstanceClass(const char* value) { SetDBInstanceClass(value); return *this;}

    /**
     * <p>The duration filter value, specified in years or seconds. Specify this
     * parameter to show only reservations for this duration.</p> <p>Valid Values:
     * <code>1 | 3 | 31536000 | 94608000</code> </p>
     */
    inline const Aws::String& GetDuration() const{ return m_duration; }

    /**
     * <p>The duration filter value, specified in years or seconds. Specify this
     * parameter to show only reservations for this duration.</p> <p>Valid Values:
     * <code>1 | 3 | 31536000 | 94608000</code> </p>
     */
    inline void SetDuration(const Aws::String& value) { m_durationHasBeenSet = true; m_duration = value; }

    /**
     * <p>The duration filter value, specified in years or seconds. Specify this
     * parameter to show only reservations for this duration.</p> <p>Valid Values:
     * <code>1 | 3 | 31536000 | 94608000</code> </p>
     */
    inline void SetDuration(Aws::String&& value) { m_durationHasBeenSet = true; m_duration = value; }

    /**
     * <p>The duration filter value, specified in years or seconds. Specify this
     * parameter to show only reservations for this duration.</p> <p>Valid Values:
     * <code>1 | 3 | 31536000 | 94608000</code> </p>
     */
    inline void SetDuration(const char* value) { m_durationHasBeenSet = true; m_duration.assign(value); }

    /**
     * <p>The duration filter value, specified in years or seconds. Specify this
     * parameter to show only reservations for this duration.</p> <p>Valid Values:
     * <code>1 | 3 | 31536000 | 94608000</code> </p>
     */
    inline DescribeReservedDBInstancesRequest& WithDuration(const Aws::String& value) { SetDuration(value); return *this;}

    /**
     * <p>The duration filter value, specified in years or seconds. Specify this
     * parameter to show only reservations for this duration.</p> <p>Valid Values:
     * <code>1 | 3 | 31536000 | 94608000</code> </p>
     */
    inline DescribeReservedDBInstancesRequest& WithDuration(Aws::String&& value) { SetDuration(value); return *this;}

    /**
     * <p>The duration filter value, specified in years or seconds. Specify this
     * parameter to show only reservations for this duration.</p> <p>Valid Values:
     * <code>1 | 3 | 31536000 | 94608000</code> </p>
     */
    inline DescribeReservedDBInstancesRequest& WithDuration(const char* value) { SetDuration(value); return *this;}

    /**
     * <p>The product description filter value. Specify this parameter to show only
     * those reservations matching the specified product description.</p>
     */
    inline const Aws::String& GetProductDescription() const{ return m_productDescription; }

    /**
     * <p>The product description filter value. Specify this parameter to show only
     * those reservations matching the specified product description.</p>
     */
    inline void SetProductDescription(const Aws::String& value) { m_productDescriptionHasBeenSet = true; m_productDescription = value; }

    /**
     * <p>The product description filter value. Specify this parameter to show only
     * those reservations matching the specified product description.</p>
     */
    inline void SetProductDescription(Aws::String&& value) { m_productDescriptionHasBeenSet = true; m_productDescription = value; }

    /**
     * <p>The product description filter value. Specify this parameter to show only
     * those reservations matching the specified product description.</p>
     */
    inline void SetProductDescription(const char* value) { m_productDescriptionHasBeenSet = true; m_productDescription.assign(value); }

    /**
     * <p>The product description filter value. Specify this parameter to show only
     * those reservations matching the specified product description.</p>
     */
    inline DescribeReservedDBInstancesRequest& WithProductDescription(const Aws::String& value) { SetProductDescription(value); return *this;}

    /**
     * <p>The product description filter value. Specify this parameter to show only
     * those reservations matching the specified product description.</p>
     */
    inline DescribeReservedDBInstancesRequest& WithProductDescription(Aws::String&& value) { SetProductDescription(value); return *this;}

    /**
     * <p>The product description filter value. Specify this parameter to show only
     * those reservations matching the specified product description.</p>
     */
    inline DescribeReservedDBInstancesRequest& WithProductDescription(const char* value) { SetProductDescription(value); return *this;}

    /**
     * <p>The offering type filter value. Specify this parameter to show only the
     * available offerings matching the specified offering type.</p> <p>Valid Values:
     * <code>"Partial Upfront" | "All Upfront" | "No Upfront" </code> </p>
     */
    inline const Aws::String& GetOfferingType() const{ return m_offeringType; }

    /**
     * <p>The offering type filter value. Specify this parameter to show only the
     * available offerings matching the specified offering type.</p> <p>Valid Values:
     * <code>"Partial Upfront" | "All Upfront" | "No Upfront" </code> </p>
     */
    inline void SetOfferingType(const Aws::String& value) { m_offeringTypeHasBeenSet = true; m_offeringType = value; }

    /**
     * <p>The offering type filter value. Specify this parameter to show only the
     * available offerings matching the specified offering type.</p> <p>Valid Values:
     * <code>"Partial Upfront" | "All Upfront" | "No Upfront" </code> </p>
     */
    inline void SetOfferingType(Aws::String&& value) { m_offeringTypeHasBeenSet = true; m_offeringType = value; }

    /**
     * <p>The offering type filter value. Specify this parameter to show only the
     * available offerings matching the specified offering type.</p> <p>Valid Values:
     * <code>"Partial Upfront" | "All Upfront" | "No Upfront" </code> </p>
     */
    inline void SetOfferingType(const char* value) { m_offeringTypeHasBeenSet = true; m_offeringType.assign(value); }

    /**
     * <p>The offering type filter value. Specify this parameter to show only the
     * available offerings matching the specified offering type.</p> <p>Valid Values:
     * <code>"Partial Upfront" | "All Upfront" | "No Upfront" </code> </p>
     */
    inline DescribeReservedDBInstancesRequest& WithOfferingType(const Aws::String& value) { SetOfferingType(value); return *this;}

    /**
     * <p>The offering type filter value. Specify this parameter to show only the
     * available offerings matching the specified offering type.</p> <p>Valid Values:
     * <code>"Partial Upfront" | "All Upfront" | "No Upfront" </code> </p>
     */
    inline DescribeReservedDBInstancesRequest& WithOfferingType(Aws::String&& value) { SetOfferingType(value); return *this;}

    /**
     * <p>The offering type filter value. Specify this parameter to show only the
     * available offerings matching the specified offering type.</p> <p>Valid Values:
     * <code>"Partial Upfront" | "All Upfront" | "No Upfront" </code> </p>
     */
    inline DescribeReservedDBInstancesRequest& WithOfferingType(const char* value) { SetOfferingType(value); return *this;}

    /**
     * <p>The Multi-AZ filter value. Specify this parameter to show only those
     * reservations matching the specified Multi-AZ parameter.</p>
     */
    inline bool GetMultiAZ() const{ return m_multiAZ; }

    /**
     * <p>The Multi-AZ filter value. Specify this parameter to show only those
     * reservations matching the specified Multi-AZ parameter.</p>
     */
    inline void SetMultiAZ(bool value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }

    /**
     * <p>The Multi-AZ filter value. Specify this parameter to show only those
     * reservations matching the specified Multi-AZ parameter.</p>
     */
    inline DescribeReservedDBInstancesRequest& WithMultiAZ(bool value) { SetMultiAZ(value); return *this;}

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline DescribeReservedDBInstancesRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline DescribeReservedDBInstancesRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(value); return *this;}

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline DescribeReservedDBInstancesRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline DescribeReservedDBInstancesRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p> The maximum number of records to include in the response. If more than the
     * <code>MaxRecords</code> value is available, a pagination token called a marker
     * is included in the response so that the following results can be retrieved. </p>
     * <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline long GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p> The maximum number of records to include in the response. If more than the
     * <code>MaxRecords</code> value is available, a pagination token called a marker
     * is included in the response so that the following results can be retrieved. </p>
     * <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline void SetMaxRecords(long value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p> The maximum number of records to include in the response. If more than the
     * <code>MaxRecords</code> value is available, a pagination token called a marker
     * is included in the response so that the following results can be retrieved. </p>
     * <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline DescribeReservedDBInstancesRequest& WithMaxRecords(long value) { SetMaxRecords(value); return *this;}

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline DescribeReservedDBInstancesRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline DescribeReservedDBInstancesRequest& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline DescribeReservedDBInstancesRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:
    Aws::String m_reservedDBInstanceId;
    bool m_reservedDBInstanceIdHasBeenSet;
    Aws::String m_reservedDBInstancesOfferingId;
    bool m_reservedDBInstancesOfferingIdHasBeenSet;
    Aws::String m_dBInstanceClass;
    bool m_dBInstanceClassHasBeenSet;
    Aws::String m_duration;
    bool m_durationHasBeenSet;
    Aws::String m_productDescription;
    bool m_productDescriptionHasBeenSet;
    Aws::String m_offeringType;
    bool m_offeringTypeHasBeenSet;
    bool m_multiAZ;
    bool m_multiAZHasBeenSet;
    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;
    long m_maxRecords;
    bool m_maxRecordsHasBeenSet;
    Aws::String m_marker;
    bool m_markerHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
