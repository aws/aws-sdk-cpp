/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/MetadataSourceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent/model/CustomS3Location.h>
#include <aws/bedrock-agent/model/MetadataAttribute.h>
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
   * <p>Contains information about the metadata associate with the content to ingest
   * into a knowledge base. Choose a <code>type</code> and include the field that
   * corresponds to it.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/DocumentMetadata">AWS
   * API Reference</a></p>
   */
  class DocumentMetadata
  {
  public:
    AWS_BEDROCKAGENT_API DocumentMetadata() = default;
    AWS_BEDROCKAGENT_API DocumentMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API DocumentMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of the source source from which to add metadata.</p>
     */
    inline MetadataSourceType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(MetadataSourceType value) { m_typeHasBeenSet = true; m_type = value; }
    inline DocumentMetadata& WithType(MetadataSourceType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects, each of which defines a metadata attribute to associate
     * with the content to ingest. You define the attributes inline.</p>
     */
    inline const Aws::Vector<MetadataAttribute>& GetInlineAttributes() const { return m_inlineAttributes; }
    inline bool InlineAttributesHasBeenSet() const { return m_inlineAttributesHasBeenSet; }
    template<typename InlineAttributesT = Aws::Vector<MetadataAttribute>>
    void SetInlineAttributes(InlineAttributesT&& value) { m_inlineAttributesHasBeenSet = true; m_inlineAttributes = std::forward<InlineAttributesT>(value); }
    template<typename InlineAttributesT = Aws::Vector<MetadataAttribute>>
    DocumentMetadata& WithInlineAttributes(InlineAttributesT&& value) { SetInlineAttributes(std::forward<InlineAttributesT>(value)); return *this;}
    template<typename InlineAttributesT = MetadataAttribute>
    DocumentMetadata& AddInlineAttributes(InlineAttributesT&& value) { m_inlineAttributesHasBeenSet = true; m_inlineAttributes.emplace_back(std::forward<InlineAttributesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location of the file containing metadata to associate with the
     * content to ingest.</p>
     */
    inline const CustomS3Location& GetS3Location() const { return m_s3Location; }
    inline bool S3LocationHasBeenSet() const { return m_s3LocationHasBeenSet; }
    template<typename S3LocationT = CustomS3Location>
    void SetS3Location(S3LocationT&& value) { m_s3LocationHasBeenSet = true; m_s3Location = std::forward<S3LocationT>(value); }
    template<typename S3LocationT = CustomS3Location>
    DocumentMetadata& WithS3Location(S3LocationT&& value) { SetS3Location(std::forward<S3LocationT>(value)); return *this;}
    ///@}
  private:

    MetadataSourceType m_type{MetadataSourceType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Vector<MetadataAttribute> m_inlineAttributes;
    bool m_inlineAttributesHasBeenSet = false;

    CustomS3Location m_s3Location;
    bool m_s3LocationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
