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
 * <p>Status information for cross-account discovery service.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/CrossAccountDiscoveryServiceStatus">AWS
 * API Reference</a></p>
 */
class CrossAccountDiscoveryServiceStatus {
 public:
  AWS_LICENSEMANAGER_API CrossAccountDiscoveryServiceStatus() = default;
  AWS_LICENSEMANAGER_API CrossAccountDiscoveryServiceStatus(Aws::Utils::Json::JsonView jsonValue);
  AWS_LICENSEMANAGER_API CrossAccountDiscoveryServiceStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Status message for cross-account discovery service.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  CrossAccountDiscoveryServiceStatus& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_message;
  bool m_messageHasBeenSet = false;
};

}  // namespace Model
}  // namespace LicenseManager
}  // namespace Aws
