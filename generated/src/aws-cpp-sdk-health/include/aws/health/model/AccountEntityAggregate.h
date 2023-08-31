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
    AWS_HEALTH_API AccountEntityAggregate();
    AWS_HEALTH_API AccountEntityAggregate(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTH_API AccountEntityAggregate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The 12-digit Amazon Web Services account numbers that contains the affected
     * entities.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The 12-digit Amazon Web Services account numbers that contains the affected
     * entities.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The 12-digit Amazon Web Services account numbers that contains the affected
     * entities.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The 12-digit Amazon Web Services account numbers that contains the affected
     * entities.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The 12-digit Amazon Web Services account numbers that contains the affected
     * entities.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The 12-digit Amazon Web Services account numbers that contains the affected
     * entities.</p>
     */
    inline AccountEntityAggregate& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The 12-digit Amazon Web Services account numbers that contains the affected
     * entities.</p>
     */
    inline AccountEntityAggregate& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The 12-digit Amazon Web Services account numbers that contains the affected
     * entities.</p>
     */
    inline AccountEntityAggregate& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The number of entities that match the filter criteria for the specified
     * events.</p>
     */
    inline int GetCount() const{ return m_count; }

    /**
     * <p>The number of entities that match the filter criteria for the specified
     * events.</p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p>The number of entities that match the filter criteria for the specified
     * events.</p>
     */
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>The number of entities that match the filter criteria for the specified
     * events.</p>
     */
    inline AccountEntityAggregate& WithCount(int value) { SetCount(value); return *this;}


    /**
     * <p>The number of affected entities aggregated by the entity status codes.</p>
     */
    inline const Aws::Map<EntityStatusCode, int>& GetStatuses() const{ return m_statuses; }

    /**
     * <p>The number of affected entities aggregated by the entity status codes.</p>
     */
    inline bool StatusesHasBeenSet() const { return m_statusesHasBeenSet; }

    /**
     * <p>The number of affected entities aggregated by the entity status codes.</p>
     */
    inline void SetStatuses(const Aws::Map<EntityStatusCode, int>& value) { m_statusesHasBeenSet = true; m_statuses = value; }

    /**
     * <p>The number of affected entities aggregated by the entity status codes.</p>
     */
    inline void SetStatuses(Aws::Map<EntityStatusCode, int>&& value) { m_statusesHasBeenSet = true; m_statuses = std::move(value); }

    /**
     * <p>The number of affected entities aggregated by the entity status codes.</p>
     */
    inline AccountEntityAggregate& WithStatuses(const Aws::Map<EntityStatusCode, int>& value) { SetStatuses(value); return *this;}

    /**
     * <p>The number of affected entities aggregated by the entity status codes.</p>
     */
    inline AccountEntityAggregate& WithStatuses(Aws::Map<EntityStatusCode, int>&& value) { SetStatuses(std::move(value)); return *this;}

    /**
     * <p>The number of affected entities aggregated by the entity status codes.</p>
     */
    inline AccountEntityAggregate& AddStatuses(const EntityStatusCode& key, int value) { m_statusesHasBeenSet = true; m_statuses.emplace(key, value); return *this; }

    /**
     * <p>The number of affected entities aggregated by the entity status codes.</p>
     */
    inline AccountEntityAggregate& AddStatuses(EntityStatusCode&& key, int value) { m_statusesHasBeenSet = true; m_statuses.emplace(std::move(key), value); return *this; }

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    int m_count;
    bool m_countHasBeenSet = false;

    Aws::Map<EntityStatusCode, int> m_statuses;
    bool m_statusesHasBeenSet = false;
  };

} // namespace Model
} // namespace Health
} // namespace Aws
