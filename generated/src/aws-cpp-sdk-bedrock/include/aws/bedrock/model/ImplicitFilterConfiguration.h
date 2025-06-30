/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/MetadataAttributeSchema.h>
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
   * <p>Configuration for implicit filtering in Knowledge Base vector searches.
   * Implicit filtering allows you to automatically filter search results based on
   * metadata attributes without requiring explicit filter expressions in each
   * query.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/ImplicitFilterConfiguration">AWS
   * API Reference</a></p>
   */
  class ImplicitFilterConfiguration
  {
  public:
    AWS_BEDROCK_API ImplicitFilterConfiguration() = default;
    AWS_BEDROCK_API ImplicitFilterConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API ImplicitFilterConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of metadata attribute schemas that define the structure and properties
     * of metadata fields used for implicit filtering. Each attribute defines a key,
     * type, and optional description.</p>
     */
    inline const Aws::Vector<MetadataAttributeSchema>& GetMetadataAttributes() const { return m_metadataAttributes; }
    inline bool MetadataAttributesHasBeenSet() const { return m_metadataAttributesHasBeenSet; }
    template<typename MetadataAttributesT = Aws::Vector<MetadataAttributeSchema>>
    void SetMetadataAttributes(MetadataAttributesT&& value) { m_metadataAttributesHasBeenSet = true; m_metadataAttributes = std::forward<MetadataAttributesT>(value); }
    template<typename MetadataAttributesT = Aws::Vector<MetadataAttributeSchema>>
    ImplicitFilterConfiguration& WithMetadataAttributes(MetadataAttributesT&& value) { SetMetadataAttributes(std::forward<MetadataAttributesT>(value)); return *this;}
    template<typename MetadataAttributesT = MetadataAttributeSchema>
    ImplicitFilterConfiguration& AddMetadataAttributes(MetadataAttributesT&& value) { m_metadataAttributesHasBeenSet = true; m_metadataAttributes.emplace_back(std::forward<MetadataAttributesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the foundation model used for implicit
     * filtering. This model processes the query to extract relevant filtering
     * criteria.</p>
     */
    inline const Aws::String& GetModelArn() const { return m_modelArn; }
    inline bool ModelArnHasBeenSet() const { return m_modelArnHasBeenSet; }
    template<typename ModelArnT = Aws::String>
    void SetModelArn(ModelArnT&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::forward<ModelArnT>(value); }
    template<typename ModelArnT = Aws::String>
    ImplicitFilterConfiguration& WithModelArn(ModelArnT&& value) { SetModelArn(std::forward<ModelArnT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<MetadataAttributeSchema> m_metadataAttributes;
    bool m_metadataAttributesHasBeenSet = false;

    Aws::String m_modelArn;
    bool m_modelArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
