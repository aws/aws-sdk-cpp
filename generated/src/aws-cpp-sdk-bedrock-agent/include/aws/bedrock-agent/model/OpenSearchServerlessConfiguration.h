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
    AWS_BEDROCKAGENT_API OpenSearchServerlessConfiguration();
    AWS_BEDROCKAGENT_API OpenSearchServerlessConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API OpenSearchServerlessConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the OpenSearch Service vector store.</p>
     */
    inline const Aws::String& GetCollectionArn() const{ return m_collectionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the OpenSearch Service vector store.</p>
     */
    inline bool CollectionArnHasBeenSet() const { return m_collectionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the OpenSearch Service vector store.</p>
     */
    inline void SetCollectionArn(const Aws::String& value) { m_collectionArnHasBeenSet = true; m_collectionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the OpenSearch Service vector store.</p>
     */
    inline void SetCollectionArn(Aws::String&& value) { m_collectionArnHasBeenSet = true; m_collectionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the OpenSearch Service vector store.</p>
     */
    inline void SetCollectionArn(const char* value) { m_collectionArnHasBeenSet = true; m_collectionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the OpenSearch Service vector store.</p>
     */
    inline OpenSearchServerlessConfiguration& WithCollectionArn(const Aws::String& value) { SetCollectionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the OpenSearch Service vector store.</p>
     */
    inline OpenSearchServerlessConfiguration& WithCollectionArn(Aws::String&& value) { SetCollectionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the OpenSearch Service vector store.</p>
     */
    inline OpenSearchServerlessConfiguration& WithCollectionArn(const char* value) { SetCollectionArn(value); return *this;}


    /**
     * <p>Contains the names of the fields to which to map information about the vector
     * store.</p>
     */
    inline const OpenSearchServerlessFieldMapping& GetFieldMapping() const{ return m_fieldMapping; }

    /**
     * <p>Contains the names of the fields to which to map information about the vector
     * store.</p>
     */
    inline bool FieldMappingHasBeenSet() const { return m_fieldMappingHasBeenSet; }

    /**
     * <p>Contains the names of the fields to which to map information about the vector
     * store.</p>
     */
    inline void SetFieldMapping(const OpenSearchServerlessFieldMapping& value) { m_fieldMappingHasBeenSet = true; m_fieldMapping = value; }

    /**
     * <p>Contains the names of the fields to which to map information about the vector
     * store.</p>
     */
    inline void SetFieldMapping(OpenSearchServerlessFieldMapping&& value) { m_fieldMappingHasBeenSet = true; m_fieldMapping = std::move(value); }

    /**
     * <p>Contains the names of the fields to which to map information about the vector
     * store.</p>
     */
    inline OpenSearchServerlessConfiguration& WithFieldMapping(const OpenSearchServerlessFieldMapping& value) { SetFieldMapping(value); return *this;}

    /**
     * <p>Contains the names of the fields to which to map information about the vector
     * store.</p>
     */
    inline OpenSearchServerlessConfiguration& WithFieldMapping(OpenSearchServerlessFieldMapping&& value) { SetFieldMapping(std::move(value)); return *this;}


    /**
     * <p>The name of the vector store.</p>
     */
    inline const Aws::String& GetVectorIndexName() const{ return m_vectorIndexName; }

    /**
     * <p>The name of the vector store.</p>
     */
    inline bool VectorIndexNameHasBeenSet() const { return m_vectorIndexNameHasBeenSet; }

    /**
     * <p>The name of the vector store.</p>
     */
    inline void SetVectorIndexName(const Aws::String& value) { m_vectorIndexNameHasBeenSet = true; m_vectorIndexName = value; }

    /**
     * <p>The name of the vector store.</p>
     */
    inline void SetVectorIndexName(Aws::String&& value) { m_vectorIndexNameHasBeenSet = true; m_vectorIndexName = std::move(value); }

    /**
     * <p>The name of the vector store.</p>
     */
    inline void SetVectorIndexName(const char* value) { m_vectorIndexNameHasBeenSet = true; m_vectorIndexName.assign(value); }

    /**
     * <p>The name of the vector store.</p>
     */
    inline OpenSearchServerlessConfiguration& WithVectorIndexName(const Aws::String& value) { SetVectorIndexName(value); return *this;}

    /**
     * <p>The name of the vector store.</p>
     */
    inline OpenSearchServerlessConfiguration& WithVectorIndexName(Aws::String&& value) { SetVectorIndexName(std::move(value)); return *this;}

    /**
     * <p>The name of the vector store.</p>
     */
    inline OpenSearchServerlessConfiguration& WithVectorIndexName(const char* value) { SetVectorIndexName(value); return *this;}

  private:

    Aws::String m_collectionArn;
    bool m_collectionArnHasBeenSet = false;

    OpenSearchServerlessFieldMapping m_fieldMapping;
    bool m_fieldMappingHasBeenSet = false;

    Aws::String m_vectorIndexName;
    bool m_vectorIndexNameHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
