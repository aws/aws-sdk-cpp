/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/StatusDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRoomsML
{
namespace Model
{

StatusDetails::StatusDetails() : 
    m_messageHasBeenSet(false),
    m_statusCodeHasBeenSet(false)
{
}

StatusDetails::StatusDetails(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_statusCodeHasBeenSet(false)
{
  *this = jsonValue;
}

StatusDetails& StatusDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusCode"))
  {
    m_statusCode = jsonValue.GetString("statusCode");

    m_statusCodeHasBeenSet = true;
  }

  return *this;
}

JsonValue StatusDetails::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_statusCodeHasBeenSet)
  {
   payload.WithString("statusCode", m_statusCode);

  }

  return payload;
}

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
