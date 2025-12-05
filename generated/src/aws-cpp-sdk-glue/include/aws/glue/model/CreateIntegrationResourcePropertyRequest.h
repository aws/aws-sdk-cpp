/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/GlueRequest.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/SourceProcessingProperties.h>
#include <aws/glue/model/Tag.h>
#include <aws/glue/model/TargetProcessingProperties.h>

#include <utility>

namespace Aws {
namespace Glue {
namespace Model {

/**
 */
class CreateIntegrationResourcePropertyRequest : public GlueRequest {
 public:
  AWS_GLUE_API CreateIntegrationResourcePropertyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateIntegrationResourceProperty"; }

  AWS_GLUE_API Aws::String SerializePayload() const override;

  AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The connection ARN of the source, or the database ARN of the target.</p>
   */
  inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
  inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
  template <typename ResourceArnT = Aws::String>
  void SetResourceArn(ResourceArnT&& value) {
    m_resourceArnHasBeenSet = true;
    m_resourceArn = std::forward<ResourceArnT>(value);
  }
  template <typename ResourceArnT = Aws::String>
  CreateIntegrationResourcePropertyRequest& WithResourceArn(ResourceArnT&& value) {
    SetResourceArn(std::forward<ResourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resource properties associated with the integration source.</p>
   */
  inline const SourceProcessingProperties& GetSourceProcessingProperties() const { return m_sourceProcessingProperties; }
  inline bool SourceProcessingPropertiesHasBeenSet() const { return m_sourceProcessingPropertiesHasBeenSet; }
  template <typename SourceProcessingPropertiesT = SourceProcessingProperties>
  void SetSourceProcessingProperties(SourceProcessingPropertiesT&& value) {
    m_sourceProcessingPropertiesHasBeenSet = true;
    m_sourceProcessingProperties = std::forward<SourceProcessingPropertiesT>(value);
  }
  template <typename SourceProcessingPropertiesT = SourceProcessingProperties>
  CreateIntegrationResourcePropertyRequest& WithSourceProcessingProperties(SourceProcessingPropertiesT&& value) {
    SetSourceProcessingProperties(std::forward<SourceProcessingPropertiesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resource properties associated with the integration target.</p>
   */
  inline const TargetProcessingProperties& GetTargetProcessingProperties() const { return m_targetProcessingProperties; }
  inline bool TargetProcessingPropertiesHasBeenSet() const { return m_targetProcessingPropertiesHasBeenSet; }
  template <typename TargetProcessingPropertiesT = TargetProcessingProperties>
  void SetTargetProcessingProperties(TargetProcessingPropertiesT&& value) {
    m_targetProcessingPropertiesHasBeenSet = true;
    m_targetProcessingProperties = std::forward<TargetProcessingPropertiesT>(value);
  }
  template <typename TargetProcessingPropertiesT = TargetProcessingProperties>
  CreateIntegrationResourcePropertyRequest& WithTargetProcessingProperties(TargetProcessingPropertiesT&& value) {
    SetTargetProcessingProperties(std::forward<TargetProcessingPropertiesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Metadata assigned to the resource consisting of a list of key-value
   * pairs.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CreateIntegrationResourcePropertyRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateIntegrationResourcePropertyRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_resourceArn;

  SourceProcessingProperties m_sourceProcessingProperties;

  TargetProcessingProperties m_targetProcessingProperties;

  Aws::Vector<Tag> m_tags;
  bool m_resourceArnHasBeenSet = false;
  bool m_sourceProcessingPropertiesHasBeenSet = false;
  bool m_targetProcessingPropertiesHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
