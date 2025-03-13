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
    AWS_KAFKACONNECT_API AutoScalingUpdate() = default;
    AWS_KAFKACONNECT_API AutoScalingUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API AutoScalingUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The target maximum number of workers allocated to the connector.</p>
     */
    inline int GetMaxWorkerCount() const { return m_maxWorkerCount; }
    inline bool MaxWorkerCountHasBeenSet() const { return m_maxWorkerCountHasBeenSet; }
    inline void SetMaxWorkerCount(int value) { m_maxWorkerCountHasBeenSet = true; m_maxWorkerCount = value; }
    inline AutoScalingUpdate& WithMaxWorkerCount(int value) { SetMaxWorkerCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target number of microcontroller units (MCUs) allocated to each connector
     * worker. The valid values are 1,2,4,8.</p>
     */
    inline int GetMcuCount() const { return m_mcuCount; }
    inline bool McuCountHasBeenSet() const { return m_mcuCountHasBeenSet; }
    inline void SetMcuCount(int value) { m_mcuCountHasBeenSet = true; m_mcuCount = value; }
    inline AutoScalingUpdate& WithMcuCount(int value) { SetMcuCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target minimum number of workers allocated to the connector.</p>
     */
    inline int GetMinWorkerCount() const { return m_minWorkerCount; }
    inline bool MinWorkerCountHasBeenSet() const { return m_minWorkerCountHasBeenSet; }
    inline void SetMinWorkerCount(int value) { m_minWorkerCountHasBeenSet = true; m_minWorkerCount = value; }
    inline AutoScalingUpdate& WithMinWorkerCount(int value) { SetMinWorkerCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target sacle-in policy for the connector.</p>
     */
    inline const ScaleInPolicyUpdate& GetScaleInPolicy() const { return m_scaleInPolicy; }
    inline bool ScaleInPolicyHasBeenSet() const { return m_scaleInPolicyHasBeenSet; }
    template<typename ScaleInPolicyT = ScaleInPolicyUpdate>
    void SetScaleInPolicy(ScaleInPolicyT&& value) { m_scaleInPolicyHasBeenSet = true; m_scaleInPolicy = std::forward<ScaleInPolicyT>(value); }
    template<typename ScaleInPolicyT = ScaleInPolicyUpdate>
    AutoScalingUpdate& WithScaleInPolicy(ScaleInPolicyT&& value) { SetScaleInPolicy(std::forward<ScaleInPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target sacle-out policy for the connector.</p>
     */
    inline const ScaleOutPolicyUpdate& GetScaleOutPolicy() const { return m_scaleOutPolicy; }
    inline bool ScaleOutPolicyHasBeenSet() const { return m_scaleOutPolicyHasBeenSet; }
    template<typename ScaleOutPolicyT = ScaleOutPolicyUpdate>
    void SetScaleOutPolicy(ScaleOutPolicyT&& value) { m_scaleOutPolicyHasBeenSet = true; m_scaleOutPolicy = std::forward<ScaleOutPolicyT>(value); }
    template<typename ScaleOutPolicyT = ScaleOutPolicyUpdate>
    AutoScalingUpdate& WithScaleOutPolicy(ScaleOutPolicyT&& value) { SetScaleOutPolicy(std::forward<ScaleOutPolicyT>(value)); return *this;}
    ///@}
  private:

    int m_maxWorkerCount{0};
    bool m_maxWorkerCountHasBeenSet = false;

    int m_mcuCount{0};
    bool m_mcuCountHasBeenSet = false;

    int m_minWorkerCount{0};
    bool m_minWorkerCountHasBeenSet = false;

    ScaleInPolicyUpdate m_scaleInPolicy;
    bool m_scaleInPolicyHasBeenSet = false;

    ScaleOutPolicyUpdate m_scaleOutPolicy;
    bool m_scaleOutPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
