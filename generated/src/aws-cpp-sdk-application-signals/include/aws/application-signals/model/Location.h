/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/model/CodeLocation.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ApplicationSignals {
namespace Model {

/**
 * <p>A union that identifies the location to instrument. Specify a
 * <code>CodeLocation</code> for code-level instrumentation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/Location">AWS
 * API Reference</a></p>
 */
class Location {
 public:
  AWS_APPLICATIONSIGNALS_API Location() = default;
  AWS_APPLICATIONSIGNALS_API Location(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API Location& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A code location for code-level instrumentation, including language, code
   * unit, class, method, file path, and optional line number.</p>
   */
  inline const CodeLocation& GetCodeLocation() const { return m_codeLocation; }
  inline bool CodeLocationHasBeenSet() const { return m_codeLocationHasBeenSet; }
  template <typename CodeLocationT = CodeLocation>
  void SetCodeLocation(CodeLocationT&& value) {
    m_codeLocationHasBeenSet = true;
    m_codeLocation = std::forward<CodeLocationT>(value);
  }
  template <typename CodeLocationT = CodeLocation>
  Location& WithCodeLocation(CodeLocationT&& value) {
    SetCodeLocation(std::forward<CodeLocationT>(value));
    return *this;
  }
  ///@}
 private:
  CodeLocation m_codeLocation;
  bool m_codeLocationHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
