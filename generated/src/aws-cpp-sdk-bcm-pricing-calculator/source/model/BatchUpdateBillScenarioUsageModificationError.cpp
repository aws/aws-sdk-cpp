/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/model/BatchUpdateBillScenarioUsageModificationError.h>
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

BatchUpdateBillScenarioUsageModificationError::BatchUpdateBillScenarioUsageModificationError(JsonView jsonValue)
{
  *this = jsonValue;
}

BatchUpdateBillScenarioUsageModificationError& BatchUpdateBillScenarioUsageModificationError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetString("errorMessage");
    m_errorMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("errorCode"))
  {
    m_errorCode = BatchUpdateBillScenarioUsageModificationErrorCodeMapper::GetBatchUpdateBillScenarioUsageModificationErrorCodeForName(jsonValue.GetString("errorCode"));
    m_errorCodeHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchUpdateBillScenarioUsageModificationError::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("errorMessage", m_errorMessage);

  }

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("errorCode", BatchUpdateBillScenarioUsageModificationErrorCodeMapper::GetNameForBatchUpdateBillScenarioUsageModificationErrorCode(m_errorCode));
  }

  return payload;
}

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
