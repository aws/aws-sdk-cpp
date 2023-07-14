﻿/**
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/AnomalyDetectorConfigSummary">AWS
   * API Reference</a></p>
   */
  class AWS_LOOKOUTMETRICS_API AnomalyDetectorConfigSummary
  {
  public:
    AnomalyDetectorConfigSummary();
    AnomalyDetectorConfigSummary(Aws::Utils::Json::JsonView jsonValue);
    AnomalyDetectorConfigSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The interval at which the detector analyzes its source data.</p>
     */
    inline const Frequency& GetAnomalyDetectorFrequency() const{ return m_anomalyDetectorFrequency; }

    /**
     * <p>The interval at which the detector analyzes its source data.</p>
     */
    inline bool AnomalyDetectorFrequencyHasBeenSet() const { return m_anomalyDetectorFrequencyHasBeenSet; }

    /**
     * <p>The interval at which the detector analyzes its source data.</p>
     */
    inline void SetAnomalyDetectorFrequency(const Frequency& value) { m_anomalyDetectorFrequencyHasBeenSet = true; m_anomalyDetectorFrequency = value; }

    /**
     * <p>The interval at which the detector analyzes its source data.</p>
     */
    inline void SetAnomalyDetectorFrequency(Frequency&& value) { m_anomalyDetectorFrequencyHasBeenSet = true; m_anomalyDetectorFrequency = std::move(value); }

    /**
     * <p>The interval at which the detector analyzes its source data.</p>
     */
    inline AnomalyDetectorConfigSummary& WithAnomalyDetectorFrequency(const Frequency& value) { SetAnomalyDetectorFrequency(value); return *this;}

    /**
     * <p>The interval at which the detector analyzes its source data.</p>
     */
    inline AnomalyDetectorConfigSummary& WithAnomalyDetectorFrequency(Frequency&& value) { SetAnomalyDetectorFrequency(std::move(value)); return *this;}

  private:

    Frequency m_anomalyDetectorFrequency;
    bool m_anomalyDetectorFrequencyHasBeenSet;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
