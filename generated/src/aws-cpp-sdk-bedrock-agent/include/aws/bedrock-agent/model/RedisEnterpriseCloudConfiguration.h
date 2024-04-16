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
    AWS_BEDROCKAGENT_API RedisEnterpriseCloudConfiguration();
    AWS_BEDROCKAGENT_API RedisEnterpriseCloudConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API RedisEnterpriseCloudConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the secret that you created in Secrets
     * Manager that is linked to your Redis Enterprise Cloud database.</p>
     */
    inline const Aws::String& GetCredentialsSecretArn() const{ return m_credentialsSecretArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the secret that you created in Secrets
     * Manager that is linked to your Redis Enterprise Cloud database.</p>
     */
    inline bool CredentialsSecretArnHasBeenSet() const { return m_credentialsSecretArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the secret that you created in Secrets
     * Manager that is linked to your Redis Enterprise Cloud database.</p>
     */
    inline void SetCredentialsSecretArn(const Aws::String& value) { m_credentialsSecretArnHasBeenSet = true; m_credentialsSecretArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the secret that you created in Secrets
     * Manager that is linked to your Redis Enterprise Cloud database.</p>
     */
    inline void SetCredentialsSecretArn(Aws::String&& value) { m_credentialsSecretArnHasBeenSet = true; m_credentialsSecretArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the secret that you created in Secrets
     * Manager that is linked to your Redis Enterprise Cloud database.</p>
     */
    inline void SetCredentialsSecretArn(const char* value) { m_credentialsSecretArnHasBeenSet = true; m_credentialsSecretArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the secret that you created in Secrets
     * Manager that is linked to your Redis Enterprise Cloud database.</p>
     */
    inline RedisEnterpriseCloudConfiguration& WithCredentialsSecretArn(const Aws::String& value) { SetCredentialsSecretArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the secret that you created in Secrets
     * Manager that is linked to your Redis Enterprise Cloud database.</p>
     */
    inline RedisEnterpriseCloudConfiguration& WithCredentialsSecretArn(Aws::String&& value) { SetCredentialsSecretArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the secret that you created in Secrets
     * Manager that is linked to your Redis Enterprise Cloud database.</p>
     */
    inline RedisEnterpriseCloudConfiguration& WithCredentialsSecretArn(const char* value) { SetCredentialsSecretArn(value); return *this;}


    /**
     * <p>The endpoint URL of the Redis Enterprise Cloud database.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>The endpoint URL of the Redis Enterprise Cloud database.</p>
     */
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }

    /**
     * <p>The endpoint URL of the Redis Enterprise Cloud database.</p>
     */
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    /**
     * <p>The endpoint URL of the Redis Enterprise Cloud database.</p>
     */
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }

    /**
     * <p>The endpoint URL of the Redis Enterprise Cloud database.</p>
     */
    inline void SetEndpoint(const char* value) { m_endpointHasBeenSet = true; m_endpoint.assign(value); }

    /**
     * <p>The endpoint URL of the Redis Enterprise Cloud database.</p>
     */
    inline RedisEnterpriseCloudConfiguration& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}

    /**
     * <p>The endpoint URL of the Redis Enterprise Cloud database.</p>
     */
    inline RedisEnterpriseCloudConfiguration& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}

    /**
     * <p>The endpoint URL of the Redis Enterprise Cloud database.</p>
     */
    inline RedisEnterpriseCloudConfiguration& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}


    /**
     * <p>Contains the names of the fields to which to map information about the vector
     * store.</p>
     */
    inline const RedisEnterpriseCloudFieldMapping& GetFieldMapping() const{ return m_fieldMapping; }

    /**
     * <p>Contains the names of the fields to which to map information about the vector
     * store.</p>
     */
    inline bool FieldMappingHasBeenSet() const { return m_fieldMappingHasBeenSet; }

    /**
     * <p>Contains the names of the fields to which to map information about the vector
     * store.</p>
     */
    inline void SetFieldMapping(const RedisEnterpriseCloudFieldMapping& value) { m_fieldMappingHasBeenSet = true; m_fieldMapping = value; }

    /**
     * <p>Contains the names of the fields to which to map information about the vector
     * store.</p>
     */
    inline void SetFieldMapping(RedisEnterpriseCloudFieldMapping&& value) { m_fieldMappingHasBeenSet = true; m_fieldMapping = std::move(value); }

    /**
     * <p>Contains the names of the fields to which to map information about the vector
     * store.</p>
     */
    inline RedisEnterpriseCloudConfiguration& WithFieldMapping(const RedisEnterpriseCloudFieldMapping& value) { SetFieldMapping(value); return *this;}

    /**
     * <p>Contains the names of the fields to which to map information about the vector
     * store.</p>
     */
    inline RedisEnterpriseCloudConfiguration& WithFieldMapping(RedisEnterpriseCloudFieldMapping&& value) { SetFieldMapping(std::move(value)); return *this;}


    /**
     * <p>The name of the vector index.</p>
     */
    inline const Aws::String& GetVectorIndexName() const{ return m_vectorIndexName; }

    /**
     * <p>The name of the vector index.</p>
     */
    inline bool VectorIndexNameHasBeenSet() const { return m_vectorIndexNameHasBeenSet; }

    /**
     * <p>The name of the vector index.</p>
     */
    inline void SetVectorIndexName(const Aws::String& value) { m_vectorIndexNameHasBeenSet = true; m_vectorIndexName = value; }

    /**
     * <p>The name of the vector index.</p>
     */
    inline void SetVectorIndexName(Aws::String&& value) { m_vectorIndexNameHasBeenSet = true; m_vectorIndexName = std::move(value); }

    /**
     * <p>The name of the vector index.</p>
     */
    inline void SetVectorIndexName(const char* value) { m_vectorIndexNameHasBeenSet = true; m_vectorIndexName.assign(value); }

    /**
     * <p>The name of the vector index.</p>
     */
    inline RedisEnterpriseCloudConfiguration& WithVectorIndexName(const Aws::String& value) { SetVectorIndexName(value); return *this;}

    /**
     * <p>The name of the vector index.</p>
     */
    inline RedisEnterpriseCloudConfiguration& WithVectorIndexName(Aws::String&& value) { SetVectorIndexName(std::move(value)); return *this;}

    /**
     * <p>The name of the vector index.</p>
     */
    inline RedisEnterpriseCloudConfiguration& WithVectorIndexName(const char* value) { SetVectorIndexName(value); return *this;}

  private:

    Aws::String m_credentialsSecretArn;
    bool m_credentialsSecretArnHasBeenSet = false;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;

    RedisEnterpriseCloudFieldMapping m_fieldMapping;
    bool m_fieldMappingHasBeenSet = false;

    Aws::String m_vectorIndexName;
    bool m_vectorIndexNameHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
