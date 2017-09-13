/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

FailedItemDetails::FailedItemDetails(const JsonValue& jsonValue) : 
    m_failureCode(FailedItemErrorCode::NOT_SET),
    m_failureCodeHasBeenSet(false),
    m_retryable(false),
    m_retryableHasBeenSet(false)
{
  *this = jsonValue;
}

FailedItemDetails& FailedItemDetails::operator =(const JsonValue& jsonValue)
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
