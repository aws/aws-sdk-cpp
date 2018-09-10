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
#include <aws/ec2/model/FleetLaunchTemplateSpecificationRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/FleetLaunchTemplateOverridesRequest.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/FleetLaunchTemplateConfigRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API FleetLaunchTemplateConfigRequest
  {
  public:
    FleetLaunchTemplateConfigRequest();
    FleetLaunchTemplateConfigRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    FleetLaunchTemplateConfigRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The launch template to use. You must specify either the launch template ID or
     * launch template name in the request. </p>
     */
    inline const FleetLaunchTemplateSpecificationRequest& GetLaunchTemplateSpecification() const{ return m_launchTemplateSpecification; }

    /**
     * <p>The launch template to use. You must specify either the launch template ID or
     * launch template name in the request. </p>
     */
    inline void SetLaunchTemplateSpecification(const FleetLaunchTemplateSpecificationRequest& value) { m_launchTemplateSpecificationHasBeenSet = true; m_launchTemplateSpecification = value; }

    /**
     * <p>The launch template to use. You must specify either the launch template ID or
     * launch template name in the request. </p>
     */
    inline void SetLaunchTemplateSpecification(FleetLaunchTemplateSpecificationRequest&& value) { m_launchTemplateSpecificationHasBeenSet = true; m_launchTemplateSpecification = std::move(value); }

    /**
     * <p>The launch template to use. You must specify either the launch template ID or
     * launch template name in the request. </p>
     */
    inline FleetLaunchTemplateConfigRequest& WithLaunchTemplateSpecification(const FleetLaunchTemplateSpecificationRequest& value) { SetLaunchTemplateSpecification(value); return *this;}

    /**
     * <p>The launch template to use. You must specify either the launch template ID or
     * launch template name in the request. </p>
     */
    inline FleetLaunchTemplateConfigRequest& WithLaunchTemplateSpecification(FleetLaunchTemplateSpecificationRequest&& value) { SetLaunchTemplateSpecification(std::move(value)); return *this;}


    /**
     * <p>Any parameters that you specify override the same parameters in the launch
     * template.</p>
     */
    inline const Aws::Vector<FleetLaunchTemplateOverridesRequest>& GetOverrides() const{ return m_overrides; }

    /**
     * <p>Any parameters that you specify override the same parameters in the launch
     * template.</p>
     */
    inline void SetOverrides(const Aws::Vector<FleetLaunchTemplateOverridesRequest>& value) { m_overridesHasBeenSet = true; m_overrides = value; }

    /**
     * <p>Any parameters that you specify override the same parameters in the launch
     * template.</p>
     */
    inline void SetOverrides(Aws::Vector<FleetLaunchTemplateOverridesRequest>&& value) { m_overridesHasBeenSet = true; m_overrides = std::move(value); }

    /**
     * <p>Any parameters that you specify override the same parameters in the launch
     * template.</p>
     */
    inline FleetLaunchTemplateConfigRequest& WithOverrides(const Aws::Vector<FleetLaunchTemplateOverridesRequest>& value) { SetOverrides(value); return *this;}

    /**
     * <p>Any parameters that you specify override the same parameters in the launch
     * template.</p>
     */
    inline FleetLaunchTemplateConfigRequest& WithOverrides(Aws::Vector<FleetLaunchTemplateOverridesRequest>&& value) { SetOverrides(std::move(value)); return *this;}

    /**
     * <p>Any parameters that you specify override the same parameters in the launch
     * template.</p>
     */
    inline FleetLaunchTemplateConfigRequest& AddOverrides(const FleetLaunchTemplateOverridesRequest& value) { m_overridesHasBeenSet = true; m_overrides.push_back(value); return *this; }

    /**
     * <p>Any parameters that you specify override the same parameters in the launch
     * template.</p>
     */
    inline FleetLaunchTemplateConfigRequest& AddOverrides(FleetLaunchTemplateOverridesRequest&& value) { m_overridesHasBeenSet = true; m_overrides.push_back(std::move(value)); return *this; }

  private:

    FleetLaunchTemplateSpecificationRequest m_launchTemplateSpecification;
    bool m_launchTemplateSpecificationHasBeenSet;

    Aws::Vector<FleetLaunchTemplateOverridesRequest> m_overrides;
    bool m_overridesHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
