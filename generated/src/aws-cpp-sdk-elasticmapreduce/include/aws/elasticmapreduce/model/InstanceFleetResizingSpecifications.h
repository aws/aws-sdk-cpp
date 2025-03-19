/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/SpotResizingSpecification.h>
#include <aws/elasticmapreduce/model/OnDemandResizingSpecification.h>
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
   * <p>The resize specification for On-Demand and Spot Instances in the
   * fleet.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/InstanceFleetResizingSpecifications">AWS
   * API Reference</a></p>
   */
  class InstanceFleetResizingSpecifications
  {
  public:
    AWS_EMR_API InstanceFleetResizingSpecifications() = default;
    AWS_EMR_API InstanceFleetResizingSpecifications(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API InstanceFleetResizingSpecifications& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The resize specification for Spot Instances in the instance fleet, which
     * contains the allocation strategy and the resize timeout period. </p>
     */
    inline const SpotResizingSpecification& GetSpotResizeSpecification() const { return m_spotResizeSpecification; }
    inline bool SpotResizeSpecificationHasBeenSet() const { return m_spotResizeSpecificationHasBeenSet; }
    template<typename SpotResizeSpecificationT = SpotResizingSpecification>
    void SetSpotResizeSpecification(SpotResizeSpecificationT&& value) { m_spotResizeSpecificationHasBeenSet = true; m_spotResizeSpecification = std::forward<SpotResizeSpecificationT>(value); }
    template<typename SpotResizeSpecificationT = SpotResizingSpecification>
    InstanceFleetResizingSpecifications& WithSpotResizeSpecification(SpotResizeSpecificationT&& value) { SetSpotResizeSpecification(std::forward<SpotResizeSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resize specification for On-Demand Instances in the instance fleet, which
     * contains the allocation strategy, capacity reservation options, and the resize
     * timeout period. </p>
     */
    inline const OnDemandResizingSpecification& GetOnDemandResizeSpecification() const { return m_onDemandResizeSpecification; }
    inline bool OnDemandResizeSpecificationHasBeenSet() const { return m_onDemandResizeSpecificationHasBeenSet; }
    template<typename OnDemandResizeSpecificationT = OnDemandResizingSpecification>
    void SetOnDemandResizeSpecification(OnDemandResizeSpecificationT&& value) { m_onDemandResizeSpecificationHasBeenSet = true; m_onDemandResizeSpecification = std::forward<OnDemandResizeSpecificationT>(value); }
    template<typename OnDemandResizeSpecificationT = OnDemandResizingSpecification>
    InstanceFleetResizingSpecifications& WithOnDemandResizeSpecification(OnDemandResizeSpecificationT&& value) { SetOnDemandResizeSpecification(std::forward<OnDemandResizeSpecificationT>(value)); return *this;}
    ///@}
  private:

    SpotResizingSpecification m_spotResizeSpecification;
    bool m_spotResizeSpecificationHasBeenSet = false;

    OnDemandResizingSpecification m_onDemandResizeSpecification;
    bool m_onDemandResizeSpecificationHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
