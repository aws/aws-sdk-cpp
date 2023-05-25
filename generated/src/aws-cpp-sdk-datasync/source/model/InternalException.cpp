/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/InternalException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataSync
{
namespace Model
{

InternalException::InternalException() : 
    m_messageHasBeenSet(false),
    m_errorCodeHasBeenSet(false)
{
}

InternalException::InternalException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_errorCodeHasBeenSet(false)
{
  *this = jsonValue;
}

InternalException& InternalException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorCode"))
  {
    m_errorCode = jsonValue.GetString("errorCode");

    m_errorCodeHasBeenSet = true;
  }

  return *this;
}

JsonValue InternalException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("errorCode", m_errorCode);

  }

  return payload;
}

} // namespace Model
} // namespace DataSync
} // namespace Aws
