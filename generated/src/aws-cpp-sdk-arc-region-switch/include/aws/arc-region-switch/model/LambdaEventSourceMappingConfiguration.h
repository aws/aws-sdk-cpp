/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/arc-region-switch/model/EventSourceMapping.h>
#include <aws/arc-region-switch/model/EventSourceMappingAction.h>
#include <aws/arc-region-switch/model/LambdaEventSourceMappingUngraceful.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ARCRegionswitch {
namespace Model {

/**
 * <p>Configuration for Amazon Web Services Lambda event source mappings used in a
 * Region switch plan.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/LambdaEventSourceMappingConfiguration">AWS
 * API Reference</a></p>
 */
class LambdaEventSourceMappingConfiguration {
 public:
  AWS_ARCREGIONSWITCH_API LambdaEventSourceMappingConfiguration() = default;
  AWS_ARCREGIONSWITCH_API LambdaEventSourceMappingConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ARCREGIONSWITCH_API LambdaEventSourceMappingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ARCREGIONSWITCH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The timeout value specified for the configuration.</p>
   */
  inline int GetTimeoutMinutes() const { return m_timeoutMinutes; }
  inline bool TimeoutMinutesHasBeenSet() const { return m_timeoutMinutesHasBeenSet; }
  inline void SetTimeoutMinutes(int value) {
    m_timeoutMinutesHasBeenSet = true;
    m_timeoutMinutes = value;
  }
  inline LambdaEventSourceMappingConfiguration& WithTimeoutMinutes(int value) {
    SetTimeoutMinutes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The action to take - whether to <code>enable</code> or <code>disable</code>
   * an event source mapping.</p>
   */
  inline EventSourceMappingAction GetAction() const { return m_action; }
  inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
  inline void SetAction(EventSourceMappingAction value) {
    m_actionHasBeenSet = true;
    m_action = value;
  }
  inline LambdaEventSourceMappingConfiguration& WithAction(EventSourceMappingAction value) {
    SetAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Per-region configuration for which Lambda event source mapping to enable or
   * disable when activating or deactivating a region.</p>
   */
  inline const Aws::Map<Aws::String, EventSourceMapping>& GetRegionEventSourceMappings() const { return m_regionEventSourceMappings; }
  inline bool RegionEventSourceMappingsHasBeenSet() const { return m_regionEventSourceMappingsHasBeenSet; }
  template <typename RegionEventSourceMappingsT = Aws::Map<Aws::String, EventSourceMapping>>
  void SetRegionEventSourceMappings(RegionEventSourceMappingsT&& value) {
    m_regionEventSourceMappingsHasBeenSet = true;
    m_regionEventSourceMappings = std::forward<RegionEventSourceMappingsT>(value);
  }
  template <typename RegionEventSourceMappingsT = Aws::Map<Aws::String, EventSourceMapping>>
  LambdaEventSourceMappingConfiguration& WithRegionEventSourceMappings(RegionEventSourceMappingsT&& value) {
    SetRegionEventSourceMappings(std::forward<RegionEventSourceMappingsT>(value));
    return *this;
  }
  template <typename RegionEventSourceMappingsKeyT = Aws::String, typename RegionEventSourceMappingsValueT = EventSourceMapping>
  LambdaEventSourceMappingConfiguration& AddRegionEventSourceMappings(RegionEventSourceMappingsKeyT&& key,
                                                                      RegionEventSourceMappingsValueT&& value) {
    m_regionEventSourceMappingsHasBeenSet = true;
    m_regionEventSourceMappings.emplace(std::forward<RegionEventSourceMappingsKeyT>(key),
                                        std::forward<RegionEventSourceMappingsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The settings for ungraceful execution.</p>
   */
  inline const LambdaEventSourceMappingUngraceful& GetUngraceful() const { return m_ungraceful; }
  inline bool UngracefulHasBeenSet() const { return m_ungracefulHasBeenSet; }
  template <typename UngracefulT = LambdaEventSourceMappingUngraceful>
  void SetUngraceful(UngracefulT&& value) {
    m_ungracefulHasBeenSet = true;
    m_ungraceful = std::forward<UngracefulT>(value);
  }
  template <typename UngracefulT = LambdaEventSourceMappingUngraceful>
  LambdaEventSourceMappingConfiguration& WithUngraceful(UngracefulT&& value) {
    SetUngraceful(std::forward<UngracefulT>(value));
    return *this;
  }
  ///@}
 private:
  int m_timeoutMinutes{0};

  EventSourceMappingAction m_action{EventSourceMappingAction::NOT_SET};

  Aws::Map<Aws::String, EventSourceMapping> m_regionEventSourceMappings;

  LambdaEventSourceMappingUngraceful m_ungraceful;
  bool m_timeoutMinutesHasBeenSet = false;
  bool m_actionHasBeenSet = false;
  bool m_regionEventSourceMappingsHasBeenSet = false;
  bool m_ungracefulHasBeenSet = false;
};

}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws
