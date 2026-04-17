/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>Campaign entry limits config</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/EntryLimitsConfig">AWS
 * API Reference</a></p>
 */
class EntryLimitsConfig {
 public:
  AWS_CONNECTCAMPAIGNSV2_API EntryLimitsConfig() = default;
  AWS_CONNECTCAMPAIGNSV2_API EntryLimitsConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCAMPAIGNSV2_API EntryLimitsConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Maximum number of times a participant can enter the campaign. A value of 0
   * indicates unlimited entries. Values of 1 or greater specify the exact number of
   * entries allowed.</p>
   */
  inline int GetMaxEntryCount() const { return m_maxEntryCount; }
  inline bool MaxEntryCountHasBeenSet() const { return m_maxEntryCountHasBeenSet; }
  inline void SetMaxEntryCount(int value) {
    m_maxEntryCountHasBeenSet = true;
    m_maxEntryCount = value;
  }
  inline EntryLimitsConfig& WithMaxEntryCount(int value) {
    SetMaxEntryCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Minimum time interval that must pass before a participant can enter the
   * campaign again.</p>
   */
  inline const Aws::String& GetMinEntryInterval() const { return m_minEntryInterval; }
  inline bool MinEntryIntervalHasBeenSet() const { return m_minEntryIntervalHasBeenSet; }
  template <typename MinEntryIntervalT = Aws::String>
  void SetMinEntryInterval(MinEntryIntervalT&& value) {
    m_minEntryIntervalHasBeenSet = true;
    m_minEntryInterval = std::forward<MinEntryIntervalT>(value);
  }
  template <typename MinEntryIntervalT = Aws::String>
  EntryLimitsConfig& WithMinEntryInterval(MinEntryIntervalT&& value) {
    SetMinEntryInterval(std::forward<MinEntryIntervalT>(value));
    return *this;
  }
  ///@}
 private:
  int m_maxEntryCount{0};

  Aws::String m_minEntryInterval;
  bool m_maxEntryCountHasBeenSet = false;
  bool m_minEntryIntervalHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectCampaignsV2
}  // namespace Aws
