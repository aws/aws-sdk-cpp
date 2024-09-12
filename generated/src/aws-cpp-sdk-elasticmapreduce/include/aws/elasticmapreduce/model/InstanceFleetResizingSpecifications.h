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
    AWS_EMR_API InstanceFleetResizingSpecifications();
    AWS_EMR_API InstanceFleetResizingSpecifications(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API InstanceFleetResizingSpecifications& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The resize specification for Spot Instances in the instance fleet, which
     * contains the allocation strategy and the resize timeout period. </p>
     */
    inline const SpotResizingSpecification& GetSpotResizeSpecification() const{ return m_spotResizeSpecification; }
    inline bool SpotResizeSpecificationHasBeenSet() const { return m_spotResizeSpecificationHasBeenSet; }
    inline void SetSpotResizeSpecification(const SpotResizingSpecification& value) { m_spotResizeSpecificationHasBeenSet = true; m_spotResizeSpecification = value; }
    inline void SetSpotResizeSpecification(SpotResizingSpecification&& value) { m_spotResizeSpecificationHasBeenSet = true; m_spotResizeSpecification = std::move(value); }
    inline InstanceFleetResizingSpecifications& WithSpotResizeSpecification(const SpotResizingSpecification& value) { SetSpotResizeSpecification(value); return *this;}
    inline InstanceFleetResizingSpecifications& WithSpotResizeSpecification(SpotResizingSpecification&& value) { SetSpotResizeSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resize specification for On-Demand Instances in the instance fleet, which
     * contains the allocation strategy, capacity reservation options, and the resize
     * timeout period. </p>
     */
    inline const OnDemandResizingSpecification& GetOnDemandResizeSpecification() const{ return m_onDemandResizeSpecification; }
    inline bool OnDemandResizeSpecificationHasBeenSet() const { return m_onDemandResizeSpecificationHasBeenSet; }
    inline void SetOnDemandResizeSpecification(const OnDemandResizingSpecification& value) { m_onDemandResizeSpecificationHasBeenSet = true; m_onDemandResizeSpecification = value; }
    inline void SetOnDemandResizeSpecification(OnDemandResizingSpecification&& value) { m_onDemandResizeSpecificationHasBeenSet = true; m_onDemandResizeSpecification = std::move(value); }
    inline InstanceFleetResizingSpecifications& WithOnDemandResizeSpecification(const OnDemandResizingSpecification& value) { SetOnDemandResizeSpecification(value); return *this;}
    inline InstanceFleetResizingSpecifications& WithOnDemandResizeSpecification(OnDemandResizingSpecification&& value) { SetOnDemandResizeSpecification(std::move(value)); return *this;}
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
