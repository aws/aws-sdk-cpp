/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/continuum/model/UpdateCodeConfiguration.h>

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
 * <p>Type-specific changes to an environment. Omitted members preserve stored
 * values.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/UpdateEnvironmentConfiguration">AWS
 * API Reference</a></p>
 */
class UpdateEnvironmentConfiguration {
 public:
  AWS_CONTINUUM_API UpdateEnvironmentConfiguration() = default;
  AWS_CONTINUUM_API UpdateEnvironmentConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API UpdateEnvironmentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Changes to a code-scanning environment.</p>
   */
  inline const UpdateCodeConfiguration& GetCodeConfiguration() const { return m_codeConfiguration; }
  inline bool CodeConfigurationHasBeenSet() const { return m_codeConfigurationHasBeenSet; }
  template <typename CodeConfigurationT = UpdateCodeConfiguration>
  void SetCodeConfiguration(CodeConfigurationT&& value) {
    m_codeConfigurationHasBeenSet = true;
    m_codeConfiguration = std::forward<CodeConfigurationT>(value);
  }
  template <typename CodeConfigurationT = UpdateCodeConfiguration>
  UpdateEnvironmentConfiguration& WithCodeConfiguration(CodeConfigurationT&& value) {
    SetCodeConfiguration(std::forward<CodeConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  UpdateCodeConfiguration m_codeConfiguration;
  bool m_codeConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
