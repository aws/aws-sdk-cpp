/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/ContinuumRequest.h>
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/continuum/model/IntegrationAuthorizationProviderType.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Continuum {
namespace Model {

/**
 * <p>Specifies the provider to authorize and, optionally, the name the new
 * integration will use.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/StartIntegrationAuthorizationInput">AWS
 * API Reference</a></p>
 */
class StartIntegrationAuthorizationRequest : public ContinuumRequest {
 public:
  AWS_CONTINUUM_API StartIntegrationAuthorizationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartIntegrationAuthorization"; }

  AWS_CONTINUUM_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The provider to authorize. Only GITHUB is supported.</p>
   */
  inline IntegrationAuthorizationProviderType GetProviderType() const { return m_providerType; }
  inline bool ProviderTypeHasBeenSet() const { return m_providerTypeHasBeenSet; }
  inline void SetProviderType(IntegrationAuthorizationProviderType value) {
    m_providerTypeHasBeenSet = true;
    m_providerType = value;
  }
  inline StartIntegrationAuthorizationRequest& WithProviderType(IntegrationAuthorizationProviderType value) {
    SetProviderType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name the integration will be created with. When specified, the request
   * fails with ConflictException if an integration with this name already exists in
   * the account, before the caller leaves for the provider. The name is only
   * checked: it is not reserved, stored, or authorized. CreateIntegration requires
   * its own name, checks it again, and may use a different one.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  StartIntegrationAuthorizationRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}
 private:
  IntegrationAuthorizationProviderType m_providerType{IntegrationAuthorizationProviderType::NOT_SET};

  Aws::String m_name;
  bool m_providerTypeHasBeenSet = false;
  bool m_nameHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
