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
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
  class AWS_REDSHIFT_API DescribeClusterSnapshotsRequest : public RedshiftRequest
  {
  public:
    DescribeClusterSnapshotsRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The identifier of the cluster for which information about snapshots is
     * requested.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }

    /**
     * <p>The identifier of the cluster for which information about snapshots is
     * requested.</p>
     */
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }

    /**
     * <p>The identifier of the cluster for which information about snapshots is
     * requested.</p>
     */
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }

    /**
     * <p>The identifier of the cluster for which information about snapshots is
     * requested.</p>
     */
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }

    /**
     * <p>The identifier of the cluster for which information about snapshots is
     * requested.</p>
     */
    inline DescribeClusterSnapshotsRequest& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p>The identifier of the cluster for which information about snapshots is
     * requested.</p>
     */
    inline DescribeClusterSnapshotsRequest& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p>The identifier of the cluster for which information about snapshots is
     * requested.</p>
     */
    inline DescribeClusterSnapshotsRequest& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p>The snapshot identifier of the snapshot about which to return
     * information.</p>
     */
    inline const Aws::String& GetSnapshotIdentifier() const{ return m_snapshotIdentifier; }

    /**
     * <p>The snapshot identifier of the snapshot about which to return
     * information.</p>
     */
    inline void SetSnapshotIdentifier(const Aws::String& value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier = value; }

    /**
     * <p>The snapshot identifier of the snapshot about which to return
     * information.</p>
     */
    inline void SetSnapshotIdentifier(Aws::String&& value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier = value; }

    /**
     * <p>The snapshot identifier of the snapshot about which to return
     * information.</p>
     */
    inline void SetSnapshotIdentifier(const char* value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier.assign(value); }

    /**
     * <p>The snapshot identifier of the snapshot about which to return
     * information.</p>
     */
    inline DescribeClusterSnapshotsRequest& WithSnapshotIdentifier(const Aws::String& value) { SetSnapshotIdentifier(value); return *this;}

    /**
     * <p>The snapshot identifier of the snapshot about which to return
     * information.</p>
     */
    inline DescribeClusterSnapshotsRequest& WithSnapshotIdentifier(Aws::String&& value) { SetSnapshotIdentifier(value); return *this;}

    /**
     * <p>The snapshot identifier of the snapshot about which to return
     * information.</p>
     */
    inline DescribeClusterSnapshotsRequest& WithSnapshotIdentifier(const char* value) { SetSnapshotIdentifier(value); return *this;}

    /**
     * <p>The type of snapshots for which you are requesting information. By default,
     * snapshots of all types are returned.</p> <p>Valid Values: <code>automated</code>
     * | <code>manual</code> </p>
     */
    inline const Aws::String& GetSnapshotType() const{ return m_snapshotType; }

    /**
     * <p>The type of snapshots for which you are requesting information. By default,
     * snapshots of all types are returned.</p> <p>Valid Values: <code>automated</code>
     * | <code>manual</code> </p>
     */
    inline void SetSnapshotType(const Aws::String& value) { m_snapshotTypeHasBeenSet = true; m_snapshotType = value; }

    /**
     * <p>The type of snapshots for which you are requesting information. By default,
     * snapshots of all types are returned.</p> <p>Valid Values: <code>automated</code>
     * | <code>manual</code> </p>
     */
    inline void SetSnapshotType(Aws::String&& value) { m_snapshotTypeHasBeenSet = true; m_snapshotType = value; }

    /**
     * <p>The type of snapshots for which you are requesting information. By default,
     * snapshots of all types are returned.</p> <p>Valid Values: <code>automated</code>
     * | <code>manual</code> </p>
     */
    inline void SetSnapshotType(const char* value) { m_snapshotTypeHasBeenSet = true; m_snapshotType.assign(value); }

    /**
     * <p>The type of snapshots for which you are requesting information. By default,
     * snapshots of all types are returned.</p> <p>Valid Values: <code>automated</code>
     * | <code>manual</code> </p>
     */
    inline DescribeClusterSnapshotsRequest& WithSnapshotType(const Aws::String& value) { SetSnapshotType(value); return *this;}

    /**
     * <p>The type of snapshots for which you are requesting information. By default,
     * snapshots of all types are returned.</p> <p>Valid Values: <code>automated</code>
     * | <code>manual</code> </p>
     */
    inline DescribeClusterSnapshotsRequest& WithSnapshotType(Aws::String&& value) { SetSnapshotType(value); return *this;}

    /**
     * <p>The type of snapshots for which you are requesting information. By default,
     * snapshots of all types are returned.</p> <p>Valid Values: <code>automated</code>
     * | <code>manual</code> </p>
     */
    inline DescribeClusterSnapshotsRequest& WithSnapshotType(const char* value) { SetSnapshotType(value); return *this;}

    /**
     * <p>A value that requests only snapshots created at or after the specified time.
     * The time value is specified in ISO 8601 format. For more information about ISO
     * 8601, go to the <a href="http://en.wikipedia.org/wiki/ISO_8601">ISO8601
     * Wikipedia page.</a> </p> <p>Example: <code>2012-07-16T18:00:00Z</code> </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>A value that requests only snapshots created at or after the specified time.
     * The time value is specified in ISO 8601 format. For more information about ISO
     * 8601, go to the <a href="http://en.wikipedia.org/wiki/ISO_8601">ISO8601
     * Wikipedia page.</a> </p> <p>Example: <code>2012-07-16T18:00:00Z</code> </p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>A value that requests only snapshots created at or after the specified time.
     * The time value is specified in ISO 8601 format. For more information about ISO
     * 8601, go to the <a href="http://en.wikipedia.org/wiki/ISO_8601">ISO8601
     * Wikipedia page.</a> </p> <p>Example: <code>2012-07-16T18:00:00Z</code> </p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>A value that requests only snapshots created at or after the specified time.
     * The time value is specified in ISO 8601 format. For more information about ISO
     * 8601, go to the <a href="http://en.wikipedia.org/wiki/ISO_8601">ISO8601
     * Wikipedia page.</a> </p> <p>Example: <code>2012-07-16T18:00:00Z</code> </p>
     */
    inline DescribeClusterSnapshotsRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>A value that requests only snapshots created at or after the specified time.
     * The time value is specified in ISO 8601 format. For more information about ISO
     * 8601, go to the <a href="http://en.wikipedia.org/wiki/ISO_8601">ISO8601
     * Wikipedia page.</a> </p> <p>Example: <code>2012-07-16T18:00:00Z</code> </p>
     */
    inline DescribeClusterSnapshotsRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(value); return *this;}

    /**
     * <p>A time value that requests only snapshots created at or before the specified
     * time. The time value is specified in ISO 8601 format. For more information about
     * ISO 8601, go to the <a href="http://en.wikipedia.org/wiki/ISO_8601">ISO8601
     * Wikipedia page.</a> </p> <p>Example: <code>2012-07-16T18:00:00Z</code> </p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>A time value that requests only snapshots created at or before the specified
     * time. The time value is specified in ISO 8601 format. For more information about
     * ISO 8601, go to the <a href="http://en.wikipedia.org/wiki/ISO_8601">ISO8601
     * Wikipedia page.</a> </p> <p>Example: <code>2012-07-16T18:00:00Z</code> </p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>A time value that requests only snapshots created at or before the specified
     * time. The time value is specified in ISO 8601 format. For more information about
     * ISO 8601, go to the <a href="http://en.wikipedia.org/wiki/ISO_8601">ISO8601
     * Wikipedia page.</a> </p> <p>Example: <code>2012-07-16T18:00:00Z</code> </p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>A time value that requests only snapshots created at or before the specified
     * time. The time value is specified in ISO 8601 format. For more information about
     * ISO 8601, go to the <a href="http://en.wikipedia.org/wiki/ISO_8601">ISO8601
     * Wikipedia page.</a> </p> <p>Example: <code>2012-07-16T18:00:00Z</code> </p>
     */
    inline DescribeClusterSnapshotsRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>A time value that requests only snapshots created at or before the specified
     * time. The time value is specified in ISO 8601 format. For more information about
     * ISO 8601, go to the <a href="http://en.wikipedia.org/wiki/ISO_8601">ISO8601
     * Wikipedia page.</a> </p> <p>Example: <code>2012-07-16T18:00:00Z</code> </p>
     */
    inline DescribeClusterSnapshotsRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(value); return *this;}

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
    inline DescribeClusterSnapshotsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeClusterSnapshots</a> request
     * exceed the value specified in <code>MaxRecords</code>, AWS returns a value in
     * the <code>Marker</code> field of the response. You can retrieve the next set of
     * response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeClusterSnapshots</a> request
     * exceed the value specified in <code>MaxRecords</code>, AWS returns a value in
     * the <code>Marker</code> field of the response. You can retrieve the next set of
     * response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request. </p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeClusterSnapshots</a> request
     * exceed the value specified in <code>MaxRecords</code>, AWS returns a value in
     * the <code>Marker</code> field of the response. You can retrieve the next set of
     * response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request. </p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeClusterSnapshots</a> request
     * exceed the value specified in <code>MaxRecords</code>, AWS returns a value in
     * the <code>Marker</code> field of the response. You can retrieve the next set of
     * response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request. </p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeClusterSnapshots</a> request
     * exceed the value specified in <code>MaxRecords</code>, AWS returns a value in
     * the <code>Marker</code> field of the response. You can retrieve the next set of
     * response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request. </p>
     */
    inline DescribeClusterSnapshotsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeClusterSnapshots</a> request
     * exceed the value specified in <code>MaxRecords</code>, AWS returns a value in
     * the <code>Marker</code> field of the response. You can retrieve the next set of
     * response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request. </p>
     */
    inline DescribeClusterSnapshotsRequest& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeClusterSnapshots</a> request
     * exceed the value specified in <code>MaxRecords</code>, AWS returns a value in
     * the <code>Marker</code> field of the response. You can retrieve the next set of
     * response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request. </p>
     */
    inline DescribeClusterSnapshotsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

    /**
     * <p>The AWS customer account used to create or copy the snapshot. Use this field
     * to filter the results to snapshots owned by a particular account. To describe
     * snapshots you own, either specify your AWS customer account, or do not specify
     * the parameter.</p>
     */
    inline const Aws::String& GetOwnerAccount() const{ return m_ownerAccount; }

    /**
     * <p>The AWS customer account used to create or copy the snapshot. Use this field
     * to filter the results to snapshots owned by a particular account. To describe
     * snapshots you own, either specify your AWS customer account, or do not specify
     * the parameter.</p>
     */
    inline void SetOwnerAccount(const Aws::String& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = value; }

    /**
     * <p>The AWS customer account used to create or copy the snapshot. Use this field
     * to filter the results to snapshots owned by a particular account. To describe
     * snapshots you own, either specify your AWS customer account, or do not specify
     * the parameter.</p>
     */
    inline void SetOwnerAccount(Aws::String&& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = value; }

    /**
     * <p>The AWS customer account used to create or copy the snapshot. Use this field
     * to filter the results to snapshots owned by a particular account. To describe
     * snapshots you own, either specify your AWS customer account, or do not specify
     * the parameter.</p>
     */
    inline void SetOwnerAccount(const char* value) { m_ownerAccountHasBeenSet = true; m_ownerAccount.assign(value); }

    /**
     * <p>The AWS customer account used to create or copy the snapshot. Use this field
     * to filter the results to snapshots owned by a particular account. To describe
     * snapshots you own, either specify your AWS customer account, or do not specify
     * the parameter.</p>
     */
    inline DescribeClusterSnapshotsRequest& WithOwnerAccount(const Aws::String& value) { SetOwnerAccount(value); return *this;}

    /**
     * <p>The AWS customer account used to create or copy the snapshot. Use this field
     * to filter the results to snapshots owned by a particular account. To describe
     * snapshots you own, either specify your AWS customer account, or do not specify
     * the parameter.</p>
     */
    inline DescribeClusterSnapshotsRequest& WithOwnerAccount(Aws::String&& value) { SetOwnerAccount(value); return *this;}

    /**
     * <p>The AWS customer account used to create or copy the snapshot. Use this field
     * to filter the results to snapshots owned by a particular account. To describe
     * snapshots you own, either specify your AWS customer account, or do not specify
     * the parameter.</p>
     */
    inline DescribeClusterSnapshotsRequest& WithOwnerAccount(const char* value) { SetOwnerAccount(value); return *this;}

    /**
     * <p>A tag key or keys for which you want to return all matching cluster snapshots
     * that are associated with the specified key or keys. For example, suppose that
     * you have snapshots that are tagged with keys called <code>owner</code> and
     * <code>environment</code>. If you specify both of these tag keys in the request,
     * Amazon Redshift returns a response with the snapshots that have either or both
     * of these tag keys associated with them.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagKeys() const{ return m_tagKeys; }

    /**
     * <p>A tag key or keys for which you want to return all matching cluster snapshots
     * that are associated with the specified key or keys. For example, suppose that
     * you have snapshots that are tagged with keys called <code>owner</code> and
     * <code>environment</code>. If you specify both of these tag keys in the request,
     * Amazon Redshift returns a response with the snapshots that have either or both
     * of these tag keys associated with them.</p>
     */
    inline void SetTagKeys(const Aws::Vector<Aws::String>& value) { m_tagKeysHasBeenSet = true; m_tagKeys = value; }

    /**
     * <p>A tag key or keys for which you want to return all matching cluster snapshots
     * that are associated with the specified key or keys. For example, suppose that
     * you have snapshots that are tagged with keys called <code>owner</code> and
     * <code>environment</code>. If you specify both of these tag keys in the request,
     * Amazon Redshift returns a response with the snapshots that have either or both
     * of these tag keys associated with them.</p>
     */
    inline void SetTagKeys(Aws::Vector<Aws::String>&& value) { m_tagKeysHasBeenSet = true; m_tagKeys = value; }

    /**
     * <p>A tag key or keys for which you want to return all matching cluster snapshots
     * that are associated with the specified key or keys. For example, suppose that
     * you have snapshots that are tagged with keys called <code>owner</code> and
     * <code>environment</code>. If you specify both of these tag keys in the request,
     * Amazon Redshift returns a response with the snapshots that have either or both
     * of these tag keys associated with them.</p>
     */
    inline DescribeClusterSnapshotsRequest& WithTagKeys(const Aws::Vector<Aws::String>& value) { SetTagKeys(value); return *this;}

    /**
     * <p>A tag key or keys for which you want to return all matching cluster snapshots
     * that are associated with the specified key or keys. For example, suppose that
     * you have snapshots that are tagged with keys called <code>owner</code> and
     * <code>environment</code>. If you specify both of these tag keys in the request,
     * Amazon Redshift returns a response with the snapshots that have either or both
     * of these tag keys associated with them.</p>
     */
    inline DescribeClusterSnapshotsRequest& WithTagKeys(Aws::Vector<Aws::String>&& value) { SetTagKeys(value); return *this;}

    /**
     * <p>A tag key or keys for which you want to return all matching cluster snapshots
     * that are associated with the specified key or keys. For example, suppose that
     * you have snapshots that are tagged with keys called <code>owner</code> and
     * <code>environment</code>. If you specify both of these tag keys in the request,
     * Amazon Redshift returns a response with the snapshots that have either or both
     * of these tag keys associated with them.</p>
     */
    inline DescribeClusterSnapshotsRequest& AddTagKeys(const Aws::String& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

    /**
     * <p>A tag key or keys for which you want to return all matching cluster snapshots
     * that are associated with the specified key or keys. For example, suppose that
     * you have snapshots that are tagged with keys called <code>owner</code> and
     * <code>environment</code>. If you specify both of these tag keys in the request,
     * Amazon Redshift returns a response with the snapshots that have either or both
     * of these tag keys associated with them.</p>
     */
    inline DescribeClusterSnapshotsRequest& AddTagKeys(Aws::String&& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

    /**
     * <p>A tag key or keys for which you want to return all matching cluster snapshots
     * that are associated with the specified key or keys. For example, suppose that
     * you have snapshots that are tagged with keys called <code>owner</code> and
     * <code>environment</code>. If you specify both of these tag keys in the request,
     * Amazon Redshift returns a response with the snapshots that have either or both
     * of these tag keys associated with them.</p>
     */
    inline DescribeClusterSnapshotsRequest& AddTagKeys(const char* value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

    /**
     * <p>A tag value or values for which you want to return all matching cluster
     * snapshots that are associated with the specified tag value or values. For
     * example, suppose that you have snapshots that are tagged with values called
     * <code>admin</code> and <code>test</code>. If you specify both of these tag
     * values in the request, Amazon Redshift returns a response with the snapshots
     * that have either or both of these tag values associated with them.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagValues() const{ return m_tagValues; }

    /**
     * <p>A tag value or values for which you want to return all matching cluster
     * snapshots that are associated with the specified tag value or values. For
     * example, suppose that you have snapshots that are tagged with values called
     * <code>admin</code> and <code>test</code>. If you specify both of these tag
     * values in the request, Amazon Redshift returns a response with the snapshots
     * that have either or both of these tag values associated with them.</p>
     */
    inline void SetTagValues(const Aws::Vector<Aws::String>& value) { m_tagValuesHasBeenSet = true; m_tagValues = value; }

    /**
     * <p>A tag value or values for which you want to return all matching cluster
     * snapshots that are associated with the specified tag value or values. For
     * example, suppose that you have snapshots that are tagged with values called
     * <code>admin</code> and <code>test</code>. If you specify both of these tag
     * values in the request, Amazon Redshift returns a response with the snapshots
     * that have either or both of these tag values associated with them.</p>
     */
    inline void SetTagValues(Aws::Vector<Aws::String>&& value) { m_tagValuesHasBeenSet = true; m_tagValues = value; }

    /**
     * <p>A tag value or values for which you want to return all matching cluster
     * snapshots that are associated with the specified tag value or values. For
     * example, suppose that you have snapshots that are tagged with values called
     * <code>admin</code> and <code>test</code>. If you specify both of these tag
     * values in the request, Amazon Redshift returns a response with the snapshots
     * that have either or both of these tag values associated with them.</p>
     */
    inline DescribeClusterSnapshotsRequest& WithTagValues(const Aws::Vector<Aws::String>& value) { SetTagValues(value); return *this;}

    /**
     * <p>A tag value or values for which you want to return all matching cluster
     * snapshots that are associated with the specified tag value or values. For
     * example, suppose that you have snapshots that are tagged with values called
     * <code>admin</code> and <code>test</code>. If you specify both of these tag
     * values in the request, Amazon Redshift returns a response with the snapshots
     * that have either or both of these tag values associated with them.</p>
     */
    inline DescribeClusterSnapshotsRequest& WithTagValues(Aws::Vector<Aws::String>&& value) { SetTagValues(value); return *this;}

    /**
     * <p>A tag value or values for which you want to return all matching cluster
     * snapshots that are associated with the specified tag value or values. For
     * example, suppose that you have snapshots that are tagged with values called
     * <code>admin</code> and <code>test</code>. If you specify both of these tag
     * values in the request, Amazon Redshift returns a response with the snapshots
     * that have either or both of these tag values associated with them.</p>
     */
    inline DescribeClusterSnapshotsRequest& AddTagValues(const Aws::String& value) { m_tagValuesHasBeenSet = true; m_tagValues.push_back(value); return *this; }

    /**
     * <p>A tag value or values for which you want to return all matching cluster
     * snapshots that are associated with the specified tag value or values. For
     * example, suppose that you have snapshots that are tagged with values called
     * <code>admin</code> and <code>test</code>. If you specify both of these tag
     * values in the request, Amazon Redshift returns a response with the snapshots
     * that have either or both of these tag values associated with them.</p>
     */
    inline DescribeClusterSnapshotsRequest& AddTagValues(Aws::String&& value) { m_tagValuesHasBeenSet = true; m_tagValues.push_back(value); return *this; }

    /**
     * <p>A tag value or values for which you want to return all matching cluster
     * snapshots that are associated with the specified tag value or values. For
     * example, suppose that you have snapshots that are tagged with values called
     * <code>admin</code> and <code>test</code>. If you specify both of these tag
     * values in the request, Amazon Redshift returns a response with the snapshots
     * that have either or both of these tag values associated with them.</p>
     */
    inline DescribeClusterSnapshotsRequest& AddTagValues(const char* value) { m_tagValuesHasBeenSet = true; m_tagValues.push_back(value); return *this; }

  private:
    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet;
    Aws::String m_snapshotIdentifier;
    bool m_snapshotIdentifierHasBeenSet;
    Aws::String m_snapshotType;
    bool m_snapshotTypeHasBeenSet;
    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;
    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet;
    int m_maxRecords;
    bool m_maxRecordsHasBeenSet;
    Aws::String m_marker;
    bool m_markerHasBeenSet;
    Aws::String m_ownerAccount;
    bool m_ownerAccountHasBeenSet;
    Aws::Vector<Aws::String> m_tagKeys;
    bool m_tagKeysHasBeenSet;
    Aws::Vector<Aws::String> m_tagValues;
    bool m_tagValuesHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
