/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/OpsItemAlreadyExistsException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

OpsItemAlreadyExistsException::OpsItemAlreadyExistsException() : 
    m_messageHasBeenSet(false),
    m_opsItemIdHasBeenSet(false)
{
}

OpsItemAlreadyExistsException::OpsItemAlreadyExistsException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_opsItemIdHasBeenSet(false)
{
  *this = jsonValue;
}

OpsItemAlreadyExistsException& OpsItemAlreadyExistsException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OpsItemId"))
  {
    m_opsItemId = jsonValue.GetString("OpsItemId");

    m_opsItemIdHasBeenSet = true;
  }

  return *this;
}

JsonValue OpsItemAlreadyExistsException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_opsItemIdHasBeenSet)
  {
   payload.WithString("OpsItemId", m_opsItemId);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
