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
 * <p>An iterable form available on an asset, identified by its form
 * type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/IterableFormEntry">AWS
 * API Reference</a></p>
 */
class IterableFormEntry {
 public:
  AWS_GLUE_API IterableFormEntry() = default;
  AWS_GLUE_API IterableFormEntry(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API IterableFormEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The form type identifier of the iterable form (for example,
   * <code>columns</code>), used to retrieve its items via
   * <code>ListIterableForms</code> or <code>BatchGetIterableForms</code>.</p>
   */
  inline const Aws::String& GetFormTypeId() const { return m_formTypeId; }
  inline bool FormTypeIdHasBeenSet() const { return m_formTypeIdHasBeenSet; }
  template <typename FormTypeIdT = Aws::String>
  void SetFormTypeId(FormTypeIdT&& value) {
    m_formTypeIdHasBeenSet = true;
    m_formTypeId = std::forward<FormTypeIdT>(value);
  }
  template <typename FormTypeIdT = Aws::String>
  IterableFormEntry& WithFormTypeId(FormTypeIdT&& value) {
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
