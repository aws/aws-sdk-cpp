/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/PineconeFieldMapping.h>
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
   * Pinecone. For more information, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/knowledge-base-setup-pinecone.html">Create
   * a vector index in Pinecone</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/PineconeConfiguration">AWS
   * API Reference</a></p>
   */
  class PineconeConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API PineconeConfiguration();
    AWS_BEDROCKAGENT_API PineconeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API PineconeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The endpoint URL for your index management page.</p>
     */
    inline const Aws::String& GetConnectionString() const{ return m_connectionString; }

    /**
     * <p>The endpoint URL for your index management page.</p>
     */
    inline bool ConnectionStringHasBeenSet() const { return m_connectionStringHasBeenSet; }

    /**
     * <p>The endpoint URL for your index management page.</p>
     */
    inline void SetConnectionString(const Aws::String& value) { m_connectionStringHasBeenSet = true; m_connectionString = value; }

    /**
     * <p>The endpoint URL for your index management page.</p>
     */
    inline void SetConnectionString(Aws::String&& value) { m_connectionStringHasBeenSet = true; m_connectionString = std::move(value); }

    /**
     * <p>The endpoint URL for your index management page.</p>
     */
    inline void SetConnectionString(const char* value) { m_connectionStringHasBeenSet = true; m_connectionString.assign(value); }

    /**
     * <p>The endpoint URL for your index management page.</p>
     */
    inline PineconeConfiguration& WithConnectionString(const Aws::String& value) { SetConnectionString(value); return *this;}

    /**
     * <p>The endpoint URL for your index management page.</p>
     */
    inline PineconeConfiguration& WithConnectionString(Aws::String&& value) { SetConnectionString(std::move(value)); return *this;}

    /**
     * <p>The endpoint URL for your index management page.</p>
     */
    inline PineconeConfiguration& WithConnectionString(const char* value) { SetConnectionString(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the secret that you created in Secrets
     * Manager that is linked to your Pinecone API key.</p>
     */
    inline const Aws::String& GetCredentialsSecretArn() const{ return m_credentialsSecretArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the secret that you created in Secrets
     * Manager that is linked to your Pinecone API key.</p>
     */
    inline bool CredentialsSecretArnHasBeenSet() const { return m_credentialsSecretArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the secret that you created in Secrets
     * Manager that is linked to your Pinecone API key.</p>
     */
    inline void SetCredentialsSecretArn(const Aws::String& value) { m_credentialsSecretArnHasBeenSet = true; m_credentialsSecretArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the secret that you created in Secrets
     * Manager that is linked to your Pinecone API key.</p>
     */
    inline void SetCredentialsSecretArn(Aws::String&& value) { m_credentialsSecretArnHasBeenSet = true; m_credentialsSecretArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the secret that you created in Secrets
     * Manager that is linked to your Pinecone API key.</p>
     */
    inline void SetCredentialsSecretArn(const char* value) { m_credentialsSecretArnHasBeenSet = true; m_credentialsSecretArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the secret that you created in Secrets
     * Manager that is linked to your Pinecone API key.</p>
     */
    inline PineconeConfiguration& WithCredentialsSecretArn(const Aws::String& value) { SetCredentialsSecretArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the secret that you created in Secrets
     * Manager that is linked to your Pinecone API key.</p>
     */
    inline PineconeConfiguration& WithCredentialsSecretArn(Aws::String&& value) { SetCredentialsSecretArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the secret that you created in Secrets
     * Manager that is linked to your Pinecone API key.</p>
     */
    inline PineconeConfiguration& WithCredentialsSecretArn(const char* value) { SetCredentialsSecretArn(value); return *this;}


    /**
     * <p>Contains the names of the fields to which to map information about the vector
     * store.</p>
     */
    inline const PineconeFieldMapping& GetFieldMapping() const{ return m_fieldMapping; }

    /**
     * <p>Contains the names of the fields to which to map information about the vector
     * store.</p>
     */
    inline bool FieldMappingHasBeenSet() const { return m_fieldMappingHasBeenSet; }

    /**
     * <p>Contains the names of the fields to which to map information about the vector
     * store.</p>
     */
    inline void SetFieldMapping(const PineconeFieldMapping& value) { m_fieldMappingHasBeenSet = true; m_fieldMapping = value; }

    /**
     * <p>Contains the names of the fields to which to map information about the vector
     * store.</p>
     */
    inline void SetFieldMapping(PineconeFieldMapping&& value) { m_fieldMappingHasBeenSet = true; m_fieldMapping = std::move(value); }

    /**
     * <p>Contains the names of the fields to which to map information about the vector
     * store.</p>
     */
    inline PineconeConfiguration& WithFieldMapping(const PineconeFieldMapping& value) { SetFieldMapping(value); return *this;}

    /**
     * <p>Contains the names of the fields to which to map information about the vector
     * store.</p>
     */
    inline PineconeConfiguration& WithFieldMapping(PineconeFieldMapping&& value) { SetFieldMapping(std::move(value)); return *this;}


    /**
     * <p>The namespace to be used to write new data to your database.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The namespace to be used to write new data to your database.</p>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>The namespace to be used to write new data to your database.</p>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The namespace to be used to write new data to your database.</p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>The namespace to be used to write new data to your database.</p>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>The namespace to be used to write new data to your database.</p>
     */
    inline PineconeConfiguration& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace to be used to write new data to your database.</p>
     */
    inline PineconeConfiguration& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespace to be used to write new data to your database.</p>
     */
    inline PineconeConfiguration& WithNamespace(const char* value) { SetNamespace(value); return *this;}

  private:

    Aws::String m_connectionString;
    bool m_connectionStringHasBeenSet = false;

    Aws::String m_credentialsSecretArn;
    bool m_credentialsSecretArnHasBeenSet = false;

    PineconeFieldMapping m_fieldMapping;
    bool m_fieldMappingHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
