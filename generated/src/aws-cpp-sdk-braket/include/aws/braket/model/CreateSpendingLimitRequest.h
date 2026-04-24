/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/BraketRequest.h>
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/braket/model/TimePeriod.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Braket {
namespace Model {

/**
 */
class CreateSpendingLimitRequest : public BraketRequest {
 public:
  AWS_BRAKET_API CreateSpendingLimitRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateSpendingLimit"; }

  AWS_BRAKET_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>A unique, case-sensitive identifier to ensure that the operation completes no
   * more than one time. If this token matches a previous request, Amazon Braket
   * ignores the request, but does not return an error.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateSpendingLimitRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the quantum device to apply the spending
   * limit to.</p>
   */
  inline const Aws::String& GetDeviceArn() const { return m_deviceArn; }
  inline bool DeviceArnHasBeenSet() const { return m_deviceArnHasBeenSet; }
  template <typename DeviceArnT = Aws::String>
  void SetDeviceArn(DeviceArnT&& value) {
    m_deviceArnHasBeenSet = true;
    m_deviceArn = std::forward<DeviceArnT>(value);
  }
  template <typename DeviceArnT = Aws::String>
  CreateSpendingLimitRequest& WithDeviceArn(DeviceArnT&& value) {
    SetDeviceArn(std::forward<DeviceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum amount that can be spent on the specified device, in USD.</p>
   */
  inline const Aws::String& GetSpendingLimit() const { return m_spendingLimit; }
  inline bool SpendingLimitHasBeenSet() const { return m_spendingLimitHasBeenSet; }
  template <typename SpendingLimitT = Aws::String>
  void SetSpendingLimit(SpendingLimitT&& value) {
    m_spendingLimitHasBeenSet = true;
    m_spendingLimit = std::forward<SpendingLimitT>(value);
  }
  template <typename SpendingLimitT = Aws::String>
  CreateSpendingLimitRequest& WithSpendingLimit(SpendingLimitT&& value) {
    SetSpendingLimit(std::forward<SpendingLimitT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time period during which the spending limit is active, including start
   * and end dates.</p>
   */
  inline const TimePeriod& GetTimePeriod() const { return m_timePeriod; }
  inline bool TimePeriodHasBeenSet() const { return m_timePeriodHasBeenSet; }
  template <typename TimePeriodT = TimePeriod>
  void SetTimePeriod(TimePeriodT&& value) {
    m_timePeriodHasBeenSet = true;
    m_timePeriod = std::forward<TimePeriodT>(value);
  }
  template <typename TimePeriodT = TimePeriod>
  CreateSpendingLimitRequest& WithTimePeriod(TimePeriodT&& value) {
    SetTimePeriod(std::forward<TimePeriodT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags to apply to the spending limit. Each tag consists of a key and an
   * optional value.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateSpendingLimitRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateSpendingLimitRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_deviceArn;

  Aws::String m_spendingLimit;

  TimePeriod m_timePeriod;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_clientTokenHasBeenSet = true;
  bool m_deviceArnHasBeenSet = false;
  bool m_spendingLimitHasBeenSet = false;
  bool m_timePeriodHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Braket
}  // namespace Aws
