/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>

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
namespace CostOptimizationHub
{
namespace Model
{

  /**
   * <p>Describes the Amazon Elastic Block Store performance configuration of the
   * current and recommended resource configuration for a
   * recommendation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cost-optimization-hub-2022-07-26/BlockStoragePerformanceConfiguration">AWS
   * API Reference</a></p>
   */
  class BlockStoragePerformanceConfiguration
  {
  public:
    AWS_COSTOPTIMIZATIONHUB_API BlockStoragePerformanceConfiguration() = default;
    AWS_COSTOPTIMIZATIONHUB_API BlockStoragePerformanceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API BlockStoragePerformanceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of I/O operations per second.</p>
     */
    inline double GetIops() const { return m_iops; }
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
    inline void SetIops(double value) { m_iopsHasBeenSet = true; m_iops = value; }
    inline BlockStoragePerformanceConfiguration& WithIops(double value) { SetIops(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The throughput that the volume supports.</p>
     */
    inline double GetThroughput() const { return m_throughput; }
    inline bool ThroughputHasBeenSet() const { return m_throughputHasBeenSet; }
    inline void SetThroughput(double value) { m_throughputHasBeenSet = true; m_throughput = value; }
    inline BlockStoragePerformanceConfiguration& WithThroughput(double value) { SetThroughput(value); return *this;}
    ///@}
  private:

    double m_iops{0.0};
    bool m_iopsHasBeenSet = false;

    double m_throughput{0.0};
    bool m_throughputHasBeenSet = false;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
