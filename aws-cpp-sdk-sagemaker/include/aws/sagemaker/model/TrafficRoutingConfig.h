/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/TrafficRoutingConfigType.h>
#include <aws/sagemaker/model/CapacitySize.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Defines the traffic routing strategy during an endpoint deployment to shift
   * traffic from the old fleet to the new fleet.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TrafficRoutingConfig">AWS
   * API Reference</a></p>
   */
  class TrafficRoutingConfig
  {
  public:
    AWS_SAGEMAKER_API TrafficRoutingConfig();
    AWS_SAGEMAKER_API TrafficRoutingConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TrafficRoutingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Traffic routing strategy type.</p> <ul> <li> <p> <code>ALL_AT_ONCE</code>:
     * Endpoint traffic shifts to the new fleet in a single step. </p> </li> <li> <p>
     * <code>CANARY</code>: Endpoint traffic shifts to the new fleet in two steps. The
     * first step is the canary, which is a small portion of the traffic. The second
     * step is the remainder of the traffic. </p> </li> <li> <p> <code>LINEAR</code>:
     * Endpoint traffic shifts to the new fleet in n steps of a configurable size. </p>
     * </li> </ul>
     */
    inline const TrafficRoutingConfigType& GetType() const{ return m_type; }

    /**
     * <p>Traffic routing strategy type.</p> <ul> <li> <p> <code>ALL_AT_ONCE</code>:
     * Endpoint traffic shifts to the new fleet in a single step. </p> </li> <li> <p>
     * <code>CANARY</code>: Endpoint traffic shifts to the new fleet in two steps. The
     * first step is the canary, which is a small portion of the traffic. The second
     * step is the remainder of the traffic. </p> </li> <li> <p> <code>LINEAR</code>:
     * Endpoint traffic shifts to the new fleet in n steps of a configurable size. </p>
     * </li> </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Traffic routing strategy type.</p> <ul> <li> <p> <code>ALL_AT_ONCE</code>:
     * Endpoint traffic shifts to the new fleet in a single step. </p> </li> <li> <p>
     * <code>CANARY</code>: Endpoint traffic shifts to the new fleet in two steps. The
     * first step is the canary, which is a small portion of the traffic. The second
     * step is the remainder of the traffic. </p> </li> <li> <p> <code>LINEAR</code>:
     * Endpoint traffic shifts to the new fleet in n steps of a configurable size. </p>
     * </li> </ul>
     */
    inline void SetType(const TrafficRoutingConfigType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Traffic routing strategy type.</p> <ul> <li> <p> <code>ALL_AT_ONCE</code>:
     * Endpoint traffic shifts to the new fleet in a single step. </p> </li> <li> <p>
     * <code>CANARY</code>: Endpoint traffic shifts to the new fleet in two steps. The
     * first step is the canary, which is a small portion of the traffic. The second
     * step is the remainder of the traffic. </p> </li> <li> <p> <code>LINEAR</code>:
     * Endpoint traffic shifts to the new fleet in n steps of a configurable size. </p>
     * </li> </ul>
     */
    inline void SetType(TrafficRoutingConfigType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Traffic routing strategy type.</p> <ul> <li> <p> <code>ALL_AT_ONCE</code>:
     * Endpoint traffic shifts to the new fleet in a single step. </p> </li> <li> <p>
     * <code>CANARY</code>: Endpoint traffic shifts to the new fleet in two steps. The
     * first step is the canary, which is a small portion of the traffic. The second
     * step is the remainder of the traffic. </p> </li> <li> <p> <code>LINEAR</code>:
     * Endpoint traffic shifts to the new fleet in n steps of a configurable size. </p>
     * </li> </ul>
     */
    inline TrafficRoutingConfig& WithType(const TrafficRoutingConfigType& value) { SetType(value); return *this;}

    /**
     * <p>Traffic routing strategy type.</p> <ul> <li> <p> <code>ALL_AT_ONCE</code>:
     * Endpoint traffic shifts to the new fleet in a single step. </p> </li> <li> <p>
     * <code>CANARY</code>: Endpoint traffic shifts to the new fleet in two steps. The
     * first step is the canary, which is a small portion of the traffic. The second
     * step is the remainder of the traffic. </p> </li> <li> <p> <code>LINEAR</code>:
     * Endpoint traffic shifts to the new fleet in n steps of a configurable size. </p>
     * </li> </ul>
     */
    inline TrafficRoutingConfig& WithType(TrafficRoutingConfigType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The waiting time (in seconds) between incremental steps to turn on traffic on
     * the new endpoint fleet.</p>
     */
    inline int GetWaitIntervalInSeconds() const{ return m_waitIntervalInSeconds; }

    /**
     * <p>The waiting time (in seconds) between incremental steps to turn on traffic on
     * the new endpoint fleet.</p>
     */
    inline bool WaitIntervalInSecondsHasBeenSet() const { return m_waitIntervalInSecondsHasBeenSet; }

    /**
     * <p>The waiting time (in seconds) between incremental steps to turn on traffic on
     * the new endpoint fleet.</p>
     */
    inline void SetWaitIntervalInSeconds(int value) { m_waitIntervalInSecondsHasBeenSet = true; m_waitIntervalInSeconds = value; }

    /**
     * <p>The waiting time (in seconds) between incremental steps to turn on traffic on
     * the new endpoint fleet.</p>
     */
    inline TrafficRoutingConfig& WithWaitIntervalInSeconds(int value) { SetWaitIntervalInSeconds(value); return *this;}


    /**
     * <p>Batch size for the first step to turn on traffic on the new endpoint fleet.
     * <code>Value</code> must be less than or equal to 50% of the variant's total
     * instance count.</p>
     */
    inline const CapacitySize& GetCanarySize() const{ return m_canarySize; }

    /**
     * <p>Batch size for the first step to turn on traffic on the new endpoint fleet.
     * <code>Value</code> must be less than or equal to 50% of the variant's total
     * instance count.</p>
     */
    inline bool CanarySizeHasBeenSet() const { return m_canarySizeHasBeenSet; }

    /**
     * <p>Batch size for the first step to turn on traffic on the new endpoint fleet.
     * <code>Value</code> must be less than or equal to 50% of the variant's total
     * instance count.</p>
     */
    inline void SetCanarySize(const CapacitySize& value) { m_canarySizeHasBeenSet = true; m_canarySize = value; }

    /**
     * <p>Batch size for the first step to turn on traffic on the new endpoint fleet.
     * <code>Value</code> must be less than or equal to 50% of the variant's total
     * instance count.</p>
     */
    inline void SetCanarySize(CapacitySize&& value) { m_canarySizeHasBeenSet = true; m_canarySize = std::move(value); }

    /**
     * <p>Batch size for the first step to turn on traffic on the new endpoint fleet.
     * <code>Value</code> must be less than or equal to 50% of the variant's total
     * instance count.</p>
     */
    inline TrafficRoutingConfig& WithCanarySize(const CapacitySize& value) { SetCanarySize(value); return *this;}

    /**
     * <p>Batch size for the first step to turn on traffic on the new endpoint fleet.
     * <code>Value</code> must be less than or equal to 50% of the variant's total
     * instance count.</p>
     */
    inline TrafficRoutingConfig& WithCanarySize(CapacitySize&& value) { SetCanarySize(std::move(value)); return *this;}


    /**
     * <p>Batch size for each step to turn on traffic on the new endpoint fleet.
     * <code>Value</code> must be 10-50% of the variant's total instance count.</p>
     */
    inline const CapacitySize& GetLinearStepSize() const{ return m_linearStepSize; }

    /**
     * <p>Batch size for each step to turn on traffic on the new endpoint fleet.
     * <code>Value</code> must be 10-50% of the variant's total instance count.</p>
     */
    inline bool LinearStepSizeHasBeenSet() const { return m_linearStepSizeHasBeenSet; }

    /**
     * <p>Batch size for each step to turn on traffic on the new endpoint fleet.
     * <code>Value</code> must be 10-50% of the variant's total instance count.</p>
     */
    inline void SetLinearStepSize(const CapacitySize& value) { m_linearStepSizeHasBeenSet = true; m_linearStepSize = value; }

    /**
     * <p>Batch size for each step to turn on traffic on the new endpoint fleet.
     * <code>Value</code> must be 10-50% of the variant's total instance count.</p>
     */
    inline void SetLinearStepSize(CapacitySize&& value) { m_linearStepSizeHasBeenSet = true; m_linearStepSize = std::move(value); }

    /**
     * <p>Batch size for each step to turn on traffic on the new endpoint fleet.
     * <code>Value</code> must be 10-50% of the variant's total instance count.</p>
     */
    inline TrafficRoutingConfig& WithLinearStepSize(const CapacitySize& value) { SetLinearStepSize(value); return *this;}

    /**
     * <p>Batch size for each step to turn on traffic on the new endpoint fleet.
     * <code>Value</code> must be 10-50% of the variant's total instance count.</p>
     */
    inline TrafficRoutingConfig& WithLinearStepSize(CapacitySize&& value) { SetLinearStepSize(std::move(value)); return *this;}

  private:

    TrafficRoutingConfigType m_type;
    bool m_typeHasBeenSet = false;

    int m_waitIntervalInSeconds;
    bool m_waitIntervalInSecondsHasBeenSet = false;

    CapacitySize m_canarySize;
    bool m_canarySizeHasBeenSet = false;

    CapacitySize m_linearStepSize;
    bool m_linearStepSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
