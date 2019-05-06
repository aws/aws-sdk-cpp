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
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DescribeClusterParametersMessage">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API DescribeClusterParametersRequest : public RedshiftRequest
  {
  public:
    DescribeClusterParametersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeClusterParameters"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of a cluster parameter group for which to return details.</p>
     */
    inline const Aws::String& GetParameterGroupName() const{ return m_parameterGroupName; }

    /**
     * <p>The name of a cluster parameter group for which to return details.</p>
     */
    inline bool ParameterGroupNameHasBeenSet() const { return m_parameterGroupNameHasBeenSet; }

    /**
     * <p>The name of a cluster parameter group for which to return details.</p>
     */
    inline void SetParameterGroupName(const Aws::String& value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName = value; }

    /**
     * <p>The name of a cluster parameter group for which to return details.</p>
     */
    inline void SetParameterGroupName(Aws::String&& value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName = std::move(value); }

    /**
     * <p>The name of a cluster parameter group for which to return details.</p>
     */
    inline void SetParameterGroupName(const char* value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName.assign(value); }

    /**
     * <p>The name of a cluster parameter group for which to return details.</p>
     */
    inline DescribeClusterParametersRequest& WithParameterGroupName(const Aws::String& value) { SetParameterGroupName(value); return *this;}

    /**
     * <p>The name of a cluster parameter group for which to return details.</p>
     */
    inline DescribeClusterParametersRequest& WithParameterGroupName(Aws::String&& value) { SetParameterGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of a cluster parameter group for which to return details.</p>
     */
    inline DescribeClusterParametersRequest& WithParameterGroupName(const char* value) { SetParameterGroupName(value); return *this;}


    /**
     * <p>The parameter types to return. Specify <code>user</code> to show parameters
     * that are different form the default. Similarly, specify
     * <code>engine-default</code> to show parameters that are the same as the default
     * parameter group. </p> <p>Default: All parameter types returned.</p> <p>Valid
     * Values: <code>user</code> | <code>engine-default</code> </p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }

    /**
     * <p>The parameter types to return. Specify <code>user</code> to show parameters
     * that are different form the default. Similarly, specify
     * <code>engine-default</code> to show parameters that are the same as the default
     * parameter group. </p> <p>Default: All parameter types returned.</p> <p>Valid
     * Values: <code>user</code> | <code>engine-default</code> </p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The parameter types to return. Specify <code>user</code> to show parameters
     * that are different form the default. Similarly, specify
     * <code>engine-default</code> to show parameters that are the same as the default
     * parameter group. </p> <p>Default: All parameter types returned.</p> <p>Valid
     * Values: <code>user</code> | <code>engine-default</code> </p>
     */
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The parameter types to return. Specify <code>user</code> to show parameters
     * that are different form the default. Similarly, specify
     * <code>engine-default</code> to show parameters that are the same as the default
     * parameter group. </p> <p>Default: All parameter types returned.</p> <p>Valid
     * Values: <code>user</code> | <code>engine-default</code> </p>
     */
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The parameter types to return. Specify <code>user</code> to show parameters
     * that are different form the default. Similarly, specify
     * <code>engine-default</code> to show parameters that are the same as the default
     * parameter group. </p> <p>Default: All parameter types returned.</p> <p>Valid
     * Values: <code>user</code> | <code>engine-default</code> </p>
     */
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }

    /**
     * <p>The parameter types to return. Specify <code>user</code> to show parameters
     * that are different form the default. Similarly, specify
     * <code>engine-default</code> to show parameters that are the same as the default
     * parameter group. </p> <p>Default: All parameter types returned.</p> <p>Valid
     * Values: <code>user</code> | <code>engine-default</code> </p>
     */
    inline DescribeClusterParametersRequest& WithSource(const Aws::String& value) { SetSource(value); return *this;}

    /**
     * <p>The parameter types to return. Specify <code>user</code> to show parameters
     * that are different form the default. Similarly, specify
     * <code>engine-default</code> to show parameters that are the same as the default
     * parameter group. </p> <p>Default: All parameter types returned.</p> <p>Valid
     * Values: <code>user</code> | <code>engine-default</code> </p>
     */
    inline DescribeClusterParametersRequest& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}

    /**
     * <p>The parameter types to return. Specify <code>user</code> to show parameters
     * that are different form the default. Similarly, specify
     * <code>engine-default</code> to show parameters that are the same as the default
     * parameter group. </p> <p>Default: All parameter types returned.</p> <p>Valid
     * Values: <code>user</code> | <code>engine-default</code> </p>
     */
    inline DescribeClusterParametersRequest& WithSource(const char* value) { SetSource(value); return *this;}


    /**
     * <p>The maximum number of response records to return in each call. If the number
     * of remaining response records exceeds the specified <code>MaxRecords</code>
     * value, a value is returned in a <code>marker</code> field of the response. You
     * can retrieve the next set of records by retrying the command with the returned
     * marker value. </p> <p>Default: <code>100</code> </p> <p>Constraints: minimum 20,
     * maximum 100.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p>The maximum number of response records to return in each call. If the number
     * of remaining response records exceeds the specified <code>MaxRecords</code>
     * value, a value is returned in a <code>marker</code> field of the response. You
     * can retrieve the next set of records by retrying the command with the returned
     * marker value. </p> <p>Default: <code>100</code> </p> <p>Constraints: minimum 20,
     * maximum 100.</p>
     */
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }

    /**
     * <p>The maximum number of response records to return in each call. If the number
     * of remaining response records exceeds the specified <code>MaxRecords</code>
     * value, a value is returned in a <code>marker</code> field of the response. You
     * can retrieve the next set of records by retrying the command with the returned
     * marker value. </p> <p>Default: <code>100</code> </p> <p>Constraints: minimum 20,
     * maximum 100.</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p>The maximum number of response records to return in each call. If the number
     * of remaining response records exceeds the specified <code>MaxRecords</code>
     * value, a value is returned in a <code>marker</code> field of the response. You
     * can retrieve the next set of records by retrying the command with the returned
     * marker value. </p> <p>Default: <code>100</code> </p> <p>Constraints: minimum 20,
     * maximum 100.</p>
     */
    inline DescribeClusterParametersRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}


    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeClusterParameters</a> request
     * exceed the value specified in <code>MaxRecords</code>, AWS returns a value in
     * the <code>Marker</code> field of the response. You can retrieve the next set of
     * response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeClusterParameters</a> request
     * exceed the value specified in <code>MaxRecords</code>, AWS returns a value in
     * the <code>Marker</code> field of the response. You can retrieve the next set of
     * response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request. </p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeClusterParameters</a> request
     * exceed the value specified in <code>MaxRecords</code>, AWS returns a value in
     * the <code>Marker</code> field of the response. You can retrieve the next set of
     * response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request. </p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeClusterParameters</a> request
     * exceed the value specified in <code>MaxRecords</code>, AWS returns a value in
     * the <code>Marker</code> field of the response. You can retrieve the next set of
     * response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request. </p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeClusterParameters</a> request
     * exceed the value specified in <code>MaxRecords</code>, AWS returns a value in
     * the <code>Marker</code> field of the response. You can retrieve the next set of
     * response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request. </p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeClusterParameters</a> request
     * exceed the value specified in <code>MaxRecords</code>, AWS returns a value in
     * the <code>Marker</code> field of the response. You can retrieve the next set of
     * response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request. </p>
     */
    inline DescribeClusterParametersRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeClusterParameters</a> request
     * exceed the value specified in <code>MaxRecords</code>, AWS returns a value in
     * the <code>Marker</code> field of the response. You can retrieve the next set of
     * response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request. </p>
     */
    inline DescribeClusterParametersRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeClusterParameters</a> request
     * exceed the value specified in <code>MaxRecords</code>, AWS returns a value in
     * the <code>Marker</code> field of the response. You can retrieve the next set of
     * response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request. </p>
     */
    inline DescribeClusterParametersRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::String m_parameterGroupName;
    bool m_parameterGroupNameHasBeenSet;

    Aws::String m_source;
    bool m_sourceHasBeenSet;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet;

    Aws::String m_marker;
    bool m_markerHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
