/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs/model/ConflictException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IVS
{
namespace Model
{

ConflictException::ConflictException() : 
    m_exceptionMessageHasBeenSet(false)
{
}

ConflictException::ConflictException(JsonView jsonValue) : 
    m_exceptionMessageHasBeenSet(false)
{
  *this = jsonValue;
}

ConflictException& ConflictException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("exceptionMessage"))
  {
    m_exceptionMessage = jsonValue.GetString("exceptionMessage");

    m_exceptionMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue ConflictException::Jsonize() const
{
  JsonValue payload;

  if(m_exceptionMessageHasBeenSet)
  {
   payload.WithString("exceptionMessage", m_exceptionMessage);

  }

  return payload;
}

} // namespace Model
} // namespace IVS
} // namespace Aws
