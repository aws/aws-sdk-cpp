/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/WorkspaceFontFamily.h>

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
 * <p>Contains font family configuration for workspace themes.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/FontFamily">AWS
 * API Reference</a></p>
 */
class FontFamily {
 public:
  AWS_CONNECT_API FontFamily() = default;
  AWS_CONNECT_API FontFamily(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API FontFamily& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The default font family to use in the workspace theme.</p>
   */
  inline WorkspaceFontFamily GetDefault() const { return m_default; }
  inline bool DefaultHasBeenSet() const { return m_defaultHasBeenSet; }
  inline void SetDefault(WorkspaceFontFamily value) {
    m_defaultHasBeenSet = true;
    m_default = value;
  }
  inline FontFamily& WithDefault(WorkspaceFontFamily value) {
    SetDefault(value);
    return *this;
  }
  ///@}
 private:
  WorkspaceFontFamily m_default{WorkspaceFontFamily::NOT_SET};
  bool m_defaultHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
