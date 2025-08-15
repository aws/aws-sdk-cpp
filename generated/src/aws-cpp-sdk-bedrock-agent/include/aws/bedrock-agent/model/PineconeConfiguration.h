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
    AWS_BEDROCKAGENT_API PineconeConfiguration() = default;
    AWS_BEDROCKAGENT_API PineconeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API PineconeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The endpoint URL for your index management page.</p>
     */
    inline const Aws::String& GetConnectionString() const { return m_connectionString; }
    inline bool ConnectionStringHasBeenSet() const { return m_connectionStringHasBeenSet; }
    template<typename ConnectionStringT = Aws::String>
    void SetConnectionString(ConnectionStringT&& value) { m_connectionStringHasBeenSet = true; m_connectionString = std::forward<ConnectionStringT>(value); }
    template<typename ConnectionStringT = Aws::String>
    PineconeConfiguration& WithConnectionString(ConnectionStringT&& value) { SetConnectionString(std::forward<ConnectionStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the secret that you created in Secrets
     * Manager that is linked to your Pinecone API key.</p>
     */
    inline const Aws::String& GetCredentialsSecretArn() const { return m_credentialsSecretArn; }
    inline bool CredentialsSecretArnHasBeenSet() const { return m_credentialsSecretArnHasBeenSet; }
    template<typename CredentialsSecretArnT = Aws::String>
    void SetCredentialsSecretArn(CredentialsSecretArnT&& value) { m_credentialsSecretArnHasBeenSet = true; m_credentialsSecretArn = std::forward<CredentialsSecretArnT>(value); }
    template<typename CredentialsSecretArnT = Aws::String>
    PineconeConfiguration& WithCredentialsSecretArn(CredentialsSecretArnT&& value) { SetCredentialsSecretArn(std::forward<CredentialsSecretArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace to be used to write new data to your database.</p>
     */
    inline const Aws::String& GetNamespace() const { return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    template<typename NamespaceT = Aws::String>
    void SetNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace = std::forward<NamespaceT>(value); }
    template<typename NamespaceT = Aws::String>
    PineconeConfiguration& WithNamespace(NamespaceT&& value) { SetNamespace(std::forward<NamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the names of the fields to which to map information about the vector
     * store.</p>
     */
    inline const PineconeFieldMapping& GetFieldMapping() const { return m_fieldMapping; }
    inline bool FieldMappingHasBeenSet() const { return m_fieldMappingHasBeenSet; }
    template<typename FieldMappingT = PineconeFieldMapping>
    void SetFieldMapping(FieldMappingT&& value) { m_fieldMappingHasBeenSet = true; m_fieldMapping = std::forward<FieldMappingT>(value); }
    template<typename FieldMappingT = PineconeFieldMapping>
    PineconeConfiguration& WithFieldMapping(FieldMappingT&& value) { SetFieldMapping(std::forward<FieldMappingT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectionString;
    bool m_connectionStringHasBeenSet = false;

    Aws::String m_credentialsSecretArn;
    bool m_credentialsSecretArnHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    PineconeFieldMapping m_fieldMapping;
    bool m_fieldMappingHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
