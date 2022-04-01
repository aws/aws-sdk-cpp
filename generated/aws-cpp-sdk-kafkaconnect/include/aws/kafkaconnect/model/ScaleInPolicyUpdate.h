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
   * <p>An update to the connector's scale-in policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/ScaleInPolicyUpdate">AWS
   * API Reference</a></p>
   */
  class AWS_KAFKACONNECT_API ScaleInPolicyUpdate
  {
  public:
    ScaleInPolicyUpdate();
    ScaleInPolicyUpdate(Aws::Utils::Json::JsonView jsonValue);
    ScaleInPolicyUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The target CPU utilization percentage threshold at which you want connector
     * scale in to be triggered.</p>
     */
    inline int GetCpuUtilizationPercentage() const{ return m_cpuUtilizationPercentage; }

    /**
     * <p>The target CPU utilization percentage threshold at which you want connector
     * scale in to be triggered.</p>
     */
    inline bool CpuUtilizationPercentageHasBeenSet() const { return m_cpuUtilizationPercentageHasBeenSet; }

    /**
     * <p>The target CPU utilization percentage threshold at which you want connector
     * scale in to be triggered.</p>
     */
    inline void SetCpuUtilizationPercentage(int value) { m_cpuUtilizationPercentageHasBeenSet = true; m_cpuUtilizationPercentage = value; }

    /**
     * <p>The target CPU utilization percentage threshold at which you want connector
     * scale in to be triggered.</p>
     */
    inline ScaleInPolicyUpdate& WithCpuUtilizationPercentage(int value) { SetCpuUtilizationPercentage(value); return *this;}

  private:

    int m_cpuUtilizationPercentage;
    bool m_cpuUtilizationPercentageHasBeenSet;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
