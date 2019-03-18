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
   * <p>Describes a launch template and overrides. </p> <p>The overrides are used to
   * override the instance type specified by the launch template with multiple
   * instance types that can be used to launch On-Demand Instances and Spot
   * Instances. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/LaunchTemplate">AWS
   * API Reference</a></p>
   */
  class AWS_AUTOSCALING_API LaunchTemplate
  {
  public:
    LaunchTemplate();
    LaunchTemplate(const Aws::Utils::Xml::XmlNode& xmlNode);
    LaunchTemplate& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The launch template to use. You must specify either the launch template ID or
     * launch template name in the request. </p>
     */
    inline const LaunchTemplateSpecification& GetLaunchTemplateSpecification() const{ return m_launchTemplateSpecification; }

    /**
     * <p>The launch template to use. You must specify either the launch template ID or
     * launch template name in the request. </p>
     */
    inline bool LaunchTemplateSpecificationHasBeenSet() const { return m_launchTemplateSpecificationHasBeenSet; }

    /**
     * <p>The launch template to use. You must specify either the launch template ID or
     * launch template name in the request. </p>
     */
    inline void SetLaunchTemplateSpecification(const LaunchTemplateSpecification& value) { m_launchTemplateSpecificationHasBeenSet = true; m_launchTemplateSpecification = value; }

    /**
     * <p>The launch template to use. You must specify either the launch template ID or
     * launch template name in the request. </p>
     */
    inline void SetLaunchTemplateSpecification(LaunchTemplateSpecification&& value) { m_launchTemplateSpecificationHasBeenSet = true; m_launchTemplateSpecification = std::move(value); }

    /**
     * <p>The launch template to use. You must specify either the launch template ID or
     * launch template name in the request. </p>
     */
    inline LaunchTemplate& WithLaunchTemplateSpecification(const LaunchTemplateSpecification& value) { SetLaunchTemplateSpecification(value); return *this;}

    /**
     * <p>The launch template to use. You must specify either the launch template ID or
     * launch template name in the request. </p>
     */
    inline LaunchTemplate& WithLaunchTemplateSpecification(LaunchTemplateSpecification&& value) { SetLaunchTemplateSpecification(std::move(value)); return *this;}


    /**
     * <p>Any parameters that you specify override the same parameters in the launch
     * template. Currently, the only supported override is instance type. </p> <p>You
     * must specify between 2 and 20 overrides.</p>
     */
    inline const Aws::Vector<LaunchTemplateOverrides>& GetOverrides() const{ return m_overrides; }

    /**
     * <p>Any parameters that you specify override the same parameters in the launch
     * template. Currently, the only supported override is instance type. </p> <p>You
     * must specify between 2 and 20 overrides.</p>
     */
    inline bool OverridesHasBeenSet() const { return m_overridesHasBeenSet; }

    /**
     * <p>Any parameters that you specify override the same parameters in the launch
     * template. Currently, the only supported override is instance type. </p> <p>You
     * must specify between 2 and 20 overrides.</p>
     */
    inline void SetOverrides(const Aws::Vector<LaunchTemplateOverrides>& value) { m_overridesHasBeenSet = true; m_overrides = value; }

    /**
     * <p>Any parameters that you specify override the same parameters in the launch
     * template. Currently, the only supported override is instance type. </p> <p>You
     * must specify between 2 and 20 overrides.</p>
     */
    inline void SetOverrides(Aws::Vector<LaunchTemplateOverrides>&& value) { m_overridesHasBeenSet = true; m_overrides = std::move(value); }

    /**
     * <p>Any parameters that you specify override the same parameters in the launch
     * template. Currently, the only supported override is instance type. </p> <p>You
     * must specify between 2 and 20 overrides.</p>
     */
    inline LaunchTemplate& WithOverrides(const Aws::Vector<LaunchTemplateOverrides>& value) { SetOverrides(value); return *this;}

    /**
     * <p>Any parameters that you specify override the same parameters in the launch
     * template. Currently, the only supported override is instance type. </p> <p>You
     * must specify between 2 and 20 overrides.</p>
     */
    inline LaunchTemplate& WithOverrides(Aws::Vector<LaunchTemplateOverrides>&& value) { SetOverrides(std::move(value)); return *this;}

    /**
     * <p>Any parameters that you specify override the same parameters in the launch
     * template. Currently, the only supported override is instance type. </p> <p>You
     * must specify between 2 and 20 overrides.</p>
     */
    inline LaunchTemplate& AddOverrides(const LaunchTemplateOverrides& value) { m_overridesHasBeenSet = true; m_overrides.push_back(value); return *this; }

    /**
     * <p>Any parameters that you specify override the same parameters in the launch
     * template. Currently, the only supported override is instance type. </p> <p>You
     * must specify between 2 and 20 overrides.</p>
     */
    inline LaunchTemplate& AddOverrides(LaunchTemplateOverrides&& value) { m_overridesHasBeenSet = true; m_overrides.push_back(std::move(value)); return *this; }

  private:

    LaunchTemplateSpecification m_launchTemplateSpecification;
    bool m_launchTemplateSpecificationHasBeenSet;

    Aws::Vector<LaunchTemplateOverrides> m_overrides;
    bool m_overridesHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
