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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/CapacityReservationInstancePlatform.h>
#include <aws/ec2/model/CapacityReservationTenancy.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/EndDateType.h>
#include <aws/ec2/model/InstanceMatchCriteria.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/TagSpecification.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API CreateCapacityReservationRequest : public EC2Request
  {
  public:
    CreateCapacityReservationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCapacityReservation"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p> <p>Constraint: Maximum 64 ASCII characters.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p> <p>Constraint: Maximum 64 ASCII characters.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p> <p>Constraint: Maximum 64 ASCII characters.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p> <p>Constraint: Maximum 64 ASCII characters.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p> <p>Constraint: Maximum 64 ASCII characters.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p> <p>Constraint: Maximum 64 ASCII characters.</p>
     */
    inline CreateCapacityReservationRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p> <p>Constraint: Maximum 64 ASCII characters.</p>
     */
    inline CreateCapacityReservationRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p> <p>Constraint: Maximum 64 ASCII characters.</p>
     */
    inline CreateCapacityReservationRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The instance type for which to reserve capacity. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * Types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type for which to reserve capacity. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * Types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The instance type for which to reserve capacity. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * Types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type for which to reserve capacity. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * Types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The instance type for which to reserve capacity. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * Types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>The instance type for which to reserve capacity. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * Types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline CreateCapacityReservationRequest& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type for which to reserve capacity. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * Types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline CreateCapacityReservationRequest& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>The instance type for which to reserve capacity. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * Types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline CreateCapacityReservationRequest& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    /**
     * <p>The type of operating system for which to reserve capacity.</p>
     */
    inline const CapacityReservationInstancePlatform& GetInstancePlatform() const{ return m_instancePlatform; }

    /**
     * <p>The type of operating system for which to reserve capacity.</p>
     */
    inline bool InstancePlatformHasBeenSet() const { return m_instancePlatformHasBeenSet; }

    /**
     * <p>The type of operating system for which to reserve capacity.</p>
     */
    inline void SetInstancePlatform(const CapacityReservationInstancePlatform& value) { m_instancePlatformHasBeenSet = true; m_instancePlatform = value; }

    /**
     * <p>The type of operating system for which to reserve capacity.</p>
     */
    inline void SetInstancePlatform(CapacityReservationInstancePlatform&& value) { m_instancePlatformHasBeenSet = true; m_instancePlatform = std::move(value); }

    /**
     * <p>The type of operating system for which to reserve capacity.</p>
     */
    inline CreateCapacityReservationRequest& WithInstancePlatform(const CapacityReservationInstancePlatform& value) { SetInstancePlatform(value); return *this;}

    /**
     * <p>The type of operating system for which to reserve capacity.</p>
     */
    inline CreateCapacityReservationRequest& WithInstancePlatform(CapacityReservationInstancePlatform&& value) { SetInstancePlatform(std::move(value)); return *this;}


    /**
     * <p>The Availability Zone in which to create the Capacity Reservation.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone in which to create the Capacity Reservation.</p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The Availability Zone in which to create the Capacity Reservation.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone in which to create the Capacity Reservation.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone in which to create the Capacity Reservation.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone in which to create the Capacity Reservation.</p>
     */
    inline CreateCapacityReservationRequest& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone in which to create the Capacity Reservation.</p>
     */
    inline CreateCapacityReservationRequest& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone in which to create the Capacity Reservation.</p>
     */
    inline CreateCapacityReservationRequest& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


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
    inline CreateCapacityReservationRequest& WithTenancy(const CapacityReservationTenancy& value) { SetTenancy(value); return *this;}

    /**
     * <p>Indicates the tenancy of the Capacity Reservation. A Capacity Reservation can
     * have one of the following tenancy settings:</p> <ul> <li> <p>
     * <code>default</code> - The Capacity Reservation is created on hardware that is
     * shared with other AWS accounts.</p> </li> <li> <p> <code>dedicated</code> - The
     * Capacity Reservation is created on single-tenant hardware that is dedicated to a
     * single AWS account.</p> </li> </ul>
     */
    inline CreateCapacityReservationRequest& WithTenancy(CapacityReservationTenancy&& value) { SetTenancy(std::move(value)); return *this;}


    /**
     * <p>The number of instances for which to reserve capacity.</p>
     */
    inline int GetInstanceCount() const{ return m_instanceCount; }

    /**
     * <p>The number of instances for which to reserve capacity.</p>
     */
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }

    /**
     * <p>The number of instances for which to reserve capacity.</p>
     */
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }

    /**
     * <p>The number of instances for which to reserve capacity.</p>
     */
    inline CreateCapacityReservationRequest& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}


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
    inline CreateCapacityReservationRequest& WithEbsOptimized(bool value) { SetEbsOptimized(value); return *this;}


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
    inline CreateCapacityReservationRequest& WithEphemeralStorage(bool value) { SetEphemeralStorage(value); return *this;}


    /**
     * <p>The date and time at which the Capacity Reservation expires. When a Capacity
     * Reservation expires, the reserved capacity is released and you can no longer
     * launch instances into it. The Capacity Reservation's state changes to
     * <code>expired</code> when it reaches its end date and time.</p> <p>You must
     * provide an <code>EndDate</code> value if <code>EndDateType</code> is
     * <code>limited</code>. Omit <code>EndDate</code> if <code>EndDateType</code> is
     * <code>unlimited</code>.</p> <p>If the <code>EndDateType</code> is
     * <code>limited</code>, the Capacity Reservation is cancelled within an hour from
     * the specified time. For example, if you specify 5/31/2019, 13:30:55, the
     * Capacity Reservation is guaranteed to end between 13:30:55 and 14:30:55 on
     * 5/31/2019.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDate() const{ return m_endDate; }

    /**
     * <p>The date and time at which the Capacity Reservation expires. When a Capacity
     * Reservation expires, the reserved capacity is released and you can no longer
     * launch instances into it. The Capacity Reservation's state changes to
     * <code>expired</code> when it reaches its end date and time.</p> <p>You must
     * provide an <code>EndDate</code> value if <code>EndDateType</code> is
     * <code>limited</code>. Omit <code>EndDate</code> if <code>EndDateType</code> is
     * <code>unlimited</code>.</p> <p>If the <code>EndDateType</code> is
     * <code>limited</code>, the Capacity Reservation is cancelled within an hour from
     * the specified time. For example, if you specify 5/31/2019, 13:30:55, the
     * Capacity Reservation is guaranteed to end between 13:30:55 and 14:30:55 on
     * 5/31/2019.</p>
     */
    inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }

    /**
     * <p>The date and time at which the Capacity Reservation expires. When a Capacity
     * Reservation expires, the reserved capacity is released and you can no longer
     * launch instances into it. The Capacity Reservation's state changes to
     * <code>expired</code> when it reaches its end date and time.</p> <p>You must
     * provide an <code>EndDate</code> value if <code>EndDateType</code> is
     * <code>limited</code>. Omit <code>EndDate</code> if <code>EndDateType</code> is
     * <code>unlimited</code>.</p> <p>If the <code>EndDateType</code> is
     * <code>limited</code>, the Capacity Reservation is cancelled within an hour from
     * the specified time. For example, if you specify 5/31/2019, 13:30:55, the
     * Capacity Reservation is guaranteed to end between 13:30:55 and 14:30:55 on
     * 5/31/2019.</p>
     */
    inline void SetEndDate(const Aws::Utils::DateTime& value) { m_endDateHasBeenSet = true; m_endDate = value; }

    /**
     * <p>The date and time at which the Capacity Reservation expires. When a Capacity
     * Reservation expires, the reserved capacity is released and you can no longer
     * launch instances into it. The Capacity Reservation's state changes to
     * <code>expired</code> when it reaches its end date and time.</p> <p>You must
     * provide an <code>EndDate</code> value if <code>EndDateType</code> is
     * <code>limited</code>. Omit <code>EndDate</code> if <code>EndDateType</code> is
     * <code>unlimited</code>.</p> <p>If the <code>EndDateType</code> is
     * <code>limited</code>, the Capacity Reservation is cancelled within an hour from
     * the specified time. For example, if you specify 5/31/2019, 13:30:55, the
     * Capacity Reservation is guaranteed to end between 13:30:55 and 14:30:55 on
     * 5/31/2019.</p>
     */
    inline void SetEndDate(Aws::Utils::DateTime&& value) { m_endDateHasBeenSet = true; m_endDate = std::move(value); }

    /**
     * <p>The date and time at which the Capacity Reservation expires. When a Capacity
     * Reservation expires, the reserved capacity is released and you can no longer
     * launch instances into it. The Capacity Reservation's state changes to
     * <code>expired</code> when it reaches its end date and time.</p> <p>You must
     * provide an <code>EndDate</code> value if <code>EndDateType</code> is
     * <code>limited</code>. Omit <code>EndDate</code> if <code>EndDateType</code> is
     * <code>unlimited</code>.</p> <p>If the <code>EndDateType</code> is
     * <code>limited</code>, the Capacity Reservation is cancelled within an hour from
     * the specified time. For example, if you specify 5/31/2019, 13:30:55, the
     * Capacity Reservation is guaranteed to end between 13:30:55 and 14:30:55 on
     * 5/31/2019.</p>
     */
    inline CreateCapacityReservationRequest& WithEndDate(const Aws::Utils::DateTime& value) { SetEndDate(value); return *this;}

    /**
     * <p>The date and time at which the Capacity Reservation expires. When a Capacity
     * Reservation expires, the reserved capacity is released and you can no longer
     * launch instances into it. The Capacity Reservation's state changes to
     * <code>expired</code> when it reaches its end date and time.</p> <p>You must
     * provide an <code>EndDate</code> value if <code>EndDateType</code> is
     * <code>limited</code>. Omit <code>EndDate</code> if <code>EndDateType</code> is
     * <code>unlimited</code>.</p> <p>If the <code>EndDateType</code> is
     * <code>limited</code>, the Capacity Reservation is cancelled within an hour from
     * the specified time. For example, if you specify 5/31/2019, 13:30:55, the
     * Capacity Reservation is guaranteed to end between 13:30:55 and 14:30:55 on
     * 5/31/2019.</p>
     */
    inline CreateCapacityReservationRequest& WithEndDate(Aws::Utils::DateTime&& value) { SetEndDate(std::move(value)); return *this;}


    /**
     * <p>Indicates the way in which the Capacity Reservation ends. A Capacity
     * Reservation can have one of the following end types:</p> <ul> <li> <p>
     * <code>unlimited</code> - The Capacity Reservation remains active until you
     * explicitly cancel it. Do not provide an <code>EndDate</code> if the
     * <code>EndDateType</code> is <code>unlimited</code>.</p> </li> <li> <p>
     * <code>limited</code> - The Capacity Reservation expires automatically at a
     * specified date and time. You must provide an <code>EndDate</code> value if the
     * <code>EndDateType</code> value is <code>limited</code>.</p> </li> </ul>
     */
    inline const EndDateType& GetEndDateType() const{ return m_endDateType; }

    /**
     * <p>Indicates the way in which the Capacity Reservation ends. A Capacity
     * Reservation can have one of the following end types:</p> <ul> <li> <p>
     * <code>unlimited</code> - The Capacity Reservation remains active until you
     * explicitly cancel it. Do not provide an <code>EndDate</code> if the
     * <code>EndDateType</code> is <code>unlimited</code>.</p> </li> <li> <p>
     * <code>limited</code> - The Capacity Reservation expires automatically at a
     * specified date and time. You must provide an <code>EndDate</code> value if the
     * <code>EndDateType</code> value is <code>limited</code>.</p> </li> </ul>
     */
    inline bool EndDateTypeHasBeenSet() const { return m_endDateTypeHasBeenSet; }

    /**
     * <p>Indicates the way in which the Capacity Reservation ends. A Capacity
     * Reservation can have one of the following end types:</p> <ul> <li> <p>
     * <code>unlimited</code> - The Capacity Reservation remains active until you
     * explicitly cancel it. Do not provide an <code>EndDate</code> if the
     * <code>EndDateType</code> is <code>unlimited</code>.</p> </li> <li> <p>
     * <code>limited</code> - The Capacity Reservation expires automatically at a
     * specified date and time. You must provide an <code>EndDate</code> value if the
     * <code>EndDateType</code> value is <code>limited</code>.</p> </li> </ul>
     */
    inline void SetEndDateType(const EndDateType& value) { m_endDateTypeHasBeenSet = true; m_endDateType = value; }

    /**
     * <p>Indicates the way in which the Capacity Reservation ends. A Capacity
     * Reservation can have one of the following end types:</p> <ul> <li> <p>
     * <code>unlimited</code> - The Capacity Reservation remains active until you
     * explicitly cancel it. Do not provide an <code>EndDate</code> if the
     * <code>EndDateType</code> is <code>unlimited</code>.</p> </li> <li> <p>
     * <code>limited</code> - The Capacity Reservation expires automatically at a
     * specified date and time. You must provide an <code>EndDate</code> value if the
     * <code>EndDateType</code> value is <code>limited</code>.</p> </li> </ul>
     */
    inline void SetEndDateType(EndDateType&& value) { m_endDateTypeHasBeenSet = true; m_endDateType = std::move(value); }

    /**
     * <p>Indicates the way in which the Capacity Reservation ends. A Capacity
     * Reservation can have one of the following end types:</p> <ul> <li> <p>
     * <code>unlimited</code> - The Capacity Reservation remains active until you
     * explicitly cancel it. Do not provide an <code>EndDate</code> if the
     * <code>EndDateType</code> is <code>unlimited</code>.</p> </li> <li> <p>
     * <code>limited</code> - The Capacity Reservation expires automatically at a
     * specified date and time. You must provide an <code>EndDate</code> value if the
     * <code>EndDateType</code> value is <code>limited</code>.</p> </li> </ul>
     */
    inline CreateCapacityReservationRequest& WithEndDateType(const EndDateType& value) { SetEndDateType(value); return *this;}

    /**
     * <p>Indicates the way in which the Capacity Reservation ends. A Capacity
     * Reservation can have one of the following end types:</p> <ul> <li> <p>
     * <code>unlimited</code> - The Capacity Reservation remains active until you
     * explicitly cancel it. Do not provide an <code>EndDate</code> if the
     * <code>EndDateType</code> is <code>unlimited</code>.</p> </li> <li> <p>
     * <code>limited</code> - The Capacity Reservation expires automatically at a
     * specified date and time. You must provide an <code>EndDate</code> value if the
     * <code>EndDateType</code> value is <code>limited</code>.</p> </li> </ul>
     */
    inline CreateCapacityReservationRequest& WithEndDateType(EndDateType&& value) { SetEndDateType(std::move(value)); return *this;}


    /**
     * <p>Indicates the type of instance launches that the Capacity Reservation
     * accepts. The options include:</p> <ul> <li> <p> <code>open</code> - The Capacity
     * Reservation automatically matches all instances that have matching attributes
     * (instance type, platform, and Availability Zone). Instances that have matching
     * attributes run in the Capacity Reservation automatically without specifying any
     * additional parameters.</p> </li> <li> <p> <code>targeted</code> - The Capacity
     * Reservation only accepts instances that have matching attributes (instance type,
     * platform, and Availability Zone), and explicitly target the Capacity
     * Reservation. This ensures that only permitted instances can use the reserved
     * capacity. </p> </li> </ul> <p>Default: <code>open</code> </p>
     */
    inline const InstanceMatchCriteria& GetInstanceMatchCriteria() const{ return m_instanceMatchCriteria; }

    /**
     * <p>Indicates the type of instance launches that the Capacity Reservation
     * accepts. The options include:</p> <ul> <li> <p> <code>open</code> - The Capacity
     * Reservation automatically matches all instances that have matching attributes
     * (instance type, platform, and Availability Zone). Instances that have matching
     * attributes run in the Capacity Reservation automatically without specifying any
     * additional parameters.</p> </li> <li> <p> <code>targeted</code> - The Capacity
     * Reservation only accepts instances that have matching attributes (instance type,
     * platform, and Availability Zone), and explicitly target the Capacity
     * Reservation. This ensures that only permitted instances can use the reserved
     * capacity. </p> </li> </ul> <p>Default: <code>open</code> </p>
     */
    inline bool InstanceMatchCriteriaHasBeenSet() const { return m_instanceMatchCriteriaHasBeenSet; }

    /**
     * <p>Indicates the type of instance launches that the Capacity Reservation
     * accepts. The options include:</p> <ul> <li> <p> <code>open</code> - The Capacity
     * Reservation automatically matches all instances that have matching attributes
     * (instance type, platform, and Availability Zone). Instances that have matching
     * attributes run in the Capacity Reservation automatically without specifying any
     * additional parameters.</p> </li> <li> <p> <code>targeted</code> - The Capacity
     * Reservation only accepts instances that have matching attributes (instance type,
     * platform, and Availability Zone), and explicitly target the Capacity
     * Reservation. This ensures that only permitted instances can use the reserved
     * capacity. </p> </li> </ul> <p>Default: <code>open</code> </p>
     */
    inline void SetInstanceMatchCriteria(const InstanceMatchCriteria& value) { m_instanceMatchCriteriaHasBeenSet = true; m_instanceMatchCriteria = value; }

    /**
     * <p>Indicates the type of instance launches that the Capacity Reservation
     * accepts. The options include:</p> <ul> <li> <p> <code>open</code> - The Capacity
     * Reservation automatically matches all instances that have matching attributes
     * (instance type, platform, and Availability Zone). Instances that have matching
     * attributes run in the Capacity Reservation automatically without specifying any
     * additional parameters.</p> </li> <li> <p> <code>targeted</code> - The Capacity
     * Reservation only accepts instances that have matching attributes (instance type,
     * platform, and Availability Zone), and explicitly target the Capacity
     * Reservation. This ensures that only permitted instances can use the reserved
     * capacity. </p> </li> </ul> <p>Default: <code>open</code> </p>
     */
    inline void SetInstanceMatchCriteria(InstanceMatchCriteria&& value) { m_instanceMatchCriteriaHasBeenSet = true; m_instanceMatchCriteria = std::move(value); }

    /**
     * <p>Indicates the type of instance launches that the Capacity Reservation
     * accepts. The options include:</p> <ul> <li> <p> <code>open</code> - The Capacity
     * Reservation automatically matches all instances that have matching attributes
     * (instance type, platform, and Availability Zone). Instances that have matching
     * attributes run in the Capacity Reservation automatically without specifying any
     * additional parameters.</p> </li> <li> <p> <code>targeted</code> - The Capacity
     * Reservation only accepts instances that have matching attributes (instance type,
     * platform, and Availability Zone), and explicitly target the Capacity
     * Reservation. This ensures that only permitted instances can use the reserved
     * capacity. </p> </li> </ul> <p>Default: <code>open</code> </p>
     */
    inline CreateCapacityReservationRequest& WithInstanceMatchCriteria(const InstanceMatchCriteria& value) { SetInstanceMatchCriteria(value); return *this;}

    /**
     * <p>Indicates the type of instance launches that the Capacity Reservation
     * accepts. The options include:</p> <ul> <li> <p> <code>open</code> - The Capacity
     * Reservation automatically matches all instances that have matching attributes
     * (instance type, platform, and Availability Zone). Instances that have matching
     * attributes run in the Capacity Reservation automatically without specifying any
     * additional parameters.</p> </li> <li> <p> <code>targeted</code> - The Capacity
     * Reservation only accepts instances that have matching attributes (instance type,
     * platform, and Availability Zone), and explicitly target the Capacity
     * Reservation. This ensures that only permitted instances can use the reserved
     * capacity. </p> </li> </ul> <p>Default: <code>open</code> </p>
     */
    inline CreateCapacityReservationRequest& WithInstanceMatchCriteria(InstanceMatchCriteria&& value) { SetInstanceMatchCriteria(std::move(value)); return *this;}


    /**
     * <p>The tags to apply to the Capacity Reservation during launch.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }

    /**
     * <p>The tags to apply to the Capacity Reservation during launch.</p>
     */
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }

    /**
     * <p>The tags to apply to the Capacity Reservation during launch.</p>
     */
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }

    /**
     * <p>The tags to apply to the Capacity Reservation during launch.</p>
     */
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }

    /**
     * <p>The tags to apply to the Capacity Reservation during launch.</p>
     */
    inline CreateCapacityReservationRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}

    /**
     * <p>The tags to apply to the Capacity Reservation during launch.</p>
     */
    inline CreateCapacityReservationRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}

    /**
     * <p>The tags to apply to the Capacity Reservation during launch.</p>
     */
    inline CreateCapacityReservationRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }

    /**
     * <p>The tags to apply to the Capacity Reservation during launch.</p>
     */
    inline CreateCapacityReservationRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }


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
    inline CreateCapacityReservationRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet;

    CapacityReservationInstancePlatform m_instancePlatform;
    bool m_instancePlatformHasBeenSet;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;

    CapacityReservationTenancy m_tenancy;
    bool m_tenancyHasBeenSet;

    int m_instanceCount;
    bool m_instanceCountHasBeenSet;

    bool m_ebsOptimized;
    bool m_ebsOptimizedHasBeenSet;

    bool m_ephemeralStorage;
    bool m_ephemeralStorageHasBeenSet;

    Aws::Utils::DateTime m_endDate;
    bool m_endDateHasBeenSet;

    EndDateType m_endDateType;
    bool m_endDateTypeHasBeenSet;

    InstanceMatchCriteria m_instanceMatchCriteria;
    bool m_instanceMatchCriteriaHasBeenSet;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
