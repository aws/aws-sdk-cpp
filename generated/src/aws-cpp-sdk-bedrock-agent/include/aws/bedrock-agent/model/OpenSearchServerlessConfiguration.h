/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/OpenSearchServerlessFieldMapping.h>
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
   * Amazon OpenSearch Service. For more information, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/knowledge-base-setup-oss.html">Create
   * a vector index in Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/OpenSearchServerlessConfiguration">AWS
   * API Reference</a></p>
   */
  class OpenSearchServerlessConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API OpenSearchServerlessConfiguration() = default;
    AWS_BEDROCKAGENT_API OpenSearchServerlessConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API OpenSearchServerlessConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the OpenSearch Service vector store.</p>
     */
    inline const Aws::String& GetCollectionArn() const { return m_collectionArn; }
    inline bool CollectionArnHasBeenSet() const { return m_collectionArnHasBeenSet; }
    template<typename CollectionArnT = Aws::String>
    void SetCollectionArn(CollectionArnT&& value) { m_collectionArnHasBeenSet = true; m_collectionArn = std::forward<CollectionArnT>(value); }
    template<typename CollectionArnT = Aws::String>
    OpenSearchServerlessConfiguration& WithCollectionArn(CollectionArnT&& value) { SetCollectionArn(std::forward<CollectionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the vector store.</p>
     */
    inline const Aws::String& GetVectorIndexName() const { return m_vectorIndexName; }
    inline bool VectorIndexNameHasBeenSet() const { return m_vectorIndexNameHasBeenSet; }
    template<typename VectorIndexNameT = Aws::String>
    void SetVectorIndexName(VectorIndexNameT&& value) { m_vectorIndexNameHasBeenSet = true; m_vectorIndexName = std::forward<VectorIndexNameT>(value); }
    template<typename VectorIndexNameT = Aws::String>
    OpenSearchServerlessConfiguration& WithVectorIndexName(VectorIndexNameT&& value) { SetVectorIndexName(std::forward<VectorIndexNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the names of the fields to which to map information about the vector
     * store.</p>
     */
    inline const OpenSearchServerlessFieldMapping& GetFieldMapping() const { return m_fieldMapping; }
    inline bool FieldMappingHasBeenSet() const { return m_fieldMappingHasBeenSet; }
    template<typename FieldMappingT = OpenSearchServerlessFieldMapping>
    void SetFieldMapping(FieldMappingT&& value) { m_fieldMappingHasBeenSet = true; m_fieldMapping = std::forward<FieldMappingT>(value); }
    template<typename FieldMappingT = OpenSearchServerlessFieldMapping>
    OpenSearchServerlessConfiguration& WithFieldMapping(FieldMappingT&& value) { SetFieldMapping(std::forward<FieldMappingT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_collectionArn;
    bool m_collectionArnHasBeenSet = false;

    Aws::String m_vectorIndexName;
    bool m_vectorIndexNameHasBeenSet = false;

    OpenSearchServerlessFieldMapping m_fieldMapping;
    bool m_fieldMappingHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
