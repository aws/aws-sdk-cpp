/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/KnowledgeBaseStorageType.h>
#include <aws/bedrock-agent/model/OpenSearchServerlessConfiguration.h>
#include <aws/bedrock-agent/model/OpenSearchManagedClusterConfiguration.h>
#include <aws/bedrock-agent/model/PineconeConfiguration.h>
#include <aws/bedrock-agent/model/RedisEnterpriseCloudConfiguration.h>
#include <aws/bedrock-agent/model/RdsConfiguration.h>
#include <aws/bedrock-agent/model/MongoDbAtlasConfiguration.h>
#include <aws/bedrock-agent/model/NeptuneAnalyticsConfiguration.h>
#include <aws/bedrock-agent/model/S3VectorsConfiguration.h>
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
    AWS_BEDROCKAGENT_API StorageConfiguration() = default;
    AWS_BEDROCKAGENT_API StorageConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API StorageConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The vector store service in which the knowledge base is stored.</p>
     */
    inline KnowledgeBaseStorageType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(KnowledgeBaseStorageType value) { m_typeHasBeenSet = true; m_type = value; }
    inline StorageConfiguration& WithType(KnowledgeBaseStorageType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the storage configuration of the knowledge base in Amazon OpenSearch
     * Service.</p>
     */
    inline const OpenSearchServerlessConfiguration& GetOpensearchServerlessConfiguration() const { return m_opensearchServerlessConfiguration; }
    inline bool OpensearchServerlessConfigurationHasBeenSet() const { return m_opensearchServerlessConfigurationHasBeenSet; }
    template<typename OpensearchServerlessConfigurationT = OpenSearchServerlessConfiguration>
    void SetOpensearchServerlessConfiguration(OpensearchServerlessConfigurationT&& value) { m_opensearchServerlessConfigurationHasBeenSet = true; m_opensearchServerlessConfiguration = std::forward<OpensearchServerlessConfigurationT>(value); }
    template<typename OpensearchServerlessConfigurationT = OpenSearchServerlessConfiguration>
    StorageConfiguration& WithOpensearchServerlessConfiguration(OpensearchServerlessConfigurationT&& value) { SetOpensearchServerlessConfiguration(std::forward<OpensearchServerlessConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about the storage configuration of the knowledge base in
     * OpenSearch Managed Cluster. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/knowledge-base-setup-osm.html">Create
     * a vector index in Amazon OpenSearch Service</a>.</p>
     */
    inline const OpenSearchManagedClusterConfiguration& GetOpensearchManagedClusterConfiguration() const { return m_opensearchManagedClusterConfiguration; }
    inline bool OpensearchManagedClusterConfigurationHasBeenSet() const { return m_opensearchManagedClusterConfigurationHasBeenSet; }
    template<typename OpensearchManagedClusterConfigurationT = OpenSearchManagedClusterConfiguration>
    void SetOpensearchManagedClusterConfiguration(OpensearchManagedClusterConfigurationT&& value) { m_opensearchManagedClusterConfigurationHasBeenSet = true; m_opensearchManagedClusterConfiguration = std::forward<OpensearchManagedClusterConfigurationT>(value); }
    template<typename OpensearchManagedClusterConfigurationT = OpenSearchManagedClusterConfiguration>
    StorageConfiguration& WithOpensearchManagedClusterConfiguration(OpensearchManagedClusterConfigurationT&& value) { SetOpensearchManagedClusterConfiguration(std::forward<OpensearchManagedClusterConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the storage configuration of the knowledge base in Pinecone.</p>
     */
    inline const PineconeConfiguration& GetPineconeConfiguration() const { return m_pineconeConfiguration; }
    inline bool PineconeConfigurationHasBeenSet() const { return m_pineconeConfigurationHasBeenSet; }
    template<typename PineconeConfigurationT = PineconeConfiguration>
    void SetPineconeConfiguration(PineconeConfigurationT&& value) { m_pineconeConfigurationHasBeenSet = true; m_pineconeConfiguration = std::forward<PineconeConfigurationT>(value); }
    template<typename PineconeConfigurationT = PineconeConfiguration>
    StorageConfiguration& WithPineconeConfiguration(PineconeConfigurationT&& value) { SetPineconeConfiguration(std::forward<PineconeConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the storage configuration of the knowledge base in Redis Enterprise
     * Cloud.</p>
     */
    inline const RedisEnterpriseCloudConfiguration& GetRedisEnterpriseCloudConfiguration() const { return m_redisEnterpriseCloudConfiguration; }
    inline bool RedisEnterpriseCloudConfigurationHasBeenSet() const { return m_redisEnterpriseCloudConfigurationHasBeenSet; }
    template<typename RedisEnterpriseCloudConfigurationT = RedisEnterpriseCloudConfiguration>
    void SetRedisEnterpriseCloudConfiguration(RedisEnterpriseCloudConfigurationT&& value) { m_redisEnterpriseCloudConfigurationHasBeenSet = true; m_redisEnterpriseCloudConfiguration = std::forward<RedisEnterpriseCloudConfigurationT>(value); }
    template<typename RedisEnterpriseCloudConfigurationT = RedisEnterpriseCloudConfiguration>
    StorageConfiguration& WithRedisEnterpriseCloudConfiguration(RedisEnterpriseCloudConfigurationT&& value) { SetRedisEnterpriseCloudConfiguration(std::forward<RedisEnterpriseCloudConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about the storage configuration of the knowledge base in
     * Amazon RDS. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/knowledge-base-setup-rds.html">Create
     * a vector index in Amazon RDS</a>.</p>
     */
    inline const RdsConfiguration& GetRdsConfiguration() const { return m_rdsConfiguration; }
    inline bool RdsConfigurationHasBeenSet() const { return m_rdsConfigurationHasBeenSet; }
    template<typename RdsConfigurationT = RdsConfiguration>
    void SetRdsConfiguration(RdsConfigurationT&& value) { m_rdsConfigurationHasBeenSet = true; m_rdsConfiguration = std::forward<RdsConfigurationT>(value); }
    template<typename RdsConfigurationT = RdsConfiguration>
    StorageConfiguration& WithRdsConfiguration(RdsConfigurationT&& value) { SetRdsConfiguration(std::forward<RdsConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the storage configuration of the knowledge base in MongoDB
     * Atlas.</p>
     */
    inline const MongoDbAtlasConfiguration& GetMongoDbAtlasConfiguration() const { return m_mongoDbAtlasConfiguration; }
    inline bool MongoDbAtlasConfigurationHasBeenSet() const { return m_mongoDbAtlasConfigurationHasBeenSet; }
    template<typename MongoDbAtlasConfigurationT = MongoDbAtlasConfiguration>
    void SetMongoDbAtlasConfiguration(MongoDbAtlasConfigurationT&& value) { m_mongoDbAtlasConfigurationHasBeenSet = true; m_mongoDbAtlasConfiguration = std::forward<MongoDbAtlasConfigurationT>(value); }
    template<typename MongoDbAtlasConfigurationT = MongoDbAtlasConfiguration>
    StorageConfiguration& WithMongoDbAtlasConfiguration(MongoDbAtlasConfigurationT&& value) { SetMongoDbAtlasConfiguration(std::forward<MongoDbAtlasConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about the Neptune Analytics configuration of the knowledge
     * base in Amazon Neptune. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/knowledge-base-setup-neptune.html">Create
     * a vector index in Amazon Neptune Analytics.</a>.</p>
     */
    inline const NeptuneAnalyticsConfiguration& GetNeptuneAnalyticsConfiguration() const { return m_neptuneAnalyticsConfiguration; }
    inline bool NeptuneAnalyticsConfigurationHasBeenSet() const { return m_neptuneAnalyticsConfigurationHasBeenSet; }
    template<typename NeptuneAnalyticsConfigurationT = NeptuneAnalyticsConfiguration>
    void SetNeptuneAnalyticsConfiguration(NeptuneAnalyticsConfigurationT&& value) { m_neptuneAnalyticsConfigurationHasBeenSet = true; m_neptuneAnalyticsConfiguration = std::forward<NeptuneAnalyticsConfigurationT>(value); }
    template<typename NeptuneAnalyticsConfigurationT = NeptuneAnalyticsConfiguration>
    StorageConfiguration& WithNeptuneAnalyticsConfiguration(NeptuneAnalyticsConfigurationT&& value) { SetNeptuneAnalyticsConfiguration(std::forward<NeptuneAnalyticsConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings for storing knowledge base data using S3 vectors.
     * This includes vector index information and S3 bucket details for vector
     * storage.</p>
     */
    inline const S3VectorsConfiguration& GetS3VectorsConfiguration() const { return m_s3VectorsConfiguration; }
    inline bool S3VectorsConfigurationHasBeenSet() const { return m_s3VectorsConfigurationHasBeenSet; }
    template<typename S3VectorsConfigurationT = S3VectorsConfiguration>
    void SetS3VectorsConfiguration(S3VectorsConfigurationT&& value) { m_s3VectorsConfigurationHasBeenSet = true; m_s3VectorsConfiguration = std::forward<S3VectorsConfigurationT>(value); }
    template<typename S3VectorsConfigurationT = S3VectorsConfiguration>
    StorageConfiguration& WithS3VectorsConfiguration(S3VectorsConfigurationT&& value) { SetS3VectorsConfiguration(std::forward<S3VectorsConfigurationT>(value)); return *this;}
    ///@}
  private:

    KnowledgeBaseStorageType m_type{KnowledgeBaseStorageType::NOT_SET};
    bool m_typeHasBeenSet = false;

    OpenSearchServerlessConfiguration m_opensearchServerlessConfiguration;
    bool m_opensearchServerlessConfigurationHasBeenSet = false;

    OpenSearchManagedClusterConfiguration m_opensearchManagedClusterConfiguration;
    bool m_opensearchManagedClusterConfigurationHasBeenSet = false;

    PineconeConfiguration m_pineconeConfiguration;
    bool m_pineconeConfigurationHasBeenSet = false;

    RedisEnterpriseCloudConfiguration m_redisEnterpriseCloudConfiguration;
    bool m_redisEnterpriseCloudConfigurationHasBeenSet = false;

    RdsConfiguration m_rdsConfiguration;
    bool m_rdsConfigurationHasBeenSet = false;

    MongoDbAtlasConfiguration m_mongoDbAtlasConfiguration;
    bool m_mongoDbAtlasConfigurationHasBeenSet = false;

    NeptuneAnalyticsConfiguration m_neptuneAnalyticsConfiguration;
    bool m_neptuneAnalyticsConfigurationHasBeenSet = false;

    S3VectorsConfiguration m_s3VectorsConfiguration;
    bool m_s3VectorsConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
