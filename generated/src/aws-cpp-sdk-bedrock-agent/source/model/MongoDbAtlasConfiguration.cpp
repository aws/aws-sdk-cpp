/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/MongoDbAtlasConfiguration.h>
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

MongoDbAtlasConfiguration::MongoDbAtlasConfiguration() : 
    m_collectionNameHasBeenSet(false),
    m_credentialsSecretArnHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_endpointServiceNameHasBeenSet(false),
    m_fieldMappingHasBeenSet(false),
    m_vectorIndexNameHasBeenSet(false)
{
}

MongoDbAtlasConfiguration::MongoDbAtlasConfiguration(JsonView jsonValue) : 
    m_collectionNameHasBeenSet(false),
    m_credentialsSecretArnHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_endpointServiceNameHasBeenSet(false),
    m_fieldMappingHasBeenSet(false),
    m_vectorIndexNameHasBeenSet(false)
{
  *this = jsonValue;
}

MongoDbAtlasConfiguration& MongoDbAtlasConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("collectionName"))
  {
    m_collectionName = jsonValue.GetString("collectionName");

    m_collectionNameHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("endpoint"))
  {
    m_endpoint = jsonValue.GetString("endpoint");

    m_endpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endpointServiceName"))
  {
    m_endpointServiceName = jsonValue.GetString("endpointServiceName");

    m_endpointServiceNameHasBeenSet = true;
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

JsonValue MongoDbAtlasConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_collectionNameHasBeenSet)
  {
   payload.WithString("collectionName", m_collectionName);

  }

  if(m_credentialsSecretArnHasBeenSet)
  {
   payload.WithString("credentialsSecretArn", m_credentialsSecretArn);

  }

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("databaseName", m_databaseName);

  }

  if(m_endpointHasBeenSet)
  {
   payload.WithString("endpoint", m_endpoint);

  }

  if(m_endpointServiceNameHasBeenSet)
  {
   payload.WithString("endpointServiceName", m_endpointServiceName);

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
