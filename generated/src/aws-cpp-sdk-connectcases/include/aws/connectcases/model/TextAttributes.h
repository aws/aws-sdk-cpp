/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ConnectCases {
namespace Model {

/**
 * <p>Field attributes for Text field type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/TextAttributes">AWS
 * API Reference</a></p>
 */
class TextAttributes {
 public:
  AWS_CONNECTCASES_API TextAttributes() = default;
  AWS_CONNECTCASES_API TextAttributes(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCASES_API TextAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Attribute that defines rendering component and validation.</p>
   */
  inline bool GetIsMultiline() const { return m_isMultiline; }
  inline bool IsMultilineHasBeenSet() const { return m_isMultilineHasBeenSet; }
  inline void SetIsMultiline(bool value) {
    m_isMultilineHasBeenSet = true;
    m_isMultiline = value;
  }
  inline TextAttributes& WithIsMultiline(bool value) {
    SetIsMultiline(value);
    return *this;
  }
  ///@}
 private:
  bool m_isMultiline{false};
  bool m_isMultilineHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws
