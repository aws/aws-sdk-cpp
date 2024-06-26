﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/RedisEnterpriseCloudConfiguration.h>
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

RedisEnterpriseCloudConfiguration::RedisEnterpriseCloudConfiguration() : 
    m_credentialsSecretArnHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_fieldMappingHasBeenSet(false),
    m_vectorIndexNameHasBeenSet(false)
{
}

RedisEnterpriseCloudConfiguration::RedisEnterpriseCloudConfiguration(JsonView jsonValue)
  : RedisEnterpriseCloudConfiguration()
{
  *this = jsonValue;
}

RedisEnterpriseCloudConfiguration& RedisEnterpriseCloudConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("credentialsSecretArn"))
  {
    m_credentialsSecretArn = jsonValue.GetString("credentialsSecretArn");

    m_credentialsSecretArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endpoint"))
  {
    m_endpoint = jsonValue.GetString("endpoint");

    m_endpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fieldMapping"))
  {
    m_fieldMapping = jsonValue.GetObject("fieldMapping");

    m_fieldMappingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vectorIndexName"))
  {
    m_vectorIndexName = jsonValue.GetString("vectorIndexName");

    m_vectorIndexNameHasBeenSet = true;
  }

  return *this;
}

JsonValue RedisEnterpriseCloudConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_credentialsSecretArnHasBeenSet)
  {
   payload.WithString("credentialsSecretArn", m_credentialsSecretArn);

  }

  if(m_endpointHasBeenSet)
  {
   payload.WithString("endpoint", m_endpoint);

  }

  if(m_fieldMappingHasBeenSet)
  {
   payload.WithObject("fieldMapping", m_fieldMapping.Jsonize());

  }

  if(m_vectorIndexNameHasBeenSet)
  {
   payload.WithString("vectorIndexName", m_vectorIndexName);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
