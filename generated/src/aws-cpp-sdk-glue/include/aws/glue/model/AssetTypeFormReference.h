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
 * <p>A reference to a form type that is included in an asset type.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/AssetTypeFormReference">AWS
 * API Reference</a></p>
 */
class AssetTypeFormReference {
 public:
  AWS_GLUE_API AssetTypeFormReference() = default;
  AWS_GLUE_API AssetTypeFormReference(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API AssetTypeFormReference& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the referenced form type.</p>
   */
  inline const Aws::String& GetFormTypeIdentifier() const { return m_formTypeIdentifier; }
  inline bool FormTypeIdentifierHasBeenSet() const { return m_formTypeIdentifierHasBeenSet; }
  template <typename FormTypeIdentifierT = Aws::String>
  void SetFormTypeIdentifier(FormTypeIdentifierT&& value) {
    m_formTypeIdentifierHasBeenSet = true;
    m_formTypeIdentifier = std::forward<FormTypeIdentifierT>(value);
  }
  template <typename FormTypeIdentifierT = Aws::String>
  AssetTypeFormReference& WithFormTypeIdentifier(FormTypeIdentifierT&& value) {
    SetFormTypeIdentifier(std::forward<FormTypeIdentifierT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_formTypeIdentifier;
  bool m_formTypeIdentifierHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
