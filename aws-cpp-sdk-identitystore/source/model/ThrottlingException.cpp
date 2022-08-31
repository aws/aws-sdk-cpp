/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/identitystore/model/ThrottlingException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IdentityStore
{
namespace Model
{

ThrottlingException::ThrottlingException() : 
    m_messageHasBeenSet(false),
    m_requestIdHasBeenSet(false),
    m_retryAfterSeconds(0),
    m_retryAfterSecondsHasBeenSet(false)
{
}

ThrottlingException::ThrottlingException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_requestIdHasBeenSet(false),
    m_retryAfterSeconds(0),
    m_retryAfterSecondsHasBeenSet(false)
{
  *this = jsonValue;
}

ThrottlingException& ThrottlingException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RequestId"))
  {
    m_requestId = jsonValue.GetString("RequestId");

    m_requestIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RetryAfterSeconds"))
  {
    m_retryAfterSeconds = jsonValue.GetInteger("RetryAfterSeconds");

    m_retryAfterSecondsHasBeenSet = true;
  }

  return *this;
}

JsonValue ThrottlingException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_requestIdHasBeenSet)
  {
   payload.WithString("RequestId", m_requestId);

  }

  if(m_retryAfterSecondsHasBeenSet)
  {
   payload.WithInteger("RetryAfterSeconds", m_retryAfterSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace IdentityStore
} // namespace Aws
