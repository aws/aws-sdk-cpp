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
class DeleteLicenseAssetGroupRequest : public LicenseManagerRequest {
 public:
  AWS_LICENSEMANAGER_API DeleteLicenseAssetGroupRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteLicenseAssetGroup"; }

  AWS_LICENSEMANAGER_API Aws::String SerializePayload() const override;

  AWS_LICENSEMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>Amazon Resource Name (ARN) of the license asset group.</p>
   */
  inline const Aws::String& GetLicenseAssetGroupArn() const { return m_licenseAssetGroupArn; }
  inline bool LicenseAssetGroupArnHasBeenSet() const { return m_licenseAssetGroupArnHasBeenSet; }
  template <typename LicenseAssetGroupArnT = Aws::String>
  void SetLicenseAssetGroupArn(LicenseAssetGroupArnT&& value) {
    m_licenseAssetGroupArnHasBeenSet = true;
    m_licenseAssetGroupArn = std::forward<LicenseAssetGroupArnT>(value);
  }
  template <typename LicenseAssetGroupArnT = Aws::String>
  DeleteLicenseAssetGroupRequest& WithLicenseAssetGroupArn(LicenseAssetGroupArnT&& value) {
    SetLicenseAssetGroupArn(std::forward<LicenseAssetGroupArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_licenseAssetGroupArn;
  bool m_licenseAssetGroupArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace LicenseManager
}  // namespace Aws
