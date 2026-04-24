/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager/LicenseManager_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LicenseManager {
namespace Model {

/**
 * <p>License asset group configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/LicenseAssetGroupConfiguration">AWS
 * API Reference</a></p>
 */
class LicenseAssetGroupConfiguration {
 public:
  AWS_LICENSEMANAGER_API LicenseAssetGroupConfiguration() = default;
  AWS_LICENSEMANAGER_API LicenseAssetGroupConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_LICENSEMANAGER_API LicenseAssetGroupConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>License Asset Group Configuration Usage dimension.</p>
   */
  inline const Aws::String& GetUsageDimension() const { return m_usageDimension; }
  inline bool UsageDimensionHasBeenSet() const { return m_usageDimensionHasBeenSet; }
  template <typename UsageDimensionT = Aws::String>
  void SetUsageDimension(UsageDimensionT&& value) {
    m_usageDimensionHasBeenSet = true;
    m_usageDimension = std::forward<UsageDimensionT>(value);
  }
  template <typename UsageDimensionT = Aws::String>
  LicenseAssetGroupConfiguration& WithUsageDimension(UsageDimensionT&& value) {
    SetUsageDimension(std::forward<UsageDimensionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_usageDimension;
  bool m_usageDimensionHasBeenSet = false;
};

}  // namespace Model
}  // namespace LicenseManager
}  // namespace Aws
