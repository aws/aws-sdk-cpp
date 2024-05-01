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
    AWS_BEDROCKAGENT_API MongoDbAtlasConfiguration();
    AWS_BEDROCKAGENT_API MongoDbAtlasConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API MongoDbAtlasConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The collection name of the knowledge base in MongoDB Atlas.</p>
     */
    inline const Aws::String& GetCollectionName() const{ return m_collectionName; }

    /**
     * <p>The collection name of the knowledge base in MongoDB Atlas.</p>
     */
    inline bool CollectionNameHasBeenSet() const { return m_collectionNameHasBeenSet; }

    /**
     * <p>The collection name of the knowledge base in MongoDB Atlas.</p>
     */
    inline void SetCollectionName(const Aws::String& value) { m_collectionNameHasBeenSet = true; m_collectionName = value; }

    /**
     * <p>The collection name of the knowledge base in MongoDB Atlas.</p>
     */
    inline void SetCollectionName(Aws::String&& value) { m_collectionNameHasBeenSet = true; m_collectionName = std::move(value); }

    /**
     * <p>The collection name of the knowledge base in MongoDB Atlas.</p>
     */
    inline void SetCollectionName(const char* value) { m_collectionNameHasBeenSet = true; m_collectionName.assign(value); }

    /**
     * <p>The collection name of the knowledge base in MongoDB Atlas.</p>
     */
    inline MongoDbAtlasConfiguration& WithCollectionName(const Aws::String& value) { SetCollectionName(value); return *this;}

    /**
     * <p>The collection name of the knowledge base in MongoDB Atlas.</p>
     */
    inline MongoDbAtlasConfiguration& WithCollectionName(Aws::String&& value) { SetCollectionName(std::move(value)); return *this;}

    /**
     * <p>The collection name of the knowledge base in MongoDB Atlas.</p>
     */
    inline MongoDbAtlasConfiguration& WithCollectionName(const char* value) { SetCollectionName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the secret that you created in Secrets
     * Manager that contains user credentials for your MongoDB Atlas cluster.</p>
     */
    inline const Aws::String& GetCredentialsSecretArn() const{ return m_credentialsSecretArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the secret that you created in Secrets
     * Manager that contains user credentials for your MongoDB Atlas cluster.</p>
     */
    inline bool CredentialsSecretArnHasBeenSet() const { return m_credentialsSecretArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the secret that you created in Secrets
     * Manager that contains user credentials for your MongoDB Atlas cluster.</p>
     */
    inline void SetCredentialsSecretArn(const Aws::String& value) { m_credentialsSecretArnHasBeenSet = true; m_credentialsSecretArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the secret that you created in Secrets
     * Manager that contains user credentials for your MongoDB Atlas cluster.</p>
     */
    inline void SetCredentialsSecretArn(Aws::String&& value) { m_credentialsSecretArnHasBeenSet = true; m_credentialsSecretArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the secret that you created in Secrets
     * Manager that contains user credentials for your MongoDB Atlas cluster.</p>
     */
    inline void SetCredentialsSecretArn(const char* value) { m_credentialsSecretArnHasBeenSet = true; m_credentialsSecretArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the secret that you created in Secrets
     * Manager that contains user credentials for your MongoDB Atlas cluster.</p>
     */
    inline MongoDbAtlasConfiguration& WithCredentialsSecretArn(const Aws::String& value) { SetCredentialsSecretArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the secret that you created in Secrets
     * Manager that contains user credentials for your MongoDB Atlas cluster.</p>
     */
    inline MongoDbAtlasConfiguration& WithCredentialsSecretArn(Aws::String&& value) { SetCredentialsSecretArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the secret that you created in Secrets
     * Manager that contains user credentials for your MongoDB Atlas cluster.</p>
     */
    inline MongoDbAtlasConfiguration& WithCredentialsSecretArn(const char* value) { SetCredentialsSecretArn(value); return *this;}


    /**
     * <p>The database name in your MongoDB Atlas cluster for your knowledge base.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The database name in your MongoDB Atlas cluster for your knowledge base.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The database name in your MongoDB Atlas cluster for your knowledge base.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The database name in your MongoDB Atlas cluster for your knowledge base.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The database name in your MongoDB Atlas cluster for your knowledge base.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The database name in your MongoDB Atlas cluster for your knowledge base.</p>
     */
    inline MongoDbAtlasConfiguration& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The database name in your MongoDB Atlas cluster for your knowledge base.</p>
     */
    inline MongoDbAtlasConfiguration& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The database name in your MongoDB Atlas cluster for your knowledge base.</p>
     */
    inline MongoDbAtlasConfiguration& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>The endpoint URL of your MongoDB Atlas cluster for your knowledge base.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>The endpoint URL of your MongoDB Atlas cluster for your knowledge base.</p>
     */
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }

    /**
     * <p>The endpoint URL of your MongoDB Atlas cluster for your knowledge base.</p>
     */
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    /**
     * <p>The endpoint URL of your MongoDB Atlas cluster for your knowledge base.</p>
     */
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }

    /**
     * <p>The endpoint URL of your MongoDB Atlas cluster for your knowledge base.</p>
     */
    inline void SetEndpoint(const char* value) { m_endpointHasBeenSet = true; m_endpoint.assign(value); }

    /**
     * <p>The endpoint URL of your MongoDB Atlas cluster for your knowledge base.</p>
     */
    inline MongoDbAtlasConfiguration& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}

    /**
     * <p>The endpoint URL of your MongoDB Atlas cluster for your knowledge base.</p>
     */
    inline MongoDbAtlasConfiguration& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}

    /**
     * <p>The endpoint URL of your MongoDB Atlas cluster for your knowledge base.</p>
     */
    inline MongoDbAtlasConfiguration& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}


    /**
     * <p>The name of the VPC endpoint service in your account that is connected to
     * your MongoDB Atlas cluster.</p>
     */
    inline const Aws::String& GetEndpointServiceName() const{ return m_endpointServiceName; }

    /**
     * <p>The name of the VPC endpoint service in your account that is connected to
     * your MongoDB Atlas cluster.</p>
     */
    inline bool EndpointServiceNameHasBeenSet() const { return m_endpointServiceNameHasBeenSet; }

    /**
     * <p>The name of the VPC endpoint service in your account that is connected to
     * your MongoDB Atlas cluster.</p>
     */
    inline void SetEndpointServiceName(const Aws::String& value) { m_endpointServiceNameHasBeenSet = true; m_endpointServiceName = value; }

    /**
     * <p>The name of the VPC endpoint service in your account that is connected to
     * your MongoDB Atlas cluster.</p>
     */
    inline void SetEndpointServiceName(Aws::String&& value) { m_endpointServiceNameHasBeenSet = true; m_endpointServiceName = std::move(value); }

    /**
     * <p>The name of the VPC endpoint service in your account that is connected to
     * your MongoDB Atlas cluster.</p>
     */
    inline void SetEndpointServiceName(const char* value) { m_endpointServiceNameHasBeenSet = true; m_endpointServiceName.assign(value); }

    /**
     * <p>The name of the VPC endpoint service in your account that is connected to
     * your MongoDB Atlas cluster.</p>
     */
    inline MongoDbAtlasConfiguration& WithEndpointServiceName(const Aws::String& value) { SetEndpointServiceName(value); return *this;}

    /**
     * <p>The name of the VPC endpoint service in your account that is connected to
     * your MongoDB Atlas cluster.</p>
     */
    inline MongoDbAtlasConfiguration& WithEndpointServiceName(Aws::String&& value) { SetEndpointServiceName(std::move(value)); return *this;}

    /**
     * <p>The name of the VPC endpoint service in your account that is connected to
     * your MongoDB Atlas cluster.</p>
     */
    inline MongoDbAtlasConfiguration& WithEndpointServiceName(const char* value) { SetEndpointServiceName(value); return *this;}


    /**
     * <p>Contains the names of the fields to which to map information about the vector
     * store.</p>
     */
    inline const MongoDbAtlasFieldMapping& GetFieldMapping() const{ return m_fieldMapping; }

    /**
     * <p>Contains the names of the fields to which to map information about the vector
     * store.</p>
     */
    inline bool FieldMappingHasBeenSet() const { return m_fieldMappingHasBeenSet; }

    /**
     * <p>Contains the names of the fields to which to map information about the vector
     * store.</p>
     */
    inline void SetFieldMapping(const MongoDbAtlasFieldMapping& value) { m_fieldMappingHasBeenSet = true; m_fieldMapping = value; }

    /**
     * <p>Contains the names of the fields to which to map information about the vector
     * store.</p>
     */
    inline void SetFieldMapping(MongoDbAtlasFieldMapping&& value) { m_fieldMappingHasBeenSet = true; m_fieldMapping = std::move(value); }

    /**
     * <p>Contains the names of the fields to which to map information about the vector
     * store.</p>
     */
    inline MongoDbAtlasConfiguration& WithFieldMapping(const MongoDbAtlasFieldMapping& value) { SetFieldMapping(value); return *this;}

    /**
     * <p>Contains the names of the fields to which to map information about the vector
     * store.</p>
     */
    inline MongoDbAtlasConfiguration& WithFieldMapping(MongoDbAtlasFieldMapping&& value) { SetFieldMapping(std::move(value)); return *this;}


    /**
     * <p>The name of the MongoDB Atlas vector search index.</p>
     */
    inline const Aws::String& GetVectorIndexName() const{ return m_vectorIndexName; }

    /**
     * <p>The name of the MongoDB Atlas vector search index.</p>
     */
    inline bool VectorIndexNameHasBeenSet() const { return m_vectorIndexNameHasBeenSet; }

    /**
     * <p>The name of the MongoDB Atlas vector search index.</p>
     */
    inline void SetVectorIndexName(const Aws::String& value) { m_vectorIndexNameHasBeenSet = true; m_vectorIndexName = value; }

    /**
     * <p>The name of the MongoDB Atlas vector search index.</p>
     */
    inline void SetVectorIndexName(Aws::String&& value) { m_vectorIndexNameHasBeenSet = true; m_vectorIndexName = std::move(value); }

    /**
     * <p>The name of the MongoDB Atlas vector search index.</p>
     */
    inline void SetVectorIndexName(const char* value) { m_vectorIndexNameHasBeenSet = true; m_vectorIndexName.assign(value); }

    /**
     * <p>The name of the MongoDB Atlas vector search index.</p>
     */
    inline MongoDbAtlasConfiguration& WithVectorIndexName(const Aws::String& value) { SetVectorIndexName(value); return *this;}

    /**
     * <p>The name of the MongoDB Atlas vector search index.</p>
     */
    inline MongoDbAtlasConfiguration& WithVectorIndexName(Aws::String&& value) { SetVectorIndexName(std::move(value)); return *this;}

    /**
     * <p>The name of the MongoDB Atlas vector search index.</p>
     */
    inline MongoDbAtlasConfiguration& WithVectorIndexName(const char* value) { SetVectorIndexName(value); return *this;}

  private:

    Aws::String m_collectionName;
    bool m_collectionNameHasBeenSet = false;

    Aws::String m_credentialsSecretArn;
    bool m_credentialsSecretArnHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;

    Aws::String m_endpointServiceName;
    bool m_endpointServiceNameHasBeenSet = false;

    MongoDbAtlasFieldMapping m_fieldMapping;
    bool m_fieldMappingHasBeenSet = false;

    Aws::String m_vectorIndexName;
    bool m_vectorIndexNameHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
