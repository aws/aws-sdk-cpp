/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACMRequest.h>
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/model/PrevalidationOptions.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace ACM {
namespace Model {

/**
 */
class UpdateAcmeDomainValidationRequest : public ACMRequest {
 public:
  AWS_ACM_API UpdateAcmeDomainValidationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateAcmeDomainValidation"; }

  AWS_ACM_API Aws::String SerializePayload() const override;

  AWS_ACM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  /**
   * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
   */
  AWS_ACM_API EndpointParameters GetEndpointContextParams() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the ACME domain validation to update.</p>
   */
  inline const Aws::String& GetAcmeDomainValidationArn() const { return m_acmeDomainValidationArn; }
  inline bool AcmeDomainValidationArnHasBeenSet() const { return m_acmeDomainValidationArnHasBeenSet; }
  template <typename AcmeDomainValidationArnT = Aws::String>
  void SetAcmeDomainValidationArn(AcmeDomainValidationArnT&& value) {
    m_acmeDomainValidationArnHasBeenSet = true;
    m_acmeDomainValidationArn = std::forward<AcmeDomainValidationArnT>(value);
  }
  template <typename AcmeDomainValidationArnT = Aws::String>
  UpdateAcmeDomainValidationRequest& WithAcmeDomainValidationArn(AcmeDomainValidationArnT&& value) {
    SetAcmeDomainValidationArn(std::forward<AcmeDomainValidationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated prevalidation options.</p>
   */
  inline const PrevalidationOptions& GetPrevalidationOptions() const { return m_prevalidationOptions; }
  inline bool PrevalidationOptionsHasBeenSet() const { return m_prevalidationOptionsHasBeenSet; }
  template <typename PrevalidationOptionsT = PrevalidationOptions>
  void SetPrevalidationOptions(PrevalidationOptionsT&& value) {
    m_prevalidationOptionsHasBeenSet = true;
    m_prevalidationOptions = std::forward<PrevalidationOptionsT>(value);
  }
  template <typename PrevalidationOptionsT = PrevalidationOptions>
  UpdateAcmeDomainValidationRequest& WithPrevalidationOptions(PrevalidationOptionsT&& value) {
    SetPrevalidationOptions(std::forward<PrevalidationOptionsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_acmeDomainValidationArn;

  PrevalidationOptions m_prevalidationOptions;
  bool m_acmeDomainValidationArnHasBeenSet = false;
  bool m_prevalidationOptionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
