/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/cloudwatchomni/model/AlertState.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace CloudWatchOmni {
namespace Model {

/**
 * <p>Filter criteria for ListAlerts. All members are optional; each omitted member
 * is unconstrained. At most one of {@code names}, {@code namePrefix}, {@code ids}
 * may be provided (mutually exclusive; the service rejects more than one). The
 * remaining members combine with AND.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/AlertFilterCriteria">AWS
 * API Reference</a></p>
 */
class AlertFilterCriteria {
 public:
  AWS_CLOUDWATCHOMNI_API AlertFilterCriteria() = default;
  AWS_CLOUDWATCHOMNI_API AlertFilterCriteria(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API AlertFilterCriteria& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Filter to alerts whose name exactly matches any entry (OR semantics).
   * Mutually exclusive with {@code namePrefix} and {@code ids}.</p>
   */
  inline const Aws::Vector<Aws::String>& GetNames() const { return m_names; }
  inline bool NamesHasBeenSet() const { return m_namesHasBeenSet; }
  template <typename NamesT = Aws::Vector<Aws::String>>
  void SetNames(NamesT&& value) {
    m_namesHasBeenSet = true;
    m_names = std::forward<NamesT>(value);
  }
  template <typename NamesT = Aws::Vector<Aws::String>>
  AlertFilterCriteria& WithNames(NamesT&& value) {
    SetNames(std::forward<NamesT>(value));
    return *this;
  }
  template <typename NamesT = Aws::String>
  AlertFilterCriteria& AddNames(NamesT&& value) {
    m_namesHasBeenSet = true;
    m_names.emplace_back(std::forward<NamesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter to alerts whose name starts with this prefix. Mutually exclusive with
   * {@code names} and {@code ids}.</p>
   */
  inline const Aws::String& GetNamePrefix() const { return m_namePrefix; }
  inline bool NamePrefixHasBeenSet() const { return m_namePrefixHasBeenSet; }
  template <typename NamePrefixT = Aws::String>
  void SetNamePrefix(NamePrefixT&& value) {
    m_namePrefixHasBeenSet = true;
    m_namePrefix = std::forward<NamePrefixT>(value);
  }
  template <typename NamePrefixT = Aws::String>
  AlertFilterCriteria& WithNamePrefix(NamePrefixT&& value) {
    SetNamePrefix(std::forward<NamePrefixT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter to alerts whose {@link AlertId} exactly matches any entry (OR
   * semantics). Mutually exclusive with {@code names} and {@code namePrefix}.</p>
   */
  inline const Aws::Vector<Aws::String>& GetIds() const { return m_ids; }
  inline bool IdsHasBeenSet() const { return m_idsHasBeenSet; }
  template <typename IdsT = Aws::Vector<Aws::String>>
  void SetIds(IdsT&& value) {
    m_idsHasBeenSet = true;
    m_ids = std::forward<IdsT>(value);
  }
  template <typename IdsT = Aws::Vector<Aws::String>>
  AlertFilterCriteria& WithIds(IdsT&& value) {
    SetIds(std::forward<IdsT>(value));
    return *this;
  }
  template <typename IdsT = Aws::String>
  AlertFilterCriteria& AddIds(IdsT&& value) {
    m_idsHasBeenSet = true;
    m_ids.emplace_back(std::forward<IdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter to alerts currently in any of these states (OR semantics).</p>
   */
  inline const Aws::Vector<AlertState>& GetStateValue() const { return m_stateValue; }
  inline bool StateValueHasBeenSet() const { return m_stateValueHasBeenSet; }
  template <typename StateValueT = Aws::Vector<AlertState>>
  void SetStateValue(StateValueT&& value) {
    m_stateValueHasBeenSet = true;
    m_stateValue = std::forward<StateValueT>(value);
  }
  template <typename StateValueT = Aws::Vector<AlertState>>
  AlertFilterCriteria& WithStateValue(StateValueT&& value) {
    SetStateValue(std::forward<StateValueT>(value));
    return *this;
  }
  inline AlertFilterCriteria& AddStateValue(AlertState value) {
    m_stateValueHasBeenSet = true;
    m_stateValue.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter to alerts by whether notifications are enabled.</p>
   */
  inline bool GetNotificationsEnabled() const { return m_notificationsEnabled; }
  inline bool NotificationsEnabledHasBeenSet() const { return m_notificationsEnabledHasBeenSet; }
  inline void SetNotificationsEnabled(bool value) {
    m_notificationsEnabledHasBeenSet = true;
    m_notificationsEnabled = value;
  }
  inline AlertFilterCriteria& WithNotificationsEnabled(bool value) {
    SetNotificationsEnabled(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_names;

  Aws::String m_namePrefix;

  Aws::Vector<Aws::String> m_ids;

  Aws::Vector<AlertState> m_stateValue;

  bool m_notificationsEnabled{false};
  bool m_namesHasBeenSet = false;
  bool m_namePrefixHasBeenSet = false;
  bool m_idsHasBeenSet = false;
  bool m_stateValueHasBeenSet = false;
  bool m_notificationsEnabledHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
