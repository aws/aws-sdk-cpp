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
    AWS_DATASYNC_API P95Metrics();
    AWS_DATASYNC_API P95Metrics(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API P95Metrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The IOPS peaks for an on-premises storage system resource. Each data point
     * represents the 95th percentile peak value during a 1-hour interval.</p>
     */
    inline const IOPS& GetIOPS() const{ return m_iOPS; }

    /**
     * <p>The IOPS peaks for an on-premises storage system resource. Each data point
     * represents the 95th percentile peak value during a 1-hour interval.</p>
     */
    inline bool IOPSHasBeenSet() const { return m_iOPSHasBeenSet; }

    /**
     * <p>The IOPS peaks for an on-premises storage system resource. Each data point
     * represents the 95th percentile peak value during a 1-hour interval.</p>
     */
    inline void SetIOPS(const IOPS& value) { m_iOPSHasBeenSet = true; m_iOPS = value; }

    /**
     * <p>The IOPS peaks for an on-premises storage system resource. Each data point
     * represents the 95th percentile peak value during a 1-hour interval.</p>
     */
    inline void SetIOPS(IOPS&& value) { m_iOPSHasBeenSet = true; m_iOPS = std::move(value); }

    /**
     * <p>The IOPS peaks for an on-premises storage system resource. Each data point
     * represents the 95th percentile peak value during a 1-hour interval.</p>
     */
    inline P95Metrics& WithIOPS(const IOPS& value) { SetIOPS(value); return *this;}

    /**
     * <p>The IOPS peaks for an on-premises storage system resource. Each data point
     * represents the 95th percentile peak value during a 1-hour interval.</p>
     */
    inline P95Metrics& WithIOPS(IOPS&& value) { SetIOPS(std::move(value)); return *this;}


    /**
     * <p>The throughput peaks for an on-premises storage system resource. Each data
     * point represents the 95th percentile peak value during a 1-hour interval.</p>
     */
    inline const Throughput& GetThroughput() const{ return m_throughput; }

    /**
     * <p>The throughput peaks for an on-premises storage system resource. Each data
     * point represents the 95th percentile peak value during a 1-hour interval.</p>
     */
    inline bool ThroughputHasBeenSet() const { return m_throughputHasBeenSet; }

    /**
     * <p>The throughput peaks for an on-premises storage system resource. Each data
     * point represents the 95th percentile peak value during a 1-hour interval.</p>
     */
    inline void SetThroughput(const Throughput& value) { m_throughputHasBeenSet = true; m_throughput = value; }

    /**
     * <p>The throughput peaks for an on-premises storage system resource. Each data
     * point represents the 95th percentile peak value during a 1-hour interval.</p>
     */
    inline void SetThroughput(Throughput&& value) { m_throughputHasBeenSet = true; m_throughput = std::move(value); }

    /**
     * <p>The throughput peaks for an on-premises storage system resource. Each data
     * point represents the 95th percentile peak value during a 1-hour interval.</p>
     */
    inline P95Metrics& WithThroughput(const Throughput& value) { SetThroughput(value); return *this;}

    /**
     * <p>The throughput peaks for an on-premises storage system resource. Each data
     * point represents the 95th percentile peak value during a 1-hour interval.</p>
     */
    inline P95Metrics& WithThroughput(Throughput&& value) { SetThroughput(std::move(value)); return *this;}


    /**
     * <p>The latency peaks for an on-premises storage system resource. Each data point
     * represents the 95th percentile peak value during a 1-hour interval.</p>
     */
    inline const Latency& GetLatency() const{ return m_latency; }

    /**
     * <p>The latency peaks for an on-premises storage system resource. Each data point
     * represents the 95th percentile peak value during a 1-hour interval.</p>
     */
    inline bool LatencyHasBeenSet() const { return m_latencyHasBeenSet; }

    /**
     * <p>The latency peaks for an on-premises storage system resource. Each data point
     * represents the 95th percentile peak value during a 1-hour interval.</p>
     */
    inline void SetLatency(const Latency& value) { m_latencyHasBeenSet = true; m_latency = value; }

    /**
     * <p>The latency peaks for an on-premises storage system resource. Each data point
     * represents the 95th percentile peak value during a 1-hour interval.</p>
     */
    inline void SetLatency(Latency&& value) { m_latencyHasBeenSet = true; m_latency = std::move(value); }

    /**
     * <p>The latency peaks for an on-premises storage system resource. Each data point
     * represents the 95th percentile peak value during a 1-hour interval.</p>
     */
    inline P95Metrics& WithLatency(const Latency& value) { SetLatency(value); return *this;}

    /**
     * <p>The latency peaks for an on-premises storage system resource. Each data point
     * represents the 95th percentile peak value during a 1-hour interval.</p>
     */
    inline P95Metrics& WithLatency(Latency&& value) { SetLatency(std::move(value)); return *this;}

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
