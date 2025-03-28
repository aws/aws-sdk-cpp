﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>

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
   * <p>The performance data that DataSync Discovery collects about an on-premises
   * storage system resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/MaxP95Performance">AWS
   * API Reference</a></p>
   */
  class MaxP95Performance
  {
  public:
    AWS_DATASYNC_API MaxP95Performance() = default;
    AWS_DATASYNC_API MaxP95Performance(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API MaxP95Performance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Peak IOPS related to read operations.</p>
     */
    inline double GetIopsRead() const { return m_iopsRead; }
    inline bool IopsReadHasBeenSet() const { return m_iopsReadHasBeenSet; }
    inline void SetIopsRead(double value) { m_iopsReadHasBeenSet = true; m_iopsRead = value; }
    inline MaxP95Performance& WithIopsRead(double value) { SetIopsRead(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Peak IOPS related to write operations.</p>
     */
    inline double GetIopsWrite() const { return m_iopsWrite; }
    inline bool IopsWriteHasBeenSet() const { return m_iopsWriteHasBeenSet; }
    inline void SetIopsWrite(double value) { m_iopsWriteHasBeenSet = true; m_iopsWrite = value; }
    inline MaxP95Performance& WithIopsWrite(double value) { SetIopsWrite(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Peak IOPS unrelated to read and write operations.</p>
     */
    inline double GetIopsOther() const { return m_iopsOther; }
    inline bool IopsOtherHasBeenSet() const { return m_iopsOtherHasBeenSet; }
    inline void SetIopsOther(double value) { m_iopsOtherHasBeenSet = true; m_iopsOther = value; }
    inline MaxP95Performance& WithIopsOther(double value) { SetIopsOther(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Peak total IOPS on your on-premises storage system resource.</p>
     */
    inline double GetIopsTotal() const { return m_iopsTotal; }
    inline bool IopsTotalHasBeenSet() const { return m_iopsTotalHasBeenSet; }
    inline void SetIopsTotal(double value) { m_iopsTotalHasBeenSet = true; m_iopsTotal = value; }
    inline MaxP95Performance& WithIopsTotal(double value) { SetIopsTotal(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Peak throughput related to read operations.</p>
     */
    inline double GetThroughputRead() const { return m_throughputRead; }
    inline bool ThroughputReadHasBeenSet() const { return m_throughputReadHasBeenSet; }
    inline void SetThroughputRead(double value) { m_throughputReadHasBeenSet = true; m_throughputRead = value; }
    inline MaxP95Performance& WithThroughputRead(double value) { SetThroughputRead(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Peak throughput related to write operations.</p>
     */
    inline double GetThroughputWrite() const { return m_throughputWrite; }
    inline bool ThroughputWriteHasBeenSet() const { return m_throughputWriteHasBeenSet; }
    inline void SetThroughputWrite(double value) { m_throughputWriteHasBeenSet = true; m_throughputWrite = value; }
    inline MaxP95Performance& WithThroughputWrite(double value) { SetThroughputWrite(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Peak throughput unrelated to read and write operations.</p>
     */
    inline double GetThroughputOther() const { return m_throughputOther; }
    inline bool ThroughputOtherHasBeenSet() const { return m_throughputOtherHasBeenSet; }
    inline void SetThroughputOther(double value) { m_throughputOtherHasBeenSet = true; m_throughputOther = value; }
    inline MaxP95Performance& WithThroughputOther(double value) { SetThroughputOther(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Peak total throughput on your on-premises storage system resource.</p>
     */
    inline double GetThroughputTotal() const { return m_throughputTotal; }
    inline bool ThroughputTotalHasBeenSet() const { return m_throughputTotalHasBeenSet; }
    inline void SetThroughputTotal(double value) { m_throughputTotalHasBeenSet = true; m_throughputTotal = value; }
    inline MaxP95Performance& WithThroughputTotal(double value) { SetThroughputTotal(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Peak latency for read operations.</p>
     */
    inline double GetLatencyRead() const { return m_latencyRead; }
    inline bool LatencyReadHasBeenSet() const { return m_latencyReadHasBeenSet; }
    inline void SetLatencyRead(double value) { m_latencyReadHasBeenSet = true; m_latencyRead = value; }
    inline MaxP95Performance& WithLatencyRead(double value) { SetLatencyRead(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Peak latency for write operations.</p>
     */
    inline double GetLatencyWrite() const { return m_latencyWrite; }
    inline bool LatencyWriteHasBeenSet() const { return m_latencyWriteHasBeenSet; }
    inline void SetLatencyWrite(double value) { m_latencyWriteHasBeenSet = true; m_latencyWrite = value; }
    inline MaxP95Performance& WithLatencyWrite(double value) { SetLatencyWrite(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Peak latency for operations unrelated to read and write operations.</p>
     */
    inline double GetLatencyOther() const { return m_latencyOther; }
    inline bool LatencyOtherHasBeenSet() const { return m_latencyOtherHasBeenSet; }
    inline void SetLatencyOther(double value) { m_latencyOtherHasBeenSet = true; m_latencyOther = value; }
    inline MaxP95Performance& WithLatencyOther(double value) { SetLatencyOther(value); return *this;}
    ///@}
  private:

    double m_iopsRead{0.0};
    bool m_iopsReadHasBeenSet = false;

    double m_iopsWrite{0.0};
    bool m_iopsWriteHasBeenSet = false;

    double m_iopsOther{0.0};
    bool m_iopsOtherHasBeenSet = false;

    double m_iopsTotal{0.0};
    bool m_iopsTotalHasBeenSet = false;

    double m_throughputRead{0.0};
    bool m_throughputReadHasBeenSet = false;

    double m_throughputWrite{0.0};
    bool m_throughputWriteHasBeenSet = false;

    double m_throughputOther{0.0};
    bool m_throughputOtherHasBeenSet = false;

    double m_throughputTotal{0.0};
    bool m_throughputTotalHasBeenSet = false;

    double m_latencyRead{0.0};
    bool m_latencyReadHasBeenSet = false;

    double m_latencyWrite{0.0};
    bool m_latencyWriteHasBeenSet = false;

    double m_latencyOther{0.0};
    bool m_latencyOtherHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
