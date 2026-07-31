/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/connectcampaignsv2/model/AbandonmentRatePacingConfig.h>

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
 * <p>Pacing constraint the dialer may enforce.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/PacingStrategy">AWS
 * API Reference</a></p>
 */
class PacingStrategy {
 public:
  AWS_CONNECTCAMPAIGNSV2_API PacingStrategy() = default;
  AWS_CONNECTCAMPAIGNSV2_API PacingStrategy(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCAMPAIGNSV2_API PacingStrategy& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const AbandonmentRatePacingConfig& GetAbandonmentRate() const { return m_abandonmentRate; }
  inline bool AbandonmentRateHasBeenSet() const { return m_abandonmentRateHasBeenSet; }
  template <typename AbandonmentRateT = AbandonmentRatePacingConfig>
  void SetAbandonmentRate(AbandonmentRateT&& value) {
    m_abandonmentRateHasBeenSet = true;
    m_abandonmentRate = std::forward<AbandonmentRateT>(value);
  }
  template <typename AbandonmentRateT = AbandonmentRatePacingConfig>
  PacingStrategy& WithAbandonmentRate(AbandonmentRateT&& value) {
    SetAbandonmentRate(std::forward<AbandonmentRateT>(value));
    return *this;
  }
  ///@}
 private:
  AbandonmentRatePacingConfig m_abandonmentRate;
  bool m_abandonmentRateHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectCampaignsV2
}  // namespace Aws
