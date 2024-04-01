/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/InternalServerErrorException.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace deadline
{
namespace Model
{

InternalServerErrorException::InternalServerErrorException() : 
    m_messageHasBeenSet(false),
    m_retryAfterSeconds(0),
    m_retryAfterSecondsHasBeenSet(false)
{
}

InternalServerErrorException::InternalServerErrorException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_retryAfterSeconds(0),
    m_retryAfterSecondsHasBeenSet(false)
{
  *this = jsonValue;
}

InternalServerErrorException& InternalServerErrorException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue InternalServerErrorException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
