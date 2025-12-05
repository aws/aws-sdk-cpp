/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/braket/model/TimePeriod.h>
#include <aws/core/utils/DateTime.h>
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
namespace Braket {
namespace Model {

/**
 * <p>Contains summary information about a spending limit, including current
 * spending status and configuration details.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/SpendingLimitSummary">AWS
 * API Reference</a></p>
 */
class SpendingLimitSummary {
 public:
  AWS_BRAKET_API SpendingLimitSummary() = default;
  AWS_BRAKET_API SpendingLimitSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_BRAKET_API SpendingLimitSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BRAKET_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) that uniquely identifies the spending
   * limit.</p>
   */
  inline const Aws::String& GetSpendingLimitArn() const { return m_spendingLimitArn; }
  inline bool SpendingLimitArnHasBeenSet() const { return m_spendingLimitArnHasBeenSet; }
  template <typename SpendingLimitArnT = Aws::String>
  void SetSpendingLimitArn(SpendingLimitArnT&& value) {
    m_spendingLimitArnHasBeenSet = true;
    m_spendingLimitArn = std::forward<SpendingLimitArnT>(value);
  }
  template <typename SpendingLimitArnT = Aws::String>
  SpendingLimitSummary& WithSpendingLimitArn(SpendingLimitArnT&& value) {
    SetSpendingLimitArn(std::forward<SpendingLimitArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the quantum device associated with this
   * spending limit.</p>
   */
  inline const Aws::String& GetDeviceArn() const { return m_deviceArn; }
  inline bool DeviceArnHasBeenSet() const { return m_deviceArnHasBeenSet; }
  template <typename DeviceArnT = Aws::String>
  void SetDeviceArn(DeviceArnT&& value) {
    m_deviceArnHasBeenSet = true;
    m_deviceArn = std::forward<DeviceArnT>(value);
  }
  template <typename DeviceArnT = Aws::String>
  SpendingLimitSummary& WithDeviceArn(DeviceArnT&& value) {
    SetDeviceArn(std::forward<DeviceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time period during which the spending limit is active.</p>
   */
  inline const TimePeriod& GetTimePeriod() const { return m_timePeriod; }
  inline bool TimePeriodHasBeenSet() const { return m_timePeriodHasBeenSet; }
  template <typename TimePeriodT = TimePeriod>
  void SetTimePeriod(TimePeriodT&& value) {
    m_timePeriodHasBeenSet = true;
    m_timePeriod = std::forward<TimePeriodT>(value);
  }
  template <typename TimePeriodT = TimePeriod>
  SpendingLimitSummary& WithTimePeriod(TimePeriodT&& value) {
    SetTimePeriod(std::forward<TimePeriodT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum spending amount allowed for the device during the specified time
   * period, in USD.</p>
   */
  inline const Aws::String& GetSpendingLimit() const { return m_spendingLimit; }
  inline bool SpendingLimitHasBeenSet() const { return m_spendingLimitHasBeenSet; }
  template <typename SpendingLimitT = Aws::String>
  void SetSpendingLimit(SpendingLimitT&& value) {
    m_spendingLimitHasBeenSet = true;
    m_spendingLimit = std::forward<SpendingLimitT>(value);
  }
  template <typename SpendingLimitT = Aws::String>
  SpendingLimitSummary& WithSpendingLimit(SpendingLimitT&& value) {
    SetSpendingLimit(std::forward<SpendingLimitT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The amount currently queued for spending on the device, in USD.</p>
   */
  inline const Aws::String& GetQueuedSpend() const { return m_queuedSpend; }
  inline bool QueuedSpendHasBeenSet() const { return m_queuedSpendHasBeenSet; }
  template <typename QueuedSpendT = Aws::String>
  void SetQueuedSpend(QueuedSpendT&& value) {
    m_queuedSpendHasBeenSet = true;
    m_queuedSpend = std::forward<QueuedSpendT>(value);
  }
  template <typename QueuedSpendT = Aws::String>
  SpendingLimitSummary& WithQueuedSpend(QueuedSpendT&& value) {
    SetQueuedSpend(std::forward<QueuedSpendT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total amount spent on the device so far during the current time period,
   * in USD.</p>
   */
  inline const Aws::String& GetTotalSpend() const { return m_totalSpend; }
  inline bool TotalSpendHasBeenSet() const { return m_totalSpendHasBeenSet; }
  template <typename TotalSpendT = Aws::String>
  void SetTotalSpend(TotalSpendT&& value) {
    m_totalSpendHasBeenSet = true;
    m_totalSpend = std::forward<TotalSpendT>(value);
  }
  template <typename TotalSpendT = Aws::String>
  SpendingLimitSummary& WithTotalSpend(TotalSpendT&& value) {
    SetTotalSpend(std::forward<TotalSpendT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the spending limit was created, in epoch seconds.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  SpendingLimitSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the spending limit was last modified, in epoch
   * seconds.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  SpendingLimitSummary& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags associated with the spending limit. Each tag consists of a key and
   * an optional value.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  SpendingLimitSummary& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  SpendingLimitSummary& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_spendingLimitArn;

  Aws::String m_deviceArn;

  TimePeriod m_timePeriod;

  Aws::String m_spendingLimit;

  Aws::String m_queuedSpend;

  Aws::String m_totalSpend;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_spendingLimitArnHasBeenSet = false;
  bool m_deviceArnHasBeenSet = false;
  bool m_timePeriodHasBeenSet = false;
  bool m_spendingLimitHasBeenSet = false;
  bool m_queuedSpendHasBeenSet = false;
  bool m_totalSpendHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Braket
}  // namespace Aws
