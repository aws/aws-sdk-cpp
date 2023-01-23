/**
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
   * <p>The description of the scale-in policy for the connector.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/ScaleInPolicyDescription">AWS
   * API Reference</a></p>
   */
  class ScaleInPolicyDescription
  {
  public:
    AWS_KAFKACONNECT_API ScaleInPolicyDescription();
    AWS_KAFKACONNECT_API ScaleInPolicyDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API ScaleInPolicyDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the CPU utilization percentage threshold at which you want
     * connector scale in to be triggered.</p>
     */
    inline int GetCpuUtilizationPercentage() const{ return m_cpuUtilizationPercentage; }

    /**
     * <p>Specifies the CPU utilization percentage threshold at which you want
     * connector scale in to be triggered.</p>
     */
    inline bool CpuUtilizationPercentageHasBeenSet() const { return m_cpuUtilizationPercentageHasBeenSet; }

    /**
     * <p>Specifies the CPU utilization percentage threshold at which you want
     * connector scale in to be triggered.</p>
     */
    inline void SetCpuUtilizationPercentage(int value) { m_cpuUtilizationPercentageHasBeenSet = true; m_cpuUtilizationPercentage = value; }

    /**
     * <p>Specifies the CPU utilization percentage threshold at which you want
     * connector scale in to be triggered.</p>
     */
    inline ScaleInPolicyDescription& WithCpuUtilizationPercentage(int value) { SetCpuUtilizationPercentage(value); return *this;}

  private:

    int m_cpuUtilizationPercentage;
    bool m_cpuUtilizationPercentageHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
