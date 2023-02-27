/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/internetmonitor/InternetMonitor_EXPORTS.h>

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
namespace InternetMonitor
{
namespace Model
{

  /**
   * <p>Round-trip time (RTT) is how long it takes for a request from the user to
   * return a response to the user. Amazon CloudWatch Internet Monitor calculates RTT
   * at different percentiles: p50, p90, and p95.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/internetmonitor-2021-06-03/RoundTripTime">AWS
   * API Reference</a></p>
   */
  class RoundTripTime
  {
  public:
    AWS_INTERNETMONITOR_API RoundTripTime();
    AWS_INTERNETMONITOR_API RoundTripTime(Aws::Utils::Json::JsonView jsonValue);
    AWS_INTERNETMONITOR_API RoundTripTime& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INTERNETMONITOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>RTT at the 50th percentile (p50).</p>
     */
    inline double GetP50() const{ return m_p50; }

    /**
     * <p>RTT at the 50th percentile (p50).</p>
     */
    inline bool P50HasBeenSet() const { return m_p50HasBeenSet; }

    /**
     * <p>RTT at the 50th percentile (p50).</p>
     */
    inline void SetP50(double value) { m_p50HasBeenSet = true; m_p50 = value; }

    /**
     * <p>RTT at the 50th percentile (p50).</p>
     */
    inline RoundTripTime& WithP50(double value) { SetP50(value); return *this;}


    /**
     * <p>RTT at the 90th percentile (p90). </p>
     */
    inline double GetP90() const{ return m_p90; }

    /**
     * <p>RTT at the 90th percentile (p90). </p>
     */
    inline bool P90HasBeenSet() const { return m_p90HasBeenSet; }

    /**
     * <p>RTT at the 90th percentile (p90). </p>
     */
    inline void SetP90(double value) { m_p90HasBeenSet = true; m_p90 = value; }

    /**
     * <p>RTT at the 90th percentile (p90). </p>
     */
    inline RoundTripTime& WithP90(double value) { SetP90(value); return *this;}


    /**
     * <p>RTT at the 95th percentile (p95). </p>
     */
    inline double GetP95() const{ return m_p95; }

    /**
     * <p>RTT at the 95th percentile (p95). </p>
     */
    inline bool P95HasBeenSet() const { return m_p95HasBeenSet; }

    /**
     * <p>RTT at the 95th percentile (p95). </p>
     */
    inline void SetP95(double value) { m_p95HasBeenSet = true; m_p95 = value; }

    /**
     * <p>RTT at the 95th percentile (p95). </p>
     */
    inline RoundTripTime& WithP95(double value) { SetP95(value); return *this;}

  private:

    double m_p50;
    bool m_p50HasBeenSet = false;

    double m_p90;
    bool m_p90HasBeenSet = false;

    double m_p95;
    bool m_p95HasBeenSet = false;
  };

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
