/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/health/Health_EXPORTS.h>
#include <aws/health/model/EntityStatusCode.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace Health {
namespace Model {

/**
 * <p>The number of entities in an account that are impacted by a specific event
 * aggregated by the entity status codes.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/AccountEntityAggregate">AWS
 * API Reference</a></p>
 */
class AccountEntityAggregate {
 public:
  AWS_HEALTH_API AccountEntityAggregate() = default;
  AWS_HEALTH_API AccountEntityAggregate(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_HEALTH_API AccountEntityAggregate& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_HEALTH_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The 12-digit Amazon Web Services account numbers that contains the affected
   * entities.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  AccountEntityAggregate& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of entities that match the filter criteria for the specified
   * events.</p>
   */
  inline int64_t GetCount() const { return m_count; }
  inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
  inline void SetCount(int64_t value) {
    m_countHasBeenSet = true;
    m_count = value;
  }
  inline AccountEntityAggregate& WithCount(int64_t value) {
    SetCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of affected entities aggregated by the entity status codes.</p>
   */
  inline const Aws::Map<EntityStatusCode, int64_t>& GetStatuses() const { return m_statuses; }
  inline bool StatusesHasBeenSet() const { return m_statusesHasBeenSet; }
  template <typename StatusesT = Aws::Map<EntityStatusCode, int64_t>>
  void SetStatuses(StatusesT&& value) {
    m_statusesHasBeenSet = true;
    m_statuses = std::forward<StatusesT>(value);
  }
  template <typename StatusesT = Aws::Map<EntityStatusCode, int64_t>>
  AccountEntityAggregate& WithStatuses(StatusesT&& value) {
    SetStatuses(std::forward<StatusesT>(value));
    return *this;
  }
  inline AccountEntityAggregate& AddStatuses(EntityStatusCode key, int64_t value) {
    m_statusesHasBeenSet = true;
    m_statuses.emplace(key, value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_accountId;

  int64_t m_count{0};

  Aws::Map<EntityStatusCode, int64_t> m_statuses;
  bool m_accountIdHasBeenSet = false;
  bool m_countHasBeenSet = false;
  bool m_statusesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Health
}  // namespace Aws
