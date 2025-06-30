/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/AttributeType.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>Defines the schema for a metadata attribute used in Knowledge Base vector
   * searches. Metadata attributes provide additional context for documents and can
   * be used for filtering and reranking search results.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/MetadataAttributeSchema">AWS
   * API Reference</a></p>
   */
  class MetadataAttributeSchema
  {
  public:
    AWS_BEDROCK_API MetadataAttributeSchema() = default;
    AWS_BEDROCK_API MetadataAttributeSchema(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API MetadataAttributeSchema& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the metadata attribute. This key is used to
     * reference the attribute in filter expressions and reranking configurations.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    MetadataAttributeSchema& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type of the metadata attribute. The type determines how the
     * attribute can be used in filter expressions and reranking.</p>
     */
    inline AttributeType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(AttributeType value) { m_typeHasBeenSet = true; m_type = value; }
    inline MetadataAttributeSchema& WithType(AttributeType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional description of the metadata attribute that provides additional
     * context about its purpose and usage.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    MetadataAttributeSchema& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    AttributeType m_type{AttributeType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
