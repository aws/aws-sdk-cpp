/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent/model/CustomS3Location.h>
#include <aws/bedrock-agent/model/MetadataSourceType.h>
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
    AWS_BEDROCKAGENT_API DocumentMetadata();
    AWS_BEDROCKAGENT_API DocumentMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API DocumentMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of objects, each of which defines a metadata attribute to associate
     * with the content to ingest. You define the attributes inline.</p>
     */
    inline const Aws::Vector<MetadataAttribute>& GetInlineAttributes() const{ return m_inlineAttributes; }
    inline bool InlineAttributesHasBeenSet() const { return m_inlineAttributesHasBeenSet; }
    inline void SetInlineAttributes(const Aws::Vector<MetadataAttribute>& value) { m_inlineAttributesHasBeenSet = true; m_inlineAttributes = value; }
    inline void SetInlineAttributes(Aws::Vector<MetadataAttribute>&& value) { m_inlineAttributesHasBeenSet = true; m_inlineAttributes = std::move(value); }
    inline DocumentMetadata& WithInlineAttributes(const Aws::Vector<MetadataAttribute>& value) { SetInlineAttributes(value); return *this;}
    inline DocumentMetadata& WithInlineAttributes(Aws::Vector<MetadataAttribute>&& value) { SetInlineAttributes(std::move(value)); return *this;}
    inline DocumentMetadata& AddInlineAttributes(const MetadataAttribute& value) { m_inlineAttributesHasBeenSet = true; m_inlineAttributes.push_back(value); return *this; }
    inline DocumentMetadata& AddInlineAttributes(MetadataAttribute&& value) { m_inlineAttributesHasBeenSet = true; m_inlineAttributes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location of the file containing metadata to associate with the
     * content to ingest.</p>
     */
    inline const CustomS3Location& GetS3Location() const{ return m_s3Location; }
    inline bool S3LocationHasBeenSet() const { return m_s3LocationHasBeenSet; }
    inline void SetS3Location(const CustomS3Location& value) { m_s3LocationHasBeenSet = true; m_s3Location = value; }
    inline void SetS3Location(CustomS3Location&& value) { m_s3LocationHasBeenSet = true; m_s3Location = std::move(value); }
    inline DocumentMetadata& WithS3Location(const CustomS3Location& value) { SetS3Location(value); return *this;}
    inline DocumentMetadata& WithS3Location(CustomS3Location&& value) { SetS3Location(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the source source from which to add metadata.</p>
     */
    inline const MetadataSourceType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const MetadataSourceType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(MetadataSourceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline DocumentMetadata& WithType(const MetadataSourceType& value) { SetType(value); return *this;}
    inline DocumentMetadata& WithType(MetadataSourceType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<MetadataAttribute> m_inlineAttributes;
    bool m_inlineAttributesHasBeenSet = false;

    CustomS3Location m_s3Location;
    bool m_s3LocationHasBeenSet = false;

    MetadataSourceType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
