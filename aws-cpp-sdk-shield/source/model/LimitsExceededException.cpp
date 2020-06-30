/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/shield/model/LimitsExceededException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Shield
{
namespace Model
{

LimitsExceededException::LimitsExceededException() : 
    m_messageHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false)
{
}

LimitsExceededException::LimitsExceededException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false)
{
  *this = jsonValue;
}

LimitsExceededException& LimitsExceededException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Limit"))
  {
    m_limit = jsonValue.GetInt64("Limit");

    m_limitHasBeenSet = true;
  }

  return *this;
}

JsonValue LimitsExceededException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  if(m_limitHasBeenSet)
  {
   payload.WithInt64("Limit", m_limit);

  }

  return payload;
}

} // namespace Model
} // namespace Shield
} // namespace Aws
