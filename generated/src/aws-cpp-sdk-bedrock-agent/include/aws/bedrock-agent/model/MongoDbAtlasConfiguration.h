/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/MongoDbAtlasFieldMapping.h>
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
   * <p>Contains details about the storage configuration of the knowledge base in
   * MongoDB Atlas. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/MongoDbAtlasConfiguration">AWS
   * API Reference</a></p>
   */
  class MongoDbAtlasConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API MongoDbAtlasConfiguration() = default;
    AWS_BEDROCKAGENT_API MongoDbAtlasConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API MongoDbAtlasConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The endpoint URL of your MongoDB Atlas cluster for your knowledge base.</p>
     */
    inline const Aws::String& GetEndpoint() const { return m_endpoint; }
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
    template<typename EndpointT = Aws::String>
    void SetEndpoint(EndpointT&& value) { m_endpointHasBeenSet = true; m_endpoint = std::forward<EndpointT>(value); }
    template<typename EndpointT = Aws::String>
    MongoDbAtlasConfiguration& WithEndpoint(EndpointT&& value) { SetEndpoint(std::forward<EndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database name in your MongoDB Atlas cluster for your knowledge base.</p>
     */
    inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    template<typename DatabaseNameT = Aws::String>
    void SetDatabaseName(DatabaseNameT&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::forward<DatabaseNameT>(value); }
    template<typename DatabaseNameT = Aws::String>
    MongoDbAtlasConfiguration& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collection name of the knowledge base in MongoDB Atlas.</p>
     */
    inline const Aws::String& GetCollectionName() const { return m_collectionName; }
    inline bool CollectionNameHasBeenSet() const { return m_collectionNameHasBeenSet; }
    template<typename CollectionNameT = Aws::String>
    void SetCollectionName(CollectionNameT&& value) { m_collectionNameHasBeenSet = true; m_collectionName = std::forward<CollectionNameT>(value); }
    template<typename CollectionNameT = Aws::String>
    MongoDbAtlasConfiguration& WithCollectionName(CollectionNameT&& value) { SetCollectionName(std::forward<CollectionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the MongoDB Atlas vector search index.</p>
     */
    inline const Aws::String& GetVectorIndexName() const { return m_vectorIndexName; }
    inline bool VectorIndexNameHasBeenSet() const { return m_vectorIndexNameHasBeenSet; }
    template<typename VectorIndexNameT = Aws::String>
    void SetVectorIndexName(VectorIndexNameT&& value) { m_vectorIndexNameHasBeenSet = true; m_vectorIndexName = std::forward<VectorIndexNameT>(value); }
    template<typename VectorIndexNameT = Aws::String>
    MongoDbAtlasConfiguration& WithVectorIndexName(VectorIndexNameT&& value) { SetVectorIndexName(std::forward<VectorIndexNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the secret that you created in Secrets
     * Manager that contains user credentials for your MongoDB Atlas cluster.</p>
     */
    inline const Aws::String& GetCredentialsSecretArn() const { return m_credentialsSecretArn; }
    inline bool CredentialsSecretArnHasBeenSet() const { return m_credentialsSecretArnHasBeenSet; }
    template<typename CredentialsSecretArnT = Aws::String>
    void SetCredentialsSecretArn(CredentialsSecretArnT&& value) { m_credentialsSecretArnHasBeenSet = true; m_credentialsSecretArn = std::forward<CredentialsSecretArnT>(value); }
    template<typename CredentialsSecretArnT = Aws::String>
    MongoDbAtlasConfiguration& WithCredentialsSecretArn(CredentialsSecretArnT&& value) { SetCredentialsSecretArn(std::forward<CredentialsSecretArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the names of the fields to which to map information about the vector
     * store.</p>
     */
    inline const MongoDbAtlasFieldMapping& GetFieldMapping() const { return m_fieldMapping; }
    inline bool FieldMappingHasBeenSet() const { return m_fieldMappingHasBeenSet; }
    template<typename FieldMappingT = MongoDbAtlasFieldMapping>
    void SetFieldMapping(FieldMappingT&& value) { m_fieldMappingHasBeenSet = true; m_fieldMapping = std::forward<FieldMappingT>(value); }
    template<typename FieldMappingT = MongoDbAtlasFieldMapping>
    MongoDbAtlasConfiguration& WithFieldMapping(FieldMappingT&& value) { SetFieldMapping(std::forward<FieldMappingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the VPC endpoint service in your account that is connected to
     * your MongoDB Atlas cluster.</p>
     */
    inline const Aws::String& GetEndpointServiceName() const { return m_endpointServiceName; }
    inline bool EndpointServiceNameHasBeenSet() const { return m_endpointServiceNameHasBeenSet; }
    template<typename EndpointServiceNameT = Aws::String>
    void SetEndpointServiceName(EndpointServiceNameT&& value) { m_endpointServiceNameHasBeenSet = true; m_endpointServiceName = std::forward<EndpointServiceNameT>(value); }
    template<typename EndpointServiceNameT = Aws::String>
    MongoDbAtlasConfiguration& WithEndpointServiceName(EndpointServiceNameT&& value) { SetEndpointServiceName(std::forward<EndpointServiceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the text search index in the MongoDB collection. This is required
     * for using the hybrid search feature.</p>
     */
    inline const Aws::String& GetTextIndexName() const { return m_textIndexName; }
    inline bool TextIndexNameHasBeenSet() const { return m_textIndexNameHasBeenSet; }
    template<typename TextIndexNameT = Aws::String>
    void SetTextIndexName(TextIndexNameT&& value) { m_textIndexNameHasBeenSet = true; m_textIndexName = std::forward<TextIndexNameT>(value); }
    template<typename TextIndexNameT = Aws::String>
    MongoDbAtlasConfiguration& WithTextIndexName(TextIndexNameT&& value) { SetTextIndexName(std::forward<TextIndexNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_collectionName;
    bool m_collectionNameHasBeenSet = false;

    Aws::String m_vectorIndexName;
    bool m_vectorIndexNameHasBeenSet = false;

    Aws::String m_credentialsSecretArn;
    bool m_credentialsSecretArnHasBeenSet = false;

    MongoDbAtlasFieldMapping m_fieldMapping;
    bool m_fieldMappingHasBeenSet = false;

    Aws::String m_endpointServiceName;
    bool m_endpointServiceNameHasBeenSet = false;

    Aws::String m_textIndexName;
    bool m_textIndexNameHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
