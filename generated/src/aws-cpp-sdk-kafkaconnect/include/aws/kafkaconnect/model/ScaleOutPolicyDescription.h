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
   * <p>The description of the scale-out policy for the connector.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/ScaleOutPolicyDescription">AWS
   * API Reference</a></p>
   */
  class ScaleOutPolicyDescription
  {
  public:
    AWS_KAFKACONNECT_API ScaleOutPolicyDescription() = default;
    AWS_KAFKACONNECT_API ScaleOutPolicyDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API ScaleOutPolicyDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The CPU utilization percentage threshold at which you want connector scale
     * out to be triggered.</p>
     */
    inline int GetCpuUtilizationPercentage() const { return m_cpuUtilizationPercentage; }
    inline bool CpuUtilizationPercentageHasBeenSet() const { return m_cpuUtilizationPercentageHasBeenSet; }
    inline void SetCpuUtilizationPercentage(int value) { m_cpuUtilizationPercentageHasBeenSet = true; m_cpuUtilizationPercentage = value; }
    inline ScaleOutPolicyDescription& WithCpuUtilizationPercentage(int value) { SetCpuUtilizationPercentage(value); return *this;}
    ///@}
  private:

    int m_cpuUtilizationPercentage{0};
    bool m_cpuUtilizationPercentageHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
