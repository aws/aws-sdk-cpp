/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/ComputationModelAnomalyDetectionConfiguration.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>The configuration for the computation model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ComputationModelConfiguration">AWS
   * API Reference</a></p>
   */
  class ComputationModelConfiguration
  {
  public:
    AWS_IOTSITEWISE_API ComputationModelConfiguration() = default;
    AWS_IOTSITEWISE_API ComputationModelConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API ComputationModelConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration for the anomaly detection type of computation model.</p>
     */
    inline const ComputationModelAnomalyDetectionConfiguration& GetAnomalyDetection() const { return m_anomalyDetection; }
    inline bool AnomalyDetectionHasBeenSet() const { return m_anomalyDetectionHasBeenSet; }
    template<typename AnomalyDetectionT = ComputationModelAnomalyDetectionConfiguration>
    void SetAnomalyDetection(AnomalyDetectionT&& value) { m_anomalyDetectionHasBeenSet = true; m_anomalyDetection = std::forward<AnomalyDetectionT>(value); }
    template<typename AnomalyDetectionT = ComputationModelAnomalyDetectionConfiguration>
    ComputationModelConfiguration& WithAnomalyDetection(AnomalyDetectionT&& value) { SetAnomalyDetection(std::forward<AnomalyDetectionT>(value)); return *this;}
    ///@}
  private:

    ComputationModelAnomalyDetectionConfiguration m_anomalyDetection;
    bool m_anomalyDetectionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
