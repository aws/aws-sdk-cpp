/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/model/IOPS.h>
#include <aws/datasync/model/Throughput.h>
#include <aws/datasync/model/Latency.h>
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
namespace DataSync
{
namespace Model
{

  /**
   * <p>The types of performance data that DataSync Discovery collects about an
   * on-premises storage system resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/P95Metrics">AWS
   * API Reference</a></p>
   */
  class P95Metrics
  {
  public:
    AWS_DATASYNC_API P95Metrics() = default;
    AWS_DATASYNC_API P95Metrics(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API P95Metrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The IOPS peaks for an on-premises storage system resource. Each data point
     * represents the 95th percentile peak value during a 1-hour interval.</p>
     */
    inline const IOPS& GetIOPS() const { return m_iOPS; }
    inline bool IOPSHasBeenSet() const { return m_iOPSHasBeenSet; }
    template<typename IOPST = IOPS>
    void SetIOPS(IOPST&& value) { m_iOPSHasBeenSet = true; m_iOPS = std::forward<IOPST>(value); }
    template<typename IOPST = IOPS>
    P95Metrics& WithIOPS(IOPST&& value) { SetIOPS(std::forward<IOPST>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The throughput peaks for an on-premises storage system resource. Each data
     * point represents the 95th percentile peak value during a 1-hour interval.</p>
     */
    inline const Throughput& GetThroughput() const { return m_throughput; }
    inline bool ThroughputHasBeenSet() const { return m_throughputHasBeenSet; }
    template<typename ThroughputT = Throughput>
    void SetThroughput(ThroughputT&& value) { m_throughputHasBeenSet = true; m_throughput = std::forward<ThroughputT>(value); }
    template<typename ThroughputT = Throughput>
    P95Metrics& WithThroughput(ThroughputT&& value) { SetThroughput(std::forward<ThroughputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latency peaks for an on-premises storage system resource. Each data point
     * represents the 95th percentile peak value during a 1-hour interval.</p>
     */
    inline const Latency& GetLatency() const { return m_latency; }
    inline bool LatencyHasBeenSet() const { return m_latencyHasBeenSet; }
    template<typename LatencyT = Latency>
    void SetLatency(LatencyT&& value) { m_latencyHasBeenSet = true; m_latency = std::forward<LatencyT>(value); }
    template<typename LatencyT = Latency>
    P95Metrics& WithLatency(LatencyT&& value) { SetLatency(std::forward<LatencyT>(value)); return *this;}
    ///@}
  private:

    IOPS m_iOPS;
    bool m_iOPSHasBeenSet = false;

    Throughput m_throughput;
    bool m_throughputHasBeenSet = false;

    Latency m_latency;
    bool m_latencyHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
