/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   */
  class AWS_RDS_API DescribeDBClusterEndpointsRequest : public RDSRequest
  {
  public:
    DescribeDBClusterEndpointsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDBClusterEndpoints"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The DB cluster identifier of the DB cluster associated with the endpoint.
     * This parameter is stored as a lowercase string.</p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }

    /**
     * <p>The DB cluster identifier of the DB cluster associated with the endpoint.
     * This parameter is stored as a lowercase string.</p>
     */
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }

    /**
     * <p>The DB cluster identifier of the DB cluster associated with the endpoint.
     * This parameter is stored as a lowercase string.</p>
     */
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }

    /**
     * <p>The DB cluster identifier of the DB cluster associated with the endpoint.
     * This parameter is stored as a lowercase string.</p>
     */
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::move(value); }

    /**
     * <p>The DB cluster identifier of the DB cluster associated with the endpoint.
     * This parameter is stored as a lowercase string.</p>
     */
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier.assign(value); }

    /**
     * <p>The DB cluster identifier of the DB cluster associated with the endpoint.
     * This parameter is stored as a lowercase string.</p>
     */
    inline DescribeDBClusterEndpointsRequest& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p>The DB cluster identifier of the DB cluster associated with the endpoint.
     * This parameter is stored as a lowercase string.</p>
     */
    inline DescribeDBClusterEndpointsRequest& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The DB cluster identifier of the DB cluster associated with the endpoint.
     * This parameter is stored as a lowercase string.</p>
     */
    inline DescribeDBClusterEndpointsRequest& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}


    /**
     * <p>The identifier of the endpoint to describe. This parameter is stored as a
     * lowercase string.</p>
     */
    inline const Aws::String& GetDBClusterEndpointIdentifier() const{ return m_dBClusterEndpointIdentifier; }

    /**
     * <p>The identifier of the endpoint to describe. This parameter is stored as a
     * lowercase string.</p>
     */
    inline bool DBClusterEndpointIdentifierHasBeenSet() const { return m_dBClusterEndpointIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the endpoint to describe. This parameter is stored as a
     * lowercase string.</p>
     */
    inline void SetDBClusterEndpointIdentifier(const Aws::String& value) { m_dBClusterEndpointIdentifierHasBeenSet = true; m_dBClusterEndpointIdentifier = value; }

    /**
     * <p>The identifier of the endpoint to describe. This parameter is stored as a
     * lowercase string.</p>
     */
    inline void SetDBClusterEndpointIdentifier(Aws::String&& value) { m_dBClusterEndpointIdentifierHasBeenSet = true; m_dBClusterEndpointIdentifier = std::move(value); }

    /**
     * <p>The identifier of the endpoint to describe. This parameter is stored as a
     * lowercase string.</p>
     */
    inline void SetDBClusterEndpointIdentifier(const char* value) { m_dBClusterEndpointIdentifierHasBeenSet = true; m_dBClusterEndpointIdentifier.assign(value); }

    /**
     * <p>The identifier of the endpoint to describe. This parameter is stored as a
     * lowercase string.</p>
     */
    inline DescribeDBClusterEndpointsRequest& WithDBClusterEndpointIdentifier(const Aws::String& value) { SetDBClusterEndpointIdentifier(value); return *this;}

    /**
     * <p>The identifier of the endpoint to describe. This parameter is stored as a
     * lowercase string.</p>
     */
    inline DescribeDBClusterEndpointsRequest& WithDBClusterEndpointIdentifier(Aws::String&& value) { SetDBClusterEndpointIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the endpoint to describe. This parameter is stored as a
     * lowercase string.</p>
     */
    inline DescribeDBClusterEndpointsRequest& WithDBClusterEndpointIdentifier(const char* value) { SetDBClusterEndpointIdentifier(value); return *this;}


    /**
     * <p>A set of name-value pairs that define which endpoints to include in the
     * output. The filters are specified as name-value pairs, in the format
     * <code>Name=<i>endpoint_type</i>,Values=<i>endpoint_type1</i>,<i>endpoint_type2</i>,...</code>.
     * <code>Name</code> can be one of: <code>db-cluster-endpoint-type</code>,
     * <code>db-cluster-endpoint-custom-type</code>,
     * <code>db-cluster-endpoint-id</code>, <code>db-cluster-endpoint-status</code>.
     * <code>Values</code> for the <code> db-cluster-endpoint-type</code> filter can be
     * one or more of: <code>reader</code>, <code>writer</code>, <code>custom</code>.
     * <code>Values</code> for the <code>db-cluster-endpoint-custom-type</code> filter
     * can be one or more of: <code>reader</code>, <code>any</code>.
     * <code>Values</code> for the <code>db-cluster-endpoint-status</code> filter can
     * be one or more of: <code>available</code>, <code>creating</code>,
     * <code>deleting</code>, <code>modifying</code>. </p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>A set of name-value pairs that define which endpoints to include in the
     * output. The filters are specified as name-value pairs, in the format
     * <code>Name=<i>endpoint_type</i>,Values=<i>endpoint_type1</i>,<i>endpoint_type2</i>,...</code>.
     * <code>Name</code> can be one of: <code>db-cluster-endpoint-type</code>,
     * <code>db-cluster-endpoint-custom-type</code>,
     * <code>db-cluster-endpoint-id</code>, <code>db-cluster-endpoint-status</code>.
     * <code>Values</code> for the <code> db-cluster-endpoint-type</code> filter can be
     * one or more of: <code>reader</code>, <code>writer</code>, <code>custom</code>.
     * <code>Values</code> for the <code>db-cluster-endpoint-custom-type</code> filter
     * can be one or more of: <code>reader</code>, <code>any</code>.
     * <code>Values</code> for the <code>db-cluster-endpoint-status</code> filter can
     * be one or more of: <code>available</code>, <code>creating</code>,
     * <code>deleting</code>, <code>modifying</code>. </p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>A set of name-value pairs that define which endpoints to include in the
     * output. The filters are specified as name-value pairs, in the format
     * <code>Name=<i>endpoint_type</i>,Values=<i>endpoint_type1</i>,<i>endpoint_type2</i>,...</code>.
     * <code>Name</code> can be one of: <code>db-cluster-endpoint-type</code>,
     * <code>db-cluster-endpoint-custom-type</code>,
     * <code>db-cluster-endpoint-id</code>, <code>db-cluster-endpoint-status</code>.
     * <code>Values</code> for the <code> db-cluster-endpoint-type</code> filter can be
     * one or more of: <code>reader</code>, <code>writer</code>, <code>custom</code>.
     * <code>Values</code> for the <code>db-cluster-endpoint-custom-type</code> filter
     * can be one or more of: <code>reader</code>, <code>any</code>.
     * <code>Values</code> for the <code>db-cluster-endpoint-status</code> filter can
     * be one or more of: <code>available</code>, <code>creating</code>,
     * <code>deleting</code>, <code>modifying</code>. </p>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>A set of name-value pairs that define which endpoints to include in the
     * output. The filters are specified as name-value pairs, in the format
     * <code>Name=<i>endpoint_type</i>,Values=<i>endpoint_type1</i>,<i>endpoint_type2</i>,...</code>.
     * <code>Name</code> can be one of: <code>db-cluster-endpoint-type</code>,
     * <code>db-cluster-endpoint-custom-type</code>,
     * <code>db-cluster-endpoint-id</code>, <code>db-cluster-endpoint-status</code>.
     * <code>Values</code> for the <code> db-cluster-endpoint-type</code> filter can be
     * one or more of: <code>reader</code>, <code>writer</code>, <code>custom</code>.
     * <code>Values</code> for the <code>db-cluster-endpoint-custom-type</code> filter
     * can be one or more of: <code>reader</code>, <code>any</code>.
     * <code>Values</code> for the <code>db-cluster-endpoint-status</code> filter can
     * be one or more of: <code>available</code>, <code>creating</code>,
     * <code>deleting</code>, <code>modifying</code>. </p>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>A set of name-value pairs that define which endpoints to include in the
     * output. The filters are specified as name-value pairs, in the format
     * <code>Name=<i>endpoint_type</i>,Values=<i>endpoint_type1</i>,<i>endpoint_type2</i>,...</code>.
     * <code>Name</code> can be one of: <code>db-cluster-endpoint-type</code>,
     * <code>db-cluster-endpoint-custom-type</code>,
     * <code>db-cluster-endpoint-id</code>, <code>db-cluster-endpoint-status</code>.
     * <code>Values</code> for the <code> db-cluster-endpoint-type</code> filter can be
     * one or more of: <code>reader</code>, <code>writer</code>, <code>custom</code>.
     * <code>Values</code> for the <code>db-cluster-endpoint-custom-type</code> filter
     * can be one or more of: <code>reader</code>, <code>any</code>.
     * <code>Values</code> for the <code>db-cluster-endpoint-status</code> filter can
     * be one or more of: <code>available</code>, <code>creating</code>,
     * <code>deleting</code>, <code>modifying</code>. </p>
     */
    inline DescribeDBClusterEndpointsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>A set of name-value pairs that define which endpoints to include in the
     * output. The filters are specified as name-value pairs, in the format
     * <code>Name=<i>endpoint_type</i>,Values=<i>endpoint_type1</i>,<i>endpoint_type2</i>,...</code>.
     * <code>Name</code> can be one of: <code>db-cluster-endpoint-type</code>,
     * <code>db-cluster-endpoint-custom-type</code>,
     * <code>db-cluster-endpoint-id</code>, <code>db-cluster-endpoint-status</code>.
     * <code>Values</code> for the <code> db-cluster-endpoint-type</code> filter can be
     * one or more of: <code>reader</code>, <code>writer</code>, <code>custom</code>.
     * <code>Values</code> for the <code>db-cluster-endpoint-custom-type</code> filter
     * can be one or more of: <code>reader</code>, <code>any</code>.
     * <code>Values</code> for the <code>db-cluster-endpoint-status</code> filter can
     * be one or more of: <code>available</code>, <code>creating</code>,
     * <code>deleting</code>, <code>modifying</code>. </p>
     */
    inline DescribeDBClusterEndpointsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>A set of name-value pairs that define which endpoints to include in the
     * output. The filters are specified as name-value pairs, in the format
     * <code>Name=<i>endpoint_type</i>,Values=<i>endpoint_type1</i>,<i>endpoint_type2</i>,...</code>.
     * <code>Name</code> can be one of: <code>db-cluster-endpoint-type</code>,
     * <code>db-cluster-endpoint-custom-type</code>,
     * <code>db-cluster-endpoint-id</code>, <code>db-cluster-endpoint-status</code>.
     * <code>Values</code> for the <code> db-cluster-endpoint-type</code> filter can be
     * one or more of: <code>reader</code>, <code>writer</code>, <code>custom</code>.
     * <code>Values</code> for the <code>db-cluster-endpoint-custom-type</code> filter
     * can be one or more of: <code>reader</code>, <code>any</code>.
     * <code>Values</code> for the <code>db-cluster-endpoint-status</code> filter can
     * be one or more of: <code>available</code>, <code>creating</code>,
     * <code>deleting</code>, <code>modifying</code>. </p>
     */
    inline DescribeDBClusterEndpointsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>A set of name-value pairs that define which endpoints to include in the
     * output. The filters are specified as name-value pairs, in the format
     * <code>Name=<i>endpoint_type</i>,Values=<i>endpoint_type1</i>,<i>endpoint_type2</i>,...</code>.
     * <code>Name</code> can be one of: <code>db-cluster-endpoint-type</code>,
     * <code>db-cluster-endpoint-custom-type</code>,
     * <code>db-cluster-endpoint-id</code>, <code>db-cluster-endpoint-status</code>.
     * <code>Values</code> for the <code> db-cluster-endpoint-type</code> filter can be
     * one or more of: <code>reader</code>, <code>writer</code>, <code>custom</code>.
     * <code>Values</code> for the <code>db-cluster-endpoint-custom-type</code> filter
     * can be one or more of: <code>reader</code>, <code>any</code>.
     * <code>Values</code> for the <code>db-cluster-endpoint-status</code> filter can
     * be one or more of: <code>available</code>, <code>creating</code>,
     * <code>deleting</code>, <code>modifying</code>. </p>
     */
    inline DescribeDBClusterEndpointsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that the remaining results can be
     * retrieved. </p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that the remaining results can be
     * retrieved. </p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that the remaining results can be
     * retrieved. </p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that the remaining results can be
     * retrieved. </p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline DescribeDBClusterEndpointsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}


    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribeDBClusterEndpoints</code> request. If this parameter is specified,
     * the response includes only records beyond the marker, up to the value specified
     * by <code>MaxRecords</code>. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribeDBClusterEndpoints</code> request. If this parameter is specified,
     * the response includes only records beyond the marker, up to the value specified
     * by <code>MaxRecords</code>. </p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribeDBClusterEndpoints</code> request. If this parameter is specified,
     * the response includes only records beyond the marker, up to the value specified
     * by <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribeDBClusterEndpoints</code> request. If this parameter is specified,
     * the response includes only records beyond the marker, up to the value specified
     * by <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribeDBClusterEndpoints</code> request. If this parameter is specified,
     * the response includes only records beyond the marker, up to the value specified
     * by <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribeDBClusterEndpoints</code> request. If this parameter is specified,
     * the response includes only records beyond the marker, up to the value specified
     * by <code>MaxRecords</code>. </p>
     */
    inline DescribeDBClusterEndpointsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribeDBClusterEndpoints</code> request. If this parameter is specified,
     * the response includes only records beyond the marker, up to the value specified
     * by <code>MaxRecords</code>. </p>
     */
    inline DescribeDBClusterEndpointsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribeDBClusterEndpoints</code> request. If this parameter is specified,
     * the response includes only records beyond the marker, up to the value specified
     * by <code>MaxRecords</code>. </p>
     */
    inline DescribeDBClusterEndpointsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet;

    Aws::String m_dBClusterEndpointIdentifier;
    bool m_dBClusterEndpointIdentifierHasBeenSet;

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
