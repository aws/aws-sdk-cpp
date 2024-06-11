﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>

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
   * <p>The scale-in policy for the connector.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/ScaleInPolicy">AWS
   * API Reference</a></p>
   */
  class ScaleInPolicy
  {
  public:
    AWS_KAFKACONNECT_API ScaleInPolicy();
    AWS_KAFKACONNECT_API ScaleInPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API ScaleInPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the CPU utilization percentage threshold at which you want
     * connector scale in to be triggered.</p>
     */
    inline int GetCpuUtilizationPercentage() const{ return m_cpuUtilizationPercentage; }
    inline bool CpuUtilizationPercentageHasBeenSet() const { return m_cpuUtilizationPercentageHasBeenSet; }
    inline void SetCpuUtilizationPercentage(int value) { m_cpuUtilizationPercentageHasBeenSet = true; m_cpuUtilizationPercentage = value; }
    inline ScaleInPolicy& WithCpuUtilizationPercentage(int value) { SetCpuUtilizationPercentage(value); return *this;}
    ///@}
  private:

    int m_cpuUtilizationPercentage;
    bool m_cpuUtilizationPercentageHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
