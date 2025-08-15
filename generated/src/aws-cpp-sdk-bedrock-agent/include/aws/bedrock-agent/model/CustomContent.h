/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/CustomDocumentIdentifier.h>
#include <aws/bedrock-agent/model/CustomSourceType.h>
#include <aws/bedrock-agent/model/CustomS3Location.h>
#include <aws/bedrock-agent/model/InlineContent.h>
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
   * <p>Contains information about the content to ingest into a knowledge base
   * connected to a custom data source. Choose a <code>sourceType</code> and include
   * the field that corresponds to it.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/CustomContent">AWS
   * API Reference</a></p>
   */
  class CustomContent
  {
  public:
    AWS_BEDROCKAGENT_API CustomContent() = default;
    AWS_BEDROCKAGENT_API CustomContent(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API CustomContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the document.</p>
     */
    inline const CustomDocumentIdentifier& GetCustomDocumentIdentifier() const { return m_customDocumentIdentifier; }
    inline bool CustomDocumentIdentifierHasBeenSet() const { return m_customDocumentIdentifierHasBeenSet; }
    template<typename CustomDocumentIdentifierT = CustomDocumentIdentifier>
    void SetCustomDocumentIdentifier(CustomDocumentIdentifierT&& value) { m_customDocumentIdentifierHasBeenSet = true; m_customDocumentIdentifier = std::forward<CustomDocumentIdentifierT>(value); }
    template<typename CustomDocumentIdentifierT = CustomDocumentIdentifier>
    CustomContent& WithCustomDocumentIdentifier(CustomDocumentIdentifierT&& value) { SetCustomDocumentIdentifier(std::forward<CustomDocumentIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the data to ingest.</p>
     */
    inline CustomSourceType GetSourceType() const { return m_sourceType; }
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
    inline void SetSourceType(CustomSourceType value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }
    inline CustomContent& WithSourceType(CustomSourceType value) { SetSourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the Amazon S3 location of the file from which to
     * ingest data.</p>
     */
    inline const CustomS3Location& GetS3Location() const { return m_s3Location; }
    inline bool S3LocationHasBeenSet() const { return m_s3LocationHasBeenSet; }
    template<typename S3LocationT = CustomS3Location>
    void SetS3Location(S3LocationT&& value) { m_s3LocationHasBeenSet = true; m_s3Location = std::forward<S3LocationT>(value); }
    template<typename S3LocationT = CustomS3Location>
    CustomContent& WithS3Location(S3LocationT&& value) { SetS3Location(std::forward<S3LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about content defined inline to ingest into a knowledge
     * base.</p>
     */
    inline const InlineContent& GetInlineContent() const { return m_inlineContent; }
    inline bool InlineContentHasBeenSet() const { return m_inlineContentHasBeenSet; }
    template<typename InlineContentT = InlineContent>
    void SetInlineContent(InlineContentT&& value) { m_inlineContentHasBeenSet = true; m_inlineContent = std::forward<InlineContentT>(value); }
    template<typename InlineContentT = InlineContent>
    CustomContent& WithInlineContent(InlineContentT&& value) { SetInlineContent(std::forward<InlineContentT>(value)); return *this;}
    ///@}
  private:

    CustomDocumentIdentifier m_customDocumentIdentifier;
    bool m_customDocumentIdentifierHasBeenSet = false;

    CustomSourceType m_sourceType{CustomSourceType::NOT_SET};
    bool m_sourceTypeHasBeenSet = false;

    CustomS3Location m_s3Location;
    bool m_s3LocationHasBeenSet = false;

    InlineContent m_inlineContent;
    bool m_inlineContentHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
