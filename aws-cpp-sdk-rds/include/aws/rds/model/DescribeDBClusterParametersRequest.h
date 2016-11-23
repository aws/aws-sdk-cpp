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
  class AWS_RDS_API DescribeDBClusterParametersRequest : public RDSRequest
  {
  public:
    DescribeDBClusterParametersRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of a specific DB cluster parameter group to return parameter details
     * for.</p> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 alphanumeric
     * characters</p> </li> <li> <p>First character must be a letter</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens</p> </li> </ul>
     */
    inline const Aws::String& GetDBClusterParameterGroupName() const{ return m_dBClusterParameterGroupName; }

    /**
     * <p>The name of a specific DB cluster parameter group to return parameter details
     * for.</p> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 alphanumeric
     * characters</p> </li> <li> <p>First character must be a letter</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens</p> </li> </ul>
     */
    inline void SetDBClusterParameterGroupName(const Aws::String& value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName = value; }

    /**
     * <p>The name of a specific DB cluster parameter group to return parameter details
     * for.</p> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 alphanumeric
     * characters</p> </li> <li> <p>First character must be a letter</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens</p> </li> </ul>
     */
    inline void SetDBClusterParameterGroupName(Aws::String&& value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName = value; }

    /**
     * <p>The name of a specific DB cluster parameter group to return parameter details
     * for.</p> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 alphanumeric
     * characters</p> </li> <li> <p>First character must be a letter</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens</p> </li> </ul>
     */
    inline void SetDBClusterParameterGroupName(const char* value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName.assign(value); }

    /**
     * <p>The name of a specific DB cluster parameter group to return parameter details
     * for.</p> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 alphanumeric
     * characters</p> </li> <li> <p>First character must be a letter</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens</p> </li> </ul>
     */
    inline DescribeDBClusterParametersRequest& WithDBClusterParameterGroupName(const Aws::String& value) { SetDBClusterParameterGroupName(value); return *this;}

    /**
     * <p>The name of a specific DB cluster parameter group to return parameter details
     * for.</p> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 alphanumeric
     * characters</p> </li> <li> <p>First character must be a letter</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens</p> </li> </ul>
     */
    inline DescribeDBClusterParametersRequest& WithDBClusterParameterGroupName(Aws::String&& value) { SetDBClusterParameterGroupName(value); return *this;}

    /**
     * <p>The name of a specific DB cluster parameter group to return parameter details
     * for.</p> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 alphanumeric
     * characters</p> </li> <li> <p>First character must be a letter</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens</p> </li> </ul>
     */
    inline DescribeDBClusterParametersRequest& WithDBClusterParameterGroupName(const char* value) { SetDBClusterParameterGroupName(value); return *this;}

    /**
     * <p> A value that indicates to return only parameters for a specific source.
     * Parameter sources can be <code>engine</code>, <code>service</code>, or
     * <code>customer</code>. </p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }

    /**
     * <p> A value that indicates to return only parameters for a specific source.
     * Parameter sources can be <code>engine</code>, <code>service</code>, or
     * <code>customer</code>. </p>
     */
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p> A value that indicates to return only parameters for a specific source.
     * Parameter sources can be <code>engine</code>, <code>service</code>, or
     * <code>customer</code>. </p>
     */
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p> A value that indicates to return only parameters for a specific source.
     * Parameter sources can be <code>engine</code>, <code>service</code>, or
     * <code>customer</code>. </p>
     */
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }

    /**
     * <p> A value that indicates to return only parameters for a specific source.
     * Parameter sources can be <code>engine</code>, <code>service</code>, or
     * <code>customer</code>. </p>
     */
    inline DescribeDBClusterParametersRequest& WithSource(const Aws::String& value) { SetSource(value); return *this;}

    /**
     * <p> A value that indicates to return only parameters for a specific source.
     * Parameter sources can be <code>engine</code>, <code>service</code>, or
     * <code>customer</code>. </p>
     */
    inline DescribeDBClusterParametersRequest& WithSource(Aws::String&& value) { SetSource(value); return *this;}

    /**
     * <p> A value that indicates to return only parameters for a specific source.
     * Parameter sources can be <code>engine</code>, <code>service</code>, or
     * <code>customer</code>. </p>
     */
    inline DescribeDBClusterParametersRequest& WithSource(const char* value) { SetSource(value); return *this;}

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
    inline DescribeDBClusterParametersRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline DescribeDBClusterParametersRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(value); return *this;}

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline DescribeDBClusterParametersRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline DescribeDBClusterParametersRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p> The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that the remaining results can be
     * retrieved. </p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p> The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that the remaining results can be
     * retrieved. </p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p> The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that the remaining results can be
     * retrieved. </p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline DescribeDBClusterParametersRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribeDBClusterParameters</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by <code>MaxRecords</code>. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribeDBClusterParameters</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribeDBClusterParameters</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribeDBClusterParameters</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribeDBClusterParameters</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by <code>MaxRecords</code>. </p>
     */
    inline DescribeDBClusterParametersRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribeDBClusterParameters</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by <code>MaxRecords</code>. </p>
     */
    inline DescribeDBClusterParametersRequest& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribeDBClusterParameters</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by <code>MaxRecords</code>. </p>
     */
    inline DescribeDBClusterParametersRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:
    Aws::String m_dBClusterParameterGroupName;
    bool m_dBClusterParameterGroupNameHasBeenSet;
    Aws::String m_source;
    bool m_sourceHasBeenSet;
    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;
    int m_maxRecords;
    bool m_maxRecordsHasBeenSet;
    Aws::String m_marker;
    bool m_markerHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
