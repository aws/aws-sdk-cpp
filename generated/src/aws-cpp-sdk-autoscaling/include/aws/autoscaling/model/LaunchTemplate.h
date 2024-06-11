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
    AWS_AUTOSCALING_API LaunchTemplate();
    AWS_AUTOSCALING_API LaunchTemplate(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API LaunchTemplate& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The launch template.</p>
     */
    inline const LaunchTemplateSpecification& GetLaunchTemplateSpecification() const{ return m_launchTemplateSpecification; }
    inline bool LaunchTemplateSpecificationHasBeenSet() const { return m_launchTemplateSpecificationHasBeenSet; }
    inline void SetLaunchTemplateSpecification(const LaunchTemplateSpecification& value) { m_launchTemplateSpecificationHasBeenSet = true; m_launchTemplateSpecification = value; }
    inline void SetLaunchTemplateSpecification(LaunchTemplateSpecification&& value) { m_launchTemplateSpecificationHasBeenSet = true; m_launchTemplateSpecification = std::move(value); }
    inline LaunchTemplate& WithLaunchTemplateSpecification(const LaunchTemplateSpecification& value) { SetLaunchTemplateSpecification(value); return *this;}
    inline LaunchTemplate& WithLaunchTemplateSpecification(LaunchTemplateSpecification&& value) { SetLaunchTemplateSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any properties that you specify override the same properties in the launch
     * template.</p>
     */
    inline const Aws::Vector<LaunchTemplateOverrides>& GetOverrides() const{ return m_overrides; }
    inline bool OverridesHasBeenSet() const { return m_overridesHasBeenSet; }
    inline void SetOverrides(const Aws::Vector<LaunchTemplateOverrides>& value) { m_overridesHasBeenSet = true; m_overrides = value; }
    inline void SetOverrides(Aws::Vector<LaunchTemplateOverrides>&& value) { m_overridesHasBeenSet = true; m_overrides = std::move(value); }
    inline LaunchTemplate& WithOverrides(const Aws::Vector<LaunchTemplateOverrides>& value) { SetOverrides(value); return *this;}
    inline LaunchTemplate& WithOverrides(Aws::Vector<LaunchTemplateOverrides>&& value) { SetOverrides(std::move(value)); return *this;}
    inline LaunchTemplate& AddOverrides(const LaunchTemplateOverrides& value) { m_overridesHasBeenSet = true; m_overrides.push_back(value); return *this; }
    inline LaunchTemplate& AddOverrides(LaunchTemplateOverrides&& value) { m_overridesHasBeenSet = true; m_overrides.push_back(std::move(value)); return *this; }
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
