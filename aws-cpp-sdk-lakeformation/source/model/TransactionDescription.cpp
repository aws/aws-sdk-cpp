/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/TransactionDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LakeFormation
{
namespace Model
{

TransactionDescription::TransactionDescription() : 
    m_transactionIdHasBeenSet(false),
    m_transactionStatus(TransactionStatus::NOT_SET),
    m_transactionStatusHasBeenSet(false),
    m_transactionStartTimeHasBeenSet(false),
    m_transactionEndTimeHasBeenSet(false)
{
}

TransactionDescription::TransactionDescription(JsonView jsonValue) : 
    m_transactionIdHasBeenSet(false),
    m_transactionStatus(TransactionStatus::NOT_SET),
    m_transactionStatusHasBeenSet(false),
    m_transactionStartTimeHasBeenSet(false),
    m_transactionEndTimeHasBeenSet(false)
{
  *this = jsonValue;
}

TransactionDescription& TransactionDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TransactionId"))
  {
    m_transactionId = jsonValue.GetString("TransactionId");

    m_transactionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TransactionStatus"))
  {
    m_transactionStatus = TransactionStatusMapper::GetTransactionStatusForName(jsonValue.GetString("TransactionStatus"));

    m_transactionStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TransactionStartTime"))
  {
    m_transactionStartTime = jsonValue.GetDouble("TransactionStartTime");

    m_transactionStartTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TransactionEndTime"))
  {
    m_transactionEndTime = jsonValue.GetDouble("TransactionEndTime");

    m_transactionEndTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue TransactionDescription::Jsonize() const
{
  JsonValue payload;

  if(m_transactionIdHasBeenSet)
  {
   payload.WithString("TransactionId", m_transactionId);

  }

  if(m_transactionStatusHasBeenSet)
  {
   payload.WithString("TransactionStatus", TransactionStatusMapper::GetNameForTransactionStatus(m_transactionStatus));
  }

  if(m_transactionStartTimeHasBeenSet)
  {
   payload.WithDouble("TransactionStartTime", m_transactionStartTime.SecondsWithMSPrecision());
  }

  if(m_transactionEndTimeHasBeenSet)
  {
   payload.WithDouble("TransactionEndTime", m_transactionEndTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
