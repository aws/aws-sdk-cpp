/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/SpotProvisioningSpecification.h>
#include <aws/elasticmapreduce/model/OnDemandProvisioningSpecification.h>
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
   * <p>The launch specification for Spot Instances in the fleet, which determines
   * the defined duration, provisioning timeout behavior, and allocation
   * strategy.</p>  <p>The instance fleet configuration is available only in
   * Amazon EMR versions 4.8.0 and later, excluding 5.0.x versions. On-Demand and
   * Spot Instance allocation strategies are available in Amazon EMR version 5.12.1
   * and later.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/InstanceFleetProvisioningSpecifications">AWS
   * API Reference</a></p>
   */
  class InstanceFleetProvisioningSpecifications
  {
  public:
    AWS_EMR_API InstanceFleetProvisioningSpecifications();
    AWS_EMR_API InstanceFleetProvisioningSpecifications(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API InstanceFleetProvisioningSpecifications& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The launch specification for Spot Instances in the fleet, which determines
     * the defined duration, provisioning timeout behavior, and allocation
     * strategy.</p>
     */
    inline const SpotProvisioningSpecification& GetSpotSpecification() const{ return m_spotSpecification; }

    /**
     * <p>The launch specification for Spot Instances in the fleet, which determines
     * the defined duration, provisioning timeout behavior, and allocation
     * strategy.</p>
     */
    inline bool SpotSpecificationHasBeenSet() const { return m_spotSpecificationHasBeenSet; }

    /**
     * <p>The launch specification for Spot Instances in the fleet, which determines
     * the defined duration, provisioning timeout behavior, and allocation
     * strategy.</p>
     */
    inline void SetSpotSpecification(const SpotProvisioningSpecification& value) { m_spotSpecificationHasBeenSet = true; m_spotSpecification = value; }

    /**
     * <p>The launch specification for Spot Instances in the fleet, which determines
     * the defined duration, provisioning timeout behavior, and allocation
     * strategy.</p>
     */
    inline void SetSpotSpecification(SpotProvisioningSpecification&& value) { m_spotSpecificationHasBeenSet = true; m_spotSpecification = std::move(value); }

    /**
     * <p>The launch specification for Spot Instances in the fleet, which determines
     * the defined duration, provisioning timeout behavior, and allocation
     * strategy.</p>
     */
    inline InstanceFleetProvisioningSpecifications& WithSpotSpecification(const SpotProvisioningSpecification& value) { SetSpotSpecification(value); return *this;}

    /**
     * <p>The launch specification for Spot Instances in the fleet, which determines
     * the defined duration, provisioning timeout behavior, and allocation
     * strategy.</p>
     */
    inline InstanceFleetProvisioningSpecifications& WithSpotSpecification(SpotProvisioningSpecification&& value) { SetSpotSpecification(std::move(value)); return *this;}


    /**
     * <p> The launch specification for On-Demand Instances in the instance fleet,
     * which determines the allocation strategy. </p>  <p>The instance fleet
     * configuration is available only in Amazon EMR versions 4.8.0 and later,
     * excluding 5.0.x versions. On-Demand Instances allocation strategy is available
     * in Amazon EMR version 5.12.1 and later.</p> 
     */
    inline const OnDemandProvisioningSpecification& GetOnDemandSpecification() const{ return m_onDemandSpecification; }

    /**
     * <p> The launch specification for On-Demand Instances in the instance fleet,
     * which determines the allocation strategy. </p>  <p>The instance fleet
     * configuration is available only in Amazon EMR versions 4.8.0 and later,
     * excluding 5.0.x versions. On-Demand Instances allocation strategy is available
     * in Amazon EMR version 5.12.1 and later.</p> 
     */
    inline bool OnDemandSpecificationHasBeenSet() const { return m_onDemandSpecificationHasBeenSet; }

    /**
     * <p> The launch specification for On-Demand Instances in the instance fleet,
     * which determines the allocation strategy. </p>  <p>The instance fleet
     * configuration is available only in Amazon EMR versions 4.8.0 and later,
     * excluding 5.0.x versions. On-Demand Instances allocation strategy is available
     * in Amazon EMR version 5.12.1 and later.</p> 
     */
    inline void SetOnDemandSpecification(const OnDemandProvisioningSpecification& value) { m_onDemandSpecificationHasBeenSet = true; m_onDemandSpecification = value; }

    /**
     * <p> The launch specification for On-Demand Instances in the instance fleet,
     * which determines the allocation strategy. </p>  <p>The instance fleet
     * configuration is available only in Amazon EMR versions 4.8.0 and later,
     * excluding 5.0.x versions. On-Demand Instances allocation strategy is available
     * in Amazon EMR version 5.12.1 and later.</p> 
     */
    inline void SetOnDemandSpecification(OnDemandProvisioningSpecification&& value) { m_onDemandSpecificationHasBeenSet = true; m_onDemandSpecification = std::move(value); }

    /**
     * <p> The launch specification for On-Demand Instances in the instance fleet,
     * which determines the allocation strategy. </p>  <p>The instance fleet
     * configuration is available only in Amazon EMR versions 4.8.0 and later,
     * excluding 5.0.x versions. On-Demand Instances allocation strategy is available
     * in Amazon EMR version 5.12.1 and later.</p> 
     */
    inline InstanceFleetProvisioningSpecifications& WithOnDemandSpecification(const OnDemandProvisioningSpecification& value) { SetOnDemandSpecification(value); return *this;}

    /**
     * <p> The launch specification for On-Demand Instances in the instance fleet,
     * which determines the allocation strategy. </p>  <p>The instance fleet
     * configuration is available only in Amazon EMR versions 4.8.0 and later,
     * excluding 5.0.x versions. On-Demand Instances allocation strategy is available
     * in Amazon EMR version 5.12.1 and later.</p> 
     */
    inline InstanceFleetProvisioningSpecifications& WithOnDemandSpecification(OnDemandProvisioningSpecification&& value) { SetOnDemandSpecification(std::move(value)); return *this;}

  private:

    SpotProvisioningSpecification m_spotSpecification;
    bool m_spotSpecificationHasBeenSet = false;

    OnDemandProvisioningSpecification m_onDemandSpecification;
    bool m_onDemandSpecificationHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
