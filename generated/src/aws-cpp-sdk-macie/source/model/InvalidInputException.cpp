/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie/model/InvalidInputException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie
{
namespace Model
{

InvalidInputException::InvalidInputException() : 
    m_errorCodeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_fieldNameHasBeenSet(false)
{
}

InvalidInputException::InvalidInputException(JsonView jsonValue) : 
    m_errorCodeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_fieldNameHasBeenSet(false)
{
  *this = jsonValue;
}

InvalidInputException& InvalidInputException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("errorCode"))
  {
    m_errorCode = jsonValue.GetString("errorCode");

    m_errorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fieldName"))
  {
    m_fieldName = jsonValue.GetString("fieldName");

    m_fieldNameHasBeenSet = true;
  }

  return *this;
}

JsonValue InvalidInputException::Jsonize() const
{
  JsonValue payload;

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("errorCode", m_errorCode);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_fieldNameHasBeenSet)
  {
   payload.WithString("fieldName", m_fieldName);

  }

  return payload;
}

} // namespace Model
} // namespace Macie
} // namespace Aws
