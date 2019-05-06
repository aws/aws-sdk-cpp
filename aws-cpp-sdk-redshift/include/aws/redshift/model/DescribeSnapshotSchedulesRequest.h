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
   */
  class AWS_REDSHIFT_API DescribeSnapshotSchedulesRequest : public RedshiftRequest
  {
  public:
    DescribeSnapshotSchedulesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeSnapshotSchedules"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The unique identifier for the cluster whose snapshot schedules you want to
     * view.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }

    /**
     * <p>The unique identifier for the cluster whose snapshot schedules you want to
     * view.</p>
     */
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }

    /**
     * <p>The unique identifier for the cluster whose snapshot schedules you want to
     * view.</p>
     */
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }

    /**
     * <p>The unique identifier for the cluster whose snapshot schedules you want to
     * view.</p>
     */
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }

    /**
     * <p>The unique identifier for the cluster whose snapshot schedules you want to
     * view.</p>
     */
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }

    /**
     * <p>The unique identifier for the cluster whose snapshot schedules you want to
     * view.</p>
     */
    inline DescribeSnapshotSchedulesRequest& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p>The unique identifier for the cluster whose snapshot schedules you want to
     * view.</p>
     */
    inline DescribeSnapshotSchedulesRequest& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the cluster whose snapshot schedules you want to
     * view.</p>
     */
    inline DescribeSnapshotSchedulesRequest& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}


    /**
     * <p>A unique identifier for a snapshot schedule.</p>
     */
    inline const Aws::String& GetScheduleIdentifier() const{ return m_scheduleIdentifier; }

    /**
     * <p>A unique identifier for a snapshot schedule.</p>
     */
    inline bool ScheduleIdentifierHasBeenSet() const { return m_scheduleIdentifierHasBeenSet; }

    /**
     * <p>A unique identifier for a snapshot schedule.</p>
     */
    inline void SetScheduleIdentifier(const Aws::String& value) { m_scheduleIdentifierHasBeenSet = true; m_scheduleIdentifier = value; }

    /**
     * <p>A unique identifier for a snapshot schedule.</p>
     */
    inline void SetScheduleIdentifier(Aws::String&& value) { m_scheduleIdentifierHasBeenSet = true; m_scheduleIdentifier = std::move(value); }

    /**
     * <p>A unique identifier for a snapshot schedule.</p>
     */
    inline void SetScheduleIdentifier(const char* value) { m_scheduleIdentifierHasBeenSet = true; m_scheduleIdentifier.assign(value); }

    /**
     * <p>A unique identifier for a snapshot schedule.</p>
     */
    inline DescribeSnapshotSchedulesRequest& WithScheduleIdentifier(const Aws::String& value) { SetScheduleIdentifier(value); return *this;}

    /**
     * <p>A unique identifier for a snapshot schedule.</p>
     */
    inline DescribeSnapshotSchedulesRequest& WithScheduleIdentifier(Aws::String&& value) { SetScheduleIdentifier(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for a snapshot schedule.</p>
     */
    inline DescribeSnapshotSchedulesRequest& WithScheduleIdentifier(const char* value) { SetScheduleIdentifier(value); return *this;}


    /**
     * <p>The key value for a snapshot schedule tag.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagKeys() const{ return m_tagKeys; }

    /**
     * <p>The key value for a snapshot schedule tag.</p>
     */
    inline bool TagKeysHasBeenSet() const { return m_tagKeysHasBeenSet; }

    /**
     * <p>The key value for a snapshot schedule tag.</p>
     */
    inline void SetTagKeys(const Aws::Vector<Aws::String>& value) { m_tagKeysHasBeenSet = true; m_tagKeys = value; }

    /**
     * <p>The key value for a snapshot schedule tag.</p>
     */
    inline void SetTagKeys(Aws::Vector<Aws::String>&& value) { m_tagKeysHasBeenSet = true; m_tagKeys = std::move(value); }

    /**
     * <p>The key value for a snapshot schedule tag.</p>
     */
    inline DescribeSnapshotSchedulesRequest& WithTagKeys(const Aws::Vector<Aws::String>& value) { SetTagKeys(value); return *this;}

    /**
     * <p>The key value for a snapshot schedule tag.</p>
     */
    inline DescribeSnapshotSchedulesRequest& WithTagKeys(Aws::Vector<Aws::String>&& value) { SetTagKeys(std::move(value)); return *this;}

    /**
     * <p>The key value for a snapshot schedule tag.</p>
     */
    inline DescribeSnapshotSchedulesRequest& AddTagKeys(const Aws::String& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

    /**
     * <p>The key value for a snapshot schedule tag.</p>
     */
    inline DescribeSnapshotSchedulesRequest& AddTagKeys(Aws::String&& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(std::move(value)); return *this; }

    /**
     * <p>The key value for a snapshot schedule tag.</p>
     */
    inline DescribeSnapshotSchedulesRequest& AddTagKeys(const char* value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }


    /**
     * <p>The value corresponding to the key of the snapshot schedule tag.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagValues() const{ return m_tagValues; }

    /**
     * <p>The value corresponding to the key of the snapshot schedule tag.</p>
     */
    inline bool TagValuesHasBeenSet() const { return m_tagValuesHasBeenSet; }

    /**
     * <p>The value corresponding to the key of the snapshot schedule tag.</p>
     */
    inline void SetTagValues(const Aws::Vector<Aws::String>& value) { m_tagValuesHasBeenSet = true; m_tagValues = value; }

    /**
     * <p>The value corresponding to the key of the snapshot schedule tag.</p>
     */
    inline void SetTagValues(Aws::Vector<Aws::String>&& value) { m_tagValuesHasBeenSet = true; m_tagValues = std::move(value); }

    /**
     * <p>The value corresponding to the key of the snapshot schedule tag.</p>
     */
    inline DescribeSnapshotSchedulesRequest& WithTagValues(const Aws::Vector<Aws::String>& value) { SetTagValues(value); return *this;}

    /**
     * <p>The value corresponding to the key of the snapshot schedule tag.</p>
     */
    inline DescribeSnapshotSchedulesRequest& WithTagValues(Aws::Vector<Aws::String>&& value) { SetTagValues(std::move(value)); return *this;}

    /**
     * <p>The value corresponding to the key of the snapshot schedule tag.</p>
     */
    inline DescribeSnapshotSchedulesRequest& AddTagValues(const Aws::String& value) { m_tagValuesHasBeenSet = true; m_tagValues.push_back(value); return *this; }

    /**
     * <p>The value corresponding to the key of the snapshot schedule tag.</p>
     */
    inline DescribeSnapshotSchedulesRequest& AddTagValues(Aws::String&& value) { m_tagValuesHasBeenSet = true; m_tagValues.push_back(std::move(value)); return *this; }

    /**
     * <p>The value corresponding to the key of the snapshot schedule tag.</p>
     */
    inline DescribeSnapshotSchedulesRequest& AddTagValues(const char* value) { m_tagValuesHasBeenSet = true; m_tagValues.push_back(value); return *this; }


    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>marker</code> parameter and retrying the command. If the
     * <code>marker</code> field is empty, all response records have been retrieved for
     * the request.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>marker</code> parameter and retrying the command. If the
     * <code>marker</code> field is empty, all response records have been retrieved for
     * the request.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>marker</code> parameter and retrying the command. If the
     * <code>marker</code> field is empty, all response records have been retrieved for
     * the request.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>marker</code> parameter and retrying the command. If the
     * <code>marker</code> field is empty, all response records have been retrieved for
     * the request.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>marker</code> parameter and retrying the command. If the
     * <code>marker</code> field is empty, all response records have been retrieved for
     * the request.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>marker</code> parameter and retrying the command. If the
     * <code>marker</code> field is empty, all response records have been retrieved for
     * the request.</p>
     */
    inline DescribeSnapshotSchedulesRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>marker</code> parameter and retrying the command. If the
     * <code>marker</code> field is empty, all response records have been retrieved for
     * the request.</p>
     */
    inline DescribeSnapshotSchedulesRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>marker</code> parameter and retrying the command. If the
     * <code>marker</code> field is empty, all response records have been retrieved for
     * the request.</p>
     */
    inline DescribeSnapshotSchedulesRequest& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>The maximum number or response records to return in each call. If the number
     * of remaining response records exceeds the specified <code>MaxRecords</code>
     * value, a value is returned in a <code>marker</code> field of the response. You
     * can retrieve the next set of records by retrying the command with the returned
     * <code>marker</code> value.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p>The maximum number or response records to return in each call. If the number
     * of remaining response records exceeds the specified <code>MaxRecords</code>
     * value, a value is returned in a <code>marker</code> field of the response. You
     * can retrieve the next set of records by retrying the command with the returned
     * <code>marker</code> value.</p>
     */
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }

    /**
     * <p>The maximum number or response records to return in each call. If the number
     * of remaining response records exceeds the specified <code>MaxRecords</code>
     * value, a value is returned in a <code>marker</code> field of the response. You
     * can retrieve the next set of records by retrying the command with the returned
     * <code>marker</code> value.</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p>The maximum number or response records to return in each call. If the number
     * of remaining response records exceeds the specified <code>MaxRecords</code>
     * value, a value is returned in a <code>marker</code> field of the response. You
     * can retrieve the next set of records by retrying the command with the returned
     * <code>marker</code> value.</p>
     */
    inline DescribeSnapshotSchedulesRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}

  private:

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet;

    Aws::String m_scheduleIdentifier;
    bool m_scheduleIdentifierHasBeenSet;

    Aws::Vector<Aws::String> m_tagKeys;
    bool m_tagKeysHasBeenSet;

    Aws::Vector<Aws::String> m_tagValues;
    bool m_tagValuesHasBeenSet;

    Aws::String m_marker;
    bool m_markerHasBeenSet;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
