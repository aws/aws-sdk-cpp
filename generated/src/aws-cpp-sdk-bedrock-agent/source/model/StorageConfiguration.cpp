/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/StorageConfiguration.h>
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

StorageConfiguration::StorageConfiguration() : 
    m_type(KnowledgeBaseStorageType::NOT_SET),
    m_typeHasBeenSet(false),
    m_opensearchServerlessConfigurationHasBeenSet(false),
    m_pineconeConfigurationHasBeenSet(false),
    m_redisEnterpriseCloudConfigurationHasBeenSet(false),
    m_rdsConfigurationHasBeenSet(false)
{
}

StorageConfiguration::StorageConfiguration(JsonView jsonValue) : 
    m_type(KnowledgeBaseStorageType::NOT_SET),
    m_typeHasBeenSet(false),
    m_opensearchServerlessConfigurationHasBeenSet(false),
    m_pineconeConfigurationHasBeenSet(false),
    m_redisEnterpriseCloudConfigurationHasBeenSet(false),
    m_rdsConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

StorageConfiguration& StorageConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = KnowledgeBaseStorageTypeMapper::GetKnowledgeBaseStorageTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("opensearchServerlessConfiguration"))
  {
    m_opensearchServerlessConfiguration = jsonValue.GetObject("opensearchServerlessConfiguration");

    m_opensearchServerlessConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pineconeConfiguration"))
  {
    m_pineconeConfiguration = jsonValue.GetObject("pineconeConfiguration");

    m_pineconeConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("redisEnterpriseCloudConfiguration"))
  {
    m_redisEnterpriseCloudConfiguration = jsonValue.GetObject("redisEnterpriseCloudConfiguration");

    m_redisEnterpriseCloudConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rdsConfiguration"))
  {
    m_rdsConfiguration = jsonValue.GetObject("rdsConfiguration");

    m_rdsConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue StorageConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", KnowledgeBaseStorageTypeMapper::GetNameForKnowledgeBaseStorageType(m_type));
  }

  if(m_opensearchServerlessConfigurationHasBeenSet)
  {
   payload.WithObject("opensearchServerlessConfiguration", m_opensearchServerlessConfiguration.Jsonize());

  }

  if(m_pineconeConfigurationHasBeenSet)
  {
   payload.WithObject("pineconeConfiguration", m_pineconeConfiguration.Jsonize());

  }

  if(m_redisEnterpriseCloudConfigurationHasBeenSet)
  {
   payload.WithObject("redisEnterpriseCloudConfiguration", m_redisEnterpriseCloudConfiguration.Jsonize());

  }

  if(m_rdsConfigurationHasBeenSet)
  {
   payload.WithObject("rdsConfiguration", m_rdsConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
