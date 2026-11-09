/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Continuum {
namespace Model {

/**
 * <p>One proof program file. Further members, such as path and purpose, can be
 * added later as optional details.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/ValidationProofMaterial">AWS
 * API Reference</a></p>
 */
class ValidationProofMaterial {
 public:
  AWS_CONTINUUM_API ValidationProofMaterial() = default;
  AWS_CONTINUUM_API ValidationProofMaterial(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API ValidationProofMaterial& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The file's non-blank text, exactly as retained.</p>
   */
  inline const Aws::String& GetContent() const { return m_content; }
  inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
  template <typename ContentT = Aws::String>
  void SetContent(ContentT&& value) {
    m_contentHasBeenSet = true;
    m_content = std::forward<ContentT>(value);
  }
  template <typename ContentT = Aws::String>
  ValidationProofMaterial& WithContent(ContentT&& value) {
    SetContent(std::forward<ContentT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_content;
  bool m_contentHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
