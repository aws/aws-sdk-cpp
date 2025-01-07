/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/DocumentContent.h>
#include <aws/bedrock-agent/model/DocumentMetadata.h>
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
   * <p>Contains information about a document to ingest into a knowledge base and
   * metadata to associate with it.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/KnowledgeBaseDocument">AWS
   * API Reference</a></p>
   */
  class KnowledgeBaseDocument
  {
  public:
    AWS_BEDROCKAGENT_API KnowledgeBaseDocument();
    AWS_BEDROCKAGENT_API KnowledgeBaseDocument(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API KnowledgeBaseDocument& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains the content of the document.</p>
     */
    inline const DocumentContent& GetContent() const{ return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    inline void SetContent(const DocumentContent& value) { m_contentHasBeenSet = true; m_content = value; }
    inline void SetContent(DocumentContent&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }
    inline KnowledgeBaseDocument& WithContent(const DocumentContent& value) { SetContent(value); return *this;}
    inline KnowledgeBaseDocument& WithContent(DocumentContent&& value) { SetContent(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the metadata to associate with the document.</p>
     */
    inline const DocumentMetadata& GetMetadata() const{ return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    inline void SetMetadata(const DocumentMetadata& value) { m_metadataHasBeenSet = true; m_metadata = value; }
    inline void SetMetadata(DocumentMetadata&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }
    inline KnowledgeBaseDocument& WithMetadata(const DocumentMetadata& value) { SetMetadata(value); return *this;}
    inline KnowledgeBaseDocument& WithMetadata(DocumentMetadata&& value) { SetMetadata(std::move(value)); return *this;}
    ///@}
  private:

    DocumentContent m_content;
    bool m_contentHasBeenSet = false;

    DocumentMetadata m_metadata;
    bool m_metadataHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
