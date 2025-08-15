/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/RedisEnterpriseCloudFieldMapping.h>
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
   * Redis Enterprise Cloud. For more information, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/knowledge-base-setup-oss.html">Create
   * a vector index in Redis Enterprise Cloud</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/RedisEnterpriseCloudConfiguration">AWS
   * API Reference</a></p>
   */
  class RedisEnterpriseCloudConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API RedisEnterpriseCloudConfiguration() = default;
    AWS_BEDROCKAGENT_API RedisEnterpriseCloudConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API RedisEnterpriseCloudConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The endpoint URL of the Redis Enterprise Cloud database.</p>
     */
    inline const Aws::String& GetEndpoint() const { return m_endpoint; }
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
    template<typename EndpointT = Aws::String>
    void SetEndpoint(EndpointT&& value) { m_endpointHasBeenSet = true; m_endpoint = std::forward<EndpointT>(value); }
    template<typename EndpointT = Aws::String>
    RedisEnterpriseCloudConfiguration& WithEndpoint(EndpointT&& value) { SetEndpoint(std::forward<EndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the vector index.</p>
     */
    inline const Aws::String& GetVectorIndexName() const { return m_vectorIndexName; }
    inline bool VectorIndexNameHasBeenSet() const { return m_vectorIndexNameHasBeenSet; }
    template<typename VectorIndexNameT = Aws::String>
    void SetVectorIndexName(VectorIndexNameT&& value) { m_vectorIndexNameHasBeenSet = true; m_vectorIndexName = std::forward<VectorIndexNameT>(value); }
    template<typename VectorIndexNameT = Aws::String>
    RedisEnterpriseCloudConfiguration& WithVectorIndexName(VectorIndexNameT&& value) { SetVectorIndexName(std::forward<VectorIndexNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the secret that you created in Secrets
     * Manager that is linked to your Redis Enterprise Cloud database.</p>
     */
    inline const Aws::String& GetCredentialsSecretArn() const { return m_credentialsSecretArn; }
    inline bool CredentialsSecretArnHasBeenSet() const { return m_credentialsSecretArnHasBeenSet; }
    template<typename CredentialsSecretArnT = Aws::String>
    void SetCredentialsSecretArn(CredentialsSecretArnT&& value) { m_credentialsSecretArnHasBeenSet = true; m_credentialsSecretArn = std::forward<CredentialsSecretArnT>(value); }
    template<typename CredentialsSecretArnT = Aws::String>
    RedisEnterpriseCloudConfiguration& WithCredentialsSecretArn(CredentialsSecretArnT&& value) { SetCredentialsSecretArn(std::forward<CredentialsSecretArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the names of the fields to which to map information about the vector
     * store.</p>
     */
    inline const RedisEnterpriseCloudFieldMapping& GetFieldMapping() const { return m_fieldMapping; }
    inline bool FieldMappingHasBeenSet() const { return m_fieldMappingHasBeenSet; }
    template<typename FieldMappingT = RedisEnterpriseCloudFieldMapping>
    void SetFieldMapping(FieldMappingT&& value) { m_fieldMappingHasBeenSet = true; m_fieldMapping = std::forward<FieldMappingT>(value); }
    template<typename FieldMappingT = RedisEnterpriseCloudFieldMapping>
    RedisEnterpriseCloudConfiguration& WithFieldMapping(FieldMappingT&& value) { SetFieldMapping(std::forward<FieldMappingT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;

    Aws::String m_vectorIndexName;
    bool m_vectorIndexNameHasBeenSet = false;

    Aws::String m_credentialsSecretArn;
    bool m_credentialsSecretArnHasBeenSet = false;

    RedisEnterpriseCloudFieldMapping m_fieldMapping;
    bool m_fieldMappingHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
