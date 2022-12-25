/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/kafkaconnect/model/ScaleInPolicyUpdate.h>
#include <aws/kafkaconnect/model/ScaleOutPolicyUpdate.h>
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
   * <p>The updates to the auto scaling parameters for the connector.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/AutoScalingUpdate">AWS
   * API Reference</a></p>
   */
  class AutoScalingUpdate
  {
  public:
    AWS_KAFKACONNECT_API AutoScalingUpdate();
    AWS_KAFKACONNECT_API AutoScalingUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API AutoScalingUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The target maximum number of workers allocated to the connector.</p>
     */
    inline int GetMaxWorkerCount() const{ return m_maxWorkerCount; }

    /**
     * <p>The target maximum number of workers allocated to the connector.</p>
     */
    inline bool MaxWorkerCountHasBeenSet() const { return m_maxWorkerCountHasBeenSet; }

    /**
     * <p>The target maximum number of workers allocated to the connector.</p>
     */
    inline void SetMaxWorkerCount(int value) { m_maxWorkerCountHasBeenSet = true; m_maxWorkerCount = value; }

    /**
     * <p>The target maximum number of workers allocated to the connector.</p>
     */
    inline AutoScalingUpdate& WithMaxWorkerCount(int value) { SetMaxWorkerCount(value); return *this;}


    /**
     * <p>The target number of microcontroller units (MCUs) allocated to each connector
     * worker. The valid values are 1,2,4,8.</p>
     */
    inline int GetMcuCount() const{ return m_mcuCount; }

    /**
     * <p>The target number of microcontroller units (MCUs) allocated to each connector
     * worker. The valid values are 1,2,4,8.</p>
     */
    inline bool McuCountHasBeenSet() const { return m_mcuCountHasBeenSet; }

    /**
     * <p>The target number of microcontroller units (MCUs) allocated to each connector
     * worker. The valid values are 1,2,4,8.</p>
     */
    inline void SetMcuCount(int value) { m_mcuCountHasBeenSet = true; m_mcuCount = value; }

    /**
     * <p>The target number of microcontroller units (MCUs) allocated to each connector
     * worker. The valid values are 1,2,4,8.</p>
     */
    inline AutoScalingUpdate& WithMcuCount(int value) { SetMcuCount(value); return *this;}


    /**
     * <p>The target minimum number of workers allocated to the connector.</p>
     */
    inline int GetMinWorkerCount() const{ return m_minWorkerCount; }

    /**
     * <p>The target minimum number of workers allocated to the connector.</p>
     */
    inline bool MinWorkerCountHasBeenSet() const { return m_minWorkerCountHasBeenSet; }

    /**
     * <p>The target minimum number of workers allocated to the connector.</p>
     */
    inline void SetMinWorkerCount(int value) { m_minWorkerCountHasBeenSet = true; m_minWorkerCount = value; }

    /**
     * <p>The target minimum number of workers allocated to the connector.</p>
     */
    inline AutoScalingUpdate& WithMinWorkerCount(int value) { SetMinWorkerCount(value); return *this;}


    /**
     * <p>The target sacle-in policy for the connector.</p>
     */
    inline const ScaleInPolicyUpdate& GetScaleInPolicy() const{ return m_scaleInPolicy; }

    /**
     * <p>The target sacle-in policy for the connector.</p>
     */
    inline bool ScaleInPolicyHasBeenSet() const { return m_scaleInPolicyHasBeenSet; }

    /**
     * <p>The target sacle-in policy for the connector.</p>
     */
    inline void SetScaleInPolicy(const ScaleInPolicyUpdate& value) { m_scaleInPolicyHasBeenSet = true; m_scaleInPolicy = value; }

    /**
     * <p>The target sacle-in policy for the connector.</p>
     */
    inline void SetScaleInPolicy(ScaleInPolicyUpdate&& value) { m_scaleInPolicyHasBeenSet = true; m_scaleInPolicy = std::move(value); }

    /**
     * <p>The target sacle-in policy for the connector.</p>
     */
    inline AutoScalingUpdate& WithScaleInPolicy(const ScaleInPolicyUpdate& value) { SetScaleInPolicy(value); return *this;}

    /**
     * <p>The target sacle-in policy for the connector.</p>
     */
    inline AutoScalingUpdate& WithScaleInPolicy(ScaleInPolicyUpdate&& value) { SetScaleInPolicy(std::move(value)); return *this;}


    /**
     * <p>The target sacle-out policy for the connector.</p>
     */
    inline const ScaleOutPolicyUpdate& GetScaleOutPolicy() const{ return m_scaleOutPolicy; }

    /**
     * <p>The target sacle-out policy for the connector.</p>
     */
    inline bool ScaleOutPolicyHasBeenSet() const { return m_scaleOutPolicyHasBeenSet; }

    /**
     * <p>The target sacle-out policy for the connector.</p>
     */
    inline void SetScaleOutPolicy(const ScaleOutPolicyUpdate& value) { m_scaleOutPolicyHasBeenSet = true; m_scaleOutPolicy = value; }

    /**
     * <p>The target sacle-out policy for the connector.</p>
     */
    inline void SetScaleOutPolicy(ScaleOutPolicyUpdate&& value) { m_scaleOutPolicyHasBeenSet = true; m_scaleOutPolicy = std::move(value); }

    /**
     * <p>The target sacle-out policy for the connector.</p>
     */
    inline AutoScalingUpdate& WithScaleOutPolicy(const ScaleOutPolicyUpdate& value) { SetScaleOutPolicy(value); return *this;}

    /**
     * <p>The target sacle-out policy for the connector.</p>
     */
    inline AutoScalingUpdate& WithScaleOutPolicy(ScaleOutPolicyUpdate&& value) { SetScaleOutPolicy(std::move(value)); return *this;}

  private:

    int m_maxWorkerCount;
    bool m_maxWorkerCountHasBeenSet = false;

    int m_mcuCount;
    bool m_mcuCountHasBeenSet = false;

    int m_minWorkerCount;
    bool m_minWorkerCountHasBeenSet = false;

    ScaleInPolicyUpdate m_scaleInPolicy;
    bool m_scaleInPolicyHasBeenSet = false;

    ScaleOutPolicyUpdate m_scaleOutPolicy;
    bool m_scaleOutPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
