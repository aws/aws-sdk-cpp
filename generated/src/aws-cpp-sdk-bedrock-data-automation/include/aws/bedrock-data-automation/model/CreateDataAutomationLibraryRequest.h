/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomationRequest.h>
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/model/EncryptionConfiguration.h>
#include <aws/bedrock-data-automation/model/Tag.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace BedrockDataAutomation {
namespace Model {

/**
 * <p>Create DataAutomationLibrary Request</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/CreateDataAutomationLibraryRequest">AWS
 * API Reference</a></p>
 */
class CreateDataAutomationLibraryRequest : public BedrockDataAutomationRequest {
 public:
  AWS_BEDROCKDATAAUTOMATION_API CreateDataAutomationLibraryRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateDataAutomationLibrary"; }

  AWS_BEDROCKDATAAUTOMATION_API Aws::String SerializePayload() const override;

  ///@{

  inline const Aws::String& GetLibraryName() const { return m_libraryName; }
  inline bool LibraryNameHasBeenSet() const { return m_libraryNameHasBeenSet; }
  template <typename LibraryNameT = Aws::String>
  void SetLibraryName(LibraryNameT&& value) {
    m_libraryNameHasBeenSet = true;
    m_libraryName = std::forward<LibraryNameT>(value);
  }
  template <typename LibraryNameT = Aws::String>
  CreateDataAutomationLibraryRequest& WithLibraryName(LibraryNameT&& value) {
    SetLibraryName(std::forward<LibraryNameT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetLibraryDescription() const { return m_libraryDescription; }
  inline bool LibraryDescriptionHasBeenSet() const { return m_libraryDescriptionHasBeenSet; }
  template <typename LibraryDescriptionT = Aws::String>
  void SetLibraryDescription(LibraryDescriptionT&& value) {
    m_libraryDescriptionHasBeenSet = true;
    m_libraryDescription = std::forward<LibraryDescriptionT>(value);
  }
  template <typename LibraryDescriptionT = Aws::String>
  CreateDataAutomationLibraryRequest& WithLibraryDescription(LibraryDescriptionT&& value) {
    SetLibraryDescription(std::forward<LibraryDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateDataAutomationLibraryRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const EncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
  inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
  template <typename EncryptionConfigurationT = EncryptionConfiguration>
  void SetEncryptionConfiguration(EncryptionConfigurationT&& value) {
    m_encryptionConfigurationHasBeenSet = true;
    m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value);
  }
  template <typename EncryptionConfigurationT = EncryptionConfiguration>
  CreateDataAutomationLibraryRequest& WithEncryptionConfiguration(EncryptionConfigurationT&& value) {
    SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CreateDataAutomationLibraryRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateDataAutomationLibraryRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_libraryName;

  Aws::String m_libraryDescription;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  EncryptionConfiguration m_encryptionConfiguration;

  Aws::Vector<Tag> m_tags;
  bool m_libraryNameHasBeenSet = false;
  bool m_libraryDescriptionHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_encryptionConfigurationHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
