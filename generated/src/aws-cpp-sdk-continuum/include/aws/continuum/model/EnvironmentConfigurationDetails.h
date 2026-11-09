/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/continuum/model/CodeConfigurationDetails.h>

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
 * <p>Type-specific configuration and state returned by GetEnvironment and
 * UpdateEnvironment.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/EnvironmentConfigurationDetails">AWS
 * API Reference</a></p>
 */
class EnvironmentConfigurationDetails {
 public:
  AWS_CONTINUUM_API EnvironmentConfigurationDetails() = default;
  AWS_CONTINUUM_API EnvironmentConfigurationDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API EnvironmentConfigurationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Configuration and scan state for a code-scanning environment.</p>
   */
  inline const CodeConfigurationDetails& GetCodeConfiguration() const { return m_codeConfiguration; }
  inline bool CodeConfigurationHasBeenSet() const { return m_codeConfigurationHasBeenSet; }
  template <typename CodeConfigurationT = CodeConfigurationDetails>
  void SetCodeConfiguration(CodeConfigurationT&& value) {
    m_codeConfigurationHasBeenSet = true;
    m_codeConfiguration = std::forward<CodeConfigurationT>(value);
  }
  template <typename CodeConfigurationT = CodeConfigurationDetails>
  EnvironmentConfigurationDetails& WithCodeConfiguration(CodeConfigurationT&& value) {
    SetCodeConfiguration(std::forward<CodeConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  CodeConfigurationDetails m_codeConfiguration;
  bool m_codeConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
