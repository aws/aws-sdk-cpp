/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/ContinuumRequest.h>
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/continuum/model/ProviderConfiguration.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Continuum {
namespace Model {

/**
 * <p>Specifies the provider configuration and name for the new
 * integration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/CreateIntegrationInput">AWS
 * API Reference</a></p>
 */
class CreateIntegrationRequest : public ContinuumRequest {
 public:
  AWS_CONTINUUM_API CreateIntegrationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateIntegration"; }

  AWS_CONTINUUM_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>An optional token identifying one create attempt within the caller's account,
   * Region, and operation. SDKs generate a token when omitted. If a request reaches
   * the service without a token, the service generates one for that request. Each
   * request without a token starts a new attempt. To replay an attempt, supply the
   * same token and identical input. Authorized users and roles in the same account
   * can retry an attempt this way. Token records are retained for eight hours after
   * success or terminal failure, including after deletion of a successfully created
   * integration. Different input with the same token returns
   * ValidationException.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateIntegrationRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name for the integration.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateIntegrationRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The provider-specific configuration required to create the integration. Only
   * one member may be specified.</p>
   */
  inline const ProviderConfiguration& GetProviderConfiguration() const { return m_providerConfiguration; }
  inline bool ProviderConfigurationHasBeenSet() const { return m_providerConfigurationHasBeenSet; }
  template <typename ProviderConfigurationT = ProviderConfiguration>
  void SetProviderConfiguration(ProviderConfigurationT&& value) {
    m_providerConfigurationHasBeenSet = true;
    m_providerConfiguration = std::forward<ProviderConfigurationT>(value);
  }
  template <typename ProviderConfigurationT = ProviderConfiguration>
  CreateIntegrationRequest& WithProviderConfiguration(ProviderConfigurationT&& value) {
    SetProviderConfiguration(std::forward<ProviderConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_name;

  ProviderConfiguration m_providerConfiguration;
  bool m_clientTokenHasBeenSet = true;
  bool m_nameHasBeenSet = false;
  bool m_providerConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
