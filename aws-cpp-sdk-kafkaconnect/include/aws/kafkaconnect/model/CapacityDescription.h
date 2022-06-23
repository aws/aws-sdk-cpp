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
  class AWS_KAFKACONNECT_API CapacityDescription
  {
  public:
    CapacityDescription();
    CapacityDescription(Aws::Utils::Json::JsonView jsonValue);
    CapacityDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes the connector's auto scaling capacity.</p>
     */
    inline const AutoScalingDescription& GetAutoScaling() const{ return m_autoScaling; }

    /**
     * <p>Describes the connector's auto scaling capacity.</p>
     */
    inline bool AutoScalingHasBeenSet() const { return m_autoScalingHasBeenSet; }

    /**
     * <p>Describes the connector's auto scaling capacity.</p>
     */
    inline void SetAutoScaling(const AutoScalingDescription& value) { m_autoScalingHasBeenSet = true; m_autoScaling = value; }

    /**
     * <p>Describes the connector's auto scaling capacity.</p>
     */
    inline void SetAutoScaling(AutoScalingDescription&& value) { m_autoScalingHasBeenSet = true; m_autoScaling = std::move(value); }

    /**
     * <p>Describes the connector's auto scaling capacity.</p>
     */
    inline CapacityDescription& WithAutoScaling(const AutoScalingDescription& value) { SetAutoScaling(value); return *this;}

    /**
     * <p>Describes the connector's auto scaling capacity.</p>
     */
    inline CapacityDescription& WithAutoScaling(AutoScalingDescription&& value) { SetAutoScaling(std::move(value)); return *this;}


    /**
     * <p>Describes a connector's provisioned capacity.</p>
     */
    inline const ProvisionedCapacityDescription& GetProvisionedCapacity() const{ return m_provisionedCapacity; }

    /**
     * <p>Describes a connector's provisioned capacity.</p>
     */
    inline bool ProvisionedCapacityHasBeenSet() const { return m_provisionedCapacityHasBeenSet; }

    /**
     * <p>Describes a connector's provisioned capacity.</p>
     */
    inline void SetProvisionedCapacity(const ProvisionedCapacityDescription& value) { m_provisionedCapacityHasBeenSet = true; m_provisionedCapacity = value; }

    /**
     * <p>Describes a connector's provisioned capacity.</p>
     */
    inline void SetProvisionedCapacity(ProvisionedCapacityDescription&& value) { m_provisionedCapacityHasBeenSet = true; m_provisionedCapacity = std::move(value); }

    /**
     * <p>Describes a connector's provisioned capacity.</p>
     */
    inline CapacityDescription& WithProvisionedCapacity(const ProvisionedCapacityDescription& value) { SetProvisionedCapacity(value); return *this;}

    /**
     * <p>Describes a connector's provisioned capacity.</p>
     */
    inline CapacityDescription& WithProvisionedCapacity(ProvisionedCapacityDescription&& value) { SetProvisionedCapacity(std::move(value)); return *this;}

  private:

    AutoScalingDescription m_autoScaling;
    bool m_autoScalingHasBeenSet;

    ProvisionedCapacityDescription m_provisionedCapacity;
    bool m_provisionedCapacityHasBeenSet;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
