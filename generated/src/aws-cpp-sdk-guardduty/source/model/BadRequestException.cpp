/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/BadRequestException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

BadRequestException::BadRequestException() : 
    m_messageHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

BadRequestException::BadRequestException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

BadRequestException& BadRequestException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("__type"))
  {
    m_type = jsonValue.GetString("__type");

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue BadRequestException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("__type", m_type);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
