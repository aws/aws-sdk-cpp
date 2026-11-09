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
 * <p>Retained run output. Further members, such as completion and
 * outputCompleteness, can be added later as optional details.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/ValidationProofOutput">AWS
 * API Reference</a></p>
 */
class ValidationProofOutput {
 public:
  AWS_CONTINUUM_API ValidationProofOutput() = default;
  AWS_CONTINUUM_API ValidationProofOutput(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API ValidationProofOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>What the run printed: standard output and standard error merged, as retained.
   * The text may be empty.</p>
   */
  inline const Aws::String& GetConsoleOutput() const { return m_consoleOutput; }
  inline bool ConsoleOutputHasBeenSet() const { return m_consoleOutputHasBeenSet; }
  template <typename ConsoleOutputT = Aws::String>
  void SetConsoleOutput(ConsoleOutputT&& value) {
    m_consoleOutputHasBeenSet = true;
    m_consoleOutput = std::forward<ConsoleOutputT>(value);
  }
  template <typename ConsoleOutputT = Aws::String>
  ValidationProofOutput& WithConsoleOutput(ConsoleOutputT&& value) {
    SetConsoleOutput(std::forward<ConsoleOutputT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_consoleOutput;
  bool m_consoleOutputHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
