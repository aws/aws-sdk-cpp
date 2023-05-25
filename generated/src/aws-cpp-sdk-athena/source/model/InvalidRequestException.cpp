/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/InvalidRequestException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Athena
{
namespace Model
{

InvalidRequestException::InvalidRequestException() : 
    m_athenaErrorCodeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

InvalidRequestException::InvalidRequestException(JsonView jsonValue) : 
    m_athenaErrorCodeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

InvalidRequestException& InvalidRequestException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AthenaErrorCode"))
  {
    m_athenaErrorCode = jsonValue.GetString("AthenaErrorCode");

    m_athenaErrorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue InvalidRequestException::Jsonize() const
{
  JsonValue payload;

  if(m_athenaErrorCodeHasBeenSet)
  {
   payload.WithString("AthenaErrorCode", m_athenaErrorCode);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace Athena
} // namespace Aws
