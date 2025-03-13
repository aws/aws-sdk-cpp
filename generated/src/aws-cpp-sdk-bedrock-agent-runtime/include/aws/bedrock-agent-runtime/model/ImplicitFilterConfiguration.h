/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/MetadataAttributeSchema.h>
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
   * <p>Settings for implicit filtering, where a model generates a metadata filter
   * based on the prompt.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/ImplicitFilterConfiguration">AWS
   * API Reference</a></p>
   */
  class ImplicitFilterConfiguration
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API ImplicitFilterConfiguration() = default;
    AWS_BEDROCKAGENTRUNTIME_API ImplicitFilterConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API ImplicitFilterConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Metadata that can be used in a filter.</p>
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
     * <p>The model that generates the filter.</p>
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
} // namespace BedrockAgentRuntime
} // namespace Aws
