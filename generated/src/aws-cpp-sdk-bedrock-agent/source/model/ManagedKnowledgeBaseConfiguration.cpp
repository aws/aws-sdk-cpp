/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/ManagedKnowledgeBaseConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgent {
namespace Model {

ManagedKnowledgeBaseConfiguration::ManagedKnowledgeBaseConfiguration(JsonView jsonValue) { *this = jsonValue; }

ManagedKnowledgeBaseConfiguration& ManagedKnowledgeBaseConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("embeddingModelType")) {
    m_embeddingModelType = EmbeddingModelTypeMapper::GetEmbeddingModelTypeForName(jsonValue.GetString("embeddingModelType"));
    m_embeddingModelTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("embeddingModelArn")) {
    m_embeddingModelArn = jsonValue.GetString("embeddingModelArn");
    m_embeddingModelArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("embeddingModelConfiguration")) {
    m_embeddingModelConfiguration = jsonValue.GetObject("embeddingModelConfiguration");
    m_embeddingModelConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("serverSideEncryptionConfiguration")) {
    m_serverSideEncryptionConfiguration = jsonValue.GetObject("serverSideEncryptionConfiguration");
    m_serverSideEncryptionConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue ManagedKnowledgeBaseConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_embeddingModelTypeHasBeenSet) {
    payload.WithString("embeddingModelType", EmbeddingModelTypeMapper::GetNameForEmbeddingModelType(m_embeddingModelType));
  }

  if (m_embeddingModelArnHasBeenSet) {
    payload.WithString("embeddingModelArn", m_embeddingModelArn);
  }

  if (m_embeddingModelConfigurationHasBeenSet) {
    payload.WithObject("embeddingModelConfiguration", m_embeddingModelConfiguration.Jsonize());
  }

  if (m_serverSideEncryptionConfigurationHasBeenSet) {
    payload.WithObject("serverSideEncryptionConfiguration", m_serverSideEncryptionConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
