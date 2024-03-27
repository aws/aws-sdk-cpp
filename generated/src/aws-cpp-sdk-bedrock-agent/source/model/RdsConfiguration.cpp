/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/RdsConfiguration.h>
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

RdsConfiguration::RdsConfiguration() : 
    m_credentialsSecretArnHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_fieldMappingHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_tableNameHasBeenSet(false)
{
}

RdsConfiguration::RdsConfiguration(JsonView jsonValue) : 
    m_credentialsSecretArnHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_fieldMappingHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_tableNameHasBeenSet(false)
{
  *this = jsonValue;
}

RdsConfiguration& RdsConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("credentialsSecretArn"))
  {
    m_credentialsSecretArn = jsonValue.GetString("credentialsSecretArn");

    m_credentialsSecretArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("databaseName"))
  {
    m_databaseName = jsonValue.GetString("databaseName");

    m_databaseNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fieldMapping"))
  {
    m_fieldMapping = jsonValue.GetObject("fieldMapping");

    m_fieldMappingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceArn"))
  {
    m_resourceArn = jsonValue.GetString("resourceArn");

    m_resourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tableName"))
  {
    m_tableName = jsonValue.GetString("tableName");

    m_tableNameHasBeenSet = true;
  }

  return *this;
}

JsonValue RdsConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_credentialsSecretArnHasBeenSet)
  {
   payload.WithString("credentialsSecretArn", m_credentialsSecretArn);

  }

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("databaseName", m_databaseName);

  }

  if(m_fieldMappingHasBeenSet)
  {
   payload.WithObject("fieldMapping", m_fieldMapping.Jsonize());

  }

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("resourceArn", m_resourceArn);

  }

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("tableName", m_tableName);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
