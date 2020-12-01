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
   * <p>Currently, the <code>TrafficRoutingConfig</code> API is not
   * supported.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TrafficRoutingConfig">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API TrafficRoutingConfig
  {
  public:
    TrafficRoutingConfig();
    TrafficRoutingConfig(Aws::Utils::Json::JsonView jsonValue);
    TrafficRoutingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p/>
     */
    inline const TrafficRoutingConfigType& GetType() const{ return m_type; }

    /**
     * <p/>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetType(const TrafficRoutingConfigType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p/>
     */
    inline void SetType(TrafficRoutingConfigType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p/>
     */
    inline TrafficRoutingConfig& WithType(const TrafficRoutingConfigType& value) { SetType(value); return *this;}

    /**
     * <p/>
     */
    inline TrafficRoutingConfig& WithType(TrafficRoutingConfigType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline int GetWaitIntervalInSeconds() const{ return m_waitIntervalInSeconds; }

    /**
     * <p/>
     */
    inline bool WaitIntervalInSecondsHasBeenSet() const { return m_waitIntervalInSecondsHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetWaitIntervalInSeconds(int value) { m_waitIntervalInSecondsHasBeenSet = true; m_waitIntervalInSeconds = value; }

    /**
     * <p/>
     */
    inline TrafficRoutingConfig& WithWaitIntervalInSeconds(int value) { SetWaitIntervalInSeconds(value); return *this;}


    /**
     * <p/>
     */
    inline const CapacitySize& GetCanarySize() const{ return m_canarySize; }

    /**
     * <p/>
     */
    inline bool CanarySizeHasBeenSet() const { return m_canarySizeHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetCanarySize(const CapacitySize& value) { m_canarySizeHasBeenSet = true; m_canarySize = value; }

    /**
     * <p/>
     */
    inline void SetCanarySize(CapacitySize&& value) { m_canarySizeHasBeenSet = true; m_canarySize = std::move(value); }

    /**
     * <p/>
     */
    inline TrafficRoutingConfig& WithCanarySize(const CapacitySize& value) { SetCanarySize(value); return *this;}

    /**
     * <p/>
     */
    inline TrafficRoutingConfig& WithCanarySize(CapacitySize&& value) { SetCanarySize(std::move(value)); return *this;}

  private:

    TrafficRoutingConfigType m_type;
    bool m_typeHasBeenSet;

    int m_waitIntervalInSeconds;
    bool m_waitIntervalInSecondsHasBeenSet;

    CapacitySize m_canarySize;
    bool m_canarySizeHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
