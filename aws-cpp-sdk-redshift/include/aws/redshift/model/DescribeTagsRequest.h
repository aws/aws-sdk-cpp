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
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DescribeTagsMessage">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API DescribeTagsRequest : public RedshiftRequest
  {
  public:
    DescribeTagsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeTags"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The Amazon Resource Name (ARN) for which you want to describe the tag or
     * tags. For example, <code>arn:aws:redshift:us-east-1:123456789:cluster:t1</code>.
     * </p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }

    /**
     * <p>The Amazon Resource Name (ARN) for which you want to describe the tag or
     * tags. For example, <code>arn:aws:redshift:us-east-1:123456789:cluster:t1</code>.
     * </p>
     */
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for which you want to describe the tag or
     * tags. For example, <code>arn:aws:redshift:us-east-1:123456789:cluster:t1</code>.
     * </p>
     */
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for which you want to describe the tag or
     * tags. For example, <code>arn:aws:redshift:us-east-1:123456789:cluster:t1</code>.
     * </p>
     */
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for which you want to describe the tag or
     * tags. For example, <code>arn:aws:redshift:us-east-1:123456789:cluster:t1</code>.
     * </p>
     */
    inline void SetResourceName(const char* value) { m_resourceNameHasBeenSet = true; m_resourceName.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for which you want to describe the tag or
     * tags. For example, <code>arn:aws:redshift:us-east-1:123456789:cluster:t1</code>.
     * </p>
     */
    inline DescribeTagsRequest& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for which you want to describe the tag or
     * tags. For example, <code>arn:aws:redshift:us-east-1:123456789:cluster:t1</code>.
     * </p>
     */
    inline DescribeTagsRequest& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for which you want to describe the tag or
     * tags. For example, <code>arn:aws:redshift:us-east-1:123456789:cluster:t1</code>.
     * </p>
     */
    inline DescribeTagsRequest& WithResourceName(const char* value) { SetResourceName(value); return *this;}


    /**
     * <p>The type of resource with which you want to view tags. Valid resource types
     * are: </p> <ul> <li> <p>Cluster</p> </li> <li> <p>CIDR/IP</p> </li> <li> <p>EC2
     * security group</p> </li> <li> <p>Snapshot</p> </li> <li> <p>Cluster security
     * group</p> </li> <li> <p>Subnet group</p> </li> <li> <p>HSM connection</p> </li>
     * <li> <p>HSM certificate</p> </li> <li> <p>Parameter group</p> </li> <li>
     * <p>Snapshot copy grant</p> </li> </ul> <p>For more information about Amazon
     * Redshift resource types and constructing ARNs, go to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/redshift-iam-access-control-overview.html#redshift-iam-access-control-specify-actions">Specifying
     * Policy Elements: Actions, Effects, Resources, and Principals</a> in the Amazon
     * Redshift Cluster Management Guide. </p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of resource with which you want to view tags. Valid resource types
     * are: </p> <ul> <li> <p>Cluster</p> </li> <li> <p>CIDR/IP</p> </li> <li> <p>EC2
     * security group</p> </li> <li> <p>Snapshot</p> </li> <li> <p>Cluster security
     * group</p> </li> <li> <p>Subnet group</p> </li> <li> <p>HSM connection</p> </li>
     * <li> <p>HSM certificate</p> </li> <li> <p>Parameter group</p> </li> <li>
     * <p>Snapshot copy grant</p> </li> </ul> <p>For more information about Amazon
     * Redshift resource types and constructing ARNs, go to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/redshift-iam-access-control-overview.html#redshift-iam-access-control-specify-actions">Specifying
     * Policy Elements: Actions, Effects, Resources, and Principals</a> in the Amazon
     * Redshift Cluster Management Guide. </p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of resource with which you want to view tags. Valid resource types
     * are: </p> <ul> <li> <p>Cluster</p> </li> <li> <p>CIDR/IP</p> </li> <li> <p>EC2
     * security group</p> </li> <li> <p>Snapshot</p> </li> <li> <p>Cluster security
     * group</p> </li> <li> <p>Subnet group</p> </li> <li> <p>HSM connection</p> </li>
     * <li> <p>HSM certificate</p> </li> <li> <p>Parameter group</p> </li> <li>
     * <p>Snapshot copy grant</p> </li> </ul> <p>For more information about Amazon
     * Redshift resource types and constructing ARNs, go to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/redshift-iam-access-control-overview.html#redshift-iam-access-control-specify-actions">Specifying
     * Policy Elements: Actions, Effects, Resources, and Principals</a> in the Amazon
     * Redshift Cluster Management Guide. </p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of resource with which you want to view tags. Valid resource types
     * are: </p> <ul> <li> <p>Cluster</p> </li> <li> <p>CIDR/IP</p> </li> <li> <p>EC2
     * security group</p> </li> <li> <p>Snapshot</p> </li> <li> <p>Cluster security
     * group</p> </li> <li> <p>Subnet group</p> </li> <li> <p>HSM connection</p> </li>
     * <li> <p>HSM certificate</p> </li> <li> <p>Parameter group</p> </li> <li>
     * <p>Snapshot copy grant</p> </li> </ul> <p>For more information about Amazon
     * Redshift resource types and constructing ARNs, go to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/redshift-iam-access-control-overview.html#redshift-iam-access-control-specify-actions">Specifying
     * Policy Elements: Actions, Effects, Resources, and Principals</a> in the Amazon
     * Redshift Cluster Management Guide. </p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of resource with which you want to view tags. Valid resource types
     * are: </p> <ul> <li> <p>Cluster</p> </li> <li> <p>CIDR/IP</p> </li> <li> <p>EC2
     * security group</p> </li> <li> <p>Snapshot</p> </li> <li> <p>Cluster security
     * group</p> </li> <li> <p>Subnet group</p> </li> <li> <p>HSM connection</p> </li>
     * <li> <p>HSM certificate</p> </li> <li> <p>Parameter group</p> </li> <li>
     * <p>Snapshot copy grant</p> </li> </ul> <p>For more information about Amazon
     * Redshift resource types and constructing ARNs, go to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/redshift-iam-access-control-overview.html#redshift-iam-access-control-specify-actions">Specifying
     * Policy Elements: Actions, Effects, Resources, and Principals</a> in the Amazon
     * Redshift Cluster Management Guide. </p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The type of resource with which you want to view tags. Valid resource types
     * are: </p> <ul> <li> <p>Cluster</p> </li> <li> <p>CIDR/IP</p> </li> <li> <p>EC2
     * security group</p> </li> <li> <p>Snapshot</p> </li> <li> <p>Cluster security
     * group</p> </li> <li> <p>Subnet group</p> </li> <li> <p>HSM connection</p> </li>
     * <li> <p>HSM certificate</p> </li> <li> <p>Parameter group</p> </li> <li>
     * <p>Snapshot copy grant</p> </li> </ul> <p>For more information about Amazon
     * Redshift resource types and constructing ARNs, go to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/redshift-iam-access-control-overview.html#redshift-iam-access-control-specify-actions">Specifying
     * Policy Elements: Actions, Effects, Resources, and Principals</a> in the Amazon
     * Redshift Cluster Management Guide. </p>
     */
    inline DescribeTagsRequest& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of resource with which you want to view tags. Valid resource types
     * are: </p> <ul> <li> <p>Cluster</p> </li> <li> <p>CIDR/IP</p> </li> <li> <p>EC2
     * security group</p> </li> <li> <p>Snapshot</p> </li> <li> <p>Cluster security
     * group</p> </li> <li> <p>Subnet group</p> </li> <li> <p>HSM connection</p> </li>
     * <li> <p>HSM certificate</p> </li> <li> <p>Parameter group</p> </li> <li>
     * <p>Snapshot copy grant</p> </li> </ul> <p>For more information about Amazon
     * Redshift resource types and constructing ARNs, go to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/redshift-iam-access-control-overview.html#redshift-iam-access-control-specify-actions">Specifying
     * Policy Elements: Actions, Effects, Resources, and Principals</a> in the Amazon
     * Redshift Cluster Management Guide. </p>
     */
    inline DescribeTagsRequest& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The type of resource with which you want to view tags. Valid resource types
     * are: </p> <ul> <li> <p>Cluster</p> </li> <li> <p>CIDR/IP</p> </li> <li> <p>EC2
     * security group</p> </li> <li> <p>Snapshot</p> </li> <li> <p>Cluster security
     * group</p> </li> <li> <p>Subnet group</p> </li> <li> <p>HSM connection</p> </li>
     * <li> <p>HSM certificate</p> </li> <li> <p>Parameter group</p> </li> <li>
     * <p>Snapshot copy grant</p> </li> </ul> <p>For more information about Amazon
     * Redshift resource types and constructing ARNs, go to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/redshift-iam-access-control-overview.html#redshift-iam-access-control-specify-actions">Specifying
     * Policy Elements: Actions, Effects, Resources, and Principals</a> in the Amazon
     * Redshift Cluster Management Guide. </p>
     */
    inline DescribeTagsRequest& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>The maximum number or response records to return in each call. If the number
     * of remaining response records exceeds the specified <code>MaxRecords</code>
     * value, a value is returned in a <code>marker</code> field of the response. You
     * can retrieve the next set of records by retrying the command with the returned
     * <code>marker</code> value. </p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p>The maximum number or response records to return in each call. If the number
     * of remaining response records exceeds the specified <code>MaxRecords</code>
     * value, a value is returned in a <code>marker</code> field of the response. You
     * can retrieve the next set of records by retrying the command with the returned
     * <code>marker</code> value. </p>
     */
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }

    /**
     * <p>The maximum number or response records to return in each call. If the number
     * of remaining response records exceeds the specified <code>MaxRecords</code>
     * value, a value is returned in a <code>marker</code> field of the response. You
     * can retrieve the next set of records by retrying the command with the returned
     * <code>marker</code> value. </p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p>The maximum number or response records to return in each call. If the number
     * of remaining response records exceeds the specified <code>MaxRecords</code>
     * value, a value is returned in a <code>marker</code> field of the response. You
     * can retrieve the next set of records by retrying the command with the returned
     * <code>marker</code> value. </p>
     */
    inline DescribeTagsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}


    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>marker</code> parameter and retrying the command. If the
     * <code>marker</code> field is empty, all response records have been retrieved for
     * the request. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>marker</code> parameter and retrying the command. If the
     * <code>marker</code> field is empty, all response records have been retrieved for
     * the request. </p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>marker</code> parameter and retrying the command. If the
     * <code>marker</code> field is empty, all response records have been retrieved for
     * the request. </p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>marker</code> parameter and retrying the command. If the
     * <code>marker</code> field is empty, all response records have been retrieved for
     * the request. </p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>marker</code> parameter and retrying the command. If the
     * <code>marker</code> field is empty, all response records have been retrieved for
     * the request. </p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>marker</code> parameter and retrying the command. If the
     * <code>marker</code> field is empty, all response records have been retrieved for
     * the request. </p>
     */
    inline DescribeTagsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>marker</code> parameter and retrying the command. If the
     * <code>marker</code> field is empty, all response records have been retrieved for
     * the request. </p>
     */
    inline DescribeTagsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>marker</code> parameter and retrying the command. If the
     * <code>marker</code> field is empty, all response records have been retrieved for
     * the request. </p>
     */
    inline DescribeTagsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}


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
    inline DescribeTagsRequest& WithTagKeys(const Aws::Vector<Aws::String>& value) { SetTagKeys(value); return *this;}

    /**
     * <p>A tag key or keys for which you want to return all matching resources that
     * are associated with the specified key or keys. For example, suppose that you
     * have resources tagged with keys called <code>owner</code> and
     * <code>environment</code>. If you specify both of these tag keys in the request,
     * Amazon Redshift returns a response with all resources that have either or both
     * of these tag keys associated with them.</p>
     */
    inline DescribeTagsRequest& WithTagKeys(Aws::Vector<Aws::String>&& value) { SetTagKeys(std::move(value)); return *this;}

    /**
     * <p>A tag key or keys for which you want to return all matching resources that
     * are associated with the specified key or keys. For example, suppose that you
     * have resources tagged with keys called <code>owner</code> and
     * <code>environment</code>. If you specify both of these tag keys in the request,
     * Amazon Redshift returns a response with all resources that have either or both
     * of these tag keys associated with them.</p>
     */
    inline DescribeTagsRequest& AddTagKeys(const Aws::String& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

    /**
     * <p>A tag key or keys for which you want to return all matching resources that
     * are associated with the specified key or keys. For example, suppose that you
     * have resources tagged with keys called <code>owner</code> and
     * <code>environment</code>. If you specify both of these tag keys in the request,
     * Amazon Redshift returns a response with all resources that have either or both
     * of these tag keys associated with them.</p>
     */
    inline DescribeTagsRequest& AddTagKeys(Aws::String&& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(std::move(value)); return *this; }

    /**
     * <p>A tag key or keys for which you want to return all matching resources that
     * are associated with the specified key or keys. For example, suppose that you
     * have resources tagged with keys called <code>owner</code> and
     * <code>environment</code>. If you specify both of these tag keys in the request,
     * Amazon Redshift returns a response with all resources that have either or both
     * of these tag keys associated with them.</p>
     */
    inline DescribeTagsRequest& AddTagKeys(const char* value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }


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
    inline DescribeTagsRequest& WithTagValues(const Aws::Vector<Aws::String>& value) { SetTagValues(value); return *this;}

    /**
     * <p>A tag value or values for which you want to return all matching resources
     * that are associated with the specified value or values. For example, suppose
     * that you have resources tagged with values called <code>admin</code> and
     * <code>test</code>. If you specify both of these tag values in the request,
     * Amazon Redshift returns a response with all resources that have either or both
     * of these tag values associated with them.</p>
     */
    inline DescribeTagsRequest& WithTagValues(Aws::Vector<Aws::String>&& value) { SetTagValues(std::move(value)); return *this;}

    /**
     * <p>A tag value or values for which you want to return all matching resources
     * that are associated with the specified value or values. For example, suppose
     * that you have resources tagged with values called <code>admin</code> and
     * <code>test</code>. If you specify both of these tag values in the request,
     * Amazon Redshift returns a response with all resources that have either or both
     * of these tag values associated with them.</p>
     */
    inline DescribeTagsRequest& AddTagValues(const Aws::String& value) { m_tagValuesHasBeenSet = true; m_tagValues.push_back(value); return *this; }

    /**
     * <p>A tag value or values for which you want to return all matching resources
     * that are associated with the specified value or values. For example, suppose
     * that you have resources tagged with values called <code>admin</code> and
     * <code>test</code>. If you specify both of these tag values in the request,
     * Amazon Redshift returns a response with all resources that have either or both
     * of these tag values associated with them.</p>
     */
    inline DescribeTagsRequest& AddTagValues(Aws::String&& value) { m_tagValuesHasBeenSet = true; m_tagValues.push_back(std::move(value)); return *this; }

    /**
     * <p>A tag value or values for which you want to return all matching resources
     * that are associated with the specified value or values. For example, suppose
     * that you have resources tagged with values called <code>admin</code> and
     * <code>test</code>. If you specify both of these tag values in the request,
     * Amazon Redshift returns a response with all resources that have either or both
     * of these tag values associated with them.</p>
     */
    inline DescribeTagsRequest& AddTagValues(const char* value) { m_tagValuesHasBeenSet = true; m_tagValues.push_back(value); return *this; }

  private:

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet;

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
