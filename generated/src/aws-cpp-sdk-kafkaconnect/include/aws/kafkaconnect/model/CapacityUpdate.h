/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/kafkaconnect/model/AutoScalingUpdate.h>
#include <aws/kafkaconnect/model/ProvisionedCapacityUpdate.h>
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
   * <p>The target capacity for the connector. The capacity can be auto scaled or
   * provisioned.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/CapacityUpdate">AWS
   * API Reference</a></p>
   */
  class CapacityUpdate
  {
  public:
    AWS_KAFKACONNECT_API CapacityUpdate();
    AWS_KAFKACONNECT_API CapacityUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API CapacityUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The target auto scaling setting.</p>
     */
    inline const AutoScalingUpdate& GetAutoScaling() const{ return m_autoScaling; }

    /**
     * <p>The target auto scaling setting.</p>
     */
    inline bool AutoScalingHasBeenSet() const { return m_autoScalingHasBeenSet; }

    /**
     * <p>The target auto scaling setting.</p>
     */
    inline void SetAutoScaling(const AutoScalingUpdate& value) { m_autoScalingHasBeenSet = true; m_autoScaling = value; }

    /**
     * <p>The target auto scaling setting.</p>
     */
    inline void SetAutoScaling(AutoScalingUpdate&& value) { m_autoScalingHasBeenSet = true; m_autoScaling = std::move(value); }

    /**
     * <p>The target auto scaling setting.</p>
     */
    inline CapacityUpdate& WithAutoScaling(const AutoScalingUpdate& value) { SetAutoScaling(value); return *this;}

    /**
     * <p>The target auto scaling setting.</p>
     */
    inline CapacityUpdate& WithAutoScaling(AutoScalingUpdate&& value) { SetAutoScaling(std::move(value)); return *this;}


    /**
     * <p>The target settings for provisioned capacity.</p>
     */
    inline const ProvisionedCapacityUpdate& GetProvisionedCapacity() const{ return m_provisionedCapacity; }

    /**
     * <p>The target settings for provisioned capacity.</p>
     */
    inline bool ProvisionedCapacityHasBeenSet() const { return m_provisionedCapacityHasBeenSet; }

    /**
     * <p>The target settings for provisioned capacity.</p>
     */
    inline void SetProvisionedCapacity(const ProvisionedCapacityUpdate& value) { m_provisionedCapacityHasBeenSet = true; m_provisionedCapacity = value; }

    /**
     * <p>The target settings for provisioned capacity.</p>
     */
    inline void SetProvisionedCapacity(ProvisionedCapacityUpdate&& value) { m_provisionedCapacityHasBeenSet = true; m_provisionedCapacity = std::move(value); }

    /**
     * <p>The target settings for provisioned capacity.</p>
     */
    inline CapacityUpdate& WithProvisionedCapacity(const ProvisionedCapacityUpdate& value) { SetProvisionedCapacity(value); return *this;}

    /**
     * <p>The target settings for provisioned capacity.</p>
     */
    inline CapacityUpdate& WithProvisionedCapacity(ProvisionedCapacityUpdate&& value) { SetProvisionedCapacity(std::move(value)); return *this;}

  private:

    AutoScalingUpdate m_autoScaling;
    bool m_autoScalingHasBeenSet = false;

    ProvisionedCapacityUpdate m_provisionedCapacity;
    bool m_provisionedCapacityHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
