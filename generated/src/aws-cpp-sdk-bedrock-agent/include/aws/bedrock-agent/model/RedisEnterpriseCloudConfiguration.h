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
   * <p>Contains the configurations to use Redis Enterprise Cloud to store knowledge
   * base data.</p><p><h3>See Also:</h3>   <a
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


    
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }

    
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }

    
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }

    
    inline void SetEndpoint(const char* value) { m_endpointHasBeenSet = true; m_endpoint.assign(value); }

    
    inline RedisEnterpriseCloudConfiguration& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}

    
    inline RedisEnterpriseCloudConfiguration& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}

    
    inline RedisEnterpriseCloudConfiguration& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}


    
    inline const Aws::String& GetVectorIndexName() const{ return m_vectorIndexName; }

    
    inline bool VectorIndexNameHasBeenSet() const { return m_vectorIndexNameHasBeenSet; }

    
    inline void SetVectorIndexName(const Aws::String& value) { m_vectorIndexNameHasBeenSet = true; m_vectorIndexName = value; }

    
    inline void SetVectorIndexName(Aws::String&& value) { m_vectorIndexNameHasBeenSet = true; m_vectorIndexName = std::move(value); }

    
    inline void SetVectorIndexName(const char* value) { m_vectorIndexNameHasBeenSet = true; m_vectorIndexName.assign(value); }

    
    inline RedisEnterpriseCloudConfiguration& WithVectorIndexName(const Aws::String& value) { SetVectorIndexName(value); return *this;}

    
    inline RedisEnterpriseCloudConfiguration& WithVectorIndexName(Aws::String&& value) { SetVectorIndexName(std::move(value)); return *this;}

    
    inline RedisEnterpriseCloudConfiguration& WithVectorIndexName(const char* value) { SetVectorIndexName(value); return *this;}


    
    inline const Aws::String& GetCredentialsSecretArn() const{ return m_credentialsSecretArn; }

    
    inline bool CredentialsSecretArnHasBeenSet() const { return m_credentialsSecretArnHasBeenSet; }

    
    inline void SetCredentialsSecretArn(const Aws::String& value) { m_credentialsSecretArnHasBeenSet = true; m_credentialsSecretArn = value; }

    
    inline void SetCredentialsSecretArn(Aws::String&& value) { m_credentialsSecretArnHasBeenSet = true; m_credentialsSecretArn = std::move(value); }

    
    inline void SetCredentialsSecretArn(const char* value) { m_credentialsSecretArnHasBeenSet = true; m_credentialsSecretArn.assign(value); }

    
    inline RedisEnterpriseCloudConfiguration& WithCredentialsSecretArn(const Aws::String& value) { SetCredentialsSecretArn(value); return *this;}

    
    inline RedisEnterpriseCloudConfiguration& WithCredentialsSecretArn(Aws::String&& value) { SetCredentialsSecretArn(std::move(value)); return *this;}

    
    inline RedisEnterpriseCloudConfiguration& WithCredentialsSecretArn(const char* value) { SetCredentialsSecretArn(value); return *this;}


    
    inline const RedisEnterpriseCloudFieldMapping& GetFieldMapping() const{ return m_fieldMapping; }

    
    inline bool FieldMappingHasBeenSet() const { return m_fieldMappingHasBeenSet; }

    
    inline void SetFieldMapping(const RedisEnterpriseCloudFieldMapping& value) { m_fieldMappingHasBeenSet = true; m_fieldMapping = value; }

    
    inline void SetFieldMapping(RedisEnterpriseCloudFieldMapping&& value) { m_fieldMappingHasBeenSet = true; m_fieldMapping = std::move(value); }

    
    inline RedisEnterpriseCloudConfiguration& WithFieldMapping(const RedisEnterpriseCloudFieldMapping& value) { SetFieldMapping(value); return *this;}

    
    inline RedisEnterpriseCloudConfiguration& WithFieldMapping(RedisEnterpriseCloudFieldMapping&& value) { SetFieldMapping(std::move(value)); return *this;}

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
