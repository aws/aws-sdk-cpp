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
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>Details about the Amazon EC2 instances that AWS recommends that you
   * purchase.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/EC2InstanceDetails">AWS
   * API Reference</a></p>
   */
  class AWS_COSTEXPLORER_API EC2InstanceDetails
  {
  public:
    EC2InstanceDetails();
    EC2InstanceDetails(Aws::Utils::Json::JsonView jsonValue);
    EC2InstanceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The instance family of the recommended reservation.</p>
     */
    inline const Aws::String& GetFamily() const{ return m_family; }

    /**
     * <p>The instance family of the recommended reservation.</p>
     */
    inline bool FamilyHasBeenSet() const { return m_familyHasBeenSet; }

    /**
     * <p>The instance family of the recommended reservation.</p>
     */
    inline void SetFamily(const Aws::String& value) { m_familyHasBeenSet = true; m_family = value; }

    /**
     * <p>The instance family of the recommended reservation.</p>
     */
    inline void SetFamily(Aws::String&& value) { m_familyHasBeenSet = true; m_family = std::move(value); }

    /**
     * <p>The instance family of the recommended reservation.</p>
     */
    inline void SetFamily(const char* value) { m_familyHasBeenSet = true; m_family.assign(value); }

    /**
     * <p>The instance family of the recommended reservation.</p>
     */
    inline EC2InstanceDetails& WithFamily(const Aws::String& value) { SetFamily(value); return *this;}

    /**
     * <p>The instance family of the recommended reservation.</p>
     */
    inline EC2InstanceDetails& WithFamily(Aws::String&& value) { SetFamily(std::move(value)); return *this;}

    /**
     * <p>The instance family of the recommended reservation.</p>
     */
    inline EC2InstanceDetails& WithFamily(const char* value) { SetFamily(value); return *this;}


    /**
     * <p>The type of instance that AWS recommends.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The type of instance that AWS recommends.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The type of instance that AWS recommends.</p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The type of instance that AWS recommends.</p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The type of instance that AWS recommends.</p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>The type of instance that AWS recommends.</p>
     */
    inline EC2InstanceDetails& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The type of instance that AWS recommends.</p>
     */
    inline EC2InstanceDetails& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>The type of instance that AWS recommends.</p>
     */
    inline EC2InstanceDetails& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    /**
     * <p>The AWS Region of the recommended reservation.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The AWS Region of the recommended reservation.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The AWS Region of the recommended reservation.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The AWS Region of the recommended reservation.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The AWS Region of the recommended reservation.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The AWS Region of the recommended reservation.</p>
     */
    inline EC2InstanceDetails& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The AWS Region of the recommended reservation.</p>
     */
    inline EC2InstanceDetails& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The AWS Region of the recommended reservation.</p>
     */
    inline EC2InstanceDetails& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>The Availability Zone of the recommended reservation.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone of the recommended reservation.</p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The Availability Zone of the recommended reservation.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone of the recommended reservation.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone of the recommended reservation.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone of the recommended reservation.</p>
     */
    inline EC2InstanceDetails& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone of the recommended reservation.</p>
     */
    inline EC2InstanceDetails& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone of the recommended reservation.</p>
     */
    inline EC2InstanceDetails& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>The platform of the recommended reservation. The platform is the specific
     * combination of operating system, license model, and software on an instance.</p>
     */
    inline const Aws::String& GetPlatform() const{ return m_platform; }

    /**
     * <p>The platform of the recommended reservation. The platform is the specific
     * combination of operating system, license model, and software on an instance.</p>
     */
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }

    /**
     * <p>The platform of the recommended reservation. The platform is the specific
     * combination of operating system, license model, and software on an instance.</p>
     */
    inline void SetPlatform(const Aws::String& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * <p>The platform of the recommended reservation. The platform is the specific
     * combination of operating system, license model, and software on an instance.</p>
     */
    inline void SetPlatform(Aws::String&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }

    /**
     * <p>The platform of the recommended reservation. The platform is the specific
     * combination of operating system, license model, and software on an instance.</p>
     */
    inline void SetPlatform(const char* value) { m_platformHasBeenSet = true; m_platform.assign(value); }

    /**
     * <p>The platform of the recommended reservation. The platform is the specific
     * combination of operating system, license model, and software on an instance.</p>
     */
    inline EC2InstanceDetails& WithPlatform(const Aws::String& value) { SetPlatform(value); return *this;}

    /**
     * <p>The platform of the recommended reservation. The platform is the specific
     * combination of operating system, license model, and software on an instance.</p>
     */
    inline EC2InstanceDetails& WithPlatform(Aws::String&& value) { SetPlatform(std::move(value)); return *this;}

    /**
     * <p>The platform of the recommended reservation. The platform is the specific
     * combination of operating system, license model, and software on an instance.</p>
     */
    inline EC2InstanceDetails& WithPlatform(const char* value) { SetPlatform(value); return *this;}


    /**
     * <p>Whether the recommended reservation is dedicated or shared.</p>
     */
    inline const Aws::String& GetTenancy() const{ return m_tenancy; }

    /**
     * <p>Whether the recommended reservation is dedicated or shared.</p>
     */
    inline bool TenancyHasBeenSet() const { return m_tenancyHasBeenSet; }

    /**
     * <p>Whether the recommended reservation is dedicated or shared.</p>
     */
    inline void SetTenancy(const Aws::String& value) { m_tenancyHasBeenSet = true; m_tenancy = value; }

    /**
     * <p>Whether the recommended reservation is dedicated or shared.</p>
     */
    inline void SetTenancy(Aws::String&& value) { m_tenancyHasBeenSet = true; m_tenancy = std::move(value); }

    /**
     * <p>Whether the recommended reservation is dedicated or shared.</p>
     */
    inline void SetTenancy(const char* value) { m_tenancyHasBeenSet = true; m_tenancy.assign(value); }

    /**
     * <p>Whether the recommended reservation is dedicated or shared.</p>
     */
    inline EC2InstanceDetails& WithTenancy(const Aws::String& value) { SetTenancy(value); return *this;}

    /**
     * <p>Whether the recommended reservation is dedicated or shared.</p>
     */
    inline EC2InstanceDetails& WithTenancy(Aws::String&& value) { SetTenancy(std::move(value)); return *this;}

    /**
     * <p>Whether the recommended reservation is dedicated or shared.</p>
     */
    inline EC2InstanceDetails& WithTenancy(const char* value) { SetTenancy(value); return *this;}


    /**
     * <p>Whether the recommendation is for a current-generation instance. </p>
     */
    inline bool GetCurrentGeneration() const{ return m_currentGeneration; }

    /**
     * <p>Whether the recommendation is for a current-generation instance. </p>
     */
    inline bool CurrentGenerationHasBeenSet() const { return m_currentGenerationHasBeenSet; }

    /**
     * <p>Whether the recommendation is for a current-generation instance. </p>
     */
    inline void SetCurrentGeneration(bool value) { m_currentGenerationHasBeenSet = true; m_currentGeneration = value; }

    /**
     * <p>Whether the recommendation is for a current-generation instance. </p>
     */
    inline EC2InstanceDetails& WithCurrentGeneration(bool value) { SetCurrentGeneration(value); return *this;}


    /**
     * <p>Whether the recommended reservation is size flexible.</p>
     */
    inline bool GetSizeFlexEligible() const{ return m_sizeFlexEligible; }

    /**
     * <p>Whether the recommended reservation is size flexible.</p>
     */
    inline bool SizeFlexEligibleHasBeenSet() const { return m_sizeFlexEligibleHasBeenSet; }

    /**
     * <p>Whether the recommended reservation is size flexible.</p>
     */
    inline void SetSizeFlexEligible(bool value) { m_sizeFlexEligibleHasBeenSet = true; m_sizeFlexEligible = value; }

    /**
     * <p>Whether the recommended reservation is size flexible.</p>
     */
    inline EC2InstanceDetails& WithSizeFlexEligible(bool value) { SetSizeFlexEligible(value); return *this;}

  private:

    Aws::String m_family;
    bool m_familyHasBeenSet;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet;

    Aws::String m_region;
    bool m_regionHasBeenSet;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;

    Aws::String m_platform;
    bool m_platformHasBeenSet;

    Aws::String m_tenancy;
    bool m_tenancyHasBeenSet;

    bool m_currentGeneration;
    bool m_currentGenerationHasBeenSet;

    bool m_sizeFlexEligible;
    bool m_sizeFlexEligibleHasBeenSet;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
