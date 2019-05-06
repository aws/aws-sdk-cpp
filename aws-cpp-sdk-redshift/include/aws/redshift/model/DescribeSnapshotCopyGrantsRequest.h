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
   * <p>The result of the <code>DescribeSnapshotCopyGrants</code>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DescribeSnapshotCopyGrantsMessage">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API DescribeSnapshotCopyGrantsRequest : public RedshiftRequest
  {
  public:
    DescribeSnapshotCopyGrantsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeSnapshotCopyGrants"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the snapshot copy grant.</p>
     */
    inline const Aws::String& GetSnapshotCopyGrantName() const{ return m_snapshotCopyGrantName; }

    /**
     * <p>The name of the snapshot copy grant.</p>
     */
    inline bool SnapshotCopyGrantNameHasBeenSet() const { return m_snapshotCopyGrantNameHasBeenSet; }

    /**
     * <p>The name of the snapshot copy grant.</p>
     */
    inline void SetSnapshotCopyGrantName(const Aws::String& value) { m_snapshotCopyGrantNameHasBeenSet = true; m_snapshotCopyGrantName = value; }

    /**
     * <p>The name of the snapshot copy grant.</p>
     */
    inline void SetSnapshotCopyGrantName(Aws::String&& value) { m_snapshotCopyGrantNameHasBeenSet = true; m_snapshotCopyGrantName = std::move(value); }

    /**
     * <p>The name of the snapshot copy grant.</p>
     */
    inline void SetSnapshotCopyGrantName(const char* value) { m_snapshotCopyGrantNameHasBeenSet = true; m_snapshotCopyGrantName.assign(value); }

    /**
     * <p>The name of the snapshot copy grant.</p>
     */
    inline DescribeSnapshotCopyGrantsRequest& WithSnapshotCopyGrantName(const Aws::String& value) { SetSnapshotCopyGrantName(value); return *this;}

    /**
     * <p>The name of the snapshot copy grant.</p>
     */
    inline DescribeSnapshotCopyGrantsRequest& WithSnapshotCopyGrantName(Aws::String&& value) { SetSnapshotCopyGrantName(std::move(value)); return *this;}

    /**
     * <p>The name of the snapshot copy grant.</p>
     */
    inline DescribeSnapshotCopyGrantsRequest& WithSnapshotCopyGrantName(const char* value) { SetSnapshotCopyGrantName(value); return *this;}


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
    inline DescribeSnapshotCopyGrantsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}


    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <code>DescribeSnapshotCopyGrant</code>
     * request exceed the value specified in <code>MaxRecords</code>, AWS returns a
     * value in the <code>Marker</code> field of the response. You can retrieve the
     * next set of response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request. </p> <p>Constraints: You
     * can specify either the <b>SnapshotCopyGrantName</b> parameter or the
     * <b>Marker</b> parameter, but not both. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <code>DescribeSnapshotCopyGrant</code>
     * request exceed the value specified in <code>MaxRecords</code>, AWS returns a
     * value in the <code>Marker</code> field of the response. You can retrieve the
     * next set of response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request. </p> <p>Constraints: You
     * can specify either the <b>SnapshotCopyGrantName</b> parameter or the
     * <b>Marker</b> parameter, but not both. </p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <code>DescribeSnapshotCopyGrant</code>
     * request exceed the value specified in <code>MaxRecords</code>, AWS returns a
     * value in the <code>Marker</code> field of the response. You can retrieve the
     * next set of response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request. </p> <p>Constraints: You
     * can specify either the <b>SnapshotCopyGrantName</b> parameter or the
     * <b>Marker</b> parameter, but not both. </p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <code>DescribeSnapshotCopyGrant</code>
     * request exceed the value specified in <code>MaxRecords</code>, AWS returns a
     * value in the <code>Marker</code> field of the response. You can retrieve the
     * next set of response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request. </p> <p>Constraints: You
     * can specify either the <b>SnapshotCopyGrantName</b> parameter or the
     * <b>Marker</b> parameter, but not both. </p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <code>DescribeSnapshotCopyGrant</code>
     * request exceed the value specified in <code>MaxRecords</code>, AWS returns a
     * value in the <code>Marker</code> field of the response. You can retrieve the
     * next set of response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request. </p> <p>Constraints: You
     * can specify either the <b>SnapshotCopyGrantName</b> parameter or the
     * <b>Marker</b> parameter, but not both. </p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <code>DescribeSnapshotCopyGrant</code>
     * request exceed the value specified in <code>MaxRecords</code>, AWS returns a
     * value in the <code>Marker</code> field of the response. You can retrieve the
     * next set of response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request. </p> <p>Constraints: You
     * can specify either the <b>SnapshotCopyGrantName</b> parameter or the
     * <b>Marker</b> parameter, but not both. </p>
     */
    inline DescribeSnapshotCopyGrantsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <code>DescribeSnapshotCopyGrant</code>
     * request exceed the value specified in <code>MaxRecords</code>, AWS returns a
     * value in the <code>Marker</code> field of the response. You can retrieve the
     * next set of response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request. </p> <p>Constraints: You
     * can specify either the <b>SnapshotCopyGrantName</b> parameter or the
     * <b>Marker</b> parameter, but not both. </p>
     */
    inline DescribeSnapshotCopyGrantsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <code>DescribeSnapshotCopyGrant</code>
     * request exceed the value specified in <code>MaxRecords</code>, AWS returns a
     * value in the <code>Marker</code> field of the response. You can retrieve the
     * next set of response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request. </p> <p>Constraints: You
     * can specify either the <b>SnapshotCopyGrantName</b> parameter or the
     * <b>Marker</b> parameter, but not both. </p>
     */
    inline DescribeSnapshotCopyGrantsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>A tag key or keys for which you want to return all matching resources that
     * are associated with the specified key or keys. For example, suppose that you
     * have resources tagged with keys called <code>owner</code> and
     * <code>environment</code>. If you specify both of these tag keys in the request,
     * Amazon Redshift returns a response with all resources that have either or both
     * of these tag keys associated with them.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagKeys() const{ return m_tagKeys; }

    /**
     * <p>A tag key or keys for which you want to return all matching resources that
     * are associated with the specified key or keys. For example, suppose that you
     * have resources tagged with keys called <code>owner</code> and
     * <code>environment</code>. If you specify both of these tag keys in the request,
     * Amazon Redshift returns a response with all resources that have either or both
     * of these tag keys associated with them.</p>
     */
    inline bool TagKeysHasBeenSet() const { return m_tagKeysHasBeenSet; }

    /**
     * <p>A tag key or keys for which you want to return all matching resources that
     * are associated with the specified key or keys. For example, suppose that you
     * have resources tagged with keys called <code>owner</code> and
     * <code>environment</code>. If you specify both of these tag keys in the request,
     * Amazon Redshift returns a response with all resources that have either or both
     * of these tag keys associated with them.</p>
     */
    inline void SetTagKeys(const Aws::Vector<Aws::String>& value) { m_tagKeysHasBeenSet = true; m_tagKeys = value; }

    /**
     * <p>A tag key or keys for which you want to return all matching resources that
     * are associated with the specified key or keys. For example, suppose that you
     * have resources tagged with keys called <code>owner</code> and
     * <code>environment</code>. If you specify both of these tag keys in the request,
     * Amazon Redshift returns a response with all resources that have either or both
     * of these tag keys associated with them.</p>
     */
    inline void SetTagKeys(Aws::Vector<Aws::String>&& value) { m_tagKeysHasBeenSet = true; m_tagKeys = std::move(value); }

    /**
     * <p>A tag key or keys for which you want to return all matching resources that
     * are associated with the specified key or keys. For example, suppose that you
     * have resources tagged with keys called <code>owner</code> and
     * <code>environment</code>. If you specify both of these tag keys in the request,
     * Amazon Redshift returns a response with all resources that have either or both
     * of these tag keys associated with them.</p>
     */
    inline DescribeSnapshotCopyGrantsRequest& WithTagKeys(const Aws::Vector<Aws::String>& value) { SetTagKeys(value); return *this;}

    /**
     * <p>A tag key or keys for which you want to return all matching resources that
     * are associated with the specified key or keys. For example, suppose that you
     * have resources tagged with keys called <code>owner</code> and
     * <code>environment</code>. If you specify both of these tag keys in the request,
     * Amazon Redshift returns a response with all resources that have either or both
     * of these tag keys associated with them.</p>
     */
    inline DescribeSnapshotCopyGrantsRequest& WithTagKeys(Aws::Vector<Aws::String>&& value) { SetTagKeys(std::move(value)); return *this;}

    /**
     * <p>A tag key or keys for which you want to return all matching resources that
     * are associated with the specified key or keys. For example, suppose that you
     * have resources tagged with keys called <code>owner</code> and
     * <code>environment</code>. If you specify both of these tag keys in the request,
     * Amazon Redshift returns a response with all resources that have either or both
     * of these tag keys associated with them.</p>
     */
    inline DescribeSnapshotCopyGrantsRequest& AddTagKeys(const Aws::String& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

    /**
     * <p>A tag key or keys for which you want to return all matching resources that
     * are associated with the specified key or keys. For example, suppose that you
     * have resources tagged with keys called <code>owner</code> and
     * <code>environment</code>. If you specify both of these tag keys in the request,
     * Amazon Redshift returns a response with all resources that have either or both
     * of these tag keys associated with them.</p>
     */
    inline DescribeSnapshotCopyGrantsRequest& AddTagKeys(Aws::String&& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(std::move(value)); return *this; }

    /**
     * <p>A tag key or keys for which you want to return all matching resources that
     * are associated with the specified key or keys. For example, suppose that you
     * have resources tagged with keys called <code>owner</code> and
     * <code>environment</code>. If you specify both of these tag keys in the request,
     * Amazon Redshift returns a response with all resources that have either or both
     * of these tag keys associated with them.</p>
     */
    inline DescribeSnapshotCopyGrantsRequest& AddTagKeys(const char* value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }


    /**
     * <p>A tag value or values for which you want to return all matching resources
     * that are associated with the specified value or values. For example, suppose
     * that you have resources tagged with values called <code>admin</code> and
     * <code>test</code>. If you specify both of these tag values in the request,
     * Amazon Redshift returns a response with all resources that have either or both
     * of these tag values associated with them.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagValues() const{ return m_tagValues; }

    /**
     * <p>A tag value or values for which you want to return all matching resources
     * that are associated with the specified value or values. For example, suppose
     * that you have resources tagged with values called <code>admin</code> and
     * <code>test</code>. If you specify both of these tag values in the request,
     * Amazon Redshift returns a response with all resources that have either or both
     * of these tag values associated with them.</p>
     */
    inline bool TagValuesHasBeenSet() const { return m_tagValuesHasBeenSet; }

    /**
     * <p>A tag value or values for which you want to return all matching resources
     * that are associated with the specified value or values. For example, suppose
     * that you have resources tagged with values called <code>admin</code> and
     * <code>test</code>. If you specify both of these tag values in the request,
     * Amazon Redshift returns a response with all resources that have either or both
     * of these tag values associated with them.</p>
     */
    inline void SetTagValues(const Aws::Vector<Aws::String>& value) { m_tagValuesHasBeenSet = true; m_tagValues = value; }

    /**
     * <p>A tag value or values for which you want to return all matching resources
     * that are associated with the specified value or values. For example, suppose
     * that you have resources tagged with values called <code>admin</code> and
     * <code>test</code>. If you specify both of these tag values in the request,
     * Amazon Redshift returns a response with all resources that have either or both
     * of these tag values associated with them.</p>
     */
    inline void SetTagValues(Aws::Vector<Aws::String>&& value) { m_tagValuesHasBeenSet = true; m_tagValues = std::move(value); }

    /**
     * <p>A tag value or values for which you want to return all matching resources
     * that are associated with the specified value or values. For example, suppose
     * that you have resources tagged with values called <code>admin</code> and
     * <code>test</code>. If you specify both of these tag values in the request,
     * Amazon Redshift returns a response with all resources that have either or both
     * of these tag values associated with them.</p>
     */
    inline DescribeSnapshotCopyGrantsRequest& WithTagValues(const Aws::Vector<Aws::String>& value) { SetTagValues(value); return *this;}

    /**
     * <p>A tag value or values for which you want to return all matching resources
     * that are associated with the specified value or values. For example, suppose
     * that you have resources tagged with values called <code>admin</code> and
     * <code>test</code>. If you specify both of these tag values in the request,
     * Amazon Redshift returns a response with all resources that have either or both
     * of these tag values associated with them.</p>
     */
    inline DescribeSnapshotCopyGrantsRequest& WithTagValues(Aws::Vector<Aws::String>&& value) { SetTagValues(std::move(value)); return *this;}

    /**
     * <p>A tag value or values for which you want to return all matching resources
     * that are associated with the specified value or values. For example, suppose
     * that you have resources tagged with values called <code>admin</code> and
     * <code>test</code>. If you specify both of these tag values in the request,
     * Amazon Redshift returns a response with all resources that have either or both
     * of these tag values associated with them.</p>
     */
    inline DescribeSnapshotCopyGrantsRequest& AddTagValues(const Aws::String& value) { m_tagValuesHasBeenSet = true; m_tagValues.push_back(value); return *this; }

    /**
     * <p>A tag value or values for which you want to return all matching resources
     * that are associated with the specified value or values. For example, suppose
     * that you have resources tagged with values called <code>admin</code> and
     * <code>test</code>. If you specify both of these tag values in the request,
     * Amazon Redshift returns a response with all resources that have either or both
     * of these tag values associated with them.</p>
     */
    inline DescribeSnapshotCopyGrantsRequest& AddTagValues(Aws::String&& value) { m_tagValuesHasBeenSet = true; m_tagValues.push_back(std::move(value)); return *this; }

    /**
     * <p>A tag value or values for which you want to return all matching resources
     * that are associated with the specified value or values. For example, suppose
     * that you have resources tagged with values called <code>admin</code> and
     * <code>test</code>. If you specify both of these tag values in the request,
     * Amazon Redshift returns a response with all resources that have either or both
     * of these tag values associated with them.</p>
     */
    inline DescribeSnapshotCopyGrantsRequest& AddTagValues(const char* value) { m_tagValuesHasBeenSet = true; m_tagValues.push_back(value); return *this; }

  private:

    Aws::String m_snapshotCopyGrantName;
    bool m_snapshotCopyGrantNameHasBeenSet;

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
