/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/model/BatchUpdateBillScenarioCommitmentModificationError.h>
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

BatchUpdateBillScenarioCommitmentModificationError::BatchUpdateBillScenarioCommitmentModificationError(JsonView jsonValue)
{
  *this = jsonValue;
}

BatchUpdateBillScenarioCommitmentModificationError& BatchUpdateBillScenarioCommitmentModificationError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("errorCode"))
  {
    m_errorCode = BatchUpdateBillScenarioCommitmentModificationErrorCodeMapper::GetBatchUpdateBillScenarioCommitmentModificationErrorCodeForName(jsonValue.GetString("errorCode"));
    m_errorCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetString("errorMessage");
    m_errorMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchUpdateBillScenarioCommitmentModificationError::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("errorCode", BatchUpdateBillScenarioCommitmentModificationErrorCodeMapper::GetNameForBatchUpdateBillScenarioCommitmentModificationErrorCode(m_errorCode));
  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("errorMessage", m_errorMessage);

  }

  return payload;
}

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
