/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/RetrievalResultContent.h>
#include <aws/bedrock-agent-runtime/model/RetrievalResultLocation.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Document.h>
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
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   * <p>Contains metadata about a source cited for the generated response.</p>
   * <p>This data type is used in the following API operations:</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_RetrieveAndGenerate.html#API_agent-runtime_RetrieveAndGenerate_ResponseSyntax">RetrieveAndGenerate
   * response</a> – in the <code>retrievedReferences</code> field</p> </li> <li> <p>
   * <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_InvokeAgent.html#API_agent-runtime_InvokeAgent_ResponseSyntax">InvokeAgent
   * response</a> – in the <code>retrievedReferences</code> field</p> </li>
   * </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/RetrievedReference">AWS
   * API Reference</a></p>
   */
  class RetrievedReference
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API RetrievedReference();
    AWS_BEDROCKAGENTRUNTIME_API RetrievedReference(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API RetrievedReference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains the cited text from the data source.</p>
     */
    inline const RetrievalResultContent& GetContent() const{ return m_content; }

    /**
     * <p>Contains the cited text from the data source.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>Contains the cited text from the data source.</p>
     */
    inline void SetContent(const RetrievalResultContent& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>Contains the cited text from the data source.</p>
     */
    inline void SetContent(RetrievalResultContent&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>Contains the cited text from the data source.</p>
     */
    inline RetrievedReference& WithContent(const RetrievalResultContent& value) { SetContent(value); return *this;}

    /**
     * <p>Contains the cited text from the data source.</p>
     */
    inline RetrievedReference& WithContent(RetrievalResultContent&& value) { SetContent(std::move(value)); return *this;}


    /**
     * <p>Contains information about the location of the data source.</p>
     */
    inline const RetrievalResultLocation& GetLocation() const{ return m_location; }

    /**
     * <p>Contains information about the location of the data source.</p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>Contains information about the location of the data source.</p>
     */
    inline void SetLocation(const RetrievalResultLocation& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>Contains information about the location of the data source.</p>
     */
    inline void SetLocation(RetrievalResultLocation&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>Contains information about the location of the data source.</p>
     */
    inline RetrievedReference& WithLocation(const RetrievalResultLocation& value) { SetLocation(value); return *this;}

    /**
     * <p>Contains information about the location of the data source.</p>
     */
    inline RetrievedReference& WithLocation(RetrievalResultLocation&& value) { SetLocation(std::move(value)); return *this;}


    /**
     * <p>Contains metadata attributes and their values for the file in the data
     * source. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/knowledge-base-ds.html#kb-ds-metadata">Metadata
     * and filtering</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Utils::Document>& GetMetadata() const{ return m_metadata; }

    /**
     * <p>Contains metadata attributes and their values for the file in the data
     * source. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/knowledge-base-ds.html#kb-ds-metadata">Metadata
     * and filtering</a>.</p>
     */
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }

    /**
     * <p>Contains metadata attributes and their values for the file in the data
     * source. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/knowledge-base-ds.html#kb-ds-metadata">Metadata
     * and filtering</a>.</p>
     */
    inline void SetMetadata(const Aws::Map<Aws::String, Aws::Utils::Document>& value) { m_metadataHasBeenSet = true; m_metadata = value; }

    /**
     * <p>Contains metadata attributes and their values for the file in the data
     * source. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/knowledge-base-ds.html#kb-ds-metadata">Metadata
     * and filtering</a>.</p>
     */
    inline void SetMetadata(Aws::Map<Aws::String, Aws::Utils::Document>&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }

    /**
     * <p>Contains metadata attributes and their values for the file in the data
     * source. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/knowledge-base-ds.html#kb-ds-metadata">Metadata
     * and filtering</a>.</p>
     */
    inline RetrievedReference& WithMetadata(const Aws::Map<Aws::String, Aws::Utils::Document>& value) { SetMetadata(value); return *this;}

    /**
     * <p>Contains metadata attributes and their values for the file in the data
     * source. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/knowledge-base-ds.html#kb-ds-metadata">Metadata
     * and filtering</a>.</p>
     */
    inline RetrievedReference& WithMetadata(Aws::Map<Aws::String, Aws::Utils::Document>&& value) { SetMetadata(std::move(value)); return *this;}

    /**
     * <p>Contains metadata attributes and their values for the file in the data
     * source. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/knowledge-base-ds.html#kb-ds-metadata">Metadata
     * and filtering</a>.</p>
     */
    inline RetrievedReference& AddMetadata(const Aws::String& key, const Aws::Utils::Document& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, value); return *this; }

    /**
     * <p>Contains metadata attributes and their values for the file in the data
     * source. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/knowledge-base-ds.html#kb-ds-metadata">Metadata
     * and filtering</a>.</p>
     */
    inline RetrievedReference& AddMetadata(Aws::String&& key, const Aws::Utils::Document& value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>Contains metadata attributes and their values for the file in the data
     * source. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/knowledge-base-ds.html#kb-ds-metadata">Metadata
     * and filtering</a>.</p>
     */
    inline RetrievedReference& AddMetadata(const Aws::String& key, Aws::Utils::Document&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Contains metadata attributes and their values for the file in the data
     * source. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/knowledge-base-ds.html#kb-ds-metadata">Metadata
     * and filtering</a>.</p>
     */
    inline RetrievedReference& AddMetadata(Aws::String&& key, Aws::Utils::Document&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Contains metadata attributes and their values for the file in the data
     * source. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/knowledge-base-ds.html#kb-ds-metadata">Metadata
     * and filtering</a>.</p>
     */
    inline RetrievedReference& AddMetadata(const char* key, Aws::Utils::Document&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Contains metadata attributes and their values for the file in the data
     * source. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/knowledge-base-ds.html#kb-ds-metadata">Metadata
     * and filtering</a>.</p>
     */
    inline RetrievedReference& AddMetadata(const char* key, const Aws::Utils::Document& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, value); return *this; }

  private:

    RetrievalResultContent m_content;
    bool m_contentHasBeenSet = false;

    RetrievalResultLocation m_location;
    bool m_locationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Utils::Document> m_metadata;
    bool m_metadataHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
