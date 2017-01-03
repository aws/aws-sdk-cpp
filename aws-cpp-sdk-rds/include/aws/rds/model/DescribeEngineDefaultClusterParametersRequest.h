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
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeEngineDefaultClusterParametersMessage">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API DescribeEngineDefaultClusterParametersRequest : public RDSRequest
  {
  public:
    DescribeEngineDefaultClusterParametersRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the DB cluster parameter group family to return engine parameter
     * information for.</p>
     */
    inline const Aws::String& GetDBParameterGroupFamily() const{ return m_dBParameterGroupFamily; }

    /**
     * <p>The name of the DB cluster parameter group family to return engine parameter
     * information for.</p>
     */
    inline void SetDBParameterGroupFamily(const Aws::String& value) { m_dBParameterGroupFamilyHasBeenSet = true; m_dBParameterGroupFamily = value; }

    /**
     * <p>The name of the DB cluster parameter group family to return engine parameter
     * information for.</p>
     */
    inline void SetDBParameterGroupFamily(Aws::String&& value) { m_dBParameterGroupFamilyHasBeenSet = true; m_dBParameterGroupFamily = value; }

    /**
     * <p>The name of the DB cluster parameter group family to return engine parameter
     * information for.</p>
     */
    inline void SetDBParameterGroupFamily(const char* value) { m_dBParameterGroupFamilyHasBeenSet = true; m_dBParameterGroupFamily.assign(value); }

    /**
     * <p>The name of the DB cluster parameter group family to return engine parameter
     * information for.</p>
     */
    inline DescribeEngineDefaultClusterParametersRequest& WithDBParameterGroupFamily(const Aws::String& value) { SetDBParameterGroupFamily(value); return *this;}

    /**
     * <p>The name of the DB cluster parameter group family to return engine parameter
     * information for.</p>
     */
    inline DescribeEngineDefaultClusterParametersRequest& WithDBParameterGroupFamily(Aws::String&& value) { SetDBParameterGroupFamily(value); return *this;}

    /**
     * <p>The name of the DB cluster parameter group family to return engine parameter
     * information for.</p>
     */
    inline DescribeEngineDefaultClusterParametersRequest& WithDBParameterGroupFamily(const char* value) { SetDBParameterGroupFamily(value); return *this;}

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
    inline DescribeEngineDefaultClusterParametersRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline DescribeEngineDefaultClusterParametersRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(value); return *this;}

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline DescribeEngineDefaultClusterParametersRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline DescribeEngineDefaultClusterParametersRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

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
    inline DescribeEngineDefaultClusterParametersRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribeEngineDefaultClusterParameters</code> request. If this parameter
     * is specified, the response includes only records beyond the marker, up to the
     * value specified by <code>MaxRecords</code>. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribeEngineDefaultClusterParameters</code> request. If this parameter
     * is specified, the response includes only records beyond the marker, up to the
     * value specified by <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribeEngineDefaultClusterParameters</code> request. If this parameter
     * is specified, the response includes only records beyond the marker, up to the
     * value specified by <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribeEngineDefaultClusterParameters</code> request. If this parameter
     * is specified, the response includes only records beyond the marker, up to the
     * value specified by <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribeEngineDefaultClusterParameters</code> request. If this parameter
     * is specified, the response includes only records beyond the marker, up to the
     * value specified by <code>MaxRecords</code>. </p>
     */
    inline DescribeEngineDefaultClusterParametersRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribeEngineDefaultClusterParameters</code> request. If this parameter
     * is specified, the response includes only records beyond the marker, up to the
     * value specified by <code>MaxRecords</code>. </p>
     */
    inline DescribeEngineDefaultClusterParametersRequest& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribeEngineDefaultClusterParameters</code> request. If this parameter
     * is specified, the response includes only records beyond the marker, up to the
     * value specified by <code>MaxRecords</code>. </p>
     */
    inline DescribeEngineDefaultClusterParametersRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:
    Aws::String m_dBParameterGroupFamily;
    bool m_dBParameterGroupFamilyHasBeenSet;
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
