/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/model/BatchCreateBillScenarioCommitmentModificationEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BCMPricingCalculator
{
namespace Model
{

BatchCreateBillScenarioCommitmentModificationEntry::BatchCreateBillScenarioCommitmentModificationEntry(JsonView jsonValue)
{
  *this = jsonValue;
}

BatchCreateBillScenarioCommitmentModificationEntry& BatchCreateBillScenarioCommitmentModificationEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("key"))
  {
    m_key = jsonValue.GetString("key");
    m_keyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("group"))
  {
    m_group = jsonValue.GetString("group");
    m_groupHasBeenSet = true;
  }
  if(jsonValue.ValueExists("usageAccountId"))
  {
    m_usageAccountId = jsonValue.GetString("usageAccountId");
    m_usageAccountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("commitmentAction"))
  {
    m_commitmentAction = jsonValue.GetObject("commitmentAction");
    m_commitmentActionHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchCreateBillScenarioCommitmentModificationEntry::Jsonize() const
{
  JsonValue payload;

  if(m_keyHasBeenSet)
  {
   payload.WithString("key", m_key);

  }

  if(m_groupHasBeenSet)
  {
   payload.WithString("group", m_group);

  }

  if(m_usageAccountIdHasBeenSet)
  {
   payload.WithString("usageAccountId", m_usageAccountId);

  }

  if(m_commitmentActionHasBeenSet)
  {
   payload.WithObject("commitmentAction", m_commitmentAction.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
