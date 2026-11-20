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

#include <utility>

namespace Aws {
namespace Bedrock {
namespace Model {

/**
 * <p>The model provider and retention storage destination to configure for the
 * organization.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/PutOrganizationDataRetentionStorageRequest">AWS
 * API Reference</a></p>
 */
class PutOrganizationDataRetentionStorageRequest : public BedrockRequest {
 public:
  AWS_BEDROCK_API PutOrganizationDataRetentionStorageRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutOrganizationDataRetentionStorage"; }

  AWS_BEDROCK_API Aws::String SerializePayload() const override;

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
  inline PutOrganizationDataRetentionStorageRequest& WithModelProvider(DataRetentionStorageModelProvider value) {
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
  inline PutOrganizationDataRetentionStorageRequest& WithStorageDestination(DataRetentionStorageDestination value) {
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
  PutOrganizationDataRetentionStorageRequest& WithStorageConfiguration(StorageConfigurationT&& value) {
    SetStorageConfiguration(std::forward<StorageConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  DataRetentionStorageModelProvider m_modelProvider{DataRetentionStorageModelProvider::NOT_SET};

  DataRetentionStorageDestination m_storageDestination{DataRetentionStorageDestination::NOT_SET};

  DataRetentionStorageConfiguration m_storageConfiguration;
  bool m_modelProviderHasBeenSet = false;
  bool m_storageDestinationHasBeenSet = false;
  bool m_storageConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
