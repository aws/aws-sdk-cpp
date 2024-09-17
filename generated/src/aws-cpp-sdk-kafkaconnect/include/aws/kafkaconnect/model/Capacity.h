/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/kafkaconnect/model/AutoScaling.h>
#include <aws/kafkaconnect/model/ProvisionedCapacity.h>
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
namespace KafkaConnect
{
namespace Model
{

  /**
   * <p>Information about the capacity of the connector, whether it is auto scaled or
   * provisioned.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/Capacity">AWS
   * API Reference</a></p>
   */
  class Capacity
  {
  public:
    AWS_KAFKACONNECT_API Capacity();
    AWS_KAFKACONNECT_API Capacity(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API Capacity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the auto scaling parameters for the connector.</p>
     */
    inline const AutoScaling& GetAutoScaling() const{ return m_autoScaling; }
    inline bool AutoScalingHasBeenSet() const { return m_autoScalingHasBeenSet; }
    inline void SetAutoScaling(const AutoScaling& value) { m_autoScalingHasBeenSet = true; m_autoScaling = value; }
    inline void SetAutoScaling(AutoScaling&& value) { m_autoScalingHasBeenSet = true; m_autoScaling = std::move(value); }
    inline Capacity& WithAutoScaling(const AutoScaling& value) { SetAutoScaling(value); return *this;}
    inline Capacity& WithAutoScaling(AutoScaling&& value) { SetAutoScaling(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about a fixed capacity allocated to a connector.</p>
     */
    inline const ProvisionedCapacity& GetProvisionedCapacity() const{ return m_provisionedCapacity; }
    inline bool ProvisionedCapacityHasBeenSet() const { return m_provisionedCapacityHasBeenSet; }
    inline void SetProvisionedCapacity(const ProvisionedCapacity& value) { m_provisionedCapacityHasBeenSet = true; m_provisionedCapacity = value; }
    inline void SetProvisionedCapacity(ProvisionedCapacity&& value) { m_provisionedCapacityHasBeenSet = true; m_provisionedCapacity = std::move(value); }
    inline Capacity& WithProvisionedCapacity(const ProvisionedCapacity& value) { SetProvisionedCapacity(value); return *this;}
    inline Capacity& WithProvisionedCapacity(ProvisionedCapacity&& value) { SetProvisionedCapacity(std::move(value)); return *this;}
    ///@}
  private:

    AutoScaling m_autoScaling;
    bool m_autoScalingHasBeenSet = false;

    ProvisionedCapacity m_provisionedCapacity;
    bool m_provisionedCapacityHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
