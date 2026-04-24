/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>Information about an allowed file extension.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AllowedExtension">AWS
 * API Reference</a></p>
 */
class AllowedExtension {
 public:
  AWS_CONNECT_API AllowedExtension() = default;
  AWS_CONNECT_API AllowedExtension(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API AllowedExtension& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The file extension. The extension must be between 1 and 10 characters and can
   * contain only alphanumeric characters, hyphens, and underscores.</p>
   */
  inline const Aws::String& GetExtension() const { return m_extension; }
  inline bool ExtensionHasBeenSet() const { return m_extensionHasBeenSet; }
  template <typename ExtensionT = Aws::String>
  void SetExtension(ExtensionT&& value) {
    m_extensionHasBeenSet = true;
    m_extension = std::forward<ExtensionT>(value);
  }
  template <typename ExtensionT = Aws::String>
  AllowedExtension& WithExtension(ExtensionT&& value) {
    SetExtension(std::forward<ExtensionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_extension;
  bool m_extensionHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
