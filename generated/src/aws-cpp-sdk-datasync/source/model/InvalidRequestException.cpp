/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/InvalidRequestException.h>
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

InvalidRequestException::InvalidRequestException() : 
    m_messageHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_datasyncErrorCodeHasBeenSet(false)
{
}

InvalidRequestException::InvalidRequestException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_datasyncErrorCodeHasBeenSet(false)
{
  *this = jsonValue;
}

InvalidRequestException& InvalidRequestException::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("datasyncErrorCode"))
  {
    m_datasyncErrorCode = jsonValue.GetString("datasyncErrorCode");

    m_datasyncErrorCodeHasBeenSet = true;
  }

  return *this;
}

JsonValue InvalidRequestException::Jsonize() const
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

  if(m_datasyncErrorCodeHasBeenSet)
  {
   payload.WithString("datasyncErrorCode", m_datasyncErrorCode);

  }

  return payload;
}

} // namespace Model
} // namespace DataSync
} // namespace Aws
