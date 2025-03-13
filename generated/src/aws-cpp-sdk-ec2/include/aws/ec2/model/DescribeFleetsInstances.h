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
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeFleetsInstances">AWS
   * API Reference</a></p>
   */
  class DescribeFleetsInstances
  {
  public:
    AWS_EC2_API DescribeFleetsInstances() = default;
    AWS_EC2_API DescribeFleetsInstances(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API DescribeFleetsInstances& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The launch templates and overrides that were used for launching the
     * instances. The values that you specify in the Overrides replace the values in
     * the launch template.</p>
     */
    inline const LaunchTemplateAndOverridesResponse& GetLaunchTemplateAndOverrides() const { return m_launchTemplateAndOverrides; }
    inline bool LaunchTemplateAndOverridesHasBeenSet() const { return m_launchTemplateAndOverridesHasBeenSet; }
    template<typename LaunchTemplateAndOverridesT = LaunchTemplateAndOverridesResponse>
    void SetLaunchTemplateAndOverrides(LaunchTemplateAndOverridesT&& value) { m_launchTemplateAndOverridesHasBeenSet = true; m_launchTemplateAndOverrides = std::forward<LaunchTemplateAndOverridesT>(value); }
    template<typename LaunchTemplateAndOverridesT = LaunchTemplateAndOverridesResponse>
    DescribeFleetsInstances& WithLaunchTemplateAndOverrides(LaunchTemplateAndOverridesT&& value) { SetLaunchTemplateAndOverrides(std::forward<LaunchTemplateAndOverridesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if the instance that was launched is a Spot Instance or On-Demand
     * Instance.</p>
     */
    inline InstanceLifecycle GetLifecycle() const { return m_lifecycle; }
    inline bool LifecycleHasBeenSet() const { return m_lifecycleHasBeenSet; }
    inline void SetLifecycle(InstanceLifecycle value) { m_lifecycleHasBeenSet = true; m_lifecycle = value; }
    inline DescribeFleetsInstances& WithLifecycle(InstanceLifecycle value) { SetLifecycle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the instances.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceIds() const { return m_instanceIds; }
    inline bool InstanceIdsHasBeenSet() const { return m_instanceIdsHasBeenSet; }
    template<typename InstanceIdsT = Aws::Vector<Aws::String>>
    void SetInstanceIds(InstanceIdsT&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = std::forward<InstanceIdsT>(value); }
    template<typename InstanceIdsT = Aws::Vector<Aws::String>>
    DescribeFleetsInstances& WithInstanceIds(InstanceIdsT&& value) { SetInstanceIds(std::forward<InstanceIdsT>(value)); return *this;}
    template<typename InstanceIdsT = Aws::String>
    DescribeFleetsInstances& AddInstanceIds(InstanceIdsT&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.emplace_back(std::forward<InstanceIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The instance type.</p>
     */
    inline InstanceType GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(InstanceType value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline DescribeFleetsInstances& WithInstanceType(InstanceType value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value is <code>windows</code> for Windows instances in an EC2 Fleet.
     * Otherwise, the value is blank.</p>
     */
    inline PlatformValues GetPlatform() const { return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    inline void SetPlatform(PlatformValues value) { m_platformHasBeenSet = true; m_platform = value; }
    inline DescribeFleetsInstances& WithPlatform(PlatformValues value) { SetPlatform(value); return *this;}
    ///@}
  private:

    LaunchTemplateAndOverridesResponse m_launchTemplateAndOverrides;
    bool m_launchTemplateAndOverridesHasBeenSet = false;

    InstanceLifecycle m_lifecycle{InstanceLifecycle::NOT_SET};
    bool m_lifecycleHasBeenSet = false;

    Aws::Vector<Aws::String> m_instanceIds;
    bool m_instanceIdsHasBeenSet = false;

    InstanceType m_instanceType{InstanceType::NOT_SET};
    bool m_instanceTypeHasBeenSet = false;

    PlatformValues m_platform{PlatformValues::NOT_SET};
    bool m_platformHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
