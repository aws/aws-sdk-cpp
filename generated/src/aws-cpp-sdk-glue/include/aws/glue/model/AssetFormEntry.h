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
 * <p>A form on an asset, consisting of the form type identifier and its JSON
 * content.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/AssetFormEntry">AWS
 * API Reference</a></p>
 */
class AssetFormEntry {
 public:
  AWS_GLUE_API AssetFormEntry() = default;
  AWS_GLUE_API AssetFormEntry(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API AssetFormEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the form type that defines this form's schema.</p>
   */
  inline const Aws::String& GetFormTypeId() const { return m_formTypeId; }
  inline bool FormTypeIdHasBeenSet() const { return m_formTypeIdHasBeenSet; }
  template <typename FormTypeIdT = Aws::String>
  void SetFormTypeId(FormTypeIdT&& value) {
    m_formTypeIdHasBeenSet = true;
    m_formTypeId = std::forward<FormTypeIdT>(value);
  }
  template <typename FormTypeIdT = Aws::String>
  AssetFormEntry& WithFormTypeId(FormTypeIdT&& value) {
    SetFormTypeId(std::forward<FormTypeIdT>(value));
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
  AssetFormEntry& WithContent(ContentT&& value) {
    SetContent(std::forward<ContentT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_formTypeId;

  Aws::String m_content;
  bool m_formTypeIdHasBeenSet = false;
  bool m_contentHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
