/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/BedrockRequest.h>
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/DataRetentionStorageConfiguration.h>
#include <aws/bedrock/model/DataRetentionStorageDestination.h>
#include <aws/bedrock/model/DataRetentionStorageModelProvider.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Bedrock {
namespace Model {

/**
 * <p>The project, model provider, and retention storage destination to
 * configure.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/PutProjectDataRetentionStorageRequest">AWS
 * API Reference</a></p>
 */
class PutProjectDataRetentionStorageRequest : public BedrockRequest {
 public:
  AWS_BEDROCK_API PutProjectDataRetentionStorageRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutProjectDataRetentionStorage"; }

  AWS_BEDROCK_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID or ARN of a named project owned by the calling account in this AWS
   * Region. The default project is not supported; use the account-level retention
   * storage operations instead.</p>
   */
  inline const Aws::String& GetProjectIdentifier() const { return m_projectIdentifier; }
  inline bool ProjectIdentifierHasBeenSet() const { return m_projectIdentifierHasBeenSet; }
  template <typename ProjectIdentifierT = Aws::String>
  void SetProjectIdentifier(ProjectIdentifierT&& value) {
    m_projectIdentifierHasBeenSet = true;
    m_projectIdentifier = std::forward<ProjectIdentifierT>(value);
  }
  template <typename ProjectIdentifierT = Aws::String>
  PutProjectDataRetentionStorageRequest& WithProjectIdentifier(ProjectIdentifierT&& value) {
    SetProjectIdentifier(std::forward<ProjectIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The model provider whose retention storage configuration is addressed by this
   * request.</p>
   */
  inline DataRetentionStorageModelProvider GetModelProvider() const { return m_modelProvider; }
  inline bool ModelProviderHasBeenSet() const { return m_modelProviderHasBeenSet; }
  inline void SetModelProvider(DataRetentionStorageModelProvider value) {
    m_modelProviderHasBeenSet = true;
    m_modelProvider = value;
  }
  inline PutProjectDataRetentionStorageRequest& WithModelProvider(DataRetentionStorageModelProvider value) {
    SetModelProvider(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Where retained data is delivered for this scope. customer_managed requires
   * storageConfiguration; amazon_managed forbids it.</p>
   */
  inline DataRetentionStorageDestination GetStorageDestination() const { return m_storageDestination; }
  inline bool StorageDestinationHasBeenSet() const { return m_storageDestinationHasBeenSet; }
  inline void SetStorageDestination(DataRetentionStorageDestination value) {
    m_storageDestinationHasBeenSet = true;
    m_storageDestination = value;
  }
  inline PutProjectDataRetentionStorageRequest& WithStorageDestination(DataRetentionStorageDestination value) {
    SetStorageDestination(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Destination bucket and key. Required when storageDestination is
   * customer_managed; rejected with ValidationException when amazon_managed.</p>
   */
  inline const DataRetentionStorageConfiguration& GetStorageConfiguration() const { return m_storageConfiguration; }
  inline bool StorageConfigurationHasBeenSet() const { return m_storageConfigurationHasBeenSet; }
  template <typename StorageConfigurationT = DataRetentionStorageConfiguration>
  void SetStorageConfiguration(StorageConfigurationT&& value) {
    m_storageConfigurationHasBeenSet = true;
    m_storageConfiguration = std::forward<StorageConfigurationT>(value);
  }
  template <typename StorageConfigurationT = DataRetentionStorageConfiguration>
  PutProjectDataRetentionStorageRequest& WithStorageConfiguration(StorageConfigurationT&& value) {
    SetStorageConfiguration(std::forward<StorageConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_projectIdentifier;

  DataRetentionStorageModelProvider m_modelProvider{DataRetentionStorageModelProvider::NOT_SET};

  DataRetentionStorageDestination m_storageDestination{DataRetentionStorageDestination::NOT_SET};

  DataRetentionStorageConfiguration m_storageConfiguration;
  bool m_projectIdentifierHasBeenSet = false;
  bool m_modelProviderHasBeenSet = false;
  bool m_storageDestinationHasBeenSet = false;
  bool m_storageConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
