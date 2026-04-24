/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/BraketRequest.h>
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/braket/model/TimePeriod.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Braket {
namespace Model {

/**
 */
class UpdateSpendingLimitRequest : public BraketRequest {
 public:
  AWS_BRAKET_API UpdateSpendingLimitRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateSpendingLimit"; }

  AWS_BRAKET_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the spending limit to update.</p>
   */
  inline const Aws::String& GetSpendingLimitArn() const { return m_spendingLimitArn; }
  inline bool SpendingLimitArnHasBeenSet() const { return m_spendingLimitArnHasBeenSet; }
  template <typename SpendingLimitArnT = Aws::String>
  void SetSpendingLimitArn(SpendingLimitArnT&& value) {
    m_spendingLimitArnHasBeenSet = true;
    m_spendingLimitArn = std::forward<SpendingLimitArnT>(value);
  }
  template <typename SpendingLimitArnT = Aws::String>
  UpdateSpendingLimitRequest& WithSpendingLimitArn(SpendingLimitArnT&& value) {
    SetSpendingLimitArn(std::forward<SpendingLimitArnT>(value));
    return *this;
  }
  ///@}

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
  UpdateSpendingLimitRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new maximum amount that can be spent on the specified device, in USD.</p>
   */
  inline const Aws::String& GetSpendingLimit() const { return m_spendingLimit; }
  inline bool SpendingLimitHasBeenSet() const { return m_spendingLimitHasBeenSet; }
  template <typename SpendingLimitT = Aws::String>
  void SetSpendingLimit(SpendingLimitT&& value) {
    m_spendingLimitHasBeenSet = true;
    m_spendingLimit = std::forward<SpendingLimitT>(value);
  }
  template <typename SpendingLimitT = Aws::String>
  UpdateSpendingLimitRequest& WithSpendingLimit(SpendingLimitT&& value) {
    SetSpendingLimit(std::forward<SpendingLimitT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new time period during which the spending limit is active, including
   * start and end dates.</p>
   */
  inline const TimePeriod& GetTimePeriod() const { return m_timePeriod; }
  inline bool TimePeriodHasBeenSet() const { return m_timePeriodHasBeenSet; }
  template <typename TimePeriodT = TimePeriod>
  void SetTimePeriod(TimePeriodT&& value) {
    m_timePeriodHasBeenSet = true;
    m_timePeriod = std::forward<TimePeriodT>(value);
  }
  template <typename TimePeriodT = TimePeriod>
  UpdateSpendingLimitRequest& WithTimePeriod(TimePeriodT&& value) {
    SetTimePeriod(std::forward<TimePeriodT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_spendingLimitArn;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_spendingLimit;

  TimePeriod m_timePeriod;
  bool m_spendingLimitArnHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_spendingLimitHasBeenSet = false;
  bool m_timePeriodHasBeenSet = false;
};

}  // namespace Model
}  // namespace Braket
}  // namespace Aws
