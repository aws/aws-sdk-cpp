/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/BedrockRequest.h>
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/DataRetentionStorageModelProvider.h>

#include <utility>

namespace Aws {
namespace Bedrock {
namespace Model {

/**
 * <p>Identifies the model provider whose organization retention storage
 * configuration to delete.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/DeleteOrganizationDataRetentionStorageRequest">AWS
 * API Reference</a></p>
 */
class DeleteOrganizationDataRetentionStorageRequest : public BedrockRequest {
 public:
  AWS_BEDROCK_API DeleteOrganizationDataRetentionStorageRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteOrganizationDataRetentionStorage"; }

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
  inline DeleteOrganizationDataRetentionStorageRequest& WithModelProvider(DataRetentionStorageModelProvider value) {
    SetModelProvider(value);
    return *this;
  }
  ///@}
 private:
  DataRetentionStorageModelProvider m_modelProvider{DataRetentionStorageModelProvider::NOT_SET};
  bool m_modelProviderHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
