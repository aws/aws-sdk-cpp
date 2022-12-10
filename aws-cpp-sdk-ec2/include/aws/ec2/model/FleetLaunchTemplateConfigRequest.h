/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class FleetLaunchTemplateConfigRequest
  {
  public:
    AWS_EC2_API FleetLaunchTemplateConfigRequest();
    AWS_EC2_API FleetLaunchTemplateConfigRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API FleetLaunchTemplateConfigRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The launch template to use. You must specify either the launch template ID or
     * launch template name in the request. </p>
     */
    inline const FleetLaunchTemplateSpecificationRequest& GetLaunchTemplateSpecification() const{ return m_launchTemplateSpecification; }

    /**
     * <p>The launch template to use. You must specify either the launch template ID or
     * launch template name in the request. </p>
     */
    inline bool LaunchTemplateSpecificationHasBeenSet() const { return m_launchTemplateSpecificationHasBeenSet; }

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
     * template.</p> <p>For fleets of type <code>request</code> and
     * <code>maintain</code>, a maximum of 300 items is allowed across all launch
     * templates.</p>
     */
    inline const Aws::Vector<FleetLaunchTemplateOverridesRequest>& GetOverrides() const{ return m_overrides; }

    /**
     * <p>Any parameters that you specify override the same parameters in the launch
     * template.</p> <p>For fleets of type <code>request</code> and
     * <code>maintain</code>, a maximum of 300 items is allowed across all launch
     * templates.</p>
     */
    inline bool OverridesHasBeenSet() const { return m_overridesHasBeenSet; }

    /**
     * <p>Any parameters that you specify override the same parameters in the launch
     * template.</p> <p>For fleets of type <code>request</code> and
     * <code>maintain</code>, a maximum of 300 items is allowed across all launch
     * templates.</p>
     */
    inline void SetOverrides(const Aws::Vector<FleetLaunchTemplateOverridesRequest>& value) { m_overridesHasBeenSet = true; m_overrides = value; }

    /**
     * <p>Any parameters that you specify override the same parameters in the launch
     * template.</p> <p>For fleets of type <code>request</code> and
     * <code>maintain</code>, a maximum of 300 items is allowed across all launch
     * templates.</p>
     */
    inline void SetOverrides(Aws::Vector<FleetLaunchTemplateOverridesRequest>&& value) { m_overridesHasBeenSet = true; m_overrides = std::move(value); }

    /**
     * <p>Any parameters that you specify override the same parameters in the launch
     * template.</p> <p>For fleets of type <code>request</code> and
     * <code>maintain</code>, a maximum of 300 items is allowed across all launch
     * templates.</p>
     */
    inline FleetLaunchTemplateConfigRequest& WithOverrides(const Aws::Vector<FleetLaunchTemplateOverridesRequest>& value) { SetOverrides(value); return *this;}

    /**
     * <p>Any parameters that you specify override the same parameters in the launch
     * template.</p> <p>For fleets of type <code>request</code> and
     * <code>maintain</code>, a maximum of 300 items is allowed across all launch
     * templates.</p>
     */
    inline FleetLaunchTemplateConfigRequest& WithOverrides(Aws::Vector<FleetLaunchTemplateOverridesRequest>&& value) { SetOverrides(std::move(value)); return *this;}

    /**
     * <p>Any parameters that you specify override the same parameters in the launch
     * template.</p> <p>For fleets of type <code>request</code> and
     * <code>maintain</code>, a maximum of 300 items is allowed across all launch
     * templates.</p>
     */
    inline FleetLaunchTemplateConfigRequest& AddOverrides(const FleetLaunchTemplateOverridesRequest& value) { m_overridesHasBeenSet = true; m_overrides.push_back(value); return *this; }

    /**
     * <p>Any parameters that you specify override the same parameters in the launch
     * template.</p> <p>For fleets of type <code>request</code> and
     * <code>maintain</code>, a maximum of 300 items is allowed across all launch
     * templates.</p>
     */
    inline FleetLaunchTemplateConfigRequest& AddOverrides(FleetLaunchTemplateOverridesRequest&& value) { m_overridesHasBeenSet = true; m_overrides.push_back(std::move(value)); return *this; }

  private:

    FleetLaunchTemplateSpecificationRequest m_launchTemplateSpecification;
    bool m_launchTemplateSpecificationHasBeenSet = false;

    Aws::Vector<FleetLaunchTemplateOverridesRequest> m_overrides;
    bool m_overridesHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
