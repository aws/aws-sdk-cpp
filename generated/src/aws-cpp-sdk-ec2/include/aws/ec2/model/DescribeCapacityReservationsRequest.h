/**
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
   */
  class DescribeCapacityReservationsRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeCapacityReservationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeCapacityReservations"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the Capacity Reservation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCapacityReservationIds() const{ return m_capacityReservationIds; }

    /**
     * <p>The ID of the Capacity Reservation.</p>
     */
    inline bool CapacityReservationIdsHasBeenSet() const { return m_capacityReservationIdsHasBeenSet; }

    /**
     * <p>The ID of the Capacity Reservation.</p>
     */
    inline void SetCapacityReservationIds(const Aws::Vector<Aws::String>& value) { m_capacityReservationIdsHasBeenSet = true; m_capacityReservationIds = value; }

    /**
     * <p>The ID of the Capacity Reservation.</p>
     */
    inline void SetCapacityReservationIds(Aws::Vector<Aws::String>&& value) { m_capacityReservationIdsHasBeenSet = true; m_capacityReservationIds = std::move(value); }

    /**
     * <p>The ID of the Capacity Reservation.</p>
     */
    inline DescribeCapacityReservationsRequest& WithCapacityReservationIds(const Aws::Vector<Aws::String>& value) { SetCapacityReservationIds(value); return *this;}

    /**
     * <p>The ID of the Capacity Reservation.</p>
     */
    inline DescribeCapacityReservationsRequest& WithCapacityReservationIds(Aws::Vector<Aws::String>&& value) { SetCapacityReservationIds(std::move(value)); return *this;}

    /**
     * <p>The ID of the Capacity Reservation.</p>
     */
    inline DescribeCapacityReservationsRequest& AddCapacityReservationIds(const Aws::String& value) { m_capacityReservationIdsHasBeenSet = true; m_capacityReservationIds.push_back(value); return *this; }

    /**
     * <p>The ID of the Capacity Reservation.</p>
     */
    inline DescribeCapacityReservationsRequest& AddCapacityReservationIds(Aws::String&& value) { m_capacityReservationIdsHasBeenSet = true; m_capacityReservationIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The ID of the Capacity Reservation.</p>
     */
    inline DescribeCapacityReservationsRequest& AddCapacityReservationIds(const char* value) { m_capacityReservationIdsHasBeenSet = true; m_capacityReservationIds.push_back(value); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline DescribeCapacityReservationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline DescribeCapacityReservationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline DescribeCapacityReservationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return for the request in a single page. The
     * remaining results can be seen by sending another request with the returned
     * <code>nextToken</code> value. This value can be between 5 and 500. If
     * <code>maxResults</code> is given a larger value than 500, you receive an
     * error.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return for the request in a single page. The
     * remaining results can be seen by sending another request with the returned
     * <code>nextToken</code> value. This value can be between 5 and 500. If
     * <code>maxResults</code> is given a larger value than 500, you receive an
     * error.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return for the request in a single page. The
     * remaining results can be seen by sending another request with the returned
     * <code>nextToken</code> value. This value can be between 5 and 500. If
     * <code>maxResults</code> is given a larger value than 500, you receive an
     * error.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return for the request in a single page. The
     * remaining results can be seen by sending another request with the returned
     * <code>nextToken</code> value. This value can be between 5 and 500. If
     * <code>maxResults</code> is given a larger value than 500, you receive an
     * error.</p>
     */
    inline DescribeCapacityReservationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>instance-type</code> - The type
     * of instance for which the Capacity Reservation reserves capacity.</p> </li> <li>
     * <p> <code>owner-id</code> - The ID of the Amazon Web Services account that owns
     * the Capacity Reservation.</p> </li> <li> <p> <code>instance-platform</code> -
     * The type of operating system for which the Capacity Reservation reserves
     * capacity.</p> </li> <li> <p> <code>availability-zone</code> - The Availability
     * Zone of the Capacity Reservation.</p> </li> <li> <p> <code>tenancy</code> -
     * Indicates the tenancy of the Capacity Reservation. A Capacity Reservation can
     * have one of the following tenancy settings:</p> <ul> <li> <p>
     * <code>default</code> - The Capacity Reservation is created on hardware that is
     * shared with other Amazon Web Services accounts.</p> </li> <li> <p>
     * <code>dedicated</code> - The Capacity Reservation is created on single-tenant
     * hardware that is dedicated to a single Amazon Web Services account.</p> </li>
     * </ul> </li> <li> <p> <code>outpost-arn</code> - The Amazon Resource Name (ARN)
     * of the Outpost on which the Capacity Reservation was created.</p> </li> <li> <p>
     * <code>state</code> - The current state of the Capacity Reservation. A Capacity
     * Reservation can be in one of the following states:</p> <ul> <li> <p>
     * <code>active</code>- The Capacity Reservation is active and the capacity is
     * available for your use.</p> </li> <li> <p> <code>expired</code> - The Capacity
     * Reservation expired automatically at the date and time specified in your
     * request. The reserved capacity is no longer available for your use.</p> </li>
     * <li> <p> <code>cancelled</code> - The Capacity Reservation was cancelled. The
     * reserved capacity is no longer available for your use.</p> </li> <li> <p>
     * <code>pending</code> - The Capacity Reservation request was successful but the
     * capacity provisioning is still pending.</p> </li> <li> <p> <code>failed</code> -
     * The Capacity Reservation request has failed. A request might fail due to invalid
     * request parameters, capacity constraints, or instance limit constraints. Failed
     * requests are retained for 60 minutes.</p> </li> </ul> </li> <li> <p>
     * <code>start-date</code> - The date and time at which the Capacity Reservation
     * was started.</p> </li> <li> <p> <code>end-date</code> - The date and time at
     * which the Capacity Reservation expires. When a Capacity Reservation expires, the
     * reserved capacity is released and you can no longer launch instances into it.
     * The Capacity Reservation's state changes to expired when it reaches its end date
     * and time.</p> </li> <li> <p> <code>end-date-type</code> - Indicates the way in
     * which the Capacity Reservation ends. A Capacity Reservation can have one of the
     * following end types:</p> <ul> <li> <p> <code>unlimited</code> - The Capacity
     * Reservation remains active until you explicitly cancel it.</p> </li> <li> <p>
     * <code>limited</code> - The Capacity Reservation expires automatically at a
     * specified date and time.</p> </li> </ul> </li> <li> <p>
     * <code>instance-match-criteria</code> - Indicates the type of instance launches
     * that the Capacity Reservation accepts. The options include:</p> <ul> <li> <p>
     * <code>open</code> - The Capacity Reservation accepts all instances that have
     * matching attributes (instance type, platform, and Availability Zone). Instances
     * that have matching attributes launch into the Capacity Reservation automatically
     * without specifying any additional parameters.</p> </li> <li> <p>
     * <code>targeted</code> - The Capacity Reservation only accepts instances that
     * have matching attributes (instance type, platform, and Availability Zone), and
     * explicitly target the Capacity Reservation. This ensures that only permitted
     * instances can use the reserved capacity.</p> </li> </ul> </li> <li> <p>
     * <code>placement-group-arn</code> - The ARN of the cluster placement group in
     * which the Capacity Reservation was created.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>instance-type</code> - The type
     * of instance for which the Capacity Reservation reserves capacity.</p> </li> <li>
     * <p> <code>owner-id</code> - The ID of the Amazon Web Services account that owns
     * the Capacity Reservation.</p> </li> <li> <p> <code>instance-platform</code> -
     * The type of operating system for which the Capacity Reservation reserves
     * capacity.</p> </li> <li> <p> <code>availability-zone</code> - The Availability
     * Zone of the Capacity Reservation.</p> </li> <li> <p> <code>tenancy</code> -
     * Indicates the tenancy of the Capacity Reservation. A Capacity Reservation can
     * have one of the following tenancy settings:</p> <ul> <li> <p>
     * <code>default</code> - The Capacity Reservation is created on hardware that is
     * shared with other Amazon Web Services accounts.</p> </li> <li> <p>
     * <code>dedicated</code> - The Capacity Reservation is created on single-tenant
     * hardware that is dedicated to a single Amazon Web Services account.</p> </li>
     * </ul> </li> <li> <p> <code>outpost-arn</code> - The Amazon Resource Name (ARN)
     * of the Outpost on which the Capacity Reservation was created.</p> </li> <li> <p>
     * <code>state</code> - The current state of the Capacity Reservation. A Capacity
     * Reservation can be in one of the following states:</p> <ul> <li> <p>
     * <code>active</code>- The Capacity Reservation is active and the capacity is
     * available for your use.</p> </li> <li> <p> <code>expired</code> - The Capacity
     * Reservation expired automatically at the date and time specified in your
     * request. The reserved capacity is no longer available for your use.</p> </li>
     * <li> <p> <code>cancelled</code> - The Capacity Reservation was cancelled. The
     * reserved capacity is no longer available for your use.</p> </li> <li> <p>
     * <code>pending</code> - The Capacity Reservation request was successful but the
     * capacity provisioning is still pending.</p> </li> <li> <p> <code>failed</code> -
     * The Capacity Reservation request has failed. A request might fail due to invalid
     * request parameters, capacity constraints, or instance limit constraints. Failed
     * requests are retained for 60 minutes.</p> </li> </ul> </li> <li> <p>
     * <code>start-date</code> - The date and time at which the Capacity Reservation
     * was started.</p> </li> <li> <p> <code>end-date</code> - The date and time at
     * which the Capacity Reservation expires. When a Capacity Reservation expires, the
     * reserved capacity is released and you can no longer launch instances into it.
     * The Capacity Reservation's state changes to expired when it reaches its end date
     * and time.</p> </li> <li> <p> <code>end-date-type</code> - Indicates the way in
     * which the Capacity Reservation ends. A Capacity Reservation can have one of the
     * following end types:</p> <ul> <li> <p> <code>unlimited</code> - The Capacity
     * Reservation remains active until you explicitly cancel it.</p> </li> <li> <p>
     * <code>limited</code> - The Capacity Reservation expires automatically at a
     * specified date and time.</p> </li> </ul> </li> <li> <p>
     * <code>instance-match-criteria</code> - Indicates the type of instance launches
     * that the Capacity Reservation accepts. The options include:</p> <ul> <li> <p>
     * <code>open</code> - The Capacity Reservation accepts all instances that have
     * matching attributes (instance type, platform, and Availability Zone). Instances
     * that have matching attributes launch into the Capacity Reservation automatically
     * without specifying any additional parameters.</p> </li> <li> <p>
     * <code>targeted</code> - The Capacity Reservation only accepts instances that
     * have matching attributes (instance type, platform, and Availability Zone), and
     * explicitly target the Capacity Reservation. This ensures that only permitted
     * instances can use the reserved capacity.</p> </li> </ul> </li> <li> <p>
     * <code>placement-group-arn</code> - The ARN of the cluster placement group in
     * which the Capacity Reservation was created.</p> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>instance-type</code> - The type
     * of instance for which the Capacity Reservation reserves capacity.</p> </li> <li>
     * <p> <code>owner-id</code> - The ID of the Amazon Web Services account that owns
     * the Capacity Reservation.</p> </li> <li> <p> <code>instance-platform</code> -
     * The type of operating system for which the Capacity Reservation reserves
     * capacity.</p> </li> <li> <p> <code>availability-zone</code> - The Availability
     * Zone of the Capacity Reservation.</p> </li> <li> <p> <code>tenancy</code> -
     * Indicates the tenancy of the Capacity Reservation. A Capacity Reservation can
     * have one of the following tenancy settings:</p> <ul> <li> <p>
     * <code>default</code> - The Capacity Reservation is created on hardware that is
     * shared with other Amazon Web Services accounts.</p> </li> <li> <p>
     * <code>dedicated</code> - The Capacity Reservation is created on single-tenant
     * hardware that is dedicated to a single Amazon Web Services account.</p> </li>
     * </ul> </li> <li> <p> <code>outpost-arn</code> - The Amazon Resource Name (ARN)
     * of the Outpost on which the Capacity Reservation was created.</p> </li> <li> <p>
     * <code>state</code> - The current state of the Capacity Reservation. A Capacity
     * Reservation can be in one of the following states:</p> <ul> <li> <p>
     * <code>active</code>- The Capacity Reservation is active and the capacity is
     * available for your use.</p> </li> <li> <p> <code>expired</code> - The Capacity
     * Reservation expired automatically at the date and time specified in your
     * request. The reserved capacity is no longer available for your use.</p> </li>
     * <li> <p> <code>cancelled</code> - The Capacity Reservation was cancelled. The
     * reserved capacity is no longer available for your use.</p> </li> <li> <p>
     * <code>pending</code> - The Capacity Reservation request was successful but the
     * capacity provisioning is still pending.</p> </li> <li> <p> <code>failed</code> -
     * The Capacity Reservation request has failed. A request might fail due to invalid
     * request parameters, capacity constraints, or instance limit constraints. Failed
     * requests are retained for 60 minutes.</p> </li> </ul> </li> <li> <p>
     * <code>start-date</code> - The date and time at which the Capacity Reservation
     * was started.</p> </li> <li> <p> <code>end-date</code> - The date and time at
     * which the Capacity Reservation expires. When a Capacity Reservation expires, the
     * reserved capacity is released and you can no longer launch instances into it.
     * The Capacity Reservation's state changes to expired when it reaches its end date
     * and time.</p> </li> <li> <p> <code>end-date-type</code> - Indicates the way in
     * which the Capacity Reservation ends. A Capacity Reservation can have one of the
     * following end types:</p> <ul> <li> <p> <code>unlimited</code> - The Capacity
     * Reservation remains active until you explicitly cancel it.</p> </li> <li> <p>
     * <code>limited</code> - The Capacity Reservation expires automatically at a
     * specified date and time.</p> </li> </ul> </li> <li> <p>
     * <code>instance-match-criteria</code> - Indicates the type of instance launches
     * that the Capacity Reservation accepts. The options include:</p> <ul> <li> <p>
     * <code>open</code> - The Capacity Reservation accepts all instances that have
     * matching attributes (instance type, platform, and Availability Zone). Instances
     * that have matching attributes launch into the Capacity Reservation automatically
     * without specifying any additional parameters.</p> </li> <li> <p>
     * <code>targeted</code> - The Capacity Reservation only accepts instances that
     * have matching attributes (instance type, platform, and Availability Zone), and
     * explicitly target the Capacity Reservation. This ensures that only permitted
     * instances can use the reserved capacity.</p> </li> </ul> </li> <li> <p>
     * <code>placement-group-arn</code> - The ARN of the cluster placement group in
     * which the Capacity Reservation was created.</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>instance-type</code> - The type
     * of instance for which the Capacity Reservation reserves capacity.</p> </li> <li>
     * <p> <code>owner-id</code> - The ID of the Amazon Web Services account that owns
     * the Capacity Reservation.</p> </li> <li> <p> <code>instance-platform</code> -
     * The type of operating system for which the Capacity Reservation reserves
     * capacity.</p> </li> <li> <p> <code>availability-zone</code> - The Availability
     * Zone of the Capacity Reservation.</p> </li> <li> <p> <code>tenancy</code> -
     * Indicates the tenancy of the Capacity Reservation. A Capacity Reservation can
     * have one of the following tenancy settings:</p> <ul> <li> <p>
     * <code>default</code> - The Capacity Reservation is created on hardware that is
     * shared with other Amazon Web Services accounts.</p> </li> <li> <p>
     * <code>dedicated</code> - The Capacity Reservation is created on single-tenant
     * hardware that is dedicated to a single Amazon Web Services account.</p> </li>
     * </ul> </li> <li> <p> <code>outpost-arn</code> - The Amazon Resource Name (ARN)
     * of the Outpost on which the Capacity Reservation was created.</p> </li> <li> <p>
     * <code>state</code> - The current state of the Capacity Reservation. A Capacity
     * Reservation can be in one of the following states:</p> <ul> <li> <p>
     * <code>active</code>- The Capacity Reservation is active and the capacity is
     * available for your use.</p> </li> <li> <p> <code>expired</code> - The Capacity
     * Reservation expired automatically at the date and time specified in your
     * request. The reserved capacity is no longer available for your use.</p> </li>
     * <li> <p> <code>cancelled</code> - The Capacity Reservation was cancelled. The
     * reserved capacity is no longer available for your use.</p> </li> <li> <p>
     * <code>pending</code> - The Capacity Reservation request was successful but the
     * capacity provisioning is still pending.</p> </li> <li> <p> <code>failed</code> -
     * The Capacity Reservation request has failed. A request might fail due to invalid
     * request parameters, capacity constraints, or instance limit constraints. Failed
     * requests are retained for 60 minutes.</p> </li> </ul> </li> <li> <p>
     * <code>start-date</code> - The date and time at which the Capacity Reservation
     * was started.</p> </li> <li> <p> <code>end-date</code> - The date and time at
     * which the Capacity Reservation expires. When a Capacity Reservation expires, the
     * reserved capacity is released and you can no longer launch instances into it.
     * The Capacity Reservation's state changes to expired when it reaches its end date
     * and time.</p> </li> <li> <p> <code>end-date-type</code> - Indicates the way in
     * which the Capacity Reservation ends. A Capacity Reservation can have one of the
     * following end types:</p> <ul> <li> <p> <code>unlimited</code> - The Capacity
     * Reservation remains active until you explicitly cancel it.</p> </li> <li> <p>
     * <code>limited</code> - The Capacity Reservation expires automatically at a
     * specified date and time.</p> </li> </ul> </li> <li> <p>
     * <code>instance-match-criteria</code> - Indicates the type of instance launches
     * that the Capacity Reservation accepts. The options include:</p> <ul> <li> <p>
     * <code>open</code> - The Capacity Reservation accepts all instances that have
     * matching attributes (instance type, platform, and Availability Zone). Instances
     * that have matching attributes launch into the Capacity Reservation automatically
     * without specifying any additional parameters.</p> </li> <li> <p>
     * <code>targeted</code> - The Capacity Reservation only accepts instances that
     * have matching attributes (instance type, platform, and Availability Zone), and
     * explicitly target the Capacity Reservation. This ensures that only permitted
     * instances can use the reserved capacity.</p> </li> </ul> </li> <li> <p>
     * <code>placement-group-arn</code> - The ARN of the cluster placement group in
     * which the Capacity Reservation was created.</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>instance-type</code> - The type
     * of instance for which the Capacity Reservation reserves capacity.</p> </li> <li>
     * <p> <code>owner-id</code> - The ID of the Amazon Web Services account that owns
     * the Capacity Reservation.</p> </li> <li> <p> <code>instance-platform</code> -
     * The type of operating system for which the Capacity Reservation reserves
     * capacity.</p> </li> <li> <p> <code>availability-zone</code> - The Availability
     * Zone of the Capacity Reservation.</p> </li> <li> <p> <code>tenancy</code> -
     * Indicates the tenancy of the Capacity Reservation. A Capacity Reservation can
     * have one of the following tenancy settings:</p> <ul> <li> <p>
     * <code>default</code> - The Capacity Reservation is created on hardware that is
     * shared with other Amazon Web Services accounts.</p> </li> <li> <p>
     * <code>dedicated</code> - The Capacity Reservation is created on single-tenant
     * hardware that is dedicated to a single Amazon Web Services account.</p> </li>
     * </ul> </li> <li> <p> <code>outpost-arn</code> - The Amazon Resource Name (ARN)
     * of the Outpost on which the Capacity Reservation was created.</p> </li> <li> <p>
     * <code>state</code> - The current state of the Capacity Reservation. A Capacity
     * Reservation can be in one of the following states:</p> <ul> <li> <p>
     * <code>active</code>- The Capacity Reservation is active and the capacity is
     * available for your use.</p> </li> <li> <p> <code>expired</code> - The Capacity
     * Reservation expired automatically at the date and time specified in your
     * request. The reserved capacity is no longer available for your use.</p> </li>
     * <li> <p> <code>cancelled</code> - The Capacity Reservation was cancelled. The
     * reserved capacity is no longer available for your use.</p> </li> <li> <p>
     * <code>pending</code> - The Capacity Reservation request was successful but the
     * capacity provisioning is still pending.</p> </li> <li> <p> <code>failed</code> -
     * The Capacity Reservation request has failed. A request might fail due to invalid
     * request parameters, capacity constraints, or instance limit constraints. Failed
     * requests are retained for 60 minutes.</p> </li> </ul> </li> <li> <p>
     * <code>start-date</code> - The date and time at which the Capacity Reservation
     * was started.</p> </li> <li> <p> <code>end-date</code> - The date and time at
     * which the Capacity Reservation expires. When a Capacity Reservation expires, the
     * reserved capacity is released and you can no longer launch instances into it.
     * The Capacity Reservation's state changes to expired when it reaches its end date
     * and time.</p> </li> <li> <p> <code>end-date-type</code> - Indicates the way in
     * which the Capacity Reservation ends. A Capacity Reservation can have one of the
     * following end types:</p> <ul> <li> <p> <code>unlimited</code> - The Capacity
     * Reservation remains active until you explicitly cancel it.</p> </li> <li> <p>
     * <code>limited</code> - The Capacity Reservation expires automatically at a
     * specified date and time.</p> </li> </ul> </li> <li> <p>
     * <code>instance-match-criteria</code> - Indicates the type of instance launches
     * that the Capacity Reservation accepts. The options include:</p> <ul> <li> <p>
     * <code>open</code> - The Capacity Reservation accepts all instances that have
     * matching attributes (instance type, platform, and Availability Zone). Instances
     * that have matching attributes launch into the Capacity Reservation automatically
     * without specifying any additional parameters.</p> </li> <li> <p>
     * <code>targeted</code> - The Capacity Reservation only accepts instances that
     * have matching attributes (instance type, platform, and Availability Zone), and
     * explicitly target the Capacity Reservation. This ensures that only permitted
     * instances can use the reserved capacity.</p> </li> </ul> </li> <li> <p>
     * <code>placement-group-arn</code> - The ARN of the cluster placement group in
     * which the Capacity Reservation was created.</p> </li> </ul>
     */
    inline DescribeCapacityReservationsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>instance-type</code> - The type
     * of instance for which the Capacity Reservation reserves capacity.</p> </li> <li>
     * <p> <code>owner-id</code> - The ID of the Amazon Web Services account that owns
     * the Capacity Reservation.</p> </li> <li> <p> <code>instance-platform</code> -
     * The type of operating system for which the Capacity Reservation reserves
     * capacity.</p> </li> <li> <p> <code>availability-zone</code> - The Availability
     * Zone of the Capacity Reservation.</p> </li> <li> <p> <code>tenancy</code> -
     * Indicates the tenancy of the Capacity Reservation. A Capacity Reservation can
     * have one of the following tenancy settings:</p> <ul> <li> <p>
     * <code>default</code> - The Capacity Reservation is created on hardware that is
     * shared with other Amazon Web Services accounts.</p> </li> <li> <p>
     * <code>dedicated</code> - The Capacity Reservation is created on single-tenant
     * hardware that is dedicated to a single Amazon Web Services account.</p> </li>
     * </ul> </li> <li> <p> <code>outpost-arn</code> - The Amazon Resource Name (ARN)
     * of the Outpost on which the Capacity Reservation was created.</p> </li> <li> <p>
     * <code>state</code> - The current state of the Capacity Reservation. A Capacity
     * Reservation can be in one of the following states:</p> <ul> <li> <p>
     * <code>active</code>- The Capacity Reservation is active and the capacity is
     * available for your use.</p> </li> <li> <p> <code>expired</code> - The Capacity
     * Reservation expired automatically at the date and time specified in your
     * request. The reserved capacity is no longer available for your use.</p> </li>
     * <li> <p> <code>cancelled</code> - The Capacity Reservation was cancelled. The
     * reserved capacity is no longer available for your use.</p> </li> <li> <p>
     * <code>pending</code> - The Capacity Reservation request was successful but the
     * capacity provisioning is still pending.</p> </li> <li> <p> <code>failed</code> -
     * The Capacity Reservation request has failed. A request might fail due to invalid
     * request parameters, capacity constraints, or instance limit constraints. Failed
     * requests are retained for 60 minutes.</p> </li> </ul> </li> <li> <p>
     * <code>start-date</code> - The date and time at which the Capacity Reservation
     * was started.</p> </li> <li> <p> <code>end-date</code> - The date and time at
     * which the Capacity Reservation expires. When a Capacity Reservation expires, the
     * reserved capacity is released and you can no longer launch instances into it.
     * The Capacity Reservation's state changes to expired when it reaches its end date
     * and time.</p> </li> <li> <p> <code>end-date-type</code> - Indicates the way in
     * which the Capacity Reservation ends. A Capacity Reservation can have one of the
     * following end types:</p> <ul> <li> <p> <code>unlimited</code> - The Capacity
     * Reservation remains active until you explicitly cancel it.</p> </li> <li> <p>
     * <code>limited</code> - The Capacity Reservation expires automatically at a
     * specified date and time.</p> </li> </ul> </li> <li> <p>
     * <code>instance-match-criteria</code> - Indicates the type of instance launches
     * that the Capacity Reservation accepts. The options include:</p> <ul> <li> <p>
     * <code>open</code> - The Capacity Reservation accepts all instances that have
     * matching attributes (instance type, platform, and Availability Zone). Instances
     * that have matching attributes launch into the Capacity Reservation automatically
     * without specifying any additional parameters.</p> </li> <li> <p>
     * <code>targeted</code> - The Capacity Reservation only accepts instances that
     * have matching attributes (instance type, platform, and Availability Zone), and
     * explicitly target the Capacity Reservation. This ensures that only permitted
     * instances can use the reserved capacity.</p> </li> </ul> </li> <li> <p>
     * <code>placement-group-arn</code> - The ARN of the cluster placement group in
     * which the Capacity Reservation was created.</p> </li> </ul>
     */
    inline DescribeCapacityReservationsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>instance-type</code> - The type
     * of instance for which the Capacity Reservation reserves capacity.</p> </li> <li>
     * <p> <code>owner-id</code> - The ID of the Amazon Web Services account that owns
     * the Capacity Reservation.</p> </li> <li> <p> <code>instance-platform</code> -
     * The type of operating system for which the Capacity Reservation reserves
     * capacity.</p> </li> <li> <p> <code>availability-zone</code> - The Availability
     * Zone of the Capacity Reservation.</p> </li> <li> <p> <code>tenancy</code> -
     * Indicates the tenancy of the Capacity Reservation. A Capacity Reservation can
     * have one of the following tenancy settings:</p> <ul> <li> <p>
     * <code>default</code> - The Capacity Reservation is created on hardware that is
     * shared with other Amazon Web Services accounts.</p> </li> <li> <p>
     * <code>dedicated</code> - The Capacity Reservation is created on single-tenant
     * hardware that is dedicated to a single Amazon Web Services account.</p> </li>
     * </ul> </li> <li> <p> <code>outpost-arn</code> - The Amazon Resource Name (ARN)
     * of the Outpost on which the Capacity Reservation was created.</p> </li> <li> <p>
     * <code>state</code> - The current state of the Capacity Reservation. A Capacity
     * Reservation can be in one of the following states:</p> <ul> <li> <p>
     * <code>active</code>- The Capacity Reservation is active and the capacity is
     * available for your use.</p> </li> <li> <p> <code>expired</code> - The Capacity
     * Reservation expired automatically at the date and time specified in your
     * request. The reserved capacity is no longer available for your use.</p> </li>
     * <li> <p> <code>cancelled</code> - The Capacity Reservation was cancelled. The
     * reserved capacity is no longer available for your use.</p> </li> <li> <p>
     * <code>pending</code> - The Capacity Reservation request was successful but the
     * capacity provisioning is still pending.</p> </li> <li> <p> <code>failed</code> -
     * The Capacity Reservation request has failed. A request might fail due to invalid
     * request parameters, capacity constraints, or instance limit constraints. Failed
     * requests are retained for 60 minutes.</p> </li> </ul> </li> <li> <p>
     * <code>start-date</code> - The date and time at which the Capacity Reservation
     * was started.</p> </li> <li> <p> <code>end-date</code> - The date and time at
     * which the Capacity Reservation expires. When a Capacity Reservation expires, the
     * reserved capacity is released and you can no longer launch instances into it.
     * The Capacity Reservation's state changes to expired when it reaches its end date
     * and time.</p> </li> <li> <p> <code>end-date-type</code> - Indicates the way in
     * which the Capacity Reservation ends. A Capacity Reservation can have one of the
     * following end types:</p> <ul> <li> <p> <code>unlimited</code> - The Capacity
     * Reservation remains active until you explicitly cancel it.</p> </li> <li> <p>
     * <code>limited</code> - The Capacity Reservation expires automatically at a
     * specified date and time.</p> </li> </ul> </li> <li> <p>
     * <code>instance-match-criteria</code> - Indicates the type of instance launches
     * that the Capacity Reservation accepts. The options include:</p> <ul> <li> <p>
     * <code>open</code> - The Capacity Reservation accepts all instances that have
     * matching attributes (instance type, platform, and Availability Zone). Instances
     * that have matching attributes launch into the Capacity Reservation automatically
     * without specifying any additional parameters.</p> </li> <li> <p>
     * <code>targeted</code> - The Capacity Reservation only accepts instances that
     * have matching attributes (instance type, platform, and Availability Zone), and
     * explicitly target the Capacity Reservation. This ensures that only permitted
     * instances can use the reserved capacity.</p> </li> </ul> </li> <li> <p>
     * <code>placement-group-arn</code> - The ARN of the cluster placement group in
     * which the Capacity Reservation was created.</p> </li> </ul>
     */
    inline DescribeCapacityReservationsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>instance-type</code> - The type
     * of instance for which the Capacity Reservation reserves capacity.</p> </li> <li>
     * <p> <code>owner-id</code> - The ID of the Amazon Web Services account that owns
     * the Capacity Reservation.</p> </li> <li> <p> <code>instance-platform</code> -
     * The type of operating system for which the Capacity Reservation reserves
     * capacity.</p> </li> <li> <p> <code>availability-zone</code> - The Availability
     * Zone of the Capacity Reservation.</p> </li> <li> <p> <code>tenancy</code> -
     * Indicates the tenancy of the Capacity Reservation. A Capacity Reservation can
     * have one of the following tenancy settings:</p> <ul> <li> <p>
     * <code>default</code> - The Capacity Reservation is created on hardware that is
     * shared with other Amazon Web Services accounts.</p> </li> <li> <p>
     * <code>dedicated</code> - The Capacity Reservation is created on single-tenant
     * hardware that is dedicated to a single Amazon Web Services account.</p> </li>
     * </ul> </li> <li> <p> <code>outpost-arn</code> - The Amazon Resource Name (ARN)
     * of the Outpost on which the Capacity Reservation was created.</p> </li> <li> <p>
     * <code>state</code> - The current state of the Capacity Reservation. A Capacity
     * Reservation can be in one of the following states:</p> <ul> <li> <p>
     * <code>active</code>- The Capacity Reservation is active and the capacity is
     * available for your use.</p> </li> <li> <p> <code>expired</code> - The Capacity
     * Reservation expired automatically at the date and time specified in your
     * request. The reserved capacity is no longer available for your use.</p> </li>
     * <li> <p> <code>cancelled</code> - The Capacity Reservation was cancelled. The
     * reserved capacity is no longer available for your use.</p> </li> <li> <p>
     * <code>pending</code> - The Capacity Reservation request was successful but the
     * capacity provisioning is still pending.</p> </li> <li> <p> <code>failed</code> -
     * The Capacity Reservation request has failed. A request might fail due to invalid
     * request parameters, capacity constraints, or instance limit constraints. Failed
     * requests are retained for 60 minutes.</p> </li> </ul> </li> <li> <p>
     * <code>start-date</code> - The date and time at which the Capacity Reservation
     * was started.</p> </li> <li> <p> <code>end-date</code> - The date and time at
     * which the Capacity Reservation expires. When a Capacity Reservation expires, the
     * reserved capacity is released and you can no longer launch instances into it.
     * The Capacity Reservation's state changes to expired when it reaches its end date
     * and time.</p> </li> <li> <p> <code>end-date-type</code> - Indicates the way in
     * which the Capacity Reservation ends. A Capacity Reservation can have one of the
     * following end types:</p> <ul> <li> <p> <code>unlimited</code> - The Capacity
     * Reservation remains active until you explicitly cancel it.</p> </li> <li> <p>
     * <code>limited</code> - The Capacity Reservation expires automatically at a
     * specified date and time.</p> </li> </ul> </li> <li> <p>
     * <code>instance-match-criteria</code> - Indicates the type of instance launches
     * that the Capacity Reservation accepts. The options include:</p> <ul> <li> <p>
     * <code>open</code> - The Capacity Reservation accepts all instances that have
     * matching attributes (instance type, platform, and Availability Zone). Instances
     * that have matching attributes launch into the Capacity Reservation automatically
     * without specifying any additional parameters.</p> </li> <li> <p>
     * <code>targeted</code> - The Capacity Reservation only accepts instances that
     * have matching attributes (instance type, platform, and Availability Zone), and
     * explicitly target the Capacity Reservation. This ensures that only permitted
     * instances can use the reserved capacity.</p> </li> </ul> </li> <li> <p>
     * <code>placement-group-arn</code> - The ARN of the cluster placement group in
     * which the Capacity Reservation was created.</p> </li> </ul>
     */
    inline DescribeCapacityReservationsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline DescribeCapacityReservationsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_capacityReservationIds;
    bool m_capacityReservationIdsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
