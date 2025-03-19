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
   * <p>The launch specification for On-Demand and Spot Instances in the fleet.</p>
   *  <p>The instance fleet configuration is available only in Amazon EMR
   * releases 4.8.0 and later, excluding 5.0.x versions. On-Demand and Spot instance
   * allocation strategies are available in Amazon EMR releases 5.12.1 and later.</p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/InstanceFleetProvisioningSpecifications">AWS
   * API Reference</a></p>
   */
  class InstanceFleetProvisioningSpecifications
  {
  public:
    AWS_EMR_API InstanceFleetProvisioningSpecifications() = default;
    AWS_EMR_API InstanceFleetProvisioningSpecifications(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API InstanceFleetProvisioningSpecifications& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The launch specification for Spot instances in the fleet, which determines
     * the allocation strategy, defined duration, and provisioning timeout
     * behavior.</p>
     */
    inline const SpotProvisioningSpecification& GetSpotSpecification() const { return m_spotSpecification; }
    inline bool SpotSpecificationHasBeenSet() const { return m_spotSpecificationHasBeenSet; }
    template<typename SpotSpecificationT = SpotProvisioningSpecification>
    void SetSpotSpecification(SpotSpecificationT&& value) { m_spotSpecificationHasBeenSet = true; m_spotSpecification = std::forward<SpotSpecificationT>(value); }
    template<typename SpotSpecificationT = SpotProvisioningSpecification>
    InstanceFleetProvisioningSpecifications& WithSpotSpecification(SpotSpecificationT&& value) { SetSpotSpecification(std::forward<SpotSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The launch specification for On-Demand Instances in the instance fleet,
     * which determines the allocation strategy and capacity reservation options.</p>
     *  <p>The instance fleet configuration is available only in Amazon EMR
     * releases 4.8.0 and later, excluding 5.0.x versions. On-Demand Instances
     * allocation strategy is available in Amazon EMR releases 5.12.1 and later.</p>
     * 
     */
    inline const OnDemandProvisioningSpecification& GetOnDemandSpecification() const { return m_onDemandSpecification; }
    inline bool OnDemandSpecificationHasBeenSet() const { return m_onDemandSpecificationHasBeenSet; }
    template<typename OnDemandSpecificationT = OnDemandProvisioningSpecification>
    void SetOnDemandSpecification(OnDemandSpecificationT&& value) { m_onDemandSpecificationHasBeenSet = true; m_onDemandSpecification = std::forward<OnDemandSpecificationT>(value); }
    template<typename OnDemandSpecificationT = OnDemandProvisioningSpecification>
    InstanceFleetProvisioningSpecifications& WithOnDemandSpecification(OnDemandSpecificationT&& value) { SetOnDemandSpecification(std::forward<OnDemandSpecificationT>(value)); return *this;}
    ///@}
  private:

    SpotProvisioningSpecification m_spotSpecification;
    bool m_spotSpecificationHasBeenSet = false;

    OnDemandProvisioningSpecification m_onDemandSpecification;
    bool m_onDemandSpecificationHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
