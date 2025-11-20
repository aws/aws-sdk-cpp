/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager/LicenseManagerRequest.h>
#include <aws/license-manager/LicenseManager_EXPORTS.h>

#include <utility>

namespace Aws {
namespace LicenseManager {
namespace Model {

/**
 */
class DeleteLicenseAssetRulesetRequest : public LicenseManagerRequest {
 public:
  AWS_LICENSEMANAGER_API DeleteLicenseAssetRulesetRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteLicenseAssetRuleset"; }

  AWS_LICENSEMANAGER_API Aws::String SerializePayload() const override;

  AWS_LICENSEMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>Amazon Resource Name (ARN) of the license asset ruleset.</p>
   */
  inline const Aws::String& GetLicenseAssetRulesetArn() const { return m_licenseAssetRulesetArn; }
  inline bool LicenseAssetRulesetArnHasBeenSet() const { return m_licenseAssetRulesetArnHasBeenSet; }
  template <typename LicenseAssetRulesetArnT = Aws::String>
  void SetLicenseAssetRulesetArn(LicenseAssetRulesetArnT&& value) {
    m_licenseAssetRulesetArnHasBeenSet = true;
    m_licenseAssetRulesetArn = std::forward<LicenseAssetRulesetArnT>(value);
  }
  template <typename LicenseAssetRulesetArnT = Aws::String>
  DeleteLicenseAssetRulesetRequest& WithLicenseAssetRulesetArn(LicenseAssetRulesetArnT&& value) {
    SetLicenseAssetRulesetArn(std::forward<LicenseAssetRulesetArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_licenseAssetRulesetArn;
  bool m_licenseAssetRulesetArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace LicenseManager
}  // namespace Aws
