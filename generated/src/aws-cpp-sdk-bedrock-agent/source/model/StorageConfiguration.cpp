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

StorageConfiguration::StorageConfiguration(JsonView jsonValue)
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
  if(jsonValue.ValueExists("opensearchManagedClusterConfiguration"))
  {
    m_opensearchManagedClusterConfiguration = jsonValue.GetObject("opensearchManagedClusterConfiguration");
    m_opensearchManagedClusterConfigurationHasBeenSet = true;
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
  if(jsonValue.ValueExists("mongoDbAtlasConfiguration"))
  {
    m_mongoDbAtlasConfiguration = jsonValue.GetObject("mongoDbAtlasConfiguration");
    m_mongoDbAtlasConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("neptuneAnalyticsConfiguration"))
  {
    m_neptuneAnalyticsConfiguration = jsonValue.GetObject("neptuneAnalyticsConfiguration");
    m_neptuneAnalyticsConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("s3VectorsConfiguration"))
  {
    m_s3VectorsConfiguration = jsonValue.GetObject("s3VectorsConfiguration");
    m_s3VectorsConfigurationHasBeenSet = true;
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

  if(m_opensearchManagedClusterConfigurationHasBeenSet)
  {
   payload.WithObject("opensearchManagedClusterConfiguration", m_opensearchManagedClusterConfiguration.Jsonize());

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

  if(m_mongoDbAtlasConfigurationHasBeenSet)
  {
   payload.WithObject("mongoDbAtlasConfiguration", m_mongoDbAtlasConfiguration.Jsonize());

  }

  if(m_neptuneAnalyticsConfigurationHasBeenSet)
  {
   payload.WithObject("neptuneAnalyticsConfiguration", m_neptuneAnalyticsConfiguration.Jsonize());

  }

  if(m_s3VectorsConfigurationHasBeenSet)
  {
   payload.WithObject("s3VectorsConfiguration", m_s3VectorsConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
