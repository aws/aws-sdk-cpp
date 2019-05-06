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
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/SnapshotSortingEntity.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DescribeClusterSnapshotsMessage">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API DescribeClusterSnapshotsRequest : public RedshiftRequest
  {
  public:
    DescribeClusterSnapshotsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeClusterSnapshots"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The identifier of the cluster which generated the requested snapshots.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }

    /**
     * <p>The identifier of the cluster which generated the requested snapshots.</p>
     */
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the cluster which generated the requested snapshots.</p>
     */
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }

    /**
     * <p>The identifier of the cluster which generated the requested snapshots.</p>
     */
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }

    /**
     * <p>The identifier of the cluster which generated the requested snapshots.</p>
     */
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }

    /**
     * <p>The identifier of the cluster which generated the requested snapshots.</p>
     */
    inline DescribeClusterSnapshotsRequest& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p>The identifier of the cluster which generated the requested snapshots.</p>
     */
    inline DescribeClusterSnapshotsRequest& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the cluster which generated the requested snapshots.</p>
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
    inline bool SnapshotIdentifierHasBeenSet() const { return m_snapshotIdentifierHasBeenSet; }

    /**
     * <p>The snapshot identifier of the snapshot about which to return
     * information.</p>
     */
    inline void SetSnapshotIdentifier(const Aws::String& value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier = value; }

    /**
     * <p>The snapshot identifier of the snapshot about which to return
     * information.</p>
     */
    inline void SetSnapshotIdentifier(Aws::String&& value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier = std::move(value); }

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
    inline DescribeClusterSnapshotsRequest& WithSnapshotIdentifier(Aws::String&& value) { SetSnapshotIdentifier(std::move(value)); return *this;}

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
    inline bool SnapshotTypeHasBeenSet() const { return m_snapshotTypeHasBeenSet; }

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
    inline void SetSnapshotType(Aws::String&& value) { m_snapshotTypeHasBeenSet = true; m_snapshotType = std::move(value); }

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
    inline DescribeClusterSnapshotsRequest& WithSnapshotType(Aws::String&& value) { SetSnapshotType(std::move(value)); return *this;}

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
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

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
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

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
    inline DescribeClusterSnapshotsRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


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
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

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
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

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
    inline DescribeClusterSnapshotsRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


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
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

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
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

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
    inline DescribeClusterSnapshotsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

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
    inline bool OwnerAccountHasBeenSet() const { return m_ownerAccountHasBeenSet; }

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
    inline void SetOwnerAccount(Aws::String&& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = std::move(value); }

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
    inline DescribeClusterSnapshotsRequest& WithOwnerAccount(Aws::String&& value) { SetOwnerAccount(std::move(value)); return *this;}

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
    inline bool TagKeysHasBeenSet() const { return m_tagKeysHasBeenSet; }

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
    inline void SetTagKeys(Aws::Vector<Aws::String>&& value) { m_tagKeysHasBeenSet = true; m_tagKeys = std::move(value); }

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
    inline DescribeClusterSnapshotsRequest& WithTagKeys(Aws::Vector<Aws::String>&& value) { SetTagKeys(std::move(value)); return *this;}

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
    inline DescribeClusterSnapshotsRequest& AddTagKeys(Aws::String&& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(std::move(value)); return *this; }

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
    inline bool TagValuesHasBeenSet() const { return m_tagValuesHasBeenSet; }

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
    inline void SetTagValues(Aws::Vector<Aws::String>&& value) { m_tagValuesHasBeenSet = true; m_tagValues = std::move(value); }

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
    inline DescribeClusterSnapshotsRequest& WithTagValues(Aws::Vector<Aws::String>&& value) { SetTagValues(std::move(value)); return *this;}

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
    inline DescribeClusterSnapshotsRequest& AddTagValues(Aws::String&& value) { m_tagValuesHasBeenSet = true; m_tagValues.push_back(std::move(value)); return *this; }

    /**
     * <p>A tag value or values for which you want to return all matching cluster
     * snapshots that are associated with the specified tag value or values. For
     * example, suppose that you have snapshots that are tagged with values called
     * <code>admin</code> and <code>test</code>. If you specify both of these tag
     * values in the request, Amazon Redshift returns a response with the snapshots
     * that have either or both of these tag values associated with them.</p>
     */
    inline DescribeClusterSnapshotsRequest& AddTagValues(const char* value) { m_tagValuesHasBeenSet = true; m_tagValues.push_back(value); return *this; }


    /**
     * <p>A value that indicates whether to return snapshots only for an existing
     * cluster. You can perform table-level restore only by using a snapshot of an
     * existing cluster, that is, a cluster that has not been deleted. Values for this
     * parameter work as follows: </p> <ul> <li> <p>If <code>ClusterExists</code> is
     * set to <code>true</code>, <code>ClusterIdentifier</code> is required.</p> </li>
     * <li> <p>If <code>ClusterExists</code> is set to <code>false</code> and
     * <code>ClusterIdentifier</code> isn't specified, all snapshots associated with
     * deleted clusters (orphaned snapshots) are returned. </p> </li> <li> <p>If
     * <code>ClusterExists</code> is set to <code>false</code> and
     * <code>ClusterIdentifier</code> is specified for a deleted cluster, snapshots
     * associated with that cluster are returned.</p> </li> <li> <p>If
     * <code>ClusterExists</code> is set to <code>false</code> and
     * <code>ClusterIdentifier</code> is specified for an existing cluster, no
     * snapshots are returned. </p> </li> </ul>
     */
    inline bool GetClusterExists() const{ return m_clusterExists; }

    /**
     * <p>A value that indicates whether to return snapshots only for an existing
     * cluster. You can perform table-level restore only by using a snapshot of an
     * existing cluster, that is, a cluster that has not been deleted. Values for this
     * parameter work as follows: </p> <ul> <li> <p>If <code>ClusterExists</code> is
     * set to <code>true</code>, <code>ClusterIdentifier</code> is required.</p> </li>
     * <li> <p>If <code>ClusterExists</code> is set to <code>false</code> and
     * <code>ClusterIdentifier</code> isn't specified, all snapshots associated with
     * deleted clusters (orphaned snapshots) are returned. </p> </li> <li> <p>If
     * <code>ClusterExists</code> is set to <code>false</code> and
     * <code>ClusterIdentifier</code> is specified for a deleted cluster, snapshots
     * associated with that cluster are returned.</p> </li> <li> <p>If
     * <code>ClusterExists</code> is set to <code>false</code> and
     * <code>ClusterIdentifier</code> is specified for an existing cluster, no
     * snapshots are returned. </p> </li> </ul>
     */
    inline bool ClusterExistsHasBeenSet() const { return m_clusterExistsHasBeenSet; }

    /**
     * <p>A value that indicates whether to return snapshots only for an existing
     * cluster. You can perform table-level restore only by using a snapshot of an
     * existing cluster, that is, a cluster that has not been deleted. Values for this
     * parameter work as follows: </p> <ul> <li> <p>If <code>ClusterExists</code> is
     * set to <code>true</code>, <code>ClusterIdentifier</code> is required.</p> </li>
     * <li> <p>If <code>ClusterExists</code> is set to <code>false</code> and
     * <code>ClusterIdentifier</code> isn't specified, all snapshots associated with
     * deleted clusters (orphaned snapshots) are returned. </p> </li> <li> <p>If
     * <code>ClusterExists</code> is set to <code>false</code> and
     * <code>ClusterIdentifier</code> is specified for a deleted cluster, snapshots
     * associated with that cluster are returned.</p> </li> <li> <p>If
     * <code>ClusterExists</code> is set to <code>false</code> and
     * <code>ClusterIdentifier</code> is specified for an existing cluster, no
     * snapshots are returned. </p> </li> </ul>
     */
    inline void SetClusterExists(bool value) { m_clusterExistsHasBeenSet = true; m_clusterExists = value; }

    /**
     * <p>A value that indicates whether to return snapshots only for an existing
     * cluster. You can perform table-level restore only by using a snapshot of an
     * existing cluster, that is, a cluster that has not been deleted. Values for this
     * parameter work as follows: </p> <ul> <li> <p>If <code>ClusterExists</code> is
     * set to <code>true</code>, <code>ClusterIdentifier</code> is required.</p> </li>
     * <li> <p>If <code>ClusterExists</code> is set to <code>false</code> and
     * <code>ClusterIdentifier</code> isn't specified, all snapshots associated with
     * deleted clusters (orphaned snapshots) are returned. </p> </li> <li> <p>If
     * <code>ClusterExists</code> is set to <code>false</code> and
     * <code>ClusterIdentifier</code> is specified for a deleted cluster, snapshots
     * associated with that cluster are returned.</p> </li> <li> <p>If
     * <code>ClusterExists</code> is set to <code>false</code> and
     * <code>ClusterIdentifier</code> is specified for an existing cluster, no
     * snapshots are returned. </p> </li> </ul>
     */
    inline DescribeClusterSnapshotsRequest& WithClusterExists(bool value) { SetClusterExists(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::Vector<SnapshotSortingEntity>& GetSortingEntities() const{ return m_sortingEntities; }

    /**
     * <p/>
     */
    inline bool SortingEntitiesHasBeenSet() const { return m_sortingEntitiesHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetSortingEntities(const Aws::Vector<SnapshotSortingEntity>& value) { m_sortingEntitiesHasBeenSet = true; m_sortingEntities = value; }

    /**
     * <p/>
     */
    inline void SetSortingEntities(Aws::Vector<SnapshotSortingEntity>&& value) { m_sortingEntitiesHasBeenSet = true; m_sortingEntities = std::move(value); }

    /**
     * <p/>
     */
    inline DescribeClusterSnapshotsRequest& WithSortingEntities(const Aws::Vector<SnapshotSortingEntity>& value) { SetSortingEntities(value); return *this;}

    /**
     * <p/>
     */
    inline DescribeClusterSnapshotsRequest& WithSortingEntities(Aws::Vector<SnapshotSortingEntity>&& value) { SetSortingEntities(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline DescribeClusterSnapshotsRequest& AddSortingEntities(const SnapshotSortingEntity& value) { m_sortingEntitiesHasBeenSet = true; m_sortingEntities.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline DescribeClusterSnapshotsRequest& AddSortingEntities(SnapshotSortingEntity&& value) { m_sortingEntitiesHasBeenSet = true; m_sortingEntities.push_back(std::move(value)); return *this; }

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

    bool m_clusterExists;
    bool m_clusterExistsHasBeenSet;

    Aws::Vector<SnapshotSortingEntity> m_sortingEntities;
    bool m_sortingEntitiesHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
