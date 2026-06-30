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
class DescribeAcmeExternalAccountBindingRequest : public ACMRequest {
 public:
  AWS_ACM_API DescribeAcmeExternalAccountBindingRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeAcmeExternalAccountBinding"; }

  AWS_ACM_API Aws::String SerializePayload() const override;

  AWS_ACM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  /**
   * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
   */
  AWS_ACM_API EndpointParameters GetEndpointContextParams() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the ACME external account binding.</p>
   */
  inline const Aws::String& GetAcmeExternalAccountBindingArn() const { return m_acmeExternalAccountBindingArn; }
  inline bool AcmeExternalAccountBindingArnHasBeenSet() const { return m_acmeExternalAccountBindingArnHasBeenSet; }
  template <typename AcmeExternalAccountBindingArnT = Aws::String>
  void SetAcmeExternalAccountBindingArn(AcmeExternalAccountBindingArnT&& value) {
    m_acmeExternalAccountBindingArnHasBeenSet = true;
    m_acmeExternalAccountBindingArn = std::forward<AcmeExternalAccountBindingArnT>(value);
  }
  template <typename AcmeExternalAccountBindingArnT = Aws::String>
  DescribeAcmeExternalAccountBindingRequest& WithAcmeExternalAccountBindingArn(AcmeExternalAccountBindingArnT&& value) {
    SetAcmeExternalAccountBindingArn(std::forward<AcmeExternalAccountBindingArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_acmeExternalAccountBindingArn;
  bool m_acmeExternalAccountBindingArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
