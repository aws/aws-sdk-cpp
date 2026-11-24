/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/BedrockRequest.h>
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/ProjectDataRetention.h>
#include <aws/bedrock/model/Tag.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Bedrock {
namespace Model {

/**
 * <p>The display name, optional tags, and optional data retention setting for the
 * new project.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/CreateProjectRequest">AWS
 * API Reference</a></p>
 */
class CreateProjectRequest : public BedrockRequest {
 public:
  AWS_BEDROCK_API CreateProjectRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateProject"; }

  AWS_BEDROCK_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The display name for the project. Project names do not have to be unique.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateProjectRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags to associate with the project.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CreateProjectRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateProjectRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The project's data-retention mode. If you omit this field, Amazon Bedrock
   * sets the mode to <code>inherit</code>. The project then uses the account setting
   * or the model default.</p>
   */
  inline const ProjectDataRetention& GetDataRetention() const { return m_dataRetention; }
  inline bool DataRetentionHasBeenSet() const { return m_dataRetentionHasBeenSet; }
  template <typename DataRetentionT = ProjectDataRetention>
  void SetDataRetention(DataRetentionT&& value) {
    m_dataRetentionHasBeenSet = true;
    m_dataRetention = std::forward<DataRetentionT>(value);
  }
  template <typename DataRetentionT = ProjectDataRetention>
  CreateProjectRequest& WithDataRetention(DataRetentionT&& value) {
    SetDataRetention(std::forward<DataRetentionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::Vector<Tag> m_tags;

  ProjectDataRetention m_dataRetention;
  bool m_nameHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_dataRetentionHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
