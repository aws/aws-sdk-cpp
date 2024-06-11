﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/MongoDbAtlasConfiguration.h>
#include <aws/bedrock-agent/model/OpenSearchServerlessConfiguration.h>
#include <aws/bedrock-agent/model/PineconeConfiguration.h>
#include <aws/bedrock-agent/model/RdsConfiguration.h>
#include <aws/bedrock-agent/model/RedisEnterpriseCloudConfiguration.h>
#include <aws/bedrock-agent/model/KnowledgeBaseStorageType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>Contains the storage configuration of the knowledge base.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/StorageConfiguration">AWS
   * API Reference</a></p>
   */
  class StorageConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API StorageConfiguration();
    AWS_BEDROCKAGENT_API StorageConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API StorageConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains the storage configuration of the knowledge base in MongoDB
     * Atlas.</p>
     */
    inline const MongoDbAtlasConfiguration& GetMongoDbAtlasConfiguration() const{ return m_mongoDbAtlasConfiguration; }
    inline bool MongoDbAtlasConfigurationHasBeenSet() const { return m_mongoDbAtlasConfigurationHasBeenSet; }
    inline void SetMongoDbAtlasConfiguration(const MongoDbAtlasConfiguration& value) { m_mongoDbAtlasConfigurationHasBeenSet = true; m_mongoDbAtlasConfiguration = value; }
    inline void SetMongoDbAtlasConfiguration(MongoDbAtlasConfiguration&& value) { m_mongoDbAtlasConfigurationHasBeenSet = true; m_mongoDbAtlasConfiguration = std::move(value); }
    inline StorageConfiguration& WithMongoDbAtlasConfiguration(const MongoDbAtlasConfiguration& value) { SetMongoDbAtlasConfiguration(value); return *this;}
    inline StorageConfiguration& WithMongoDbAtlasConfiguration(MongoDbAtlasConfiguration&& value) { SetMongoDbAtlasConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the storage configuration of the knowledge base in Amazon OpenSearch
     * Service.</p>
     */
    inline const OpenSearchServerlessConfiguration& GetOpensearchServerlessConfiguration() const{ return m_opensearchServerlessConfiguration; }
    inline bool OpensearchServerlessConfigurationHasBeenSet() const { return m_opensearchServerlessConfigurationHasBeenSet; }
    inline void SetOpensearchServerlessConfiguration(const OpenSearchServerlessConfiguration& value) { m_opensearchServerlessConfigurationHasBeenSet = true; m_opensearchServerlessConfiguration = value; }
    inline void SetOpensearchServerlessConfiguration(OpenSearchServerlessConfiguration&& value) { m_opensearchServerlessConfigurationHasBeenSet = true; m_opensearchServerlessConfiguration = std::move(value); }
    inline StorageConfiguration& WithOpensearchServerlessConfiguration(const OpenSearchServerlessConfiguration& value) { SetOpensearchServerlessConfiguration(value); return *this;}
    inline StorageConfiguration& WithOpensearchServerlessConfiguration(OpenSearchServerlessConfiguration&& value) { SetOpensearchServerlessConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the storage configuration of the knowledge base in Pinecone.</p>
     */
    inline const PineconeConfiguration& GetPineconeConfiguration() const{ return m_pineconeConfiguration; }
    inline bool PineconeConfigurationHasBeenSet() const { return m_pineconeConfigurationHasBeenSet; }
    inline void SetPineconeConfiguration(const PineconeConfiguration& value) { m_pineconeConfigurationHasBeenSet = true; m_pineconeConfiguration = value; }
    inline void SetPineconeConfiguration(PineconeConfiguration&& value) { m_pineconeConfigurationHasBeenSet = true; m_pineconeConfiguration = std::move(value); }
    inline StorageConfiguration& WithPineconeConfiguration(const PineconeConfiguration& value) { SetPineconeConfiguration(value); return *this;}
    inline StorageConfiguration& WithPineconeConfiguration(PineconeConfiguration&& value) { SetPineconeConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about the storage configuration of the knowledge base in
     * Amazon RDS. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/knowledge-base-setup-rds.html">Create
     * a vector index in Amazon RDS</a>.</p>
     */
    inline const RdsConfiguration& GetRdsConfiguration() const{ return m_rdsConfiguration; }
    inline bool RdsConfigurationHasBeenSet() const { return m_rdsConfigurationHasBeenSet; }
    inline void SetRdsConfiguration(const RdsConfiguration& value) { m_rdsConfigurationHasBeenSet = true; m_rdsConfiguration = value; }
    inline void SetRdsConfiguration(RdsConfiguration&& value) { m_rdsConfigurationHasBeenSet = true; m_rdsConfiguration = std::move(value); }
    inline StorageConfiguration& WithRdsConfiguration(const RdsConfiguration& value) { SetRdsConfiguration(value); return *this;}
    inline StorageConfiguration& WithRdsConfiguration(RdsConfiguration&& value) { SetRdsConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the storage configuration of the knowledge base in Redis Enterprise
     * Cloud.</p>
     */
    inline const RedisEnterpriseCloudConfiguration& GetRedisEnterpriseCloudConfiguration() const{ return m_redisEnterpriseCloudConfiguration; }
    inline bool RedisEnterpriseCloudConfigurationHasBeenSet() const { return m_redisEnterpriseCloudConfigurationHasBeenSet; }
    inline void SetRedisEnterpriseCloudConfiguration(const RedisEnterpriseCloudConfiguration& value) { m_redisEnterpriseCloudConfigurationHasBeenSet = true; m_redisEnterpriseCloudConfiguration = value; }
    inline void SetRedisEnterpriseCloudConfiguration(RedisEnterpriseCloudConfiguration&& value) { m_redisEnterpriseCloudConfigurationHasBeenSet = true; m_redisEnterpriseCloudConfiguration = std::move(value); }
    inline StorageConfiguration& WithRedisEnterpriseCloudConfiguration(const RedisEnterpriseCloudConfiguration& value) { SetRedisEnterpriseCloudConfiguration(value); return *this;}
    inline StorageConfiguration& WithRedisEnterpriseCloudConfiguration(RedisEnterpriseCloudConfiguration&& value) { SetRedisEnterpriseCloudConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The vector store service in which the knowledge base is stored.</p>
     */
    inline const KnowledgeBaseStorageType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const KnowledgeBaseStorageType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(KnowledgeBaseStorageType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline StorageConfiguration& WithType(const KnowledgeBaseStorageType& value) { SetType(value); return *this;}
    inline StorageConfiguration& WithType(KnowledgeBaseStorageType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    MongoDbAtlasConfiguration m_mongoDbAtlasConfiguration;
    bool m_mongoDbAtlasConfigurationHasBeenSet = false;

    OpenSearchServerlessConfiguration m_opensearchServerlessConfiguration;
    bool m_opensearchServerlessConfigurationHasBeenSet = false;

    PineconeConfiguration m_pineconeConfiguration;
    bool m_pineconeConfigurationHasBeenSet = false;

    RdsConfiguration m_rdsConfiguration;
    bool m_rdsConfigurationHasBeenSet = false;

    RedisEnterpriseCloudConfiguration m_redisEnterpriseCloudConfiguration;
    bool m_redisEnterpriseCloudConfigurationHasBeenSet = false;

    KnowledgeBaseStorageType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
