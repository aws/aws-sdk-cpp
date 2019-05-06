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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DescribeClusterParameterGroupsMessage">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API DescribeClusterParameterGroupsRequest : public RedshiftRequest
  {
  public:
    DescribeClusterParameterGroupsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeClusterParameterGroups"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of a specific parameter group for which to return details. By
     * default, details about all parameter groups and the default parameter group are
     * returned.</p>
     */
    inline const Aws::String& GetParameterGroupName() const{ return m_parameterGroupName; }

    /**
     * <p>The name of a specific parameter group for which to return details. By
     * default, details about all parameter groups and the default parameter group are
     * returned.</p>
     */
    inline bool ParameterGroupNameHasBeenSet() const { return m_parameterGroupNameHasBeenSet; }

    /**
     * <p>The name of a specific parameter group for which to return details. By
     * default, details about all parameter groups and the default parameter group are
     * returned.</p>
     */
    inline void SetParameterGroupName(const Aws::String& value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName = value; }

    /**
     * <p>The name of a specific parameter group for which to return details. By
     * default, details about all parameter groups and the default parameter group are
     * returned.</p>
     */
    inline void SetParameterGroupName(Aws::String&& value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName = std::move(value); }

    /**
     * <p>The name of a specific parameter group for which to return details. By
     * default, details about all parameter groups and the default parameter group are
     * returned.</p>
     */
    inline void SetParameterGroupName(const char* value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName.assign(value); }

    /**
     * <p>The name of a specific parameter group for which to return details. By
     * default, details about all parameter groups and the default parameter group are
     * returned.</p>
     */
    inline DescribeClusterParameterGroupsRequest& WithParameterGroupName(const Aws::String& value) { SetParameterGroupName(value); return *this;}

    /**
     * <p>The name of a specific parameter group for which to return details. By
     * default, details about all parameter groups and the default parameter group are
     * returned.</p>
     */
    inline DescribeClusterParameterGroupsRequest& WithParameterGroupName(Aws::String&& value) { SetParameterGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of a specific parameter group for which to return details. By
     * default, details about all parameter groups and the default parameter group are
     * returned.</p>
     */
    inline DescribeClusterParameterGroupsRequest& WithParameterGroupName(const char* value) { SetParameterGroupName(value); return *this;}


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
    inline DescribeClusterParameterGroupsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}


    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeClusterParameterGroups</a>
     * request exceed the value specified in <code>MaxRecords</code>, AWS returns a
     * value in the <code>Marker</code> field of the response. You can retrieve the
     * next set of response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeClusterParameterGroups</a>
     * request exceed the value specified in <code>MaxRecords</code>, AWS returns a
     * value in the <code>Marker</code> field of the response. You can retrieve the
     * next set of response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request. </p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeClusterParameterGroups</a>
     * request exceed the value specified in <code>MaxRecords</code>, AWS returns a
     * value in the <code>Marker</code> field of the response. You can retrieve the
     * next set of response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request. </p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeClusterParameterGroups</a>
     * request exceed the value specified in <code>MaxRecords</code>, AWS returns a
     * value in the <code>Marker</code> field of the response. You can retrieve the
     * next set of response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request. </p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeClusterParameterGroups</a>
     * request exceed the value specified in <code>MaxRecords</code>, AWS returns a
     * value in the <code>Marker</code> field of the response. You can retrieve the
     * next set of response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request. </p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeClusterParameterGroups</a>
     * request exceed the value specified in <code>MaxRecords</code>, AWS returns a
     * value in the <code>Marker</code> field of the response. You can retrieve the
     * next set of response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request. </p>
     */
    inline DescribeClusterParameterGroupsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeClusterParameterGroups</a>
     * request exceed the value specified in <code>MaxRecords</code>, AWS returns a
     * value in the <code>Marker</code> field of the response. You can retrieve the
     * next set of response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request. </p>
     */
    inline DescribeClusterParameterGroupsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeClusterParameterGroups</a>
     * request exceed the value specified in <code>MaxRecords</code>, AWS returns a
     * value in the <code>Marker</code> field of the response. You can retrieve the
     * next set of response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request. </p>
     */
    inline DescribeClusterParameterGroupsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>A tag key or keys for which you want to return all matching cluster parameter
     * groups that are associated with the specified key or keys. For example, suppose
     * that you have parameter groups that are tagged with keys called
     * <code>owner</code> and <code>environment</code>. If you specify both of these
     * tag keys in the request, Amazon Redshift returns a response with the parameter
     * groups that have either or both of these tag keys associated with them.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagKeys() const{ return m_tagKeys; }

    /**
     * <p>A tag key or keys for which you want to return all matching cluster parameter
     * groups that are associated with the specified key or keys. For example, suppose
     * that you have parameter groups that are tagged with keys called
     * <code>owner</code> and <code>environment</code>. If you specify both of these
     * tag keys in the request, Amazon Redshift returns a response with the parameter
     * groups that have either or both of these tag keys associated with them.</p>
     */
    inline bool TagKeysHasBeenSet() const { return m_tagKeysHasBeenSet; }

    /**
     * <p>A tag key or keys for which you want to return all matching cluster parameter
     * groups that are associated with the specified key or keys. For example, suppose
     * that you have parameter groups that are tagged with keys called
     * <code>owner</code> and <code>environment</code>. If you specify both of these
     * tag keys in the request, Amazon Redshift returns a response with the parameter
     * groups that have either or both of these tag keys associated with them.</p>
     */
    inline void SetTagKeys(const Aws::Vector<Aws::String>& value) { m_tagKeysHasBeenSet = true; m_tagKeys = value; }

    /**
     * <p>A tag key or keys for which you want to return all matching cluster parameter
     * groups that are associated with the specified key or keys. For example, suppose
     * that you have parameter groups that are tagged with keys called
     * <code>owner</code> and <code>environment</code>. If you specify both of these
     * tag keys in the request, Amazon Redshift returns a response with the parameter
     * groups that have either or both of these tag keys associated with them.</p>
     */
    inline void SetTagKeys(Aws::Vector<Aws::String>&& value) { m_tagKeysHasBeenSet = true; m_tagKeys = std::move(value); }

    /**
     * <p>A tag key or keys for which you want to return all matching cluster parameter
     * groups that are associated with the specified key or keys. For example, suppose
     * that you have parameter groups that are tagged with keys called
     * <code>owner</code> and <code>environment</code>. If you specify both of these
     * tag keys in the request, Amazon Redshift returns a response with the parameter
     * groups that have either or both of these tag keys associated with them.</p>
     */
    inline DescribeClusterParameterGroupsRequest& WithTagKeys(const Aws::Vector<Aws::String>& value) { SetTagKeys(value); return *this;}

    /**
     * <p>A tag key or keys for which you want to return all matching cluster parameter
     * groups that are associated with the specified key or keys. For example, suppose
     * that you have parameter groups that are tagged with keys called
     * <code>owner</code> and <code>environment</code>. If you specify both of these
     * tag keys in the request, Amazon Redshift returns a response with the parameter
     * groups that have either or both of these tag keys associated with them.</p>
     */
    inline DescribeClusterParameterGroupsRequest& WithTagKeys(Aws::Vector<Aws::String>&& value) { SetTagKeys(std::move(value)); return *this;}

    /**
     * <p>A tag key or keys for which you want to return all matching cluster parameter
     * groups that are associated with the specified key or keys. For example, suppose
     * that you have parameter groups that are tagged with keys called
     * <code>owner</code> and <code>environment</code>. If you specify both of these
     * tag keys in the request, Amazon Redshift returns a response with the parameter
     * groups that have either or both of these tag keys associated with them.</p>
     */
    inline DescribeClusterParameterGroupsRequest& AddTagKeys(const Aws::String& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

    /**
     * <p>A tag key or keys for which you want to return all matching cluster parameter
     * groups that are associated with the specified key or keys. For example, suppose
     * that you have parameter groups that are tagged with keys called
     * <code>owner</code> and <code>environment</code>. If you specify both of these
     * tag keys in the request, Amazon Redshift returns a response with the parameter
     * groups that have either or both of these tag keys associated with them.</p>
     */
    inline DescribeClusterParameterGroupsRequest& AddTagKeys(Aws::String&& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(std::move(value)); return *this; }

    /**
     * <p>A tag key or keys for which you want to return all matching cluster parameter
     * groups that are associated with the specified key or keys. For example, suppose
     * that you have parameter groups that are tagged with keys called
     * <code>owner</code> and <code>environment</code>. If you specify both of these
     * tag keys in the request, Amazon Redshift returns a response with the parameter
     * groups that have either or both of these tag keys associated with them.</p>
     */
    inline DescribeClusterParameterGroupsRequest& AddTagKeys(const char* value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }


    /**
     * <p>A tag value or values for which you want to return all matching cluster
     * parameter groups that are associated with the specified tag value or values. For
     * example, suppose that you have parameter groups that are tagged with values
     * called <code>admin</code> and <code>test</code>. If you specify both of these
     * tag values in the request, Amazon Redshift returns a response with the parameter
     * groups that have either or both of these tag values associated with them.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagValues() const{ return m_tagValues; }

    /**
     * <p>A tag value or values for which you want to return all matching cluster
     * parameter groups that are associated with the specified tag value or values. For
     * example, suppose that you have parameter groups that are tagged with values
     * called <code>admin</code> and <code>test</code>. If you specify both of these
     * tag values in the request, Amazon Redshift returns a response with the parameter
     * groups that have either or both of these tag values associated with them.</p>
     */
    inline bool TagValuesHasBeenSet() const { return m_tagValuesHasBeenSet; }

    /**
     * <p>A tag value or values for which you want to return all matching cluster
     * parameter groups that are associated with the specified tag value or values. For
     * example, suppose that you have parameter groups that are tagged with values
     * called <code>admin</code> and <code>test</code>. If you specify both of these
     * tag values in the request, Amazon Redshift returns a response with the parameter
     * groups that have either or both of these tag values associated with them.</p>
     */
    inline void SetTagValues(const Aws::Vector<Aws::String>& value) { m_tagValuesHasBeenSet = true; m_tagValues = value; }

    /**
     * <p>A tag value or values for which you want to return all matching cluster
     * parameter groups that are associated with the specified tag value or values. For
     * example, suppose that you have parameter groups that are tagged with values
     * called <code>admin</code> and <code>test</code>. If you specify both of these
     * tag values in the request, Amazon Redshift returns a response with the parameter
     * groups that have either or both of these tag values associated with them.</p>
     */
    inline void SetTagValues(Aws::Vector<Aws::String>&& value) { m_tagValuesHasBeenSet = true; m_tagValues = std::move(value); }

    /**
     * <p>A tag value or values for which you want to return all matching cluster
     * parameter groups that are associated with the specified tag value or values. For
     * example, suppose that you have parameter groups that are tagged with values
     * called <code>admin</code> and <code>test</code>. If you specify both of these
     * tag values in the request, Amazon Redshift returns a response with the parameter
     * groups that have either or both of these tag values associated with them.</p>
     */
    inline DescribeClusterParameterGroupsRequest& WithTagValues(const Aws::Vector<Aws::String>& value) { SetTagValues(value); return *this;}

    /**
     * <p>A tag value or values for which you want to return all matching cluster
     * parameter groups that are associated with the specified tag value or values. For
     * example, suppose that you have parameter groups that are tagged with values
     * called <code>admin</code> and <code>test</code>. If you specify both of these
     * tag values in the request, Amazon Redshift returns a response with the parameter
     * groups that have either or both of these tag values associated with them.</p>
     */
    inline DescribeClusterParameterGroupsRequest& WithTagValues(Aws::Vector<Aws::String>&& value) { SetTagValues(std::move(value)); return *this;}

    /**
     * <p>A tag value or values for which you want to return all matching cluster
     * parameter groups that are associated with the specified tag value or values. For
     * example, suppose that you have parameter groups that are tagged with values
     * called <code>admin</code> and <code>test</code>. If you specify both of these
     * tag values in the request, Amazon Redshift returns a response with the parameter
     * groups that have either or both of these tag values associated with them.</p>
     */
    inline DescribeClusterParameterGroupsRequest& AddTagValues(const Aws::String& value) { m_tagValuesHasBeenSet = true; m_tagValues.push_back(value); return *this; }

    /**
     * <p>A tag value or values for which you want to return all matching cluster
     * parameter groups that are associated with the specified tag value or values. For
     * example, suppose that you have parameter groups that are tagged with values
     * called <code>admin</code> and <code>test</code>. If you specify both of these
     * tag values in the request, Amazon Redshift returns a response with the parameter
     * groups that have either or both of these tag values associated with them.</p>
     */
    inline DescribeClusterParameterGroupsRequest& AddTagValues(Aws::String&& value) { m_tagValuesHasBeenSet = true; m_tagValues.push_back(std::move(value)); return *this; }

    /**
     * <p>A tag value or values for which you want to return all matching cluster
     * parameter groups that are associated with the specified tag value or values. For
     * example, suppose that you have parameter groups that are tagged with values
     * called <code>admin</code> and <code>test</code>. If you specify both of these
     * tag values in the request, Amazon Redshift returns a response with the parameter
     * groups that have either or both of these tag values associated with them.</p>
     */
    inline DescribeClusterParameterGroupsRequest& AddTagValues(const char* value) { m_tagValuesHasBeenSet = true; m_tagValues.push_back(value); return *this; }

  private:

    Aws::String m_parameterGroupName;
    bool m_parameterGroupNameHasBeenSet;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet;

    Aws::String m_marker;
    bool m_markerHasBeenSet;

    Aws::Vector<Aws::String> m_tagKeys;
    bool m_tagKeysHasBeenSet;

    Aws::Vector<Aws::String> m_tagValues;
    bool m_tagValuesHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
