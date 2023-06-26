/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/UnsupportedFeatureException.h>
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

UnsupportedFeatureException::UnsupportedFeatureException() : 
    m_messageHasBeenSet(false),
    m_canRetry(false),
    m_canRetryHasBeenSet(false)
{
}

UnsupportedFeatureException::UnsupportedFeatureException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_canRetry(false),
    m_canRetryHasBeenSet(false)
{
  *this = jsonValue;
}

UnsupportedFeatureException& UnsupportedFeatureException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("canRetry"))
  {
    m_canRetry = jsonValue.GetBool("canRetry");

    m_canRetryHasBeenSet = true;
  }

  return *this;
}

JsonValue UnsupportedFeatureException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_canRetryHasBeenSet)
  {
   payload.WithBool("canRetry", m_canRetry);

  }

  return payload;
}

} // namespace Model
} // namespace Inspector
} // namespace Aws
