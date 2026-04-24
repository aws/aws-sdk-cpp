/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/AllowedExtension.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>The configuration for allowed file extensions.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ExtensionConfiguration">AWS
 * API Reference</a></p>
 */
class ExtensionConfiguration {
 public:
  AWS_CONNECT_API ExtensionConfiguration() = default;
  AWS_CONNECT_API ExtensionConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API ExtensionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The list of allowed file extensions.</p>
   */
  inline const Aws::Vector<AllowedExtension>& GetAllowedExtensions() const { return m_allowedExtensions; }
  inline bool AllowedExtensionsHasBeenSet() const { return m_allowedExtensionsHasBeenSet; }
  template <typename AllowedExtensionsT = Aws::Vector<AllowedExtension>>
  void SetAllowedExtensions(AllowedExtensionsT&& value) {
    m_allowedExtensionsHasBeenSet = true;
    m_allowedExtensions = std::forward<AllowedExtensionsT>(value);
  }
  template <typename AllowedExtensionsT = Aws::Vector<AllowedExtension>>
  ExtensionConfiguration& WithAllowedExtensions(AllowedExtensionsT&& value) {
    SetAllowedExtensions(std::forward<AllowedExtensionsT>(value));
    return *this;
  }
  template <typename AllowedExtensionsT = AllowedExtension>
  ExtensionConfiguration& AddAllowedExtensions(AllowedExtensionsT&& value) {
    m_allowedExtensionsHasBeenSet = true;
    m_allowedExtensions.emplace_back(std::forward<AllowedExtensionsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<AllowedExtension> m_allowedExtensions;
  bool m_allowedExtensionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
