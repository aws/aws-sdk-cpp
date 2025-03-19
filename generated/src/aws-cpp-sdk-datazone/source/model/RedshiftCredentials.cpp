/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/RedshiftCredentials.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

RedshiftCredentials::RedshiftCredentials(JsonView jsonValue)
{
  *this = jsonValue;
}

RedshiftCredentials& RedshiftCredentials::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("secretArn"))
  {
    m_secretArn = jsonValue.GetString("secretArn");
    m_secretArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("usernamePassword"))
  {
    m_usernamePassword = jsonValue.GetObject("usernamePassword");
    m_usernamePasswordHasBeenSet = true;
  }
  return *this;
}

JsonValue RedshiftCredentials::Jsonize() const
{
  JsonValue payload;

  if(m_secretArnHasBeenSet)
  {
   payload.WithString("secretArn", m_secretArn);

  }

  if(m_usernamePasswordHasBeenSet)
  {
   payload.WithObject("usernamePassword", m_usernamePassword.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
