/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/Credentials.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMR
{
namespace Model
{

Credentials::Credentials() : 
    m_usernamePasswordHasBeenSet(false)
{
}

Credentials::Credentials(JsonView jsonValue) : 
    m_usernamePasswordHasBeenSet(false)
{
  *this = jsonValue;
}

Credentials& Credentials::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UsernamePassword"))
  {
    m_usernamePassword = jsonValue.GetObject("UsernamePassword");

    m_usernamePasswordHasBeenSet = true;
  }

  return *this;
}

JsonValue Credentials::Jsonize() const
{
  JsonValue payload;

  if(m_usernamePasswordHasBeenSet)
  {
   payload.WithObject("UsernamePassword", m_usernamePassword.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws
