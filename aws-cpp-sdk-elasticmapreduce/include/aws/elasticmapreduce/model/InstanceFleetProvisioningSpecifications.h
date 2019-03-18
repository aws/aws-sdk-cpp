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
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/SpotProvisioningSpecification.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p>The launch specification for Spot instances in the fleet, which determines
   * the defined duration and provisioning timeout behavior.</p> <note> <p>The
   * instance fleet configuration is available only in Amazon EMR versions 4.8.0 and
   * later, excluding 5.0.x versions.</p> </note><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/InstanceFleetProvisioningSpecifications">AWS
   * API Reference</a></p>
   */
  class AWS_EMR_API InstanceFleetProvisioningSpecifications
  {
  public:
    InstanceFleetProvisioningSpecifications();
    InstanceFleetProvisioningSpecifications(Aws::Utils::Json::JsonView jsonValue);
    InstanceFleetProvisioningSpecifications& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The launch specification for Spot instances in the fleet, which determines
     * the defined duration and provisioning timeout behavior.</p>
     */
    inline const SpotProvisioningSpecification& GetSpotSpecification() const{ return m_spotSpecification; }

    /**
     * <p>The launch specification for Spot instances in the fleet, which determines
     * the defined duration and provisioning timeout behavior.</p>
     */
    inline bool SpotSpecificationHasBeenSet() const { return m_spotSpecificationHasBeenSet; }

    /**
     * <p>The launch specification for Spot instances in the fleet, which determines
     * the defined duration and provisioning timeout behavior.</p>
     */
    inline void SetSpotSpecification(const SpotProvisioningSpecification& value) { m_spotSpecificationHasBeenSet = true; m_spotSpecification = value; }

    /**
     * <p>The launch specification for Spot instances in the fleet, which determines
     * the defined duration and provisioning timeout behavior.</p>
     */
    inline void SetSpotSpecification(SpotProvisioningSpecification&& value) { m_spotSpecificationHasBeenSet = true; m_spotSpecification = std::move(value); }

    /**
     * <p>The launch specification for Spot instances in the fleet, which determines
     * the defined duration and provisioning timeout behavior.</p>
     */
    inline InstanceFleetProvisioningSpecifications& WithSpotSpecification(const SpotProvisioningSpecification& value) { SetSpotSpecification(value); return *this;}

    /**
     * <p>The launch specification for Spot instances in the fleet, which determines
     * the defined duration and provisioning timeout behavior.</p>
     */
    inline InstanceFleetProvisioningSpecifications& WithSpotSpecification(SpotProvisioningSpecification&& value) { SetSpotSpecification(std::move(value)); return *this;}

  private:

    SpotProvisioningSpecification m_spotSpecification;
    bool m_spotSpecificationHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
