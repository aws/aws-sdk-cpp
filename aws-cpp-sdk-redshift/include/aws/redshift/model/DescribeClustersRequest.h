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
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   * <p/>
   */
  class AWS_REDSHIFT_API DescribeClustersRequest : public RedshiftRequest
  {
  public:
    DescribeClustersRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The unique identifier of a cluster whose properties you are requesting. This
     * parameter is case sensitive.</p> <p>The default is that all clusters defined for
     * an account are returned.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }

    /**
     * <p>The unique identifier of a cluster whose properties you are requesting. This
     * parameter is case sensitive.</p> <p>The default is that all clusters defined for
     * an account are returned.</p>
     */
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }

    /**
     * <p>The unique identifier of a cluster whose properties you are requesting. This
     * parameter is case sensitive.</p> <p>The default is that all clusters defined for
     * an account are returned.</p>
     */
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }

    /**
     * <p>The unique identifier of a cluster whose properties you are requesting. This
     * parameter is case sensitive.</p> <p>The default is that all clusters defined for
     * an account are returned.</p>
     */
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }

    /**
     * <p>The unique identifier of a cluster whose properties you are requesting. This
     * parameter is case sensitive.</p> <p>The default is that all clusters defined for
     * an account are returned.</p>
     */
    inline DescribeClustersRequest& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p>The unique identifier of a cluster whose properties you are requesting. This
     * parameter is case sensitive.</p> <p>The default is that all clusters defined for
     * an account are returned.</p>
     */
    inline DescribeClustersRequest& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p>The unique identifier of a cluster whose properties you are requesting. This
     * parameter is case sensitive.</p> <p>The default is that all clusters defined for
     * an account are returned.</p>
     */
    inline DescribeClustersRequest& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}

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
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p>The maximum number of response records to return in each call. If the number
     * of remaining response records exceeds the specified <code>MaxRecords</code>
     * value, a value is returned in a <code>marker</code> field of the response. You
     * can retrieve the next set of records by retrying the command with the returned
     * marker value. </p> <p>Default: <code>100</code> </p> <p>Constraints: minimum 20,
     * maximum 100.</p>
     */
    inline DescribeClustersRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeClusters</a> request exceed
     * the value specified in <code>MaxRecords</code>, AWS returns a value in the
     * <code>Marker</code> field of the response. You can retrieve the next set of
     * response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request. </p> <p>Constraints: You
     * can specify either the <b>ClusterIdentifier</b> parameter or the <b>Marker</b>
     * parameter, but not both. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeClusters</a> request exceed
     * the value specified in <code>MaxRecords</code>, AWS returns a value in the
     * <code>Marker</code> field of the response. You can retrieve the next set of
     * response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request. </p> <p>Constraints: You
     * can specify either the <b>ClusterIdentifier</b> parameter or the <b>Marker</b>
     * parameter, but not both. </p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeClusters</a> request exceed
     * the value specified in <code>MaxRecords</code>, AWS returns a value in the
     * <code>Marker</code> field of the response. You can retrieve the next set of
     * response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request. </p> <p>Constraints: You
     * can specify either the <b>ClusterIdentifier</b> parameter or the <b>Marker</b>
     * parameter, but not both. </p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeClusters</a> request exceed
     * the value specified in <code>MaxRecords</code>, AWS returns a value in the
     * <code>Marker</code> field of the response. You can retrieve the next set of
     * response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request. </p> <p>Constraints: You
     * can specify either the <b>ClusterIdentifier</b> parameter or the <b>Marker</b>
     * parameter, but not both. </p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeClusters</a> request exceed
     * the value specified in <code>MaxRecords</code>, AWS returns a value in the
     * <code>Marker</code> field of the response. You can retrieve the next set of
     * response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request. </p> <p>Constraints: You
     * can specify either the <b>ClusterIdentifier</b> parameter or the <b>Marker</b>
     * parameter, but not both. </p>
     */
    inline DescribeClustersRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeClusters</a> request exceed
     * the value specified in <code>MaxRecords</code>, AWS returns a value in the
     * <code>Marker</code> field of the response. You can retrieve the next set of
     * response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request. </p> <p>Constraints: You
     * can specify either the <b>ClusterIdentifier</b> parameter or the <b>Marker</b>
     * parameter, but not both. </p>
     */
    inline DescribeClustersRequest& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeClusters</a> request exceed
     * the value specified in <code>MaxRecords</code>, AWS returns a value in the
     * <code>Marker</code> field of the response. You can retrieve the next set of
     * response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request. </p> <p>Constraints: You
     * can specify either the <b>ClusterIdentifier</b> parameter or the <b>Marker</b>
     * parameter, but not both. </p>
     */
    inline DescribeClustersRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

    /**
     * <p>A tag key or keys for which you want to return all matching clusters that are
     * associated with the specified key or keys. For example, suppose that you have
     * clusters that are tagged with keys called <code>owner</code> and
     * <code>environment</code>. If you specify both of these tag keys in the request,
     * Amazon Redshift returns a response with the clusters that have either or both of
     * these tag keys associated with them.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagKeys() const{ return m_tagKeys; }

    /**
     * <p>A tag key or keys for which you want to return all matching clusters that are
     * associated with the specified key or keys. For example, suppose that you have
     * clusters that are tagged with keys called <code>owner</code> and
     * <code>environment</code>. If you specify both of these tag keys in the request,
     * Amazon Redshift returns a response with the clusters that have either or both of
     * these tag keys associated with them.</p>
     */
    inline void SetTagKeys(const Aws::Vector<Aws::String>& value) { m_tagKeysHasBeenSet = true; m_tagKeys = value; }

    /**
     * <p>A tag key or keys for which you want to return all matching clusters that are
     * associated with the specified key or keys. For example, suppose that you have
     * clusters that are tagged with keys called <code>owner</code> and
     * <code>environment</code>. If you specify both of these tag keys in the request,
     * Amazon Redshift returns a response with the clusters that have either or both of
     * these tag keys associated with them.</p>
     */
    inline void SetTagKeys(Aws::Vector<Aws::String>&& value) { m_tagKeysHasBeenSet = true; m_tagKeys = value; }

    /**
     * <p>A tag key or keys for which you want to return all matching clusters that are
     * associated with the specified key or keys. For example, suppose that you have
     * clusters that are tagged with keys called <code>owner</code> and
     * <code>environment</code>. If you specify both of these tag keys in the request,
     * Amazon Redshift returns a response with the clusters that have either or both of
     * these tag keys associated with them.</p>
     */
    inline DescribeClustersRequest& WithTagKeys(const Aws::Vector<Aws::String>& value) { SetTagKeys(value); return *this;}

    /**
     * <p>A tag key or keys for which you want to return all matching clusters that are
     * associated with the specified key or keys. For example, suppose that you have
     * clusters that are tagged with keys called <code>owner</code> and
     * <code>environment</code>. If you specify both of these tag keys in the request,
     * Amazon Redshift returns a response with the clusters that have either or both of
     * these tag keys associated with them.</p>
     */
    inline DescribeClustersRequest& WithTagKeys(Aws::Vector<Aws::String>&& value) { SetTagKeys(value); return *this;}

    /**
     * <p>A tag key or keys for which you want to return all matching clusters that are
     * associated with the specified key or keys. For example, suppose that you have
     * clusters that are tagged with keys called <code>owner</code> and
     * <code>environment</code>. If you specify both of these tag keys in the request,
     * Amazon Redshift returns a response with the clusters that have either or both of
     * these tag keys associated with them.</p>
     */
    inline DescribeClustersRequest& AddTagKeys(const Aws::String& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

    /**
     * <p>A tag key or keys for which you want to return all matching clusters that are
     * associated with the specified key or keys. For example, suppose that you have
     * clusters that are tagged with keys called <code>owner</code> and
     * <code>environment</code>. If you specify both of these tag keys in the request,
     * Amazon Redshift returns a response with the clusters that have either or both of
     * these tag keys associated with them.</p>
     */
    inline DescribeClustersRequest& AddTagKeys(Aws::String&& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

    /**
     * <p>A tag key or keys for which you want to return all matching clusters that are
     * associated with the specified key or keys. For example, suppose that you have
     * clusters that are tagged with keys called <code>owner</code> and
     * <code>environment</code>. If you specify both of these tag keys in the request,
     * Amazon Redshift returns a response with the clusters that have either or both of
     * these tag keys associated with them.</p>
     */
    inline DescribeClustersRequest& AddTagKeys(const char* value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

    /**
     * <p>A tag value or values for which you want to return all matching clusters that
     * are associated with the specified tag value or values. For example, suppose that
     * you have clusters that are tagged with values called <code>admin</code> and
     * <code>test</code>. If you specify both of these tag values in the request,
     * Amazon Redshift returns a response with the clusters that have either or both of
     * these tag values associated with them.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagValues() const{ return m_tagValues; }

    /**
     * <p>A tag value or values for which you want to return all matching clusters that
     * are associated with the specified tag value or values. For example, suppose that
     * you have clusters that are tagged with values called <code>admin</code> and
     * <code>test</code>. If you specify both of these tag values in the request,
     * Amazon Redshift returns a response with the clusters that have either or both of
     * these tag values associated with them.</p>
     */
    inline void SetTagValues(const Aws::Vector<Aws::String>& value) { m_tagValuesHasBeenSet = true; m_tagValues = value; }

    /**
     * <p>A tag value or values for which you want to return all matching clusters that
     * are associated with the specified tag value or values. For example, suppose that
     * you have clusters that are tagged with values called <code>admin</code> and
     * <code>test</code>. If you specify both of these tag values in the request,
     * Amazon Redshift returns a response with the clusters that have either or both of
     * these tag values associated with them.</p>
     */
    inline void SetTagValues(Aws::Vector<Aws::String>&& value) { m_tagValuesHasBeenSet = true; m_tagValues = value; }

    /**
     * <p>A tag value or values for which you want to return all matching clusters that
     * are associated with the specified tag value or values. For example, suppose that
     * you have clusters that are tagged with values called <code>admin</code> and
     * <code>test</code>. If you specify both of these tag values in the request,
     * Amazon Redshift returns a response with the clusters that have either or both of
     * these tag values associated with them.</p>
     */
    inline DescribeClustersRequest& WithTagValues(const Aws::Vector<Aws::String>& value) { SetTagValues(value); return *this;}

    /**
     * <p>A tag value or values for which you want to return all matching clusters that
     * are associated with the specified tag value or values. For example, suppose that
     * you have clusters that are tagged with values called <code>admin</code> and
     * <code>test</code>. If you specify both of these tag values in the request,
     * Amazon Redshift returns a response with the clusters that have either or both of
     * these tag values associated with them.</p>
     */
    inline DescribeClustersRequest& WithTagValues(Aws::Vector<Aws::String>&& value) { SetTagValues(value); return *this;}

    /**
     * <p>A tag value or values for which you want to return all matching clusters that
     * are associated with the specified tag value or values. For example, suppose that
     * you have clusters that are tagged with values called <code>admin</code> and
     * <code>test</code>. If you specify both of these tag values in the request,
     * Amazon Redshift returns a response with the clusters that have either or both of
     * these tag values associated with them.</p>
     */
    inline DescribeClustersRequest& AddTagValues(const Aws::String& value) { m_tagValuesHasBeenSet = true; m_tagValues.push_back(value); return *this; }

    /**
     * <p>A tag value or values for which you want to return all matching clusters that
     * are associated with the specified tag value or values. For example, suppose that
     * you have clusters that are tagged with values called <code>admin</code> and
     * <code>test</code>. If you specify both of these tag values in the request,
     * Amazon Redshift returns a response with the clusters that have either or both of
     * these tag values associated with them.</p>
     */
    inline DescribeClustersRequest& AddTagValues(Aws::String&& value) { m_tagValuesHasBeenSet = true; m_tagValues.push_back(value); return *this; }

    /**
     * <p>A tag value or values for which you want to return all matching clusters that
     * are associated with the specified tag value or values. For example, suppose that
     * you have clusters that are tagged with values called <code>admin</code> and
     * <code>test</code>. If you specify both of these tag values in the request,
     * Amazon Redshift returns a response with the clusters that have either or both of
     * these tag values associated with them.</p>
     */
    inline DescribeClustersRequest& AddTagValues(const char* value) { m_tagValuesHasBeenSet = true; m_tagValues.push_back(value); return *this; }

  private:
    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet;
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
