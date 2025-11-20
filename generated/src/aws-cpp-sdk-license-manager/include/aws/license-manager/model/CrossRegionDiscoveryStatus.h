/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/license-manager/model/RegionStatus.h>

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
 * <p>Status information for cross-region discovery.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/CrossRegionDiscoveryStatus">AWS
 * API Reference</a></p>
 */
class CrossRegionDiscoveryStatus {
 public:
  AWS_LICENSEMANAGER_API CrossRegionDiscoveryStatus() = default;
  AWS_LICENSEMANAGER_API CrossRegionDiscoveryStatus(Aws::Utils::Json::JsonView jsonValue);
  AWS_LICENSEMANAGER_API CrossRegionDiscoveryStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Map of region status messages for cross-region discovery.</p>
   */
  inline const Aws::Map<Aws::String, RegionStatus>& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::Map<Aws::String, RegionStatus>>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::Map<Aws::String, RegionStatus>>
  CrossRegionDiscoveryStatus& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  template <typename MessageKeyT = Aws::String, typename MessageValueT = RegionStatus>
  CrossRegionDiscoveryStatus& AddMessage(MessageKeyT&& key, MessageValueT&& value) {
    m_messageHasBeenSet = true;
    m_message.emplace(std::forward<MessageKeyT>(key), std::forward<MessageValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, RegionStatus> m_message;
  bool m_messageHasBeenSet = false;
};

}  // namespace Model
}  // namespace LicenseManager
}  // namespace Aws
