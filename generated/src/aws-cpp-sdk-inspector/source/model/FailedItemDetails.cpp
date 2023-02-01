/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/FailedItemDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector
{
namespace Model
{

FailedItemDetails::FailedItemDetails() : 
    m_failureCode(FailedItemErrorCode::NOT_SET),
    m_failureCodeHasBeenSet(false),
    m_retryable(false),
    m_retryableHasBeenSet(false)
{
}

FailedItemDetails::FailedItemDetails(JsonView jsonValue) : 
    m_failureCode(FailedItemErrorCode::NOT_SET),
    m_failureCodeHasBeenSet(false),
    m_retryable(false),
    m_retryableHasBeenSet(false)
{
  *this = jsonValue;
}

FailedItemDetails& FailedItemDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("failureCode"))
  {
    m_failureCode = FailedItemErrorCodeMapper::GetFailedItemErrorCodeForName(jsonValue.GetString("failureCode"));

    m_failureCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("retryable"))
  {
    m_retryable = jsonValue.GetBool("retryable");

    m_retryableHasBeenSet = true;
  }

  return *this;
}

JsonValue FailedItemDetails::Jsonize() const
{
  JsonValue payload;

  if(m_failureCodeHasBeenSet)
  {
   payload.WithString("failureCode", FailedItemErrorCodeMapper::GetNameForFailedItemErrorCode(m_failureCode));
  }

  if(m_retryableHasBeenSet)
  {
   payload.WithBool("retryable", m_retryable);

  }

  return payload;
}

} // namespace Model
} // namespace Inspector
} // namespace Aws
