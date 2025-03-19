/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/autoscaling/model/LaunchTemplateSpecification.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/autoscaling/model/LaunchTemplateOverrides.h>
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
namespace AutoScaling
{
namespace Model
{

  /**
   * <p>Use this structure to specify the launch templates and instance types
   * (overrides) for a mixed instances policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/LaunchTemplate">AWS
   * API Reference</a></p>
   */
  class LaunchTemplate
  {
  public:
    AWS_AUTOSCALING_API LaunchTemplate() = default;
    AWS_AUTOSCALING_API LaunchTemplate(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API LaunchTemplate& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The launch template.</p>
     */
    inline const LaunchTemplateSpecification& GetLaunchTemplateSpecification() const { return m_launchTemplateSpecification; }
    inline bool LaunchTemplateSpecificationHasBeenSet() const { return m_launchTemplateSpecificationHasBeenSet; }
    template<typename LaunchTemplateSpecificationT = LaunchTemplateSpecification>
    void SetLaunchTemplateSpecification(LaunchTemplateSpecificationT&& value) { m_launchTemplateSpecificationHasBeenSet = true; m_launchTemplateSpecification = std::forward<LaunchTemplateSpecificationT>(value); }
    template<typename LaunchTemplateSpecificationT = LaunchTemplateSpecification>
    LaunchTemplate& WithLaunchTemplateSpecification(LaunchTemplateSpecificationT&& value) { SetLaunchTemplateSpecification(std::forward<LaunchTemplateSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any properties that you specify override the same properties in the launch
     * template.</p>
     */
    inline const Aws::Vector<LaunchTemplateOverrides>& GetOverrides() const { return m_overrides; }
    inline bool OverridesHasBeenSet() const { return m_overridesHasBeenSet; }
    template<typename OverridesT = Aws::Vector<LaunchTemplateOverrides>>
    void SetOverrides(OverridesT&& value) { m_overridesHasBeenSet = true; m_overrides = std::forward<OverridesT>(value); }
    template<typename OverridesT = Aws::Vector<LaunchTemplateOverrides>>
    LaunchTemplate& WithOverrides(OverridesT&& value) { SetOverrides(std::forward<OverridesT>(value)); return *this;}
    template<typename OverridesT = LaunchTemplateOverrides>
    LaunchTemplate& AddOverrides(OverridesT&& value) { m_overridesHasBeenSet = true; m_overrides.emplace_back(std::forward<OverridesT>(value)); return *this; }
    ///@}
  private:

    LaunchTemplateSpecification m_launchTemplateSpecification;
    bool m_launchTemplateSpecificationHasBeenSet = false;

    Aws::Vector<LaunchTemplateOverrides> m_overrides;
    bool m_overridesHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
