/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/RedshiftQueryEngineConfiguration.h>
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

RedshiftQueryEngineConfiguration::RedshiftQueryEngineConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

RedshiftQueryEngineConfiguration& RedshiftQueryEngineConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = RedshiftQueryEngineTypeMapper::GetRedshiftQueryEngineTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("serverlessConfiguration"))
  {
    m_serverlessConfiguration = jsonValue.GetObject("serverlessConfiguration");
    m_serverlessConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("provisionedConfiguration"))
  {
    m_provisionedConfiguration = jsonValue.GetObject("provisionedConfiguration");
    m_provisionedConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue RedshiftQueryEngineConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", RedshiftQueryEngineTypeMapper::GetNameForRedshiftQueryEngineType(m_type));
  }

  if(m_serverlessConfigurationHasBeenSet)
  {
   payload.WithObject("serverlessConfiguration", m_serverlessConfiguration.Jsonize());

  }

  if(m_provisionedConfigurationHasBeenSet)
  {
   payload.WithObject("provisionedConfiguration", m_provisionedConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
