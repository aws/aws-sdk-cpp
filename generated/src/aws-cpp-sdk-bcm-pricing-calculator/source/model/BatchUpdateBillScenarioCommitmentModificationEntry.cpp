/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/model/BatchUpdateBillScenarioCommitmentModificationEntry.h>
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

BatchUpdateBillScenarioCommitmentModificationEntry::BatchUpdateBillScenarioCommitmentModificationEntry(JsonView jsonValue)
{
  *this = jsonValue;
}

BatchUpdateBillScenarioCommitmentModificationEntry& BatchUpdateBillScenarioCommitmentModificationEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("group"))
  {
    m_group = jsonValue.GetString("group");
    m_groupHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchUpdateBillScenarioCommitmentModificationEntry::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_groupHasBeenSet)
  {
   payload.WithString("group", m_group);

  }

  return payload;
}

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
