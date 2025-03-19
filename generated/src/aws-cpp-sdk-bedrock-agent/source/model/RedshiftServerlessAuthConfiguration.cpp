/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/RedshiftServerlessAuthConfiguration.h>
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

RedshiftServerlessAuthConfiguration::RedshiftServerlessAuthConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

RedshiftServerlessAuthConfiguration& RedshiftServerlessAuthConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = RedshiftServerlessAuthTypeMapper::GetRedshiftServerlessAuthTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("usernamePasswordSecretArn"))
  {
    m_usernamePasswordSecretArn = jsonValue.GetString("usernamePasswordSecretArn");
    m_usernamePasswordSecretArnHasBeenSet = true;
  }
  return *this;
}

JsonValue RedshiftServerlessAuthConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", RedshiftServerlessAuthTypeMapper::GetNameForRedshiftServerlessAuthType(m_type));
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
