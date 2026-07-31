/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/connectcampaignsv2/model/PacingStrategy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ConnectCampaignsV2 {
namespace Model {

/**
 * <p>Predictive config</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/PredictiveConfig">AWS
 * API Reference</a></p>
 */
class PredictiveConfig {
 public:
  AWS_CONNECTCAMPAIGNSV2_API PredictiveConfig() = default;
  AWS_CONNECTCAMPAIGNSV2_API PredictiveConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCAMPAIGNSV2_API PredictiveConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline double GetBandwidthAllocation() const { return m_bandwidthAllocation; }
  inline bool BandwidthAllocationHasBeenSet() const { return m_bandwidthAllocationHasBeenSet; }
  inline void SetBandwidthAllocation(double value) {
    m_bandwidthAllocationHasBeenSet = true;
    m_bandwidthAllocation = value;
  }
  inline PredictiveConfig& WithBandwidthAllocation(double value) {
    SetBandwidthAllocation(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Pacing strategies the dialer enforces simultaneously.</p>
   */
  inline const Aws::Vector<PacingStrategy>& GetPacingStrategies() const { return m_pacingStrategies; }
  inline bool PacingStrategiesHasBeenSet() const { return m_pacingStrategiesHasBeenSet; }
  template <typename PacingStrategiesT = Aws::Vector<PacingStrategy>>
  void SetPacingStrategies(PacingStrategiesT&& value) {
    m_pacingStrategiesHasBeenSet = true;
    m_pacingStrategies = std::forward<PacingStrategiesT>(value);
  }
  template <typename PacingStrategiesT = Aws::Vector<PacingStrategy>>
  PredictiveConfig& WithPacingStrategies(PacingStrategiesT&& value) {
    SetPacingStrategies(std::forward<PacingStrategiesT>(value));
    return *this;
  }
  template <typename PacingStrategiesT = PacingStrategy>
  PredictiveConfig& AddPacingStrategies(PacingStrategiesT&& value) {
    m_pacingStrategiesHasBeenSet = true;
    m_pacingStrategies.emplace_back(std::forward<PacingStrategiesT>(value));
    return *this;
  }
  ///@}
 private:
  double m_bandwidthAllocation{0.0};

  Aws::Vector<PacingStrategy> m_pacingStrategies;
  bool m_bandwidthAllocationHasBeenSet = false;
  bool m_pacingStrategiesHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectCampaignsV2
}  // namespace Aws
