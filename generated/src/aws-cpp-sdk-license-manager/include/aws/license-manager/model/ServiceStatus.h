/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/license-manager/model/CrossAccountDiscoveryServiceStatus.h>
#include <aws/license-manager/model/CrossRegionDiscoveryStatus.h>

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
 * <p>Overall service status information for License Manager.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ServiceStatus">AWS
 * API Reference</a></p>
 */
class ServiceStatus {
 public:
  AWS_LICENSEMANAGER_API ServiceStatus() = default;
  AWS_LICENSEMANAGER_API ServiceStatus(Aws::Utils::Json::JsonView jsonValue);
  AWS_LICENSEMANAGER_API ServiceStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Status of cross-account discovery service.</p>
   */
  inline const CrossAccountDiscoveryServiceStatus& GetCrossAccountDiscovery() const { return m_crossAccountDiscovery; }
  inline bool CrossAccountDiscoveryHasBeenSet() const { return m_crossAccountDiscoveryHasBeenSet; }
  template <typename CrossAccountDiscoveryT = CrossAccountDiscoveryServiceStatus>
  void SetCrossAccountDiscovery(CrossAccountDiscoveryT&& value) {
    m_crossAccountDiscoveryHasBeenSet = true;
    m_crossAccountDiscovery = std::forward<CrossAccountDiscoveryT>(value);
  }
  template <typename CrossAccountDiscoveryT = CrossAccountDiscoveryServiceStatus>
  ServiceStatus& WithCrossAccountDiscovery(CrossAccountDiscoveryT&& value) {
    SetCrossAccountDiscovery(std::forward<CrossAccountDiscoveryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Status of cross-region discovery service.</p>
   */
  inline const CrossRegionDiscoveryStatus& GetCrossRegionDiscovery() const { return m_crossRegionDiscovery; }
  inline bool CrossRegionDiscoveryHasBeenSet() const { return m_crossRegionDiscoveryHasBeenSet; }
  template <typename CrossRegionDiscoveryT = CrossRegionDiscoveryStatus>
  void SetCrossRegionDiscovery(CrossRegionDiscoveryT&& value) {
    m_crossRegionDiscoveryHasBeenSet = true;
    m_crossRegionDiscovery = std::forward<CrossRegionDiscoveryT>(value);
  }
  template <typename CrossRegionDiscoveryT = CrossRegionDiscoveryStatus>
  ServiceStatus& WithCrossRegionDiscovery(CrossRegionDiscoveryT&& value) {
    SetCrossRegionDiscovery(std::forward<CrossRegionDiscoveryT>(value));
    return *this;
  }
  ///@}
 private:
  CrossAccountDiscoveryServiceStatus m_crossAccountDiscovery;

  CrossRegionDiscoveryStatus m_crossRegionDiscovery;
  bool m_crossAccountDiscoveryHasBeenSet = false;
  bool m_crossRegionDiscoveryHasBeenSet = false;
};

}  // namespace Model
}  // namespace LicenseManager
}  // namespace Aws
