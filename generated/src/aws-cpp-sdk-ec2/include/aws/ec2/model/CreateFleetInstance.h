/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateFleetInstance">AWS
   * API Reference</a></p>
   */
  class CreateFleetInstance
  {
  public:
    AWS_EC2_API CreateFleetInstance();
    AWS_EC2_API CreateFleetInstance(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API CreateFleetInstance& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The launch templates and overrides that were used for launching the
     * instances. The values that you specify in the Overrides replace the values in
     * the launch template.</p>
     */
    inline const LaunchTemplateAndOverridesResponse& GetLaunchTemplateAndOverrides() const{ return m_launchTemplateAndOverrides; }
    inline bool LaunchTemplateAndOverridesHasBeenSet() const { return m_launchTemplateAndOverridesHasBeenSet; }
    inline void SetLaunchTemplateAndOverrides(const LaunchTemplateAndOverridesResponse& value) { m_launchTemplateAndOverridesHasBeenSet = true; m_launchTemplateAndOverrides = value; }
    inline void SetLaunchTemplateAndOverrides(LaunchTemplateAndOverridesResponse&& value) { m_launchTemplateAndOverridesHasBeenSet = true; m_launchTemplateAndOverrides = std::move(value); }
    inline CreateFleetInstance& WithLaunchTemplateAndOverrides(const LaunchTemplateAndOverridesResponse& value) { SetLaunchTemplateAndOverrides(value); return *this;}
    inline CreateFleetInstance& WithLaunchTemplateAndOverrides(LaunchTemplateAndOverridesResponse&& value) { SetLaunchTemplateAndOverrides(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if the instance that was launched is a Spot Instance or On-Demand
     * Instance.</p>
     */
    inline const InstanceLifecycle& GetLifecycle() const{ return m_lifecycle; }
    inline bool LifecycleHasBeenSet() const { return m_lifecycleHasBeenSet; }
    inline void SetLifecycle(const InstanceLifecycle& value) { m_lifecycleHasBeenSet = true; m_lifecycle = value; }
    inline void SetLifecycle(InstanceLifecycle&& value) { m_lifecycleHasBeenSet = true; m_lifecycle = std::move(value); }
    inline CreateFleetInstance& WithLifecycle(const InstanceLifecycle& value) { SetLifecycle(value); return *this;}
    inline CreateFleetInstance& WithLifecycle(InstanceLifecycle&& value) { SetLifecycle(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the instances.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceIds() const{ return m_instanceIds; }
    inline bool InstanceIdsHasBeenSet() const { return m_instanceIdsHasBeenSet; }
    inline void SetInstanceIds(const Aws::Vector<Aws::String>& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = value; }
    inline void SetInstanceIds(Aws::Vector<Aws::String>&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = std::move(value); }
    inline CreateFleetInstance& WithInstanceIds(const Aws::Vector<Aws::String>& value) { SetInstanceIds(value); return *this;}
    inline CreateFleetInstance& WithInstanceIds(Aws::Vector<Aws::String>&& value) { SetInstanceIds(std::move(value)); return *this;}
    inline CreateFleetInstance& AddInstanceIds(const Aws::String& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }
    inline CreateFleetInstance& AddInstanceIds(Aws::String&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(std::move(value)); return *this; }
    inline CreateFleetInstance& AddInstanceIds(const char* value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The instance type.</p>
     */
    inline const InstanceType& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const InstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(InstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline CreateFleetInstance& WithInstanceType(const InstanceType& value) { SetInstanceType(value); return *this;}
    inline CreateFleetInstance& WithInstanceType(InstanceType&& value) { SetInstanceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value is <code>windows</code> for Windows instances in an EC2 Fleet.
     * Otherwise, the value is blank.</p>
     */
    inline const PlatformValues& GetPlatform() const{ return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    inline void SetPlatform(const PlatformValues& value) { m_platformHasBeenSet = true; m_platform = value; }
    inline void SetPlatform(PlatformValues&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }
    inline CreateFleetInstance& WithPlatform(const PlatformValues& value) { SetPlatform(value); return *this;}
    inline CreateFleetInstance& WithPlatform(PlatformValues&& value) { SetPlatform(std::move(value)); return *this;}
    ///@}
  private:

    LaunchTemplateAndOverridesResponse m_launchTemplateAndOverrides;
    bool m_launchTemplateAndOverridesHasBeenSet = false;

    InstanceLifecycle m_lifecycle;
    bool m_lifecycleHasBeenSet = false;

    Aws::Vector<Aws::String> m_instanceIds;
    bool m_instanceIdsHasBeenSet = false;

    InstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    PlatformValues m_platform;
    bool m_platformHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
