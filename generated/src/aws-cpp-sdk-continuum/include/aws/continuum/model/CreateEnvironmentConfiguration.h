/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/continuum/model/CreateCodeConfiguration.h>

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
 * <p>Type-specific configuration for a new environment. Omission creates a code
 * environment with the default operating policy and no sources.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/CreateEnvironmentConfiguration">AWS
 * API Reference</a></p>
 */
class CreateEnvironmentConfiguration {
 public:
  AWS_CONTINUUM_API CreateEnvironmentConfiguration() = default;
  AWS_CONTINUUM_API CreateEnvironmentConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API CreateEnvironmentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Configuration for a code-scanning environment.</p>
   */
  inline const CreateCodeConfiguration& GetCodeConfiguration() const { return m_codeConfiguration; }
  inline bool CodeConfigurationHasBeenSet() const { return m_codeConfigurationHasBeenSet; }
  template <typename CodeConfigurationT = CreateCodeConfiguration>
  void SetCodeConfiguration(CodeConfigurationT&& value) {
    m_codeConfigurationHasBeenSet = true;
    m_codeConfiguration = std::forward<CodeConfigurationT>(value);
  }
  template <typename CodeConfigurationT = CreateCodeConfiguration>
  CreateEnvironmentConfiguration& WithCodeConfiguration(CodeConfigurationT&& value) {
    SetCodeConfiguration(std::forward<CodeConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  CreateCodeConfiguration m_codeConfiguration;
  bool m_codeConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
