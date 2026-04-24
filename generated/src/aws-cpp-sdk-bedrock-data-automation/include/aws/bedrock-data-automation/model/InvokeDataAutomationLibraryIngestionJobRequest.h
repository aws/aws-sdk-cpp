/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomationRequest.h>
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/model/EntityType.h>
#include <aws/bedrock-data-automation/model/InputConfiguration.h>
#include <aws/bedrock-data-automation/model/LibraryIngestionJobOperationType.h>
#include <aws/bedrock-data-automation/model/NotificationConfiguration.h>
#include <aws/bedrock-data-automation/model/OutputConfiguration.h>
#include <aws/bedrock-data-automation/model/Tag.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace BedrockDataAutomation {
namespace Model {

/**
 * <p>Invoke DataAutomationLibraryIngestionJob Request</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/InvokeDataAutomationLibraryIngestionJobRequest">AWS
 * API Reference</a></p>
 */
class InvokeDataAutomationLibraryIngestionJobRequest : public BedrockDataAutomationRequest {
 public:
  AWS_BEDROCKDATAAUTOMATION_API InvokeDataAutomationLibraryIngestionJobRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "InvokeDataAutomationLibraryIngestionJob"; }

  AWS_BEDROCKDATAAUTOMATION_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>ARN generated at the server side when a DataAutomationLibrary is created</p>
   */
  inline const Aws::String& GetLibraryArn() const { return m_libraryArn; }
  inline bool LibraryArnHasBeenSet() const { return m_libraryArnHasBeenSet; }
  template <typename LibraryArnT = Aws::String>
  void SetLibraryArn(LibraryArnT&& value) {
    m_libraryArnHasBeenSet = true;
    m_libraryArn = std::forward<LibraryArnT>(value);
  }
  template <typename LibraryArnT = Aws::String>
  InvokeDataAutomationLibraryIngestionJobRequest& WithLibraryArn(LibraryArnT&& value) {
    SetLibraryArn(std::forward<LibraryArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Idempotency token</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  InvokeDataAutomationLibraryIngestionJobRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Input configuration of DataAutomationLibraryIngestionJob request</p>
   */
  inline const InputConfiguration& GetInputConfiguration() const { return m_inputConfiguration; }
  inline bool InputConfigurationHasBeenSet() const { return m_inputConfigurationHasBeenSet; }
  template <typename InputConfigurationT = InputConfiguration>
  void SetInputConfiguration(InputConfigurationT&& value) {
    m_inputConfigurationHasBeenSet = true;
    m_inputConfiguration = std::forward<InputConfigurationT>(value);
  }
  template <typename InputConfigurationT = InputConfiguration>
  InvokeDataAutomationLibraryIngestionJobRequest& WithInputConfiguration(InputConfigurationT&& value) {
    SetInputConfiguration(std::forward<InputConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The entity type for which DataAutomationLibraryIngestionJob is being run</p>
   */
  inline EntityType GetEntityType() const { return m_entityType; }
  inline bool EntityTypeHasBeenSet() const { return m_entityTypeHasBeenSet; }
  inline void SetEntityType(EntityType value) {
    m_entityTypeHasBeenSet = true;
    m_entityType = value;
  }
  inline InvokeDataAutomationLibraryIngestionJobRequest& WithEntityType(EntityType value) {
    SetEntityType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The operation to be performed by DataAutomationLibraryIngestionJob</p>
   */
  inline LibraryIngestionJobOperationType GetOperationType() const { return m_operationType; }
  inline bool OperationTypeHasBeenSet() const { return m_operationTypeHasBeenSet; }
  inline void SetOperationType(LibraryIngestionJobOperationType value) {
    m_operationTypeHasBeenSet = true;
    m_operationType = value;
  }
  inline InvokeDataAutomationLibraryIngestionJobRequest& WithOperationType(LibraryIngestionJobOperationType value) {
    SetOperationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Output configuration of DataAutomationLibraryIngestionJob</p>
   */
  inline const OutputConfiguration& GetOutputConfiguration() const { return m_outputConfiguration; }
  inline bool OutputConfigurationHasBeenSet() const { return m_outputConfigurationHasBeenSet; }
  template <typename OutputConfigurationT = OutputConfiguration>
  void SetOutputConfiguration(OutputConfigurationT&& value) {
    m_outputConfigurationHasBeenSet = true;
    m_outputConfiguration = std::forward<OutputConfigurationT>(value);
  }
  template <typename OutputConfigurationT = OutputConfiguration>
  InvokeDataAutomationLibraryIngestionJobRequest& WithOutputConfiguration(OutputConfigurationT&& value) {
    SetOutputConfiguration(std::forward<OutputConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Notification configuration.</p>
   */
  inline const NotificationConfiguration& GetNotificationConfiguration() const { return m_notificationConfiguration; }
  inline bool NotificationConfigurationHasBeenSet() const { return m_notificationConfigurationHasBeenSet; }
  template <typename NotificationConfigurationT = NotificationConfiguration>
  void SetNotificationConfiguration(NotificationConfigurationT&& value) {
    m_notificationConfigurationHasBeenSet = true;
    m_notificationConfiguration = std::forward<NotificationConfigurationT>(value);
  }
  template <typename NotificationConfigurationT = NotificationConfiguration>
  InvokeDataAutomationLibraryIngestionJobRequest& WithNotificationConfiguration(NotificationConfigurationT&& value) {
    SetNotificationConfiguration(std::forward<NotificationConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of tags</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  InvokeDataAutomationLibraryIngestionJobRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  InvokeDataAutomationLibraryIngestionJobRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_libraryArn;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  InputConfiguration m_inputConfiguration;

  EntityType m_entityType{EntityType::NOT_SET};

  LibraryIngestionJobOperationType m_operationType{LibraryIngestionJobOperationType::NOT_SET};

  OutputConfiguration m_outputConfiguration;

  NotificationConfiguration m_notificationConfiguration;

  Aws::Vector<Tag> m_tags;
  bool m_libraryArnHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_inputConfigurationHasBeenSet = false;
  bool m_entityTypeHasBeenSet = false;
  bool m_operationTypeHasBeenSet = false;
  bool m_outputConfigurationHasBeenSet = false;
  bool m_notificationConfigurationHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
