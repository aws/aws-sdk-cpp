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
#include <aws/ec2/model/LaunchTemplateAndOverridesResponse.h>
#include <aws/ec2/model/InstanceLifecycle.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/InstanceType.h>
#include <aws/ec2/model/PlatformValues.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Describes the instances that were launched by the fleet.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeFleetsInstances">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API DescribeFleetsInstances
  {
  public:
    DescribeFleetsInstances();
    DescribeFleetsInstances(const Aws::Utils::Xml::XmlNode& xmlNode);
    DescribeFleetsInstances& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The launch templates and overrides that were used for launching the
     * instances. Any parameters that you specify in the Overrides override the same
     * parameters in the launch template.</p>
     */
    inline const LaunchTemplateAndOverridesResponse& GetLaunchTemplateAndOverrides() const{ return m_launchTemplateAndOverrides; }

    /**
     * <p>The launch templates and overrides that were used for launching the
     * instances. Any parameters that you specify in the Overrides override the same
     * parameters in the launch template.</p>
     */
    inline bool LaunchTemplateAndOverridesHasBeenSet() const { return m_launchTemplateAndOverridesHasBeenSet; }

    /**
     * <p>The launch templates and overrides that were used for launching the
     * instances. Any parameters that you specify in the Overrides override the same
     * parameters in the launch template.</p>
     */
    inline void SetLaunchTemplateAndOverrides(const LaunchTemplateAndOverridesResponse& value) { m_launchTemplateAndOverridesHasBeenSet = true; m_launchTemplateAndOverrides = value; }

    /**
     * <p>The launch templates and overrides that were used for launching the
     * instances. Any parameters that you specify in the Overrides override the same
     * parameters in the launch template.</p>
     */
    inline void SetLaunchTemplateAndOverrides(LaunchTemplateAndOverridesResponse&& value) { m_launchTemplateAndOverridesHasBeenSet = true; m_launchTemplateAndOverrides = std::move(value); }

    /**
     * <p>The launch templates and overrides that were used for launching the
     * instances. Any parameters that you specify in the Overrides override the same
     * parameters in the launch template.</p>
     */
    inline DescribeFleetsInstances& WithLaunchTemplateAndOverrides(const LaunchTemplateAndOverridesResponse& value) { SetLaunchTemplateAndOverrides(value); return *this;}

    /**
     * <p>The launch templates and overrides that were used for launching the
     * instances. Any parameters that you specify in the Overrides override the same
     * parameters in the launch template.</p>
     */
    inline DescribeFleetsInstances& WithLaunchTemplateAndOverrides(LaunchTemplateAndOverridesResponse&& value) { SetLaunchTemplateAndOverrides(std::move(value)); return *this;}


    /**
     * <p>Indicates if the instance that was launched is a Spot Instance or On-Demand
     * Instance.</p>
     */
    inline const InstanceLifecycle& GetLifecycle() const{ return m_lifecycle; }

    /**
     * <p>Indicates if the instance that was launched is a Spot Instance or On-Demand
     * Instance.</p>
     */
    inline bool LifecycleHasBeenSet() const { return m_lifecycleHasBeenSet; }

    /**
     * <p>Indicates if the instance that was launched is a Spot Instance or On-Demand
     * Instance.</p>
     */
    inline void SetLifecycle(const InstanceLifecycle& value) { m_lifecycleHasBeenSet = true; m_lifecycle = value; }

    /**
     * <p>Indicates if the instance that was launched is a Spot Instance or On-Demand
     * Instance.</p>
     */
    inline void SetLifecycle(InstanceLifecycle&& value) { m_lifecycleHasBeenSet = true; m_lifecycle = std::move(value); }

    /**
     * <p>Indicates if the instance that was launched is a Spot Instance or On-Demand
     * Instance.</p>
     */
    inline DescribeFleetsInstances& WithLifecycle(const InstanceLifecycle& value) { SetLifecycle(value); return *this;}

    /**
     * <p>Indicates if the instance that was launched is a Spot Instance or On-Demand
     * Instance.</p>
     */
    inline DescribeFleetsInstances& WithLifecycle(InstanceLifecycle&& value) { SetLifecycle(std::move(value)); return *this;}


    /**
     * <p>The IDs of the instances.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceIds() const{ return m_instanceIds; }

    /**
     * <p>The IDs of the instances.</p>
     */
    inline bool InstanceIdsHasBeenSet() const { return m_instanceIdsHasBeenSet; }

    /**
     * <p>The IDs of the instances.</p>
     */
    inline void SetInstanceIds(const Aws::Vector<Aws::String>& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = value; }

    /**
     * <p>The IDs of the instances.</p>
     */
    inline void SetInstanceIds(Aws::Vector<Aws::String>&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = std::move(value); }

    /**
     * <p>The IDs of the instances.</p>
     */
    inline DescribeFleetsInstances& WithInstanceIds(const Aws::Vector<Aws::String>& value) { SetInstanceIds(value); return *this;}

    /**
     * <p>The IDs of the instances.</p>
     */
    inline DescribeFleetsInstances& WithInstanceIds(Aws::Vector<Aws::String>&& value) { SetInstanceIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the instances.</p>
     */
    inline DescribeFleetsInstances& AddInstanceIds(const Aws::String& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the instances.</p>
     */
    inline DescribeFleetsInstances& AddInstanceIds(Aws::String&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the instances.</p>
     */
    inline DescribeFleetsInstances& AddInstanceIds(const char* value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }


    /**
     * <p>The instance type.</p>
     */
    inline const InstanceType& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The instance type.</p>
     */
    inline void SetInstanceType(const InstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type.</p>
     */
    inline void SetInstanceType(InstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The instance type.</p>
     */
    inline DescribeFleetsInstances& WithInstanceType(const InstanceType& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type.</p>
     */
    inline DescribeFleetsInstances& WithInstanceType(InstanceType&& value) { SetInstanceType(std::move(value)); return *this;}


    /**
     * <p>The value is <code>Windows</code> for Windows instances; otherwise blank.</p>
     */
    inline const PlatformValues& GetPlatform() const{ return m_platform; }

    /**
     * <p>The value is <code>Windows</code> for Windows instances; otherwise blank.</p>
     */
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }

    /**
     * <p>The value is <code>Windows</code> for Windows instances; otherwise blank.</p>
     */
    inline void SetPlatform(const PlatformValues& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * <p>The value is <code>Windows</code> for Windows instances; otherwise blank.</p>
     */
    inline void SetPlatform(PlatformValues&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }

    /**
     * <p>The value is <code>Windows</code> for Windows instances; otherwise blank.</p>
     */
    inline DescribeFleetsInstances& WithPlatform(const PlatformValues& value) { SetPlatform(value); return *this;}

    /**
     * <p>The value is <code>Windows</code> for Windows instances; otherwise blank.</p>
     */
    inline DescribeFleetsInstances& WithPlatform(PlatformValues&& value) { SetPlatform(std::move(value)); return *this;}

  private:

    LaunchTemplateAndOverridesResponse m_launchTemplateAndOverrides;
    bool m_launchTemplateAndOverridesHasBeenSet;

    InstanceLifecycle m_lifecycle;
    bool m_lifecycleHasBeenSet;

    Aws::Vector<Aws::String> m_instanceIds;
    bool m_instanceIdsHasBeenSet;

    InstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet;

    PlatformValues m_platform;
    bool m_platformHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
