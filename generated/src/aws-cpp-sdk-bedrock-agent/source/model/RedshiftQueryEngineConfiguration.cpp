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

RedshiftQueryEngineConfiguration::RedshiftQueryEngineConfiguration() : 
    m_provisionedConfigurationHasBeenSet(false),
    m_serverlessConfigurationHasBeenSet(false),
    m_type(RedshiftQueryEngineType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

RedshiftQueryEngineConfiguration::RedshiftQueryEngineConfiguration(JsonView jsonValue)
  : RedshiftQueryEngineConfiguration()
{
  *this = jsonValue;
}

RedshiftQueryEngineConfiguration& RedshiftQueryEngineConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("provisionedConfiguration"))
  {
    m_provisionedConfiguration = jsonValue.GetObject("provisionedConfiguration");

    m_provisionedConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serverlessConfiguration"))
  {
    m_serverlessConfiguration = jsonValue.GetObject("serverlessConfiguration");

    m_serverlessConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = RedshiftQueryEngineTypeMapper::GetRedshiftQueryEngineTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue RedshiftQueryEngineConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_provisionedConfigurationHasBeenSet)
  {
   payload.WithObject("provisionedConfiguration", m_provisionedConfiguration.Jsonize());

  }

  if(m_serverlessConfigurationHasBeenSet)
  {
   payload.WithObject("serverlessConfiguration", m_serverlessConfiguration.Jsonize());

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", RedshiftQueryEngineTypeMapper::GetNameForRedshiftQueryEngineType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
