/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
#include <aws/ec2/model/CapacityAllocation.h>
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
  class CapacityReservation
  {
  public:
    AWS_EC2_API CapacityReservation();
    AWS_EC2_API CapacityReservation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API CapacityReservation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
     * <p>The ID of the Amazon Web Services account that owns the Capacity
     * Reservation.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the Capacity
     * Reservation.</p>
     */
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the Capacity
     * Reservation.</p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the Capacity
     * Reservation.</p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account that owns the Capacity
     * Reservation.</p>
     */
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account that owns the Capacity
     * Reservation.</p>
     */
    inline CapacityReservation& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that owns the Capacity
     * Reservation.</p>
     */
    inline CapacityReservation& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that owns the Capacity
     * Reservation.</p>
     */
    inline CapacityReservation& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Capacity Reservation.</p>
     */
    inline const Aws::String& GetCapacityReservationArn() const{ return m_capacityReservationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Capacity Reservation.</p>
     */
    inline bool CapacityReservationArnHasBeenSet() const { return m_capacityReservationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Capacity Reservation.</p>
     */
    inline void SetCapacityReservationArn(const Aws::String& value) { m_capacityReservationArnHasBeenSet = true; m_capacityReservationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Capacity Reservation.</p>
     */
    inline void SetCapacityReservationArn(Aws::String&& value) { m_capacityReservationArnHasBeenSet = true; m_capacityReservationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Capacity Reservation.</p>
     */
    inline void SetCapacityReservationArn(const char* value) { m_capacityReservationArnHasBeenSet = true; m_capacityReservationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Capacity Reservation.</p>
     */
    inline CapacityReservation& WithCapacityReservationArn(const Aws::String& value) { SetCapacityReservationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Capacity Reservation.</p>
     */
    inline CapacityReservation& WithCapacityReservationArn(Aws::String&& value) { SetCapacityReservationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Capacity Reservation.</p>
     */
    inline CapacityReservation& WithCapacityReservationArn(const char* value) { SetCapacityReservationArn(value); return *this;}


    /**
     * <p>The Availability Zone ID of the Capacity Reservation.</p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const{ return m_availabilityZoneId; }

    /**
     * <p>The Availability Zone ID of the Capacity Reservation.</p>
     */
    inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }

    /**
     * <p>The Availability Zone ID of the Capacity Reservation.</p>
     */
    inline void SetAvailabilityZoneId(const Aws::String& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = value; }

    /**
     * <p>The Availability Zone ID of the Capacity Reservation.</p>
     */
    inline void SetAvailabilityZoneId(Aws::String&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::move(value); }

    /**
     * <p>The Availability Zone ID of the Capacity Reservation.</p>
     */
    inline void SetAvailabilityZoneId(const char* value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId.assign(value); }

    /**
     * <p>The Availability Zone ID of the Capacity Reservation.</p>
     */
    inline CapacityReservation& WithAvailabilityZoneId(const Aws::String& value) { SetAvailabilityZoneId(value); return *this;}

    /**
     * <p>The Availability Zone ID of the Capacity Reservation.</p>
     */
    inline CapacityReservation& WithAvailabilityZoneId(Aws::String&& value) { SetAvailabilityZoneId(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone ID of the Capacity Reservation.</p>
     */
    inline CapacityReservation& WithAvailabilityZoneId(const char* value) { SetAvailabilityZoneId(value); return *this;}


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
     * shared with other Amazon Web Services accounts.</p> </li> <li> <p>
     * <code>dedicated</code> - The Capacity Reservation is created on single-tenant
     * hardware that is dedicated to a single Amazon Web Services account.</p> </li>
     * </ul>
     */
    inline const CapacityReservationTenancy& GetTenancy() const{ return m_tenancy; }

    /**
     * <p>Indicates the tenancy of the Capacity Reservation. A Capacity Reservation can
     * have one of the following tenancy settings:</p> <ul> <li> <p>
     * <code>default</code> - The Capacity Reservation is created on hardware that is
     * shared with other Amazon Web Services accounts.</p> </li> <li> <p>
     * <code>dedicated</code> - The Capacity Reservation is created on single-tenant
     * hardware that is dedicated to a single Amazon Web Services account.</p> </li>
     * </ul>
     */
    inline bool TenancyHasBeenSet() const { return m_tenancyHasBeenSet; }

    /**
     * <p>Indicates the tenancy of the Capacity Reservation. A Capacity Reservation can
     * have one of the following tenancy settings:</p> <ul> <li> <p>
     * <code>default</code> - The Capacity Reservation is created on hardware that is
     * shared with other Amazon Web Services accounts.</p> </li> <li> <p>
     * <code>dedicated</code> - The Capacity Reservation is created on single-tenant
     * hardware that is dedicated to a single Amazon Web Services account.</p> </li>
     * </ul>
     */
    inline void SetTenancy(const CapacityReservationTenancy& value) { m_tenancyHasBeenSet = true; m_tenancy = value; }

    /**
     * <p>Indicates the tenancy of the Capacity Reservation. A Capacity Reservation can
     * have one of the following tenancy settings:</p> <ul> <li> <p>
     * <code>default</code> - The Capacity Reservation is created on hardware that is
     * shared with other Amazon Web Services accounts.</p> </li> <li> <p>
     * <code>dedicated</code> - The Capacity Reservation is created on single-tenant
     * hardware that is dedicated to a single Amazon Web Services account.</p> </li>
     * </ul>
     */
    inline void SetTenancy(CapacityReservationTenancy&& value) { m_tenancyHasBeenSet = true; m_tenancy = std::move(value); }

    /**
     * <p>Indicates the tenancy of the Capacity Reservation. A Capacity Reservation can
     * have one of the following tenancy settings:</p> <ul> <li> <p>
     * <code>default</code> - The Capacity Reservation is created on hardware that is
     * shared with other Amazon Web Services accounts.</p> </li> <li> <p>
     * <code>dedicated</code> - The Capacity Reservation is created on single-tenant
     * hardware that is dedicated to a single Amazon Web Services account.</p> </li>
     * </ul>
     */
    inline CapacityReservation& WithTenancy(const CapacityReservationTenancy& value) { SetTenancy(value); return *this;}

    /**
     * <p>Indicates the tenancy of the Capacity Reservation. A Capacity Reservation can
     * have one of the following tenancy settings:</p> <ul> <li> <p>
     * <code>default</code> - The Capacity Reservation is created on hardware that is
     * shared with other Amazon Web Services accounts.</p> </li> <li> <p>
     * <code>dedicated</code> - The Capacity Reservation is created on single-tenant
     * hardware that is dedicated to a single Amazon Web Services account.</p> </li>
     * </ul>
     */
    inline CapacityReservation& WithTenancy(CapacityReservationTenancy&& value) { SetTenancy(std::move(value)); return *this;}


    /**
     * <p>The total number of instances for which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline int GetTotalInstanceCount() const{ return m_totalInstanceCount; }

    /**
     * <p>The total number of instances for which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline bool TotalInstanceCountHasBeenSet() const { return m_totalInstanceCountHasBeenSet; }

    /**
     * <p>The total number of instances for which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline void SetTotalInstanceCount(int value) { m_totalInstanceCountHasBeenSet = true; m_totalInstanceCount = value; }

    /**
     * <p>The total number of instances for which the Capacity Reservation reserves
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
     * <p> <i>Deprecated.</i> </p>
     */
    inline bool GetEphemeralStorage() const{ return m_ephemeralStorage; }

    /**
     * <p> <i>Deprecated.</i> </p>
     */
    inline bool EphemeralStorageHasBeenSet() const { return m_ephemeralStorageHasBeenSet; }

    /**
     * <p> <i>Deprecated.</i> </p>
     */
    inline void SetEphemeralStorage(bool value) { m_ephemeralStorageHasBeenSet = true; m_ephemeralStorage = value; }

    /**
     * <p> <i>Deprecated.</i> </p>
     */
    inline CapacityReservation& WithEphemeralStorage(bool value) { SetEphemeralStorage(value); return *this;}


    /**
     * <p>The current state of the Capacity Reservation. A Capacity Reservation can be
     * in one of the following states:</p> <ul> <li> <p> <code>active</code> - The
     * Capacity Reservation is active and the capacity is available for your use.</p>
     * </li> <li> <p> <code>expired</code> - The Capacity Reservation expired
     * automatically at the date and time specified in your request. The reserved
     * capacity is no longer available for your use.</p> </li> <li> <p>
     * <code>cancelled</code> - The Capacity Reservation was cancelled. The reserved
     * capacity is no longer available for your use.</p> </li> <li> <p>
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
     * </li> <li> <p> <code>expired</code> - The Capacity Reservation expired
     * automatically at the date and time specified in your request. The reserved
     * capacity is no longer available for your use.</p> </li> <li> <p>
     * <code>cancelled</code> - The Capacity Reservation was cancelled. The reserved
     * capacity is no longer available for your use.</p> </li> <li> <p>
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
     * </li> <li> <p> <code>expired</code> - The Capacity Reservation expired
     * automatically at the date and time specified in your request. The reserved
     * capacity is no longer available for your use.</p> </li> <li> <p>
     * <code>cancelled</code> - The Capacity Reservation was cancelled. The reserved
     * capacity is no longer available for your use.</p> </li> <li> <p>
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
     * </li> <li> <p> <code>expired</code> - The Capacity Reservation expired
     * automatically at the date and time specified in your request. The reserved
     * capacity is no longer available for your use.</p> </li> <li> <p>
     * <code>cancelled</code> - The Capacity Reservation was cancelled. The reserved
     * capacity is no longer available for your use.</p> </li> <li> <p>
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
     * </li> <li> <p> <code>expired</code> - The Capacity Reservation expired
     * automatically at the date and time specified in your request. The reserved
     * capacity is no longer available for your use.</p> </li> <li> <p>
     * <code>cancelled</code> - The Capacity Reservation was cancelled. The reserved
     * capacity is no longer available for your use.</p> </li> <li> <p>
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
     * </li> <li> <p> <code>expired</code> - The Capacity Reservation expired
     * automatically at the date and time specified in your request. The reserved
     * capacity is no longer available for your use.</p> </li> <li> <p>
     * <code>cancelled</code> - The Capacity Reservation was cancelled. The reserved
     * capacity is no longer available for your use.</p> </li> <li> <p>
     * <code>pending</code> - The Capacity Reservation request was successful but the
     * capacity provisioning is still pending.</p> </li> <li> <p> <code>failed</code> -
     * The Capacity Reservation request has failed. A request might fail due to invalid
     * request parameters, capacity constraints, or instance limit constraints. Failed
     * requests are retained for 60 minutes.</p> </li> </ul>
     */
    inline CapacityReservation& WithState(CapacityReservationState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The date and time at which the Capacity Reservation was started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDate() const{ return m_startDate; }

    /**
     * <p>The date and time at which the Capacity Reservation was started.</p>
     */
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }

    /**
     * <p>The date and time at which the Capacity Reservation was started.</p>
     */
    inline void SetStartDate(const Aws::Utils::DateTime& value) { m_startDateHasBeenSet = true; m_startDate = value; }

    /**
     * <p>The date and time at which the Capacity Reservation was started.</p>
     */
    inline void SetStartDate(Aws::Utils::DateTime&& value) { m_startDateHasBeenSet = true; m_startDate = std::move(value); }

    /**
     * <p>The date and time at which the Capacity Reservation was started.</p>
     */
    inline CapacityReservation& WithStartDate(const Aws::Utils::DateTime& value) { SetStartDate(value); return *this;}

    /**
     * <p>The date and time at which the Capacity Reservation was started.</p>
     */
    inline CapacityReservation& WithStartDate(Aws::Utils::DateTime&& value) { SetStartDate(std::move(value)); return *this;}


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


    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost on which the Capacity
     * Reservation was created.</p>
     */
    inline const Aws::String& GetOutpostArn() const{ return m_outpostArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost on which the Capacity
     * Reservation was created.</p>
     */
    inline bool OutpostArnHasBeenSet() const { return m_outpostArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost on which the Capacity
     * Reservation was created.</p>
     */
    inline void SetOutpostArn(const Aws::String& value) { m_outpostArnHasBeenSet = true; m_outpostArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost on which the Capacity
     * Reservation was created.</p>
     */
    inline void SetOutpostArn(Aws::String&& value) { m_outpostArnHasBeenSet = true; m_outpostArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost on which the Capacity
     * Reservation was created.</p>
     */
    inline void SetOutpostArn(const char* value) { m_outpostArnHasBeenSet = true; m_outpostArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost on which the Capacity
     * Reservation was created.</p>
     */
    inline CapacityReservation& WithOutpostArn(const Aws::String& value) { SetOutpostArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost on which the Capacity
     * Reservation was created.</p>
     */
    inline CapacityReservation& WithOutpostArn(Aws::String&& value) { SetOutpostArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost on which the Capacity
     * Reservation was created.</p>
     */
    inline CapacityReservation& WithOutpostArn(const char* value) { SetOutpostArn(value); return *this;}


    /**
     * <p>The ID of the Capacity Reservation Fleet to which the Capacity Reservation
     * belongs. Only valid for Capacity Reservations that were created by a Capacity
     * Reservation Fleet.</p>
     */
    inline const Aws::String& GetCapacityReservationFleetId() const{ return m_capacityReservationFleetId; }

    /**
     * <p>The ID of the Capacity Reservation Fleet to which the Capacity Reservation
     * belongs. Only valid for Capacity Reservations that were created by a Capacity
     * Reservation Fleet.</p>
     */
    inline bool CapacityReservationFleetIdHasBeenSet() const { return m_capacityReservationFleetIdHasBeenSet; }

    /**
     * <p>The ID of the Capacity Reservation Fleet to which the Capacity Reservation
     * belongs. Only valid for Capacity Reservations that were created by a Capacity
     * Reservation Fleet.</p>
     */
    inline void SetCapacityReservationFleetId(const Aws::String& value) { m_capacityReservationFleetIdHasBeenSet = true; m_capacityReservationFleetId = value; }

    /**
     * <p>The ID of the Capacity Reservation Fleet to which the Capacity Reservation
     * belongs. Only valid for Capacity Reservations that were created by a Capacity
     * Reservation Fleet.</p>
     */
    inline void SetCapacityReservationFleetId(Aws::String&& value) { m_capacityReservationFleetIdHasBeenSet = true; m_capacityReservationFleetId = std::move(value); }

    /**
     * <p>The ID of the Capacity Reservation Fleet to which the Capacity Reservation
     * belongs. Only valid for Capacity Reservations that were created by a Capacity
     * Reservation Fleet.</p>
     */
    inline void SetCapacityReservationFleetId(const char* value) { m_capacityReservationFleetIdHasBeenSet = true; m_capacityReservationFleetId.assign(value); }

    /**
     * <p>The ID of the Capacity Reservation Fleet to which the Capacity Reservation
     * belongs. Only valid for Capacity Reservations that were created by a Capacity
     * Reservation Fleet.</p>
     */
    inline CapacityReservation& WithCapacityReservationFleetId(const Aws::String& value) { SetCapacityReservationFleetId(value); return *this;}

    /**
     * <p>The ID of the Capacity Reservation Fleet to which the Capacity Reservation
     * belongs. Only valid for Capacity Reservations that were created by a Capacity
     * Reservation Fleet.</p>
     */
    inline CapacityReservation& WithCapacityReservationFleetId(Aws::String&& value) { SetCapacityReservationFleetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Capacity Reservation Fleet to which the Capacity Reservation
     * belongs. Only valid for Capacity Reservations that were created by a Capacity
     * Reservation Fleet.</p>
     */
    inline CapacityReservation& WithCapacityReservationFleetId(const char* value) { SetCapacityReservationFleetId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the cluster placement group in which the
     * Capacity Reservation was created. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/cr-cpg.html"> Capacity
     * Reservations for cluster placement groups</a> in the <i>Amazon EC2 User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetPlacementGroupArn() const{ return m_placementGroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the cluster placement group in which the
     * Capacity Reservation was created. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/cr-cpg.html"> Capacity
     * Reservations for cluster placement groups</a> in the <i>Amazon EC2 User
     * Guide</i>.</p>
     */
    inline bool PlacementGroupArnHasBeenSet() const { return m_placementGroupArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the cluster placement group in which the
     * Capacity Reservation was created. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/cr-cpg.html"> Capacity
     * Reservations for cluster placement groups</a> in the <i>Amazon EC2 User
     * Guide</i>.</p>
     */
    inline void SetPlacementGroupArn(const Aws::String& value) { m_placementGroupArnHasBeenSet = true; m_placementGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the cluster placement group in which the
     * Capacity Reservation was created. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/cr-cpg.html"> Capacity
     * Reservations for cluster placement groups</a> in the <i>Amazon EC2 User
     * Guide</i>.</p>
     */
    inline void SetPlacementGroupArn(Aws::String&& value) { m_placementGroupArnHasBeenSet = true; m_placementGroupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the cluster placement group in which the
     * Capacity Reservation was created. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/cr-cpg.html"> Capacity
     * Reservations for cluster placement groups</a> in the <i>Amazon EC2 User
     * Guide</i>.</p>
     */
    inline void SetPlacementGroupArn(const char* value) { m_placementGroupArnHasBeenSet = true; m_placementGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the cluster placement group in which the
     * Capacity Reservation was created. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/cr-cpg.html"> Capacity
     * Reservations for cluster placement groups</a> in the <i>Amazon EC2 User
     * Guide</i>.</p>
     */
    inline CapacityReservation& WithPlacementGroupArn(const Aws::String& value) { SetPlacementGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the cluster placement group in which the
     * Capacity Reservation was created. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/cr-cpg.html"> Capacity
     * Reservations for cluster placement groups</a> in the <i>Amazon EC2 User
     * Guide</i>.</p>
     */
    inline CapacityReservation& WithPlacementGroupArn(Aws::String&& value) { SetPlacementGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the cluster placement group in which the
     * Capacity Reservation was created. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/cr-cpg.html"> Capacity
     * Reservations for cluster placement groups</a> in the <i>Amazon EC2 User
     * Guide</i>.</p>
     */
    inline CapacityReservation& WithPlacementGroupArn(const char* value) { SetPlacementGroupArn(value); return *this;}


    /**
     * <p>Information about instance capacity usage.</p>
     */
    inline const Aws::Vector<CapacityAllocation>& GetCapacityAllocations() const{ return m_capacityAllocations; }

    /**
     * <p>Information about instance capacity usage.</p>
     */
    inline bool CapacityAllocationsHasBeenSet() const { return m_capacityAllocationsHasBeenSet; }

    /**
     * <p>Information about instance capacity usage.</p>
     */
    inline void SetCapacityAllocations(const Aws::Vector<CapacityAllocation>& value) { m_capacityAllocationsHasBeenSet = true; m_capacityAllocations = value; }

    /**
     * <p>Information about instance capacity usage.</p>
     */
    inline void SetCapacityAllocations(Aws::Vector<CapacityAllocation>&& value) { m_capacityAllocationsHasBeenSet = true; m_capacityAllocations = std::move(value); }

    /**
     * <p>Information about instance capacity usage.</p>
     */
    inline CapacityReservation& WithCapacityAllocations(const Aws::Vector<CapacityAllocation>& value) { SetCapacityAllocations(value); return *this;}

    /**
     * <p>Information about instance capacity usage.</p>
     */
    inline CapacityReservation& WithCapacityAllocations(Aws::Vector<CapacityAllocation>&& value) { SetCapacityAllocations(std::move(value)); return *this;}

    /**
     * <p>Information about instance capacity usage.</p>
     */
    inline CapacityReservation& AddCapacityAllocations(const CapacityAllocation& value) { m_capacityAllocationsHasBeenSet = true; m_capacityAllocations.push_back(value); return *this; }

    /**
     * <p>Information about instance capacity usage.</p>
     */
    inline CapacityReservation& AddCapacityAllocations(CapacityAllocation&& value) { m_capacityAllocationsHasBeenSet = true; m_capacityAllocations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_capacityReservationId;
    bool m_capacityReservationIdHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::String m_capacityReservationArn;
    bool m_capacityReservationArnHasBeenSet = false;

    Aws::String m_availabilityZoneId;
    bool m_availabilityZoneIdHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    CapacityReservationInstancePlatform m_instancePlatform;
    bool m_instancePlatformHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    CapacityReservationTenancy m_tenancy;
    bool m_tenancyHasBeenSet = false;

    int m_totalInstanceCount;
    bool m_totalInstanceCountHasBeenSet = false;

    int m_availableInstanceCount;
    bool m_availableInstanceCountHasBeenSet = false;

    bool m_ebsOptimized;
    bool m_ebsOptimizedHasBeenSet = false;

    bool m_ephemeralStorage;
    bool m_ephemeralStorageHasBeenSet = false;

    CapacityReservationState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_startDate;
    bool m_startDateHasBeenSet = false;

    Aws::Utils::DateTime m_endDate;
    bool m_endDateHasBeenSet = false;

    EndDateType m_endDateType;
    bool m_endDateTypeHasBeenSet = false;

    InstanceMatchCriteria m_instanceMatchCriteria;
    bool m_instanceMatchCriteriaHasBeenSet = false;

    Aws::Utils::DateTime m_createDate;
    bool m_createDateHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_outpostArn;
    bool m_outpostArnHasBeenSet = false;

    Aws::String m_capacityReservationFleetId;
    bool m_capacityReservationFleetIdHasBeenSet = false;

    Aws::String m_placementGroupArn;
    bool m_placementGroupArnHasBeenSet = false;

    Aws::Vector<CapacityAllocation> m_capacityAllocations;
    bool m_capacityAllocationsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
