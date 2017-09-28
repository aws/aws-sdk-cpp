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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/Filter.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for
   * DescribeReservedInstancesModifications.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeReservedInstancesModificationsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API DescribeReservedInstancesModificationsRequest : public EC2Request
  {
  public:
    DescribeReservedInstancesModificationsRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeReservedInstancesModifications"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>client-token</code> - The
     * idempotency token for the modification request.</p> </li> <li> <p>
     * <code>create-date</code> - The time when the modification request was
     * created.</p> </li> <li> <p> <code>effective-date</code> - The time when the
     * modification becomes effective.</p> </li> <li> <p>
     * <code>modification-result.reserved-instances-id</code> - The ID for the Reserved
     * Instances created as part of the modification request. This ID is only available
     * when the status of the modification is <code>fulfilled</code>.</p> </li> <li>
     * <p> <code>modification-result.target-configuration.availability-zone</code> -
     * The Availability Zone for the new Reserved Instances.</p> </li> <li> <p>
     * <code>modification-result.target-configuration.instance-count </code> - The
     * number of new Reserved Instances.</p> </li> <li> <p>
     * <code>modification-result.target-configuration.instance-type</code> - The
     * instance type of the new Reserved Instances.</p> </li> <li> <p>
     * <code>modification-result.target-configuration.platform</code> - The network
     * platform of the new Reserved Instances (<code>EC2-Classic</code> |
     * <code>EC2-VPC</code>).</p> </li> <li> <p> <code>reserved-instances-id</code> -
     * The ID of the Reserved Instances modified.</p> </li> <li> <p>
     * <code>reserved-instances-modification-id</code> - The ID of the modification
     * request.</p> </li> <li> <p> <code>status</code> - The status of the Reserved
     * Instances modification request (<code>processing</code> | <code>fulfilled</code>
     * | <code>failed</code>).</p> </li> <li> <p> <code>status-message</code> - The
     * reason for the status.</p> </li> <li> <p> <code>update-date</code> - The time
     * when the modification request was last updated.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>client-token</code> - The
     * idempotency token for the modification request.</p> </li> <li> <p>
     * <code>create-date</code> - The time when the modification request was
     * created.</p> </li> <li> <p> <code>effective-date</code> - The time when the
     * modification becomes effective.</p> </li> <li> <p>
     * <code>modification-result.reserved-instances-id</code> - The ID for the Reserved
     * Instances created as part of the modification request. This ID is only available
     * when the status of the modification is <code>fulfilled</code>.</p> </li> <li>
     * <p> <code>modification-result.target-configuration.availability-zone</code> -
     * The Availability Zone for the new Reserved Instances.</p> </li> <li> <p>
     * <code>modification-result.target-configuration.instance-count </code> - The
     * number of new Reserved Instances.</p> </li> <li> <p>
     * <code>modification-result.target-configuration.instance-type</code> - The
     * instance type of the new Reserved Instances.</p> </li> <li> <p>
     * <code>modification-result.target-configuration.platform</code> - The network
     * platform of the new Reserved Instances (<code>EC2-Classic</code> |
     * <code>EC2-VPC</code>).</p> </li> <li> <p> <code>reserved-instances-id</code> -
     * The ID of the Reserved Instances modified.</p> </li> <li> <p>
     * <code>reserved-instances-modification-id</code> - The ID of the modification
     * request.</p> </li> <li> <p> <code>status</code> - The status of the Reserved
     * Instances modification request (<code>processing</code> | <code>fulfilled</code>
     * | <code>failed</code>).</p> </li> <li> <p> <code>status-message</code> - The
     * reason for the status.</p> </li> <li> <p> <code>update-date</code> - The time
     * when the modification request was last updated.</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>client-token</code> - The
     * idempotency token for the modification request.</p> </li> <li> <p>
     * <code>create-date</code> - The time when the modification request was
     * created.</p> </li> <li> <p> <code>effective-date</code> - The time when the
     * modification becomes effective.</p> </li> <li> <p>
     * <code>modification-result.reserved-instances-id</code> - The ID for the Reserved
     * Instances created as part of the modification request. This ID is only available
     * when the status of the modification is <code>fulfilled</code>.</p> </li> <li>
     * <p> <code>modification-result.target-configuration.availability-zone</code> -
     * The Availability Zone for the new Reserved Instances.</p> </li> <li> <p>
     * <code>modification-result.target-configuration.instance-count </code> - The
     * number of new Reserved Instances.</p> </li> <li> <p>
     * <code>modification-result.target-configuration.instance-type</code> - The
     * instance type of the new Reserved Instances.</p> </li> <li> <p>
     * <code>modification-result.target-configuration.platform</code> - The network
     * platform of the new Reserved Instances (<code>EC2-Classic</code> |
     * <code>EC2-VPC</code>).</p> </li> <li> <p> <code>reserved-instances-id</code> -
     * The ID of the Reserved Instances modified.</p> </li> <li> <p>
     * <code>reserved-instances-modification-id</code> - The ID of the modification
     * request.</p> </li> <li> <p> <code>status</code> - The status of the Reserved
     * Instances modification request (<code>processing</code> | <code>fulfilled</code>
     * | <code>failed</code>).</p> </li> <li> <p> <code>status-message</code> - The
     * reason for the status.</p> </li> <li> <p> <code>update-date</code> - The time
     * when the modification request was last updated.</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>client-token</code> - The
     * idempotency token for the modification request.</p> </li> <li> <p>
     * <code>create-date</code> - The time when the modification request was
     * created.</p> </li> <li> <p> <code>effective-date</code> - The time when the
     * modification becomes effective.</p> </li> <li> <p>
     * <code>modification-result.reserved-instances-id</code> - The ID for the Reserved
     * Instances created as part of the modification request. This ID is only available
     * when the status of the modification is <code>fulfilled</code>.</p> </li> <li>
     * <p> <code>modification-result.target-configuration.availability-zone</code> -
     * The Availability Zone for the new Reserved Instances.</p> </li> <li> <p>
     * <code>modification-result.target-configuration.instance-count </code> - The
     * number of new Reserved Instances.</p> </li> <li> <p>
     * <code>modification-result.target-configuration.instance-type</code> - The
     * instance type of the new Reserved Instances.</p> </li> <li> <p>
     * <code>modification-result.target-configuration.platform</code> - The network
     * platform of the new Reserved Instances (<code>EC2-Classic</code> |
     * <code>EC2-VPC</code>).</p> </li> <li> <p> <code>reserved-instances-id</code> -
     * The ID of the Reserved Instances modified.</p> </li> <li> <p>
     * <code>reserved-instances-modification-id</code> - The ID of the modification
     * request.</p> </li> <li> <p> <code>status</code> - The status of the Reserved
     * Instances modification request (<code>processing</code> | <code>fulfilled</code>
     * | <code>failed</code>).</p> </li> <li> <p> <code>status-message</code> - The
     * reason for the status.</p> </li> <li> <p> <code>update-date</code> - The time
     * when the modification request was last updated.</p> </li> </ul>
     */
    inline DescribeReservedInstancesModificationsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>client-token</code> - The
     * idempotency token for the modification request.</p> </li> <li> <p>
     * <code>create-date</code> - The time when the modification request was
     * created.</p> </li> <li> <p> <code>effective-date</code> - The time when the
     * modification becomes effective.</p> </li> <li> <p>
     * <code>modification-result.reserved-instances-id</code> - The ID for the Reserved
     * Instances created as part of the modification request. This ID is only available
     * when the status of the modification is <code>fulfilled</code>.</p> </li> <li>
     * <p> <code>modification-result.target-configuration.availability-zone</code> -
     * The Availability Zone for the new Reserved Instances.</p> </li> <li> <p>
     * <code>modification-result.target-configuration.instance-count </code> - The
     * number of new Reserved Instances.</p> </li> <li> <p>
     * <code>modification-result.target-configuration.instance-type</code> - The
     * instance type of the new Reserved Instances.</p> </li> <li> <p>
     * <code>modification-result.target-configuration.platform</code> - The network
     * platform of the new Reserved Instances (<code>EC2-Classic</code> |
     * <code>EC2-VPC</code>).</p> </li> <li> <p> <code>reserved-instances-id</code> -
     * The ID of the Reserved Instances modified.</p> </li> <li> <p>
     * <code>reserved-instances-modification-id</code> - The ID of the modification
     * request.</p> </li> <li> <p> <code>status</code> - The status of the Reserved
     * Instances modification request (<code>processing</code> | <code>fulfilled</code>
     * | <code>failed</code>).</p> </li> <li> <p> <code>status-message</code> - The
     * reason for the status.</p> </li> <li> <p> <code>update-date</code> - The time
     * when the modification request was last updated.</p> </li> </ul>
     */
    inline DescribeReservedInstancesModificationsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>client-token</code> - The
     * idempotency token for the modification request.</p> </li> <li> <p>
     * <code>create-date</code> - The time when the modification request was
     * created.</p> </li> <li> <p> <code>effective-date</code> - The time when the
     * modification becomes effective.</p> </li> <li> <p>
     * <code>modification-result.reserved-instances-id</code> - The ID for the Reserved
     * Instances created as part of the modification request. This ID is only available
     * when the status of the modification is <code>fulfilled</code>.</p> </li> <li>
     * <p> <code>modification-result.target-configuration.availability-zone</code> -
     * The Availability Zone for the new Reserved Instances.</p> </li> <li> <p>
     * <code>modification-result.target-configuration.instance-count </code> - The
     * number of new Reserved Instances.</p> </li> <li> <p>
     * <code>modification-result.target-configuration.instance-type</code> - The
     * instance type of the new Reserved Instances.</p> </li> <li> <p>
     * <code>modification-result.target-configuration.platform</code> - The network
     * platform of the new Reserved Instances (<code>EC2-Classic</code> |
     * <code>EC2-VPC</code>).</p> </li> <li> <p> <code>reserved-instances-id</code> -
     * The ID of the Reserved Instances modified.</p> </li> <li> <p>
     * <code>reserved-instances-modification-id</code> - The ID of the modification
     * request.</p> </li> <li> <p> <code>status</code> - The status of the Reserved
     * Instances modification request (<code>processing</code> | <code>fulfilled</code>
     * | <code>failed</code>).</p> </li> <li> <p> <code>status-message</code> - The
     * reason for the status.</p> </li> <li> <p> <code>update-date</code> - The time
     * when the modification request was last updated.</p> </li> </ul>
     */
    inline DescribeReservedInstancesModificationsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>client-token</code> - The
     * idempotency token for the modification request.</p> </li> <li> <p>
     * <code>create-date</code> - The time when the modification request was
     * created.</p> </li> <li> <p> <code>effective-date</code> - The time when the
     * modification becomes effective.</p> </li> <li> <p>
     * <code>modification-result.reserved-instances-id</code> - The ID for the Reserved
     * Instances created as part of the modification request. This ID is only available
     * when the status of the modification is <code>fulfilled</code>.</p> </li> <li>
     * <p> <code>modification-result.target-configuration.availability-zone</code> -
     * The Availability Zone for the new Reserved Instances.</p> </li> <li> <p>
     * <code>modification-result.target-configuration.instance-count </code> - The
     * number of new Reserved Instances.</p> </li> <li> <p>
     * <code>modification-result.target-configuration.instance-type</code> - The
     * instance type of the new Reserved Instances.</p> </li> <li> <p>
     * <code>modification-result.target-configuration.platform</code> - The network
     * platform of the new Reserved Instances (<code>EC2-Classic</code> |
     * <code>EC2-VPC</code>).</p> </li> <li> <p> <code>reserved-instances-id</code> -
     * The ID of the Reserved Instances modified.</p> </li> <li> <p>
     * <code>reserved-instances-modification-id</code> - The ID of the modification
     * request.</p> </li> <li> <p> <code>status</code> - The status of the Reserved
     * Instances modification request (<code>processing</code> | <code>fulfilled</code>
     * | <code>failed</code>).</p> </li> <li> <p> <code>status-message</code> - The
     * reason for the status.</p> </li> <li> <p> <code>update-date</code> - The time
     * when the modification request was last updated.</p> </li> </ul>
     */
    inline DescribeReservedInstancesModificationsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>IDs for the submitted modification request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReservedInstancesModificationIds() const{ return m_reservedInstancesModificationIds; }

    /**
     * <p>IDs for the submitted modification request.</p>
     */
    inline void SetReservedInstancesModificationIds(const Aws::Vector<Aws::String>& value) { m_reservedInstancesModificationIdsHasBeenSet = true; m_reservedInstancesModificationIds = value; }

    /**
     * <p>IDs for the submitted modification request.</p>
     */
    inline void SetReservedInstancesModificationIds(Aws::Vector<Aws::String>&& value) { m_reservedInstancesModificationIdsHasBeenSet = true; m_reservedInstancesModificationIds = std::move(value); }

    /**
     * <p>IDs for the submitted modification request.</p>
     */
    inline DescribeReservedInstancesModificationsRequest& WithReservedInstancesModificationIds(const Aws::Vector<Aws::String>& value) { SetReservedInstancesModificationIds(value); return *this;}

    /**
     * <p>IDs for the submitted modification request.</p>
     */
    inline DescribeReservedInstancesModificationsRequest& WithReservedInstancesModificationIds(Aws::Vector<Aws::String>&& value) { SetReservedInstancesModificationIds(std::move(value)); return *this;}

    /**
     * <p>IDs for the submitted modification request.</p>
     */
    inline DescribeReservedInstancesModificationsRequest& AddReservedInstancesModificationIds(const Aws::String& value) { m_reservedInstancesModificationIdsHasBeenSet = true; m_reservedInstancesModificationIds.push_back(value); return *this; }

    /**
     * <p>IDs for the submitted modification request.</p>
     */
    inline DescribeReservedInstancesModificationsRequest& AddReservedInstancesModificationIds(Aws::String&& value) { m_reservedInstancesModificationIdsHasBeenSet = true; m_reservedInstancesModificationIds.push_back(std::move(value)); return *this; }

    /**
     * <p>IDs for the submitted modification request.</p>
     */
    inline DescribeReservedInstancesModificationsRequest& AddReservedInstancesModificationIds(const char* value) { m_reservedInstancesModificationIdsHasBeenSet = true; m_reservedInstancesModificationIds.push_back(value); return *this; }


    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline DescribeReservedInstancesModificationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline DescribeReservedInstancesModificationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline DescribeReservedInstancesModificationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;

    Aws::Vector<Aws::String> m_reservedInstancesModificationIds;
    bool m_reservedInstancesModificationIdsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
