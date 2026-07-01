/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACMRequest.h>
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace ACM {
namespace Model {

/**
 */
class DescribeAcmeDomainValidationRequest : public ACMRequest {
 public:
  AWS_ACM_API DescribeAcmeDomainValidationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeAcmeDomainValidation"; }

  AWS_ACM_API Aws::String SerializePayload() const override;

  AWS_ACM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  /**
   * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
   */
  AWS_ACM_API EndpointParameters GetEndpointContextParams() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the ACME domain validation.</p>
   */
  inline const Aws::String& GetAcmeDomainValidationArn() const { return m_acmeDomainValidationArn; }
  inline bool AcmeDomainValidationArnHasBeenSet() const { return m_acmeDomainValidationArnHasBeenSet; }
  template <typename AcmeDomainValidationArnT = Aws::String>
  void SetAcmeDomainValidationArn(AcmeDomainValidationArnT&& value) {
    m_acmeDomainValidationArnHasBeenSet = true;
    m_acmeDomainValidationArn = std::forward<AcmeDomainValidationArnT>(value);
  }
  template <typename AcmeDomainValidationArnT = Aws::String>
  DescribeAcmeDomainValidationRequest& WithAcmeDomainValidationArn(AcmeDomainValidationArnT&& value) {
    SetAcmeDomainValidationArn(std::forward<AcmeDomainValidationArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_acmeDomainValidationArn;
  bool m_acmeDomainValidationArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
