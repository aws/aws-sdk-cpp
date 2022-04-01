/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/NotFoundException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Kafka
{
namespace Model
{

NotFoundException::NotFoundException() : 
    m_invalidParameterHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

NotFoundException::NotFoundException(JsonView jsonValue) : 
    m_invalidParameterHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

NotFoundException& NotFoundException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("invalidParameter"))
  {
    m_invalidParameter = jsonValue.GetString("invalidParameter");

    m_invalidParameterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue NotFoundException::Jsonize() const
{
  JsonValue payload;

  if(m_invalidParameterHasBeenSet)
  {
   payload.WithString("invalidParameter", m_invalidParameter);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
