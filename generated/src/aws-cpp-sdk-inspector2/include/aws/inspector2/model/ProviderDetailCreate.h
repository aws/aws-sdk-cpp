/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/AzureProviderDetailCreate.h>
#include <aws/inspector2/model/GcpProviderDetailCreate.h>

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
 * <p>The provider-specific configuration details for creating a
 * connector.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ProviderDetailCreate">AWS
 * API Reference</a></p>
 */
class ProviderDetailCreate {
 public:
  AWS_INSPECTOR2_API ProviderDetailCreate() = default;
  AWS_INSPECTOR2_API ProviderDetailCreate(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API ProviderDetailCreate& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Azure-specific details for creating a connector.</p>
   */
  inline const AzureProviderDetailCreate& GetAzure() const { return m_azure; }
  inline bool AzureHasBeenSet() const { return m_azureHasBeenSet; }
  template <typename AzureT = AzureProviderDetailCreate>
  void SetAzure(AzureT&& value) {
    m_azureHasBeenSet = true;
    m_azure = std::forward<AzureT>(value);
  }
  template <typename AzureT = AzureProviderDetailCreate>
  ProviderDetailCreate& WithAzure(AzureT&& value) {
    SetAzure(std::forward<AzureT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The details specific to Google Cloud Platform (GCP) for creating a
   * connector.</p>
   */
  inline const GcpProviderDetailCreate& GetGcp() const { return m_gcp; }
  inline bool GcpHasBeenSet() const { return m_gcpHasBeenSet; }
  template <typename GcpT = GcpProviderDetailCreate>
  void SetGcp(GcpT&& value) {
    m_gcpHasBeenSet = true;
    m_gcp = std::forward<GcpT>(value);
  }
  template <typename GcpT = GcpProviderDetailCreate>
  ProviderDetailCreate& WithGcp(GcpT&& value) {
    SetGcp(std::forward<GcpT>(value));
    return *this;
  }
  ///@}
 private:
  AzureProviderDetailCreate m_azure;

  GcpProviderDetailCreate m_gcp;
  bool m_azureHasBeenSet = false;
  bool m_gcpHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
