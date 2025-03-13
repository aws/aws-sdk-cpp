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
    AWS_LOOKOUTMETRICS_API AnomalyDetectorConfig() = default;
    AWS_LOOKOUTMETRICS_API AnomalyDetectorConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API AnomalyDetectorConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The frequency at which the detector analyzes its source data.</p>
     */
    inline Frequency GetAnomalyDetectorFrequency() const { return m_anomalyDetectorFrequency; }
    inline bool AnomalyDetectorFrequencyHasBeenSet() const { return m_anomalyDetectorFrequencyHasBeenSet; }
    inline void SetAnomalyDetectorFrequency(Frequency value) { m_anomalyDetectorFrequencyHasBeenSet = true; m_anomalyDetectorFrequency = value; }
    inline AnomalyDetectorConfig& WithAnomalyDetectorFrequency(Frequency value) { SetAnomalyDetectorFrequency(value); return *this;}
    ///@}
  private:

    Frequency m_anomalyDetectorFrequency{Frequency::NOT_SET};
    bool m_anomalyDetectorFrequencyHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
