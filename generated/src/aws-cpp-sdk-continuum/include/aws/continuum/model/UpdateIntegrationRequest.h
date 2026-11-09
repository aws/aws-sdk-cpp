/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/ContinuumRequest.h>
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/continuum/model/UpdateProviderConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Continuum {
namespace Model {

/**
 * <p>Specifies the S3 integration and the credentials to validate and
 * save.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/UpdateIntegrationInput">AWS
 * API Reference</a></p>
 */
class UpdateIntegrationRequest : public ContinuumRequest {
 public:
  AWS_CONTINUUM_API UpdateIntegrationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateIntegration"; }

  AWS_CONTINUUM_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the S3 integration to update.</p>
   */
  inline const Aws::String& GetIntegrationId() const { return m_integrationId; }
  inline bool IntegrationIdHasBeenSet() const { return m_integrationIdHasBeenSet; }
  template <typename IntegrationIdT = Aws::String>
  void SetIntegrationId(IntegrationIdT&& value) {
    m_integrationIdHasBeenSet = true;
    m_integrationId = std::forward<IntegrationIdT>(value);
  }
  template <typename IntegrationIdT = Aws::String>
  UpdateIntegrationRequest& WithIntegrationId(IntegrationIdT&& value) {
    SetIntegrationId(std::forward<IntegrationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The provider-specific changes to apply. The member must match the
   * integration's provider type, and only S3 integrations can be updated.</p>
   */
  inline const UpdateProviderConfiguration& GetProviderConfiguration() const { return m_providerConfiguration; }
  inline bool ProviderConfigurationHasBeenSet() const { return m_providerConfigurationHasBeenSet; }
  template <typename ProviderConfigurationT = UpdateProviderConfiguration>
  void SetProviderConfiguration(ProviderConfigurationT&& value) {
    m_providerConfigurationHasBeenSet = true;
    m_providerConfiguration = std::forward<ProviderConfigurationT>(value);
  }
  template <typename ProviderConfigurationT = UpdateProviderConfiguration>
  UpdateIntegrationRequest& WithProviderConfiguration(ProviderConfigurationT&& value) {
    SetProviderConfiguration(std::forward<ProviderConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_integrationId;

  UpdateProviderConfiguration m_providerConfiguration;
  bool m_integrationIdHasBeenSet = false;
  bool m_providerConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
