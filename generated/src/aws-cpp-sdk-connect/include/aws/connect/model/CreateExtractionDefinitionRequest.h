/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/ConnectRequest.h>
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ExtractionConfiguration.h>
#include <aws/connect/model/ExtractionDefinitionDisplay.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Connect {
namespace Model {

/**
 */
class CreateExtractionDefinitionRequest : public ConnectRequest {
 public:
  AWS_CONNECT_API CreateExtractionDefinitionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateExtractionDefinition"; }

  AWS_CONNECT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request. If not provided, the Amazon Web Services SDK
   * populates this field.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateExtractionDefinitionRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the Connect Customer instance. You can <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
   * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
   */
  inline const Aws::String& GetInstanceId() const { return m_instanceId; }
  inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
  template <typename InstanceIdT = Aws::String>
  void SetInstanceId(InstanceIdT&& value) {
    m_instanceIdHasBeenSet = true;
    m_instanceId = std::forward<InstanceIdT>(value);
  }
  template <typename InstanceIdT = Aws::String>
  CreateExtractionDefinitionRequest& WithInstanceId(InstanceIdT&& value) {
    SetInstanceId(std::forward<InstanceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique name of the extraction definition.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateExtractionDefinitionRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration that defines how data is extracted, including the prompt
   * hint and not-found behavior.</p>
   */
  inline const ExtractionConfiguration& GetExtractionConfiguration() const { return m_extractionConfiguration; }
  inline bool ExtractionConfigurationHasBeenSet() const { return m_extractionConfigurationHasBeenSet; }
  template <typename ExtractionConfigurationT = ExtractionConfiguration>
  void SetExtractionConfiguration(ExtractionConfigurationT&& value) {
    m_extractionConfigurationHasBeenSet = true;
    m_extractionConfiguration = std::forward<ExtractionConfigurationT>(value);
  }
  template <typename ExtractionConfigurationT = ExtractionConfiguration>
  CreateExtractionDefinitionRequest& WithExtractionConfiguration(ExtractionConfigurationT&& value) {
    SetExtractionConfiguration(std::forward<ExtractionConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display settings for the extraction definition, including the label shown
   * in the agent workspace.</p>
   */
  inline const ExtractionDefinitionDisplay& GetDisplay() const { return m_display; }
  inline bool DisplayHasBeenSet() const { return m_displayHasBeenSet; }
  template <typename DisplayT = ExtractionDefinitionDisplay>
  void SetDisplay(DisplayT&& value) {
    m_displayHasBeenSet = true;
    m_display = std::forward<DisplayT>(value);
  }
  template <typename DisplayT = ExtractionDefinitionDisplay>
  CreateExtractionDefinitionRequest& WithDisplay(DisplayT&& value) {
    SetDisplay(std::forward<DisplayT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags used to organize, track, or control access for this resource.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateExtractionDefinitionRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateExtractionDefinitionRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_instanceId;

  Aws::String m_name;

  ExtractionConfiguration m_extractionConfiguration;

  ExtractionDefinitionDisplay m_display;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_clientTokenHasBeenSet = true;
  bool m_instanceIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_extractionConfigurationHasBeenSet = false;
  bool m_displayHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
