/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspacesstreams/model/ValidationException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KeyspacesStreams
{
namespace Model
{

ValidationException::ValidationException(JsonView jsonValue)
{
  *this = jsonValue;
}

ValidationException& ValidationException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("errorCode"))
  {
    m_errorCode = ValidationExceptionTypeMapper::GetValidationExceptionTypeForName(jsonValue.GetString("errorCode"));
    m_errorCodeHasBeenSet = true;
  }
  return *this;
}

JsonValue ValidationException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("errorCode", ValidationExceptionTypeMapper::GetNameForValidationExceptionType(m_errorCode));
  }

  return payload;
}

} // namespace Model
} // namespace KeyspacesStreams
} // namespace Aws
