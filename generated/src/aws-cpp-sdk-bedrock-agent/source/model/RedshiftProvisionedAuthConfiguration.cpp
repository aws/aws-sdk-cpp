/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/RedshiftProvisionedAuthConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

RedshiftProvisionedAuthConfiguration::RedshiftProvisionedAuthConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

RedshiftProvisionedAuthConfiguration& RedshiftProvisionedAuthConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = RedshiftProvisionedAuthTypeMapper::GetRedshiftProvisionedAuthTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("databaseUser"))
  {
    m_databaseUser = jsonValue.GetString("databaseUser");
    m_databaseUserHasBeenSet = true;
  }
  if(jsonValue.ValueExists("usernamePasswordSecretArn"))
  {
    m_usernamePasswordSecretArn = jsonValue.GetString("usernamePasswordSecretArn");
    m_usernamePasswordSecretArnHasBeenSet = true;
  }
  return *this;
}

JsonValue RedshiftProvisionedAuthConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", RedshiftProvisionedAuthTypeMapper::GetNameForRedshiftProvisionedAuthType(m_type));
  }

  if(m_databaseUserHasBeenSet)
  {
   payload.WithString("databaseUser", m_databaseUser);

  }

  if(m_usernamePasswordSecretArnHasBeenSet)
  {
   payload.WithString("usernamePasswordSecretArn", m_usernamePasswordSecretArn);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
