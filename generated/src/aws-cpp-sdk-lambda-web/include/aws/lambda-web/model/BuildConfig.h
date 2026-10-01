/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda-web/LambdaWeb_EXPORTS.h>
#include <aws/lambda-web/model/CodeConfig.h>
#include <aws/lambda-web/model/RuntimeConfig.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LambdaWeb {
namespace Model {

/**
 * <p>The build configuration for a web function revision, including code location
 * and runtime settings.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-web-2025-03-07/BuildConfig">AWS
 * API Reference</a></p>
 */
class BuildConfig {
 public:
  AWS_LAMBDAWEB_API BuildConfig() = default;
  AWS_LAMBDAWEB_API BuildConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAWEB_API BuildConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAWEB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The code configuration specifying where the deployment artifact is
   * stored.</p>
   */
  inline const CodeConfig& GetCodeConfig() const { return m_codeConfig; }
  inline bool CodeConfigHasBeenSet() const { return m_codeConfigHasBeenSet; }
  template <typename CodeConfigT = CodeConfig>
  void SetCodeConfig(CodeConfigT&& value) {
    m_codeConfigHasBeenSet = true;
    m_codeConfig = std::forward<CodeConfigT>(value);
  }
  template <typename CodeConfigT = CodeConfig>
  BuildConfig& WithCodeConfig(CodeConfigT&& value) {
    SetCodeConfig(std::forward<CodeConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The runtime configuration for the revision.</p>
   */
  inline const RuntimeConfig& GetRuntimeConfig() const { return m_runtimeConfig; }
  inline bool RuntimeConfigHasBeenSet() const { return m_runtimeConfigHasBeenSet; }
  template <typename RuntimeConfigT = RuntimeConfig>
  void SetRuntimeConfig(RuntimeConfigT&& value) {
    m_runtimeConfigHasBeenSet = true;
    m_runtimeConfig = std::forward<RuntimeConfigT>(value);
  }
  template <typename RuntimeConfigT = RuntimeConfig>
  BuildConfig& WithRuntimeConfig(RuntimeConfigT&& value) {
    SetRuntimeConfig(std::forward<RuntimeConfigT>(value));
    return *this;
  }
  ///@}
 private:
  CodeConfig m_codeConfig;

  RuntimeConfig m_runtimeConfig;
  bool m_codeConfigHasBeenSet = false;
  bool m_runtimeConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws
