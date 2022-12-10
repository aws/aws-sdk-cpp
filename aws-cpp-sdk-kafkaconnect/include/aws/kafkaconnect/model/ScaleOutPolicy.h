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
   * <p>The scale-out policy for the connector.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/ScaleOutPolicy">AWS
   * API Reference</a></p>
   */
  class ScaleOutPolicy
  {
  public:
    AWS_KAFKACONNECT_API ScaleOutPolicy();
    AWS_KAFKACONNECT_API ScaleOutPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API ScaleOutPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The CPU utilization percentage threshold at which you want connector scale
     * out to be triggered.</p>
     */
    inline int GetCpuUtilizationPercentage() const{ return m_cpuUtilizationPercentage; }

    /**
     * <p>The CPU utilization percentage threshold at which you want connector scale
     * out to be triggered.</p>
     */
    inline bool CpuUtilizationPercentageHasBeenSet() const { return m_cpuUtilizationPercentageHasBeenSet; }

    /**
     * <p>The CPU utilization percentage threshold at which you want connector scale
     * out to be triggered.</p>
     */
    inline void SetCpuUtilizationPercentage(int value) { m_cpuUtilizationPercentageHasBeenSet = true; m_cpuUtilizationPercentage = value; }

    /**
     * <p>The CPU utilization percentage threshold at which you want connector scale
     * out to be triggered.</p>
     */
    inline ScaleOutPolicy& WithCpuUtilizationPercentage(int value) { SetCpuUtilizationPercentage(value); return *this;}

  private:

    int m_cpuUtilizationPercentage;
    bool m_cpuUtilizationPercentageHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
