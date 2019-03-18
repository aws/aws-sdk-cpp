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
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/CapacityReservationInstancePlatform.h>
#include <aws/ec2/model/CapacityReservationTenancy.h>
#include <aws/ec2/model/CapacityReservationState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/EndDateType.h>
#include <aws/ec2/model/InstanceMatchCriteria.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes a Capacity Reservation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CapacityReservation">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API CapacityReservation
  {
  public:
    CapacityReservation();
    CapacityReservation(const Aws::Utils::Xml::XmlNode& xmlNode);
    CapacityReservation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the Capacity Reservation.</p>
     */
    inline const Aws::String& GetCapacityReservationId() const{ return m_capacityReservationId; }

    /**
     * <p>The ID of the Capacity Reservation.</p>
     */
    inline bool CapacityReservationIdHasBeenSet() const { return m_capacityReservationIdHasBeenSet; }

    /**
     * <p>The ID of the Capacity Reservation.</p>
     */
    inline void SetCapacityReservationId(const Aws::String& value) { m_capacityReservationIdHasBeenSet = true; m_capacityReservationId = value; }

    /**
     * <p>The ID of the Capacity Reservation.</p>
     */
    inline void SetCapacityReservationId(Aws::String&& value) { m_capacityReservationIdHasBeenSet = true; m_capacityReservationId = std::move(value); }

    /**
     * <p>The ID of the Capacity Reservation.</p>
     */
    inline void SetCapacityReservationId(const char* value) { m_capacityReservationIdHasBeenSet = true; m_capacityReservationId.assign(value); }

    /**
     * <p>The ID of the Capacity Reservation.</p>
     */
    inline CapacityReservation& WithCapacityReservationId(const Aws::String& value) { SetCapacityReservationId(value); return *this;}

    /**
     * <p>The ID of the Capacity Reservation.</p>
     */
    inline CapacityReservation& WithCapacityReservationId(Aws::String&& value) { SetCapacityReservationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Capacity Reservation.</p>
     */
    inline CapacityReservation& WithCapacityReservationId(const char* value) { SetCapacityReservationId(value); return *this;}


    /**
     * <p>The type of instance for which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The type of instance for which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The type of instance for which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The type of instance for which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The type of instance for which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>The type of instance for which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline CapacityReservation& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The type of instance for which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline CapacityReservation& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>The type of instance for which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline CapacityReservation& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    /**
     * <p>The type of operating system for which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline const CapacityReservationInstancePlatform& GetInstancePlatform() const{ return m_instancePlatform; }

    /**
     * <p>The type of operating system for which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline bool InstancePlatformHasBeenSet() const { return m_instancePlatformHasBeenSet; }

    /**
     * <p>The type of operating system for which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline void SetInstancePlatform(const CapacityReservationInstancePlatform& value) { m_instancePlatformHasBeenSet = true; m_instancePlatform = value; }

    /**
     * <p>The type of operating system for which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline void SetInstancePlatform(CapacityReservationInstancePlatform&& value) { m_instancePlatformHasBeenSet = true; m_instancePlatform = std::move(value); }

    /**
     * <p>The type of operating system for which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline CapacityReservation& WithInstancePlatform(const CapacityReservationInstancePlatform& value) { SetInstancePlatform(value); return *this;}

    /**
     * <p>The type of operating system for which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline CapacityReservation& WithInstancePlatform(CapacityReservationInstancePlatform&& value) { SetInstancePlatform(std::move(value)); return *this;}


    /**
     * <p>The Availability Zone in which the capacity is reserved.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone in which the capacity is reserved.</p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The Availability Zone in which the capacity is reserved.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone in which the capacity is reserved.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone in which the capacity is reserved.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone in which the capacity is reserved.</p>
     */
    inline CapacityReservation& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone in which the capacity is reserved.</p>
     */
    inline CapacityReservation& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone in which the capacity is reserved.</p>
     */
    inline CapacityReservation& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>Indicates the tenancy of the Capacity Reservation. A Capacity Reservation can
     * have one of the following tenancy settings:</p> <ul> <li> <p>
     * <code>default</code> - The Capacity Reservation is created on hardware that is
     * shared with other AWS accounts.</p> </li> <li> <p> <code>dedicated</code> - The
     * Capacity Reservation is created on single-tenant hardware that is dedicated to a
     * single AWS account.</p> </li> </ul>
     */
    inline const CapacityReservationTenancy& GetTenancy() const{ return m_tenancy; }

    /**
     * <p>Indicates the tenancy of the Capacity Reservation. A Capacity Reservation can
     * have one of the following tenancy settings:</p> <ul> <li> <p>
     * <code>default</code> - The Capacity Reservation is created on hardware that is
     * shared with other AWS accounts.</p> </li> <li> <p> <code>dedicated</code> - The
     * Capacity Reservation is created on single-tenant hardware that is dedicated to a
     * single AWS account.</p> </li> </ul>
     */
    inline bool TenancyHasBeenSet() const { return m_tenancyHasBeenSet; }

    /**
     * <p>Indicates the tenancy of the Capacity Reservation. A Capacity Reservation can
     * have one of the following tenancy settings:</p> <ul> <li> <p>
     * <code>default</code> - The Capacity Reservation is created on hardware that is
     * shared with other AWS accounts.</p> </li> <li> <p> <code>dedicated</code> - The
     * Capacity Reservation is created on single-tenant hardware that is dedicated to a
     * single AWS account.</p> </li> </ul>
     */
    inline void SetTenancy(const CapacityReservationTenancy& value) { m_tenancyHasBeenSet = true; m_tenancy = value; }

    /**
     * <p>Indicates the tenancy of the Capacity Reservation. A Capacity Reservation can
     * have one of the following tenancy settings:</p> <ul> <li> <p>
     * <code>default</code> - The Capacity Reservation is created on hardware that is
     * shared with other AWS accounts.</p> </li> <li> <p> <code>dedicated</code> - The
     * Capacity Reservation is created on single-tenant hardware that is dedicated to a
     * single AWS account.</p> </li> </ul>
     */
    inline void SetTenancy(CapacityReservationTenancy&& value) { m_tenancyHasBeenSet = true; m_tenancy = std::move(value); }

    /**
     * <p>Indicates the tenancy of the Capacity Reservation. A Capacity Reservation can
     * have one of the following tenancy settings:</p> <ul> <li> <p>
     * <code>default</code> - The Capacity Reservation is created on hardware that is
     * shared with other AWS accounts.</p> </li> <li> <p> <code>dedicated</code> - The
     * Capacity Reservation is created on single-tenant hardware that is dedicated to a
     * single AWS account.</p> </li> </ul>
     */
    inline CapacityReservation& WithTenancy(const CapacityReservationTenancy& value) { SetTenancy(value); return *this;}

    /**
     * <p>Indicates the tenancy of the Capacity Reservation. A Capacity Reservation can
     * have one of the following tenancy settings:</p> <ul> <li> <p>
     * <code>default</code> - The Capacity Reservation is created on hardware that is
     * shared with other AWS accounts.</p> </li> <li> <p> <code>dedicated</code> - The
     * Capacity Reservation is created on single-tenant hardware that is dedicated to a
     * single AWS account.</p> </li> </ul>
     */
    inline CapacityReservation& WithTenancy(CapacityReservationTenancy&& value) { SetTenancy(std::move(value)); return *this;}


    /**
     * <p>The number of instances for which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline int GetTotalInstanceCount() const{ return m_totalInstanceCount; }

    /**
     * <p>The number of instances for which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline bool TotalInstanceCountHasBeenSet() const { return m_totalInstanceCountHasBeenSet; }

    /**
     * <p>The number of instances for which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline void SetTotalInstanceCount(int value) { m_totalInstanceCountHasBeenSet = true; m_totalInstanceCount = value; }

    /**
     * <p>The number of instances for which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline CapacityReservation& WithTotalInstanceCount(int value) { SetTotalInstanceCount(value); return *this;}


    /**
     * <p>The remaining capacity. Indicates the number of instances that can be
     * launched in the Capacity Reservation.</p>
     */
    inline int GetAvailableInstanceCount() const{ return m_availableInstanceCount; }

    /**
     * <p>The remaining capacity. Indicates the number of instances that can be
     * launched in the Capacity Reservation.</p>
     */
    inline bool AvailableInstanceCountHasBeenSet() const { return m_availableInstanceCountHasBeenSet; }

    /**
     * <p>The remaining capacity. Indicates the number of instances that can be
     * launched in the Capacity Reservation.</p>
     */
    inline void SetAvailableInstanceCount(int value) { m_availableInstanceCountHasBeenSet = true; m_availableInstanceCount = value; }

    /**
     * <p>The remaining capacity. Indicates the number of instances that can be
     * launched in the Capacity Reservation.</p>
     */
    inline CapacityReservation& WithAvailableInstanceCount(int value) { SetAvailableInstanceCount(value); return *this;}


    /**
     * <p>Indicates whether the Capacity Reservation supports EBS-optimized instances.
     * This optimization provides dedicated throughput to Amazon EBS and an optimized
     * configuration stack to provide optimal I/O performance. This optimization isn't
     * available with all instance types. Additional usage charges apply when using an
     * EBS- optimized instance.</p>
     */
    inline bool GetEbsOptimized() const{ return m_ebsOptimized; }

    /**
     * <p>Indicates whether the Capacity Reservation supports EBS-optimized instances.
     * This optimization provides dedicated throughput to Amazon EBS and an optimized
     * configuration stack to provide optimal I/O performance. This optimization isn't
     * available with all instance types. Additional usage charges apply when using an
     * EBS- optimized instance.</p>
     */
    inline bool EbsOptimizedHasBeenSet() const { return m_ebsOptimizedHasBeenSet; }

    /**
     * <p>Indicates whether the Capacity Reservation supports EBS-optimized instances.
     * This optimization provides dedicated throughput to Amazon EBS and an optimized
     * configuration stack to provide optimal I/O performance. This optimization isn't
     * available with all instance types. Additional usage charges apply when using an
     * EBS- optimized instance.</p>
     */
    inline void SetEbsOptimized(bool value) { m_ebsOptimizedHasBeenSet = true; m_ebsOptimized = value; }

    /**
     * <p>Indicates whether the Capacity Reservation supports EBS-optimized instances.
     * This optimization provides dedicated throughput to Amazon EBS and an optimized
     * configuration stack to provide optimal I/O performance. This optimization isn't
     * available with all instance types. Additional usage charges apply when using an
     * EBS- optimized instance.</p>
     */
    inline CapacityReservation& WithEbsOptimized(bool value) { SetEbsOptimized(value); return *this;}


    /**
     * <p>Indicates whether the Capacity Reservation supports instances with temporary,
     * block-level storage.</p>
     */
    inline bool GetEphemeralStorage() const{ return m_ephemeralStorage; }

    /**
     * <p>Indicates whether the Capacity Reservation supports instances with temporary,
     * block-level storage.</p>
     */
    inline bool EphemeralStorageHasBeenSet() const { return m_ephemeralStorageHasBeenSet; }

    /**
     * <p>Indicates whether the Capacity Reservation supports instances with temporary,
     * block-level storage.</p>
     */
    inline void SetEphemeralStorage(bool value) { m_ephemeralStorageHasBeenSet = true; m_ephemeralStorage = value; }

    /**
     * <p>Indicates whether the Capacity Reservation supports instances with temporary,
     * block-level storage.</p>
     */
    inline CapacityReservation& WithEphemeralStorage(bool value) { SetEphemeralStorage(value); return *this;}


    /**
     * <p>The current state of the Capacity Reservation. A Capacity Reservation can be
     * in one of the following states:</p> <ul> <li> <p> <code>active</code> - The
     * Capacity Reservation is active and the capacity is available for your use.</p>
     * </li> <li> <p> <code>cancelled</code> - The Capacity Reservation expired
     * automatically at the date and time specified in your request. The reserved
     * capacity is no longer available for your use.</p> </li> <li> <p>
     * <code>expired</code> - The Capacity Reservation was manually cancelled. The
     * reserved capacity is no longer available for your use.</p> </li> <li> <p>
     * <code>pending</code> - The Capacity Reservation request was successful but the
     * capacity provisioning is still pending.</p> </li> <li> <p> <code>failed</code> -
     * The Capacity Reservation request has failed. A request might fail due to invalid
     * request parameters, capacity constraints, or instance limit constraints. Failed
     * requests are retained for 60 minutes.</p> </li> </ul>
     */
    inline const CapacityReservationState& GetState() const{ return m_state; }

    /**
     * <p>The current state of the Capacity Reservation. A Capacity Reservation can be
     * in one of the following states:</p> <ul> <li> <p> <code>active</code> - The
     * Capacity Reservation is active and the capacity is available for your use.</p>
     * </li> <li> <p> <code>cancelled</code> - The Capacity Reservation expired
     * automatically at the date and time specified in your request. The reserved
     * capacity is no longer available for your use.</p> </li> <li> <p>
     * <code>expired</code> - The Capacity Reservation was manually cancelled. The
     * reserved capacity is no longer available for your use.</p> </li> <li> <p>
     * <code>pending</code> - The Capacity Reservation request was successful but the
     * capacity provisioning is still pending.</p> </li> <li> <p> <code>failed</code> -
     * The Capacity Reservation request has failed. A request might fail due to invalid
     * request parameters, capacity constraints, or instance limit constraints. Failed
     * requests are retained for 60 minutes.</p> </li> </ul>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The current state of the Capacity Reservation. A Capacity Reservation can be
     * in one of the following states:</p> <ul> <li> <p> <code>active</code> - The
     * Capacity Reservation is active and the capacity is available for your use.</p>
     * </li> <li> <p> <code>cancelled</code> - The Capacity Reservation expired
     * automatically at the date and time specified in your request. The reserved
     * capacity is no longer available for your use.</p> </li> <li> <p>
     * <code>expired</code> - The Capacity Reservation was manually cancelled. The
     * reserved capacity is no longer available for your use.</p> </li> <li> <p>
     * <code>pending</code> - The Capacity Reservation request was successful but the
     * capacity provisioning is still pending.</p> </li> <li> <p> <code>failed</code> -
     * The Capacity Reservation request has failed. A request might fail due to invalid
     * request parameters, capacity constraints, or instance limit constraints. Failed
     * requests are retained for 60 minutes.</p> </li> </ul>
     */
    inline void SetState(const CapacityReservationState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current state of the Capacity Reservation. A Capacity Reservation can be
     * in one of the following states:</p> <ul> <li> <p> <code>active</code> - The
     * Capacity Reservation is active and the capacity is available for your use.</p>
     * </li> <li> <p> <code>cancelled</code> - The Capacity Reservation expired
     * automatically at the date and time specified in your request. The reserved
     * capacity is no longer available for your use.</p> </li> <li> <p>
     * <code>expired</code> - The Capacity Reservation was manually cancelled. The
     * reserved capacity is no longer available for your use.</p> </li> <li> <p>
     * <code>pending</code> - The Capacity Reservation request was successful but the
     * capacity provisioning is still pending.</p> </li> <li> <p> <code>failed</code> -
     * The Capacity Reservation request has failed. A request might fail due to invalid
     * request parameters, capacity constraints, or instance limit constraints. Failed
     * requests are retained for 60 minutes.</p> </li> </ul>
     */
    inline void SetState(CapacityReservationState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The current state of the Capacity Reservation. A Capacity Reservation can be
     * in one of the following states:</p> <ul> <li> <p> <code>active</code> - The
     * Capacity Reservation is active and the capacity is available for your use.</p>
     * </li> <li> <p> <code>cancelled</code> - The Capacity Reservation expired
     * automatically at the date and time specified in your request. The reserved
     * capacity is no longer available for your use.</p> </li> <li> <p>
     * <code>expired</code> - The Capacity Reservation was manually cancelled. The
     * reserved capacity is no longer available for your use.</p> </li> <li> <p>
     * <code>pending</code> - The Capacity Reservation request was successful but the
     * capacity provisioning is still pending.</p> </li> <li> <p> <code>failed</code> -
     * The Capacity Reservation request has failed. A request might fail due to invalid
     * request parameters, capacity constraints, or instance limit constraints. Failed
     * requests are retained for 60 minutes.</p> </li> </ul>
     */
    inline CapacityReservation& WithState(const CapacityReservationState& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the Capacity Reservation. A Capacity Reservation can be
     * in one of the following states:</p> <ul> <li> <p> <code>active</code> - The
     * Capacity Reservation is active and the capacity is available for your use.</p>
     * </li> <li> <p> <code>cancelled</code> - The Capacity Reservation expired
     * automatically at the date and time specified in your request. The reserved
     * capacity is no longer available for your use.</p> </li> <li> <p>
     * <code>expired</code> - The Capacity Reservation was manually cancelled. The
     * reserved capacity is no longer available for your use.</p> </li> <li> <p>
     * <code>pending</code> - The Capacity Reservation request was successful but the
     * capacity provisioning is still pending.</p> </li> <li> <p> <code>failed</code> -
     * The Capacity Reservation request has failed. A request might fail due to invalid
     * request parameters, capacity constraints, or instance limit constraints. Failed
     * requests are retained for 60 minutes.</p> </li> </ul>
     */
    inline CapacityReservation& WithState(CapacityReservationState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The date and time at which the Capacity Reservation expires. When a Capacity
     * Reservation expires, the reserved capacity is released and you can no longer
     * launch instances into it. The Capacity Reservation's state changes to
     * <code>expired</code> when it reaches its end date and time.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDate() const{ return m_endDate; }

    /**
     * <p>The date and time at which the Capacity Reservation expires. When a Capacity
     * Reservation expires, the reserved capacity is released and you can no longer
     * launch instances into it. The Capacity Reservation's state changes to
     * <code>expired</code> when it reaches its end date and time.</p>
     */
    inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }

    /**
     * <p>The date and time at which the Capacity Reservation expires. When a Capacity
     * Reservation expires, the reserved capacity is released and you can no longer
     * launch instances into it. The Capacity Reservation's state changes to
     * <code>expired</code> when it reaches its end date and time.</p>
     */
    inline void SetEndDate(const Aws::Utils::DateTime& value) { m_endDateHasBeenSet = true; m_endDate = value; }

    /**
     * <p>The date and time at which the Capacity Reservation expires. When a Capacity
     * Reservation expires, the reserved capacity is released and you can no longer
     * launch instances into it. The Capacity Reservation's state changes to
     * <code>expired</code> when it reaches its end date and time.</p>
     */
    inline void SetEndDate(Aws::Utils::DateTime&& value) { m_endDateHasBeenSet = true; m_endDate = std::move(value); }

    /**
     * <p>The date and time at which the Capacity Reservation expires. When a Capacity
     * Reservation expires, the reserved capacity is released and you can no longer
     * launch instances into it. The Capacity Reservation's state changes to
     * <code>expired</code> when it reaches its end date and time.</p>
     */
    inline CapacityReservation& WithEndDate(const Aws::Utils::DateTime& value) { SetEndDate(value); return *this;}

    /**
     * <p>The date and time at which the Capacity Reservation expires. When a Capacity
     * Reservation expires, the reserved capacity is released and you can no longer
     * launch instances into it. The Capacity Reservation's state changes to
     * <code>expired</code> when it reaches its end date and time.</p>
     */
    inline CapacityReservation& WithEndDate(Aws::Utils::DateTime&& value) { SetEndDate(std::move(value)); return *this;}


    /**
     * <p>Indicates the way in which the Capacity Reservation ends. A Capacity
     * Reservation can have one of the following end types:</p> <ul> <li> <p>
     * <code>unlimited</code> - The Capacity Reservation remains active until you
     * explicitly cancel it.</p> </li> <li> <p> <code>limited</code> - The Capacity
     * Reservation expires automatically at a specified date and time.</p> </li> </ul>
     */
    inline const EndDateType& GetEndDateType() const{ return m_endDateType; }

    /**
     * <p>Indicates the way in which the Capacity Reservation ends. A Capacity
     * Reservation can have one of the following end types:</p> <ul> <li> <p>
     * <code>unlimited</code> - The Capacity Reservation remains active until you
     * explicitly cancel it.</p> </li> <li> <p> <code>limited</code> - The Capacity
     * Reservation expires automatically at a specified date and time.</p> </li> </ul>
     */
    inline bool EndDateTypeHasBeenSet() const { return m_endDateTypeHasBeenSet; }

    /**
     * <p>Indicates the way in which the Capacity Reservation ends. A Capacity
     * Reservation can have one of the following end types:</p> <ul> <li> <p>
     * <code>unlimited</code> - The Capacity Reservation remains active until you
     * explicitly cancel it.</p> </li> <li> <p> <code>limited</code> - The Capacity
     * Reservation expires automatically at a specified date and time.</p> </li> </ul>
     */
    inline void SetEndDateType(const EndDateType& value) { m_endDateTypeHasBeenSet = true; m_endDateType = value; }

    /**
     * <p>Indicates the way in which the Capacity Reservation ends. A Capacity
     * Reservation can have one of the following end types:</p> <ul> <li> <p>
     * <code>unlimited</code> - The Capacity Reservation remains active until you
     * explicitly cancel it.</p> </li> <li> <p> <code>limited</code> - The Capacity
     * Reservation expires automatically at a specified date and time.</p> </li> </ul>
     */
    inline void SetEndDateType(EndDateType&& value) { m_endDateTypeHasBeenSet = true; m_endDateType = std::move(value); }

    /**
     * <p>Indicates the way in which the Capacity Reservation ends. A Capacity
     * Reservation can have one of the following end types:</p> <ul> <li> <p>
     * <code>unlimited</code> - The Capacity Reservation remains active until you
     * explicitly cancel it.</p> </li> <li> <p> <code>limited</code> - The Capacity
     * Reservation expires automatically at a specified date and time.</p> </li> </ul>
     */
    inline CapacityReservation& WithEndDateType(const EndDateType& value) { SetEndDateType(value); return *this;}

    /**
     * <p>Indicates the way in which the Capacity Reservation ends. A Capacity
     * Reservation can have one of the following end types:</p> <ul> <li> <p>
     * <code>unlimited</code> - The Capacity Reservation remains active until you
     * explicitly cancel it.</p> </li> <li> <p> <code>limited</code> - The Capacity
     * Reservation expires automatically at a specified date and time.</p> </li> </ul>
     */
    inline CapacityReservation& WithEndDateType(EndDateType&& value) { SetEndDateType(std::move(value)); return *this;}


    /**
     * <p>Indicates the type of instance launches that the Capacity Reservation
     * accepts. The options include:</p> <ul> <li> <p> <code>open</code> - The Capacity
     * Reservation accepts all instances that have matching attributes (instance type,
     * platform, and Availability Zone). Instances that have matching attributes launch
     * into the Capacity Reservation automatically without specifying any additional
     * parameters.</p> </li> <li> <p> <code>targeted</code> - The Capacity Reservation
     * only accepts instances that have matching attributes (instance type, platform,
     * and Availability Zone), and explicitly target the Capacity Reservation. This
     * ensures that only permitted instances can use the reserved capacity. </p> </li>
     * </ul>
     */
    inline const InstanceMatchCriteria& GetInstanceMatchCriteria() const{ return m_instanceMatchCriteria; }

    /**
     * <p>Indicates the type of instance launches that the Capacity Reservation
     * accepts. The options include:</p> <ul> <li> <p> <code>open</code> - The Capacity
     * Reservation accepts all instances that have matching attributes (instance type,
     * platform, and Availability Zone). Instances that have matching attributes launch
     * into the Capacity Reservation automatically without specifying any additional
     * parameters.</p> </li> <li> <p> <code>targeted</code> - The Capacity Reservation
     * only accepts instances that have matching attributes (instance type, platform,
     * and Availability Zone), and explicitly target the Capacity Reservation. This
     * ensures that only permitted instances can use the reserved capacity. </p> </li>
     * </ul>
     */
    inline bool InstanceMatchCriteriaHasBeenSet() const { return m_instanceMatchCriteriaHasBeenSet; }

    /**
     * <p>Indicates the type of instance launches that the Capacity Reservation
     * accepts. The options include:</p> <ul> <li> <p> <code>open</code> - The Capacity
     * Reservation accepts all instances that have matching attributes (instance type,
     * platform, and Availability Zone). Instances that have matching attributes launch
     * into the Capacity Reservation automatically without specifying any additional
     * parameters.</p> </li> <li> <p> <code>targeted</code> - The Capacity Reservation
     * only accepts instances that have matching attributes (instance type, platform,
     * and Availability Zone), and explicitly target the Capacity Reservation. This
     * ensures that only permitted instances can use the reserved capacity. </p> </li>
     * </ul>
     */
    inline void SetInstanceMatchCriteria(const InstanceMatchCriteria& value) { m_instanceMatchCriteriaHasBeenSet = true; m_instanceMatchCriteria = value; }

    /**
     * <p>Indicates the type of instance launches that the Capacity Reservation
     * accepts. The options include:</p> <ul> <li> <p> <code>open</code> - The Capacity
     * Reservation accepts all instances that have matching attributes (instance type,
     * platform, and Availability Zone). Instances that have matching attributes launch
     * into the Capacity Reservation automatically without specifying any additional
     * parameters.</p> </li> <li> <p> <code>targeted</code> - The Capacity Reservation
     * only accepts instances that have matching attributes (instance type, platform,
     * and Availability Zone), and explicitly target the Capacity Reservation. This
     * ensures that only permitted instances can use the reserved capacity. </p> </li>
     * </ul>
     */
    inline void SetInstanceMatchCriteria(InstanceMatchCriteria&& value) { m_instanceMatchCriteriaHasBeenSet = true; m_instanceMatchCriteria = std::move(value); }

    /**
     * <p>Indicates the type of instance launches that the Capacity Reservation
     * accepts. The options include:</p> <ul> <li> <p> <code>open</code> - The Capacity
     * Reservation accepts all instances that have matching attributes (instance type,
     * platform, and Availability Zone). Instances that have matching attributes launch
     * into the Capacity Reservation automatically without specifying any additional
     * parameters.</p> </li> <li> <p> <code>targeted</code> - The Capacity Reservation
     * only accepts instances that have matching attributes (instance type, platform,
     * and Availability Zone), and explicitly target the Capacity Reservation. This
     * ensures that only permitted instances can use the reserved capacity. </p> </li>
     * </ul>
     */
    inline CapacityReservation& WithInstanceMatchCriteria(const InstanceMatchCriteria& value) { SetInstanceMatchCriteria(value); return *this;}

    /**
     * <p>Indicates the type of instance launches that the Capacity Reservation
     * accepts. The options include:</p> <ul> <li> <p> <code>open</code> - The Capacity
     * Reservation accepts all instances that have matching attributes (instance type,
     * platform, and Availability Zone). Instances that have matching attributes launch
     * into the Capacity Reservation automatically without specifying any additional
     * parameters.</p> </li> <li> <p> <code>targeted</code> - The Capacity Reservation
     * only accepts instances that have matching attributes (instance type, platform,
     * and Availability Zone), and explicitly target the Capacity Reservation. This
     * ensures that only permitted instances can use the reserved capacity. </p> </li>
     * </ul>
     */
    inline CapacityReservation& WithInstanceMatchCriteria(InstanceMatchCriteria&& value) { SetInstanceMatchCriteria(std::move(value)); return *this;}


    /**
     * <p>The date and time at which the Capacity Reservation was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const{ return m_createDate; }

    /**
     * <p>The date and time at which the Capacity Reservation was created.</p>
     */
    inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }

    /**
     * <p>The date and time at which the Capacity Reservation was created.</p>
     */
    inline void SetCreateDate(const Aws::Utils::DateTime& value) { m_createDateHasBeenSet = true; m_createDate = value; }

    /**
     * <p>The date and time at which the Capacity Reservation was created.</p>
     */
    inline void SetCreateDate(Aws::Utils::DateTime&& value) { m_createDateHasBeenSet = true; m_createDate = std::move(value); }

    /**
     * <p>The date and time at which the Capacity Reservation was created.</p>
     */
    inline CapacityReservation& WithCreateDate(const Aws::Utils::DateTime& value) { SetCreateDate(value); return *this;}

    /**
     * <p>The date and time at which the Capacity Reservation was created.</p>
     */
    inline CapacityReservation& WithCreateDate(Aws::Utils::DateTime&& value) { SetCreateDate(std::move(value)); return *this;}


    /**
     * <p>Any tags assigned to the Capacity Reservation.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Any tags assigned to the Capacity Reservation.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Any tags assigned to the Capacity Reservation.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Any tags assigned to the Capacity Reservation.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Any tags assigned to the Capacity Reservation.</p>
     */
    inline CapacityReservation& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Any tags assigned to the Capacity Reservation.</p>
     */
    inline CapacityReservation& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Any tags assigned to the Capacity Reservation.</p>
     */
    inline CapacityReservation& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Any tags assigned to the Capacity Reservation.</p>
     */
    inline CapacityReservation& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_capacityReservationId;
    bool m_capacityReservationIdHasBeenSet;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet;

    CapacityReservationInstancePlatform m_instancePlatform;
    bool m_instancePlatformHasBeenSet;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;

    CapacityReservationTenancy m_tenancy;
    bool m_tenancyHasBeenSet;

    int m_totalInstanceCount;
    bool m_totalInstanceCountHasBeenSet;

    int m_availableInstanceCount;
    bool m_availableInstanceCountHasBeenSet;

    bool m_ebsOptimized;
    bool m_ebsOptimizedHasBeenSet;

    bool m_ephemeralStorage;
    bool m_ephemeralStorageHasBeenSet;

    CapacityReservationState m_state;
    bool m_stateHasBeenSet;

    Aws::Utils::DateTime m_endDate;
    bool m_endDateHasBeenSet;

    EndDateType m_endDateType;
    bool m_endDateTypeHasBeenSet;

    InstanceMatchCriteria m_instanceMatchCriteria;
    bool m_instanceMatchCriteriaHasBeenSet;

    Aws::Utils::DateTime m_createDate;
    bool m_createDateHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
