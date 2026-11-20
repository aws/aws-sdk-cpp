/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Glue {
namespace Model {

/**
 * <p>A form to set on an asset, consisting of the form type identifier and its
 * JSON content.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/AssetFormInput">AWS
 * API Reference</a></p>
 */
class AssetFormInput {
 public:
  AWS_GLUE_API AssetFormInput() = default;
  AWS_GLUE_API AssetFormInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API AssetFormInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the form type that defines this form's schema. This field
   * is required.</p>
   */
  inline const Aws::String& GetFormTypeIdentifier() const { return m_formTypeIdentifier; }
  inline bool FormTypeIdentifierHasBeenSet() const { return m_formTypeIdentifierHasBeenSet; }
  template <typename FormTypeIdentifierT = Aws::String>
  void SetFormTypeIdentifier(FormTypeIdentifierT&& value) {
    m_formTypeIdentifierHasBeenSet = true;
    m_formTypeIdentifier = std::forward<FormTypeIdentifierT>(value);
  }
  template <typename FormTypeIdentifierT = Aws::String>
  AssetFormInput& WithFormTypeIdentifier(FormTypeIdentifierT&& value) {
    SetFormTypeIdentifier(std::forward<FormTypeIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The JSON content of the form, conforming to the schema of the specified form
   * type.</p>
   */
  inline const Aws::String& GetContent() const { return m_content; }
  inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
  template <typename ContentT = Aws::String>
  void SetContent(ContentT&& value) {
    m_contentHasBeenSet = true;
    m_content = std::forward<ContentT>(value);
  }
  template <typename ContentT = Aws::String>
  AssetFormInput& WithContent(ContentT&& value) {
    SetContent(std::forward<ContentT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_formTypeIdentifier;

  Aws::String m_content;
  bool m_formTypeIdentifierHasBeenSet = false;
  bool m_contentHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
