/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/ValidationException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataExchange
{
namespace Model
{

ValidationException::ValidationException() : 
    m_messageHasBeenSet(false),
    m_exceptionCause(ExceptionCause::NOT_SET),
    m_exceptionCauseHasBeenSet(false)
{
}

ValidationException::ValidationException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_exceptionCause(ExceptionCause::NOT_SET),
    m_exceptionCauseHasBeenSet(false)
{
  *this = jsonValue;
}

ValidationException& ValidationException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExceptionCause"))
  {
    m_exceptionCause = ExceptionCauseMapper::GetExceptionCauseForName(jsonValue.GetString("ExceptionCause"));

    m_exceptionCauseHasBeenSet = true;
  }

  return *this;
}

JsonValue ValidationException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_exceptionCauseHasBeenSet)
  {
   payload.WithString("ExceptionCause", ExceptionCauseMapper::GetNameForExceptionCause(m_exceptionCause));
  }

  return payload;
}

} // namespace Model
} // namespace DataExchange
} // namespace Aws
