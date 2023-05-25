/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/RetryCriteria.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

RetryCriteria::RetryCriteria() : 
    m_failureType(RetryableFailureType::NOT_SET),
    m_failureTypeHasBeenSet(false),
    m_numberOfRetries(0),
    m_numberOfRetriesHasBeenSet(false)
{
}

RetryCriteria::RetryCriteria(JsonView jsonValue) : 
    m_failureType(RetryableFailureType::NOT_SET),
    m_failureTypeHasBeenSet(false),
    m_numberOfRetries(0),
    m_numberOfRetriesHasBeenSet(false)
{
  *this = jsonValue;
}

RetryCriteria& RetryCriteria::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("failureType"))
  {
    m_failureType = RetryableFailureTypeMapper::GetRetryableFailureTypeForName(jsonValue.GetString("failureType"));

    m_failureTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("numberOfRetries"))
  {
    m_numberOfRetries = jsonValue.GetInteger("numberOfRetries");

    m_numberOfRetriesHasBeenSet = true;
  }

  return *this;
}

JsonValue RetryCriteria::Jsonize() const
{
  JsonValue payload;

  if(m_failureTypeHasBeenSet)
  {
   payload.WithString("failureType", RetryableFailureTypeMapper::GetNameForRetryableFailureType(m_failureType));
  }

  if(m_numberOfRetriesHasBeenSet)
  {
   payload.WithInteger("numberOfRetries", m_numberOfRetries);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
