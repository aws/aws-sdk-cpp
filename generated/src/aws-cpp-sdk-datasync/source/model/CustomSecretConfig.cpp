/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/CustomSecretConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataSync
{
namespace Model
{

CustomSecretConfig::CustomSecretConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

CustomSecretConfig& CustomSecretConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SecretArn"))
  {
    m_secretArn = jsonValue.GetString("SecretArn");
    m_secretArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SecretAccessRoleArn"))
  {
    m_secretAccessRoleArn = jsonValue.GetString("SecretAccessRoleArn");
    m_secretAccessRoleArnHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomSecretConfig::Jsonize() const
{
  JsonValue payload;

  if(m_secretArnHasBeenSet)
  {
   payload.WithString("SecretArn", m_secretArn);

  }

  if(m_secretAccessRoleArnHasBeenSet)
  {
   payload.WithString("SecretAccessRoleArn", m_secretAccessRoleArn);

  }

  return payload;
}

} // namespace Model
} // namespace DataSync
} // namespace Aws
