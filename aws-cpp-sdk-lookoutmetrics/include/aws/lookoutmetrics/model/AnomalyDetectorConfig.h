/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/lookoutmetrics/model/Frequency.h>
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
namespace LookoutMetrics
{
namespace Model
{

  /**
   * <p>Contains information about a detector's configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/AnomalyDetectorConfig">AWS
   * API Reference</a></p>
   */
  class AnomalyDetectorConfig
  {
  public:
    AWS_LOOKOUTMETRICS_API AnomalyDetectorConfig();
    AWS_LOOKOUTMETRICS_API AnomalyDetectorConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API AnomalyDetectorConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The frequency at which the detector analyzes its source data.</p>
     */
    inline const Frequency& GetAnomalyDetectorFrequency() const{ return m_anomalyDetectorFrequency; }

    /**
     * <p>The frequency at which the detector analyzes its source data.</p>
     */
    inline bool AnomalyDetectorFrequencyHasBeenSet() const { return m_anomalyDetectorFrequencyHasBeenSet; }

    /**
     * <p>The frequency at which the detector analyzes its source data.</p>
     */
    inline void SetAnomalyDetectorFrequency(const Frequency& value) { m_anomalyDetectorFrequencyHasBeenSet = true; m_anomalyDetectorFrequency = value; }

    /**
     * <p>The frequency at which the detector analyzes its source data.</p>
     */
    inline void SetAnomalyDetectorFrequency(Frequency&& value) { m_anomalyDetectorFrequencyHasBeenSet = true; m_anomalyDetectorFrequency = std::move(value); }

    /**
     * <p>The frequency at which the detector analyzes its source data.</p>
     */
    inline AnomalyDetectorConfig& WithAnomalyDetectorFrequency(const Frequency& value) { SetAnomalyDetectorFrequency(value); return *this;}

    /**
     * <p>The frequency at which the detector analyzes its source data.</p>
     */
    inline AnomalyDetectorConfig& WithAnomalyDetectorFrequency(Frequency&& value) { SetAnomalyDetectorFrequency(std::move(value)); return *this;}

  private:

    Frequency m_anomalyDetectorFrequency;
    bool m_anomalyDetectorFrequencyHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
