/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/model/AzureConnectorConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ConfigService {
namespace Model {

/**
 * <p>The provider-specific configuration for connecting to the third-party cloud
 * service provider. You must specify exactly one provider
 * configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ConnectorConfiguration">AWS
 * API Reference</a></p>
 */
class ConnectorConfiguration {
 public:
  AWS_CONFIGSERVICE_API ConnectorConfiguration() = default;
  AWS_CONFIGSERVICE_API ConnectorConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONFIGSERVICE_API ConnectorConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The configuration for an Azure connector.</p>
   */
  inline const AzureConnectorConfiguration& GetAzure() const { return m_azure; }
  inline bool AzureHasBeenSet() const { return m_azureHasBeenSet; }
  template <typename AzureT = AzureConnectorConfiguration>
  void SetAzure(AzureT&& value) {
    m_azureHasBeenSet = true;
    m_azure = std::forward<AzureT>(value);
  }
  template <typename AzureT = AzureConnectorConfiguration>
  ConnectorConfiguration& WithAzure(AzureT&& value) {
    SetAzure(std::forward<AzureT>(value));
    return *this;
  }
  ///@}
 private:
  AzureConnectorConfiguration m_azure;
  bool m_azureHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConfigService
}  // namespace Aws
