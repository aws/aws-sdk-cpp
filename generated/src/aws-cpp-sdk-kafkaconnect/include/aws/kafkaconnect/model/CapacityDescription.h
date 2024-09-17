/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/kafkaconnect/model/AutoScalingDescription.h>
#include <aws/kafkaconnect/model/ProvisionedCapacityDescription.h>
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
   * <p>A description of the connector's capacity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/CapacityDescription">AWS
   * API Reference</a></p>
   */
  class CapacityDescription
  {
  public:
    AWS_KAFKACONNECT_API CapacityDescription();
    AWS_KAFKACONNECT_API CapacityDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API CapacityDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes the connector's auto scaling capacity.</p>
     */
    inline const AutoScalingDescription& GetAutoScaling() const{ return m_autoScaling; }
    inline bool AutoScalingHasBeenSet() const { return m_autoScalingHasBeenSet; }
    inline void SetAutoScaling(const AutoScalingDescription& value) { m_autoScalingHasBeenSet = true; m_autoScaling = value; }
    inline void SetAutoScaling(AutoScalingDescription&& value) { m_autoScalingHasBeenSet = true; m_autoScaling = std::move(value); }
    inline CapacityDescription& WithAutoScaling(const AutoScalingDescription& value) { SetAutoScaling(value); return *this;}
    inline CapacityDescription& WithAutoScaling(AutoScalingDescription&& value) { SetAutoScaling(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes a connector's provisioned capacity.</p>
     */
    inline const ProvisionedCapacityDescription& GetProvisionedCapacity() const{ return m_provisionedCapacity; }
    inline bool ProvisionedCapacityHasBeenSet() const { return m_provisionedCapacityHasBeenSet; }
    inline void SetProvisionedCapacity(const ProvisionedCapacityDescription& value) { m_provisionedCapacityHasBeenSet = true; m_provisionedCapacity = value; }
    inline void SetProvisionedCapacity(ProvisionedCapacityDescription&& value) { m_provisionedCapacityHasBeenSet = true; m_provisionedCapacity = std::move(value); }
    inline CapacityDescription& WithProvisionedCapacity(const ProvisionedCapacityDescription& value) { SetProvisionedCapacity(value); return *this;}
    inline CapacityDescription& WithProvisionedCapacity(ProvisionedCapacityDescription&& value) { SetProvisionedCapacity(std::move(value)); return *this;}
    ///@}
  private:

    AutoScalingDescription m_autoScaling;
    bool m_autoScalingHasBeenSet = false;

    ProvisionedCapacityDescription m_provisionedCapacity;
    bool m_provisionedCapacityHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
