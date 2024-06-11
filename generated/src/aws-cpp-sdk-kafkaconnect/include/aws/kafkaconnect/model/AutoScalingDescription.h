﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/kafkaconnect/model/ScaleInPolicyDescription.h>
#include <aws/kafkaconnect/model/ScaleOutPolicyDescription.h>
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
   * <p>Information about the auto scaling parameters for the
   * connector.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/AutoScalingDescription">AWS
   * API Reference</a></p>
   */
  class AutoScalingDescription
  {
  public:
    AWS_KAFKACONNECT_API AutoScalingDescription();
    AWS_KAFKACONNECT_API AutoScalingDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API AutoScalingDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The maximum number of workers allocated to the connector.</p>
     */
    inline int GetMaxWorkerCount() const{ return m_maxWorkerCount; }
    inline bool MaxWorkerCountHasBeenSet() const { return m_maxWorkerCountHasBeenSet; }
    inline void SetMaxWorkerCount(int value) { m_maxWorkerCountHasBeenSet = true; m_maxWorkerCount = value; }
    inline AutoScalingDescription& WithMaxWorkerCount(int value) { SetMaxWorkerCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of microcontroller units (MCUs) allocated to each connector
     * worker. The valid values are 1,2,4,8.</p>
     */
    inline int GetMcuCount() const{ return m_mcuCount; }
    inline bool McuCountHasBeenSet() const { return m_mcuCountHasBeenSet; }
    inline void SetMcuCount(int value) { m_mcuCountHasBeenSet = true; m_mcuCount = value; }
    inline AutoScalingDescription& WithMcuCount(int value) { SetMcuCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum number of workers allocated to the connector.</p>
     */
    inline int GetMinWorkerCount() const{ return m_minWorkerCount; }
    inline bool MinWorkerCountHasBeenSet() const { return m_minWorkerCountHasBeenSet; }
    inline void SetMinWorkerCount(int value) { m_minWorkerCountHasBeenSet = true; m_minWorkerCount = value; }
    inline AutoScalingDescription& WithMinWorkerCount(int value) { SetMinWorkerCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sacle-in policy for the connector.</p>
     */
    inline const ScaleInPolicyDescription& GetScaleInPolicy() const{ return m_scaleInPolicy; }
    inline bool ScaleInPolicyHasBeenSet() const { return m_scaleInPolicyHasBeenSet; }
    inline void SetScaleInPolicy(const ScaleInPolicyDescription& value) { m_scaleInPolicyHasBeenSet = true; m_scaleInPolicy = value; }
    inline void SetScaleInPolicy(ScaleInPolicyDescription&& value) { m_scaleInPolicyHasBeenSet = true; m_scaleInPolicy = std::move(value); }
    inline AutoScalingDescription& WithScaleInPolicy(const ScaleInPolicyDescription& value) { SetScaleInPolicy(value); return *this;}
    inline AutoScalingDescription& WithScaleInPolicy(ScaleInPolicyDescription&& value) { SetScaleInPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sacle-out policy for the connector.&gt;</p>
     */
    inline const ScaleOutPolicyDescription& GetScaleOutPolicy() const{ return m_scaleOutPolicy; }
    inline bool ScaleOutPolicyHasBeenSet() const { return m_scaleOutPolicyHasBeenSet; }
    inline void SetScaleOutPolicy(const ScaleOutPolicyDescription& value) { m_scaleOutPolicyHasBeenSet = true; m_scaleOutPolicy = value; }
    inline void SetScaleOutPolicy(ScaleOutPolicyDescription&& value) { m_scaleOutPolicyHasBeenSet = true; m_scaleOutPolicy = std::move(value); }
    inline AutoScalingDescription& WithScaleOutPolicy(const ScaleOutPolicyDescription& value) { SetScaleOutPolicy(value); return *this;}
    inline AutoScalingDescription& WithScaleOutPolicy(ScaleOutPolicyDescription&& value) { SetScaleOutPolicy(std::move(value)); return *this;}
    ///@}
  private:

    int m_maxWorkerCount;
    bool m_maxWorkerCountHasBeenSet = false;

    int m_mcuCount;
    bool m_mcuCountHasBeenSet = false;

    int m_minWorkerCount;
    bool m_minWorkerCountHasBeenSet = false;

    ScaleInPolicyDescription m_scaleInPolicy;
    bool m_scaleInPolicyHasBeenSet = false;

    ScaleOutPolicyDescription m_scaleOutPolicy;
    bool m_scaleOutPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
