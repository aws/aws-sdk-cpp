/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECRRequest.h>
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/model/SigningConfiguration.h>

#include <utility>

namespace Aws {
namespace ECR {
namespace Model {

/**
 */
class PutSigningConfigurationRequest : public ECRRequest {
 public:
  AWS_ECR_API PutSigningConfigurationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutSigningConfiguration"; }

  AWS_ECR_API Aws::String SerializePayload() const override;

  AWS_ECR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The signing configuration to assign to the registry.</p>
   */
  inline const SigningConfiguration& GetSigningConfiguration() const { return m_signingConfiguration; }
  inline bool SigningConfigurationHasBeenSet() const { return m_signingConfigurationHasBeenSet; }
  template <typename SigningConfigurationT = SigningConfiguration>
  void SetSigningConfiguration(SigningConfigurationT&& value) {
    m_signingConfigurationHasBeenSet = true;
    m_signingConfiguration = std::forward<SigningConfigurationT>(value);
  }
  template <typename SigningConfigurationT = SigningConfiguration>
  PutSigningConfigurationRequest& WithSigningConfiguration(SigningConfigurationT&& value) {
    SetSigningConfiguration(std::forward<SigningConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  SigningConfiguration m_signingConfiguration;
  bool m_signingConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECR
}  // namespace Aws
