/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>

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
 * <p>Timeout Config for preview contacts.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/TimeoutConfig">AWS
 * API Reference</a></p>
 */
class TimeoutConfig {
 public:
  AWS_CONNECTCAMPAIGNSV2_API TimeoutConfig() = default;
  AWS_CONNECTCAMPAIGNSV2_API TimeoutConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCAMPAIGNSV2_API TimeoutConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline int GetDurationInSeconds() const { return m_durationInSeconds; }
  inline bool DurationInSecondsHasBeenSet() const { return m_durationInSecondsHasBeenSet; }
  inline void SetDurationInSeconds(int value) {
    m_durationInSecondsHasBeenSet = true;
    m_durationInSeconds = value;
  }
  inline TimeoutConfig& WithDurationInSeconds(int value) {
    SetDurationInSeconds(value);
    return *this;
  }
  ///@}
 private:
  int m_durationInSeconds{0};
  bool m_durationInSecondsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectCampaignsV2
}  // namespace Aws
