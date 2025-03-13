/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/health/Health_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/health/model/EntityStatusCode.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Health
{
namespace Model
{

  /**
   * <p>The number of entities in an account that are impacted by a specific event
   * aggregated by the entity status codes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/AccountEntityAggregate">AWS
   * API Reference</a></p>
   */
  class AccountEntityAggregate
  {
  public:
    AWS_HEALTH_API AccountEntityAggregate() = default;
    AWS_HEALTH_API AccountEntityAggregate(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTH_API AccountEntityAggregate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The 12-digit Amazon Web Services account numbers that contains the affected
     * entities.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    AccountEntityAggregate& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of entities that match the filter criteria for the specified
     * events.</p>
     */
    inline int GetCount() const { return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }
    inline AccountEntityAggregate& WithCount(int value) { SetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of affected entities aggregated by the entity status codes.</p>
     */
    inline const Aws::Map<EntityStatusCode, int>& GetStatuses() const { return m_statuses; }
    inline bool StatusesHasBeenSet() const { return m_statusesHasBeenSet; }
    template<typename StatusesT = Aws::Map<EntityStatusCode, int>>
    void SetStatuses(StatusesT&& value) { m_statusesHasBeenSet = true; m_statuses = std::forward<StatusesT>(value); }
    template<typename StatusesT = Aws::Map<EntityStatusCode, int>>
    AccountEntityAggregate& WithStatuses(StatusesT&& value) { SetStatuses(std::forward<StatusesT>(value)); return *this;}
    inline AccountEntityAggregate& AddStatuses(EntityStatusCode key, int value) {
      m_statusesHasBeenSet = true; m_statuses.emplace(key, value); return *this;
    }
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    int m_count{0};
    bool m_countHasBeenSet = false;

    Aws::Map<EntityStatusCode, int> m_statuses;
    bool m_statusesHasBeenSet = false;
  };

} // namespace Model
} // namespace Health
} // namespace Aws
