﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Contains the parameters for DescribeReservedInstancesListings.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeReservedInstancesListingsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API DescribeReservedInstancesListingsRequest : public EC2Request
  {
  public:
    DescribeReservedInstancesListingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeReservedInstancesListings"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>reserved-instances-id</code> -
     * The ID of the Reserved Instances.</p> </li> <li> <p>
     * <code>reserved-instances-listing-id</code> - The ID of the Reserved Instances
     * listing.</p> </li> <li> <p> <code>status</code> - The status of the Reserved
     * Instance listing (<code>pending</code> | <code>active</code> |
     * <code>cancelled</code> | <code>closed</code>).</p> </li> <li> <p>
     * <code>status-message</code> - The reason for the status.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>reserved-instances-id</code> -
     * The ID of the Reserved Instances.</p> </li> <li> <p>
     * <code>reserved-instances-listing-id</code> - The ID of the Reserved Instances
     * listing.</p> </li> <li> <p> <code>status</code> - The status of the Reserved
     * Instance listing (<code>pending</code> | <code>active</code> |
     * <code>cancelled</code> | <code>closed</code>).</p> </li> <li> <p>
     * <code>status-message</code> - The reason for the status.</p> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>reserved-instances-id</code> -
     * The ID of the Reserved Instances.</p> </li> <li> <p>
     * <code>reserved-instances-listing-id</code> - The ID of the Reserved Instances
     * listing.</p> </li> <li> <p> <code>status</code> - The status of the Reserved
     * Instance listing (<code>pending</code> | <code>active</code> |
     * <code>cancelled</code> | <code>closed</code>).</p> </li> <li> <p>
     * <code>status-message</code> - The reason for the status.</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>reserved-instances-id</code> -
     * The ID of the Reserved Instances.</p> </li> <li> <p>
     * <code>reserved-instances-listing-id</code> - The ID of the Reserved Instances
     * listing.</p> </li> <li> <p> <code>status</code> - The status of the Reserved
     * Instance listing (<code>pending</code> | <code>active</code> |
     * <code>cancelled</code> | <code>closed</code>).</p> </li> <li> <p>
     * <code>status-message</code> - The reason for the status.</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>reserved-instances-id</code> -
     * The ID of the Reserved Instances.</p> </li> <li> <p>
     * <code>reserved-instances-listing-id</code> - The ID of the Reserved Instances
     * listing.</p> </li> <li> <p> <code>status</code> - The status of the Reserved
     * Instance listing (<code>pending</code> | <code>active</code> |
     * <code>cancelled</code> | <code>closed</code>).</p> </li> <li> <p>
     * <code>status-message</code> - The reason for the status.</p> </li> </ul>
     */
    inline DescribeReservedInstancesListingsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>reserved-instances-id</code> -
     * The ID of the Reserved Instances.</p> </li> <li> <p>
     * <code>reserved-instances-listing-id</code> - The ID of the Reserved Instances
     * listing.</p> </li> <li> <p> <code>status</code> - The status of the Reserved
     * Instance listing (<code>pending</code> | <code>active</code> |
     * <code>cancelled</code> | <code>closed</code>).</p> </li> <li> <p>
     * <code>status-message</code> - The reason for the status.</p> </li> </ul>
     */
    inline DescribeReservedInstancesListingsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>reserved-instances-id</code> -
     * The ID of the Reserved Instances.</p> </li> <li> <p>
     * <code>reserved-instances-listing-id</code> - The ID of the Reserved Instances
     * listing.</p> </li> <li> <p> <code>status</code> - The status of the Reserved
     * Instance listing (<code>pending</code> | <code>active</code> |
     * <code>cancelled</code> | <code>closed</code>).</p> </li> <li> <p>
     * <code>status-message</code> - The reason for the status.</p> </li> </ul>
     */
    inline DescribeReservedInstancesListingsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>reserved-instances-id</code> -
     * The ID of the Reserved Instances.</p> </li> <li> <p>
     * <code>reserved-instances-listing-id</code> - The ID of the Reserved Instances
     * listing.</p> </li> <li> <p> <code>status</code> - The status of the Reserved
     * Instance listing (<code>pending</code> | <code>active</code> |
     * <code>cancelled</code> | <code>closed</code>).</p> </li> <li> <p>
     * <code>status-message</code> - The reason for the status.</p> </li> </ul>
     */
    inline DescribeReservedInstancesListingsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>One or more Reserved Instance IDs.</p>
     */
    inline const Aws::String& GetReservedInstancesId() const{ return m_reservedInstancesId; }

    /**
     * <p>One or more Reserved Instance IDs.</p>
     */
    inline bool ReservedInstancesIdHasBeenSet() const { return m_reservedInstancesIdHasBeenSet; }

    /**
     * <p>One or more Reserved Instance IDs.</p>
     */
    inline void SetReservedInstancesId(const Aws::String& value) { m_reservedInstancesIdHasBeenSet = true; m_reservedInstancesId = value; }

    /**
     * <p>One or more Reserved Instance IDs.</p>
     */
    inline void SetReservedInstancesId(Aws::String&& value) { m_reservedInstancesIdHasBeenSet = true; m_reservedInstancesId = std::move(value); }

    /**
     * <p>One or more Reserved Instance IDs.</p>
     */
    inline void SetReservedInstancesId(const char* value) { m_reservedInstancesIdHasBeenSet = true; m_reservedInstancesId.assign(value); }

    /**
     * <p>One or more Reserved Instance IDs.</p>
     */
    inline DescribeReservedInstancesListingsRequest& WithReservedInstancesId(const Aws::String& value) { SetReservedInstancesId(value); return *this;}

    /**
     * <p>One or more Reserved Instance IDs.</p>
     */
    inline DescribeReservedInstancesListingsRequest& WithReservedInstancesId(Aws::String&& value) { SetReservedInstancesId(std::move(value)); return *this;}

    /**
     * <p>One or more Reserved Instance IDs.</p>
     */
    inline DescribeReservedInstancesListingsRequest& WithReservedInstancesId(const char* value) { SetReservedInstancesId(value); return *this;}


    /**
     * <p>One or more Reserved Instance listing IDs.</p>
     */
    inline const Aws::String& GetReservedInstancesListingId() const{ return m_reservedInstancesListingId; }

    /**
     * <p>One or more Reserved Instance listing IDs.</p>
     */
    inline bool ReservedInstancesListingIdHasBeenSet() const { return m_reservedInstancesListingIdHasBeenSet; }

    /**
     * <p>One or more Reserved Instance listing IDs.</p>
     */
    inline void SetReservedInstancesListingId(const Aws::String& value) { m_reservedInstancesListingIdHasBeenSet = true; m_reservedInstancesListingId = value; }

    /**
     * <p>One or more Reserved Instance listing IDs.</p>
     */
    inline void SetReservedInstancesListingId(Aws::String&& value) { m_reservedInstancesListingIdHasBeenSet = true; m_reservedInstancesListingId = std::move(value); }

    /**
     * <p>One or more Reserved Instance listing IDs.</p>
     */
    inline void SetReservedInstancesListingId(const char* value) { m_reservedInstancesListingIdHasBeenSet = true; m_reservedInstancesListingId.assign(value); }

    /**
     * <p>One or more Reserved Instance listing IDs.</p>
     */
    inline DescribeReservedInstancesListingsRequest& WithReservedInstancesListingId(const Aws::String& value) { SetReservedInstancesListingId(value); return *this;}

    /**
     * <p>One or more Reserved Instance listing IDs.</p>
     */
    inline DescribeReservedInstancesListingsRequest& WithReservedInstancesListingId(Aws::String&& value) { SetReservedInstancesListingId(std::move(value)); return *this;}

    /**
     * <p>One or more Reserved Instance listing IDs.</p>
     */
    inline DescribeReservedInstancesListingsRequest& WithReservedInstancesListingId(const char* value) { SetReservedInstancesListingId(value); return *this;}

  private:

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;

    Aws::String m_reservedInstancesId;
    bool m_reservedInstancesIdHasBeenSet;

    Aws::String m_reservedInstancesListingId;
    bool m_reservedInstancesListingIdHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
