/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/DisconnectReason.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

DisconnectReason::DisconnectReason() : 
    m_codeHasBeenSet(false)
{
}

DisconnectReason::DisconnectReason(JsonView jsonValue) : 
    m_codeHasBeenSet(false)
{
  *this = jsonValue;
}

DisconnectReason& DisconnectReason::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Code"))
  {
    m_code = jsonValue.GetString("Code");

    m_codeHasBeenSet = true;
  }

  return *this;
}

JsonValue DisconnectReason::Jsonize() const
{
  JsonValue payload;

  if(m_codeHasBeenSet)
  {
   payload.WithString("Code", m_code);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
