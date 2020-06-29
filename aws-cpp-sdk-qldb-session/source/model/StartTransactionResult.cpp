/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qldb-session/model/StartTransactionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QLDBSession
{
namespace Model
{

StartTransactionResult::StartTransactionResult() : 
    m_transactionIdHasBeenSet(false)
{
}

StartTransactionResult::StartTransactionResult(JsonView jsonValue) : 
    m_transactionIdHasBeenSet(false)
{
  *this = jsonValue;
}

StartTransactionResult& StartTransactionResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TransactionId"))
  {
    m_transactionId = jsonValue.GetString("TransactionId");

    m_transactionIdHasBeenSet = true;
  }

  return *this;
}

JsonValue StartTransactionResult::Jsonize() const
{
  JsonValue payload;

  if(m_transactionIdHasBeenSet)
  {
   payload.WithString("TransactionId", m_transactionId);

  }

  return payload;
}

} // namespace Model
} // namespace QLDBSession
} // namespace Aws
