/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/AzureProviderDetailUpdate.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Inspector2 {
namespace Model {

/**
 * <p>The provider-specific configuration details for updating a
 * connector.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ProviderDetailUpdate">AWS
 * API Reference</a></p>
 */
class ProviderDetailUpdate {
 public:
  AWS_INSPECTOR2_API ProviderDetailUpdate() = default;
  AWS_INSPECTOR2_API ProviderDetailUpdate(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API ProviderDetailUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Azure-specific details for updating a connector.</p>
   */
  inline const AzureProviderDetailUpdate& GetAzure() const { return m_azure; }
  inline bool AzureHasBeenSet() const { return m_azureHasBeenSet; }
  template <typename AzureT = AzureProviderDetailUpdate>
  void SetAzure(AzureT&& value) {
    m_azureHasBeenSet = true;
    m_azure = std::forward<AzureT>(value);
  }
  template <typename AzureT = AzureProviderDetailUpdate>
  ProviderDetailUpdate& WithAzure(AzureT&& value) {
    SetAzure(std::forward<AzureT>(value));
    return *this;
  }
  ///@}
 private:
  AzureProviderDetailUpdate m_azure;
  bool m_azureHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
