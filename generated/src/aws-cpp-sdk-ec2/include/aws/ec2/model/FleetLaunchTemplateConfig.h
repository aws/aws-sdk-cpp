/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/FleetLaunchTemplateSpecification.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/FleetLaunchTemplateOverrides.h>
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
   * <p>Describes a launch template and overrides.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/FleetLaunchTemplateConfig">AWS
   * API Reference</a></p>
   */
  class FleetLaunchTemplateConfig
  {
  public:
    AWS_EC2_API FleetLaunchTemplateConfig() = default;
    AWS_EC2_API FleetLaunchTemplateConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API FleetLaunchTemplateConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The launch template.</p>
     */
    inline const FleetLaunchTemplateSpecification& GetLaunchTemplateSpecification() const { return m_launchTemplateSpecification; }
    inline bool LaunchTemplateSpecificationHasBeenSet() const { return m_launchTemplateSpecificationHasBeenSet; }
    template<typename LaunchTemplateSpecificationT = FleetLaunchTemplateSpecification>
    void SetLaunchTemplateSpecification(LaunchTemplateSpecificationT&& value) { m_launchTemplateSpecificationHasBeenSet = true; m_launchTemplateSpecification = std::forward<LaunchTemplateSpecificationT>(value); }
    template<typename LaunchTemplateSpecificationT = FleetLaunchTemplateSpecification>
    FleetLaunchTemplateConfig& WithLaunchTemplateSpecification(LaunchTemplateSpecificationT&& value) { SetLaunchTemplateSpecification(std::forward<LaunchTemplateSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any parameters that you specify override the same parameters in the launch
     * template.</p>
     */
    inline const Aws::Vector<FleetLaunchTemplateOverrides>& GetOverrides() const { return m_overrides; }
    inline bool OverridesHasBeenSet() const { return m_overridesHasBeenSet; }
    template<typename OverridesT = Aws::Vector<FleetLaunchTemplateOverrides>>
    void SetOverrides(OverridesT&& value) { m_overridesHasBeenSet = true; m_overrides = std::forward<OverridesT>(value); }
    template<typename OverridesT = Aws::Vector<FleetLaunchTemplateOverrides>>
    FleetLaunchTemplateConfig& WithOverrides(OverridesT&& value) { SetOverrides(std::forward<OverridesT>(value)); return *this;}
    template<typename OverridesT = FleetLaunchTemplateOverrides>
    FleetLaunchTemplateConfig& AddOverrides(OverridesT&& value) { m_overridesHasBeenSet = true; m_overrides.emplace_back(std::forward<OverridesT>(value)); return *this; }
    ///@}
  private:

    FleetLaunchTemplateSpecification m_launchTemplateSpecification;
    bool m_launchTemplateSpecificationHasBeenSet = false;

    Aws::Vector<FleetLaunchTemplateOverrides> m_overrides;
    bool m_overridesHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
