/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/ThrottlingException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Transfer
{
namespace Model
{

ThrottlingException::ThrottlingException() : 
    m_retryAfterSecondsHasBeenSet(false)
{
}

ThrottlingException::ThrottlingException(JsonView jsonValue) : 
    m_retryAfterSecondsHasBeenSet(false)
{
  *this = jsonValue;
}

ThrottlingException& ThrottlingException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RetryAfterSeconds"))
  {
    m_retryAfterSeconds = jsonValue.GetString("RetryAfterSeconds");

    m_retryAfterSecondsHasBeenSet = true;
  }

  return *this;
}

JsonValue ThrottlingException::Jsonize() const
{
  JsonValue payload;

  if(m_retryAfterSecondsHasBeenSet)
  {
   payload.WithString("RetryAfterSeconds", m_retryAfterSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace Transfer
} // namespace Aws
