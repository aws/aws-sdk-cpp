/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mq/model/ForbiddenException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MQ
{
namespace Model
{

ForbiddenException::ForbiddenException() : 
    m_errorAttributeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

ForbiddenException::ForbiddenException(JsonView jsonValue) : 
    m_errorAttributeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

ForbiddenException& ForbiddenException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("errorAttribute"))
  {
    m_errorAttribute = jsonValue.GetString("errorAttribute");

    m_errorAttributeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue ForbiddenException::Jsonize() const
{
  JsonValue payload;

  if(m_errorAttributeHasBeenSet)
  {
   payload.WithString("errorAttribute", m_errorAttribute);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace MQ
} // namespace Aws
