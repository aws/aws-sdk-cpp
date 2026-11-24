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
 * <p>A form that is included in an asset type, identified by the form type that
 * defines its schema.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/AssetTypeFormOutput">AWS
 * API Reference</a></p>
 */
class AssetTypeFormOutput {
 public:
  AWS_GLUE_API AssetTypeFormOutput() = default;
  AWS_GLUE_API AssetTypeFormOutput(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API AssetTypeFormOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the form type that defines the form's schema.</p>
   */
  inline const Aws::String& GetFormTypeId() const { return m_formTypeId; }
  inline bool FormTypeIdHasBeenSet() const { return m_formTypeIdHasBeenSet; }
  template <typename FormTypeIdT = Aws::String>
  void SetFormTypeId(FormTypeIdT&& value) {
    m_formTypeIdHasBeenSet = true;
    m_formTypeId = std::forward<FormTypeIdT>(value);
  }
  template <typename FormTypeIdT = Aws::String>
  AssetTypeFormOutput& WithFormTypeId(FormTypeIdT&& value) {
    SetFormTypeId(std::forward<FormTypeIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_formTypeId;
  bool m_formTypeIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
