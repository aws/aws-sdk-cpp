/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStreamRequest.h>
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/model/ImageBuilderAgentAccessConfigForUpdate.h>
#include <aws/appstream/model/ImageBuilderAttribute.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace AppStream {
namespace Model {

/**
 */
class UpdateImageBuilderRequest : public AppStreamRequest {
 public:
  AWS_APPSTREAM_API UpdateImageBuilderRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateImageBuilder"; }

  AWS_APPSTREAM_API Aws::String SerializePayload() const override;

  AWS_APPSTREAM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The name of the image builder.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateImageBuilderRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description to display.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateImageBuilderRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The image builder name to display.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  UpdateImageBuilderRequest& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for agent access on the image builder. Specify this to
   * update agent access settings. To remove agent access, use AttributesToDelete
   * with the AGENT_ACCESS_CONFIG value.</p>
   */
  inline const ImageBuilderAgentAccessConfigForUpdate& GetAgentAccessConfig() const { return m_agentAccessConfig; }
  inline bool AgentAccessConfigHasBeenSet() const { return m_agentAccessConfigHasBeenSet; }
  template <typename AgentAccessConfigT = ImageBuilderAgentAccessConfigForUpdate>
  void SetAgentAccessConfig(AgentAccessConfigT&& value) {
    m_agentAccessConfigHasBeenSet = true;
    m_agentAccessConfig = std::forward<AgentAccessConfigT>(value);
  }
  template <typename AgentAccessConfigT = ImageBuilderAgentAccessConfigForUpdate>
  UpdateImageBuilderRequest& WithAgentAccessConfig(AgentAccessConfigT&& value) {
    SetAgentAccessConfig(std::forward<AgentAccessConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The image builder attributes to delete.</p>
   */
  inline const Aws::Vector<ImageBuilderAttribute>& GetAttributesToDelete() const { return m_attributesToDelete; }
  inline bool AttributesToDeleteHasBeenSet() const { return m_attributesToDeleteHasBeenSet; }
  template <typename AttributesToDeleteT = Aws::Vector<ImageBuilderAttribute>>
  void SetAttributesToDelete(AttributesToDeleteT&& value) {
    m_attributesToDeleteHasBeenSet = true;
    m_attributesToDelete = std::forward<AttributesToDeleteT>(value);
  }
  template <typename AttributesToDeleteT = Aws::Vector<ImageBuilderAttribute>>
  UpdateImageBuilderRequest& WithAttributesToDelete(AttributesToDeleteT&& value) {
    SetAttributesToDelete(std::forward<AttributesToDeleteT>(value));
    return *this;
  }
  inline UpdateImageBuilderRequest& AddAttributesToDelete(ImageBuilderAttribute value) {
    m_attributesToDeleteHasBeenSet = true;
    m_attributesToDelete.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_description;

  Aws::String m_displayName;

  ImageBuilderAgentAccessConfigForUpdate m_agentAccessConfig;

  Aws::Vector<ImageBuilderAttribute> m_attributesToDelete;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_displayNameHasBeenSet = false;
  bool m_agentAccessConfigHasBeenSet = false;
  bool m_attributesToDeleteHasBeenSet = false;
};

}  // namespace Model
}  // namespace AppStream
}  // namespace Aws
