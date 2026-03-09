/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ConnectHealth {
namespace Model {

/**
 * <p>Context information about the clinical encounter</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/EncounterContext">AWS
 * API Reference</a></p>
 */
class EncounterContext {
 public:
  AWS_CONNECTHEALTH_API EncounterContext() = default;
  AWS_CONNECTHEALTH_API EncounterContext(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API EncounterContext& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Unstructured context information in markdown format</p>
   */
  inline const Aws::String& GetUnstructuredContext() const { return m_unstructuredContext; }
  inline bool UnstructuredContextHasBeenSet() const { return m_unstructuredContextHasBeenSet; }
  template <typename UnstructuredContextT = Aws::String>
  void SetUnstructuredContext(UnstructuredContextT&& value) {
    m_unstructuredContextHasBeenSet = true;
    m_unstructuredContext = std::forward<UnstructuredContextT>(value);
  }
  template <typename UnstructuredContextT = Aws::String>
  EncounterContext& WithUnstructuredContext(UnstructuredContextT&& value) {
    SetUnstructuredContext(std::forward<UnstructuredContextT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_unstructuredContext;
  bool m_unstructuredContextHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
