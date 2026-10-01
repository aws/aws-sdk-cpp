/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda-web/LambdaWeb_EXPORTS.h>

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
 * <p>The runtime configuration for a web function revision.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-web-2025-03-07/RuntimeConfig">AWS
 * API Reference</a></p>
 */
class RuntimeConfig {
 public:
  AWS_LAMBDAWEB_API RuntimeConfig() = default;
  AWS_LAMBDAWEB_API RuntimeConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAWEB_API RuntimeConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAWEB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The runtime identifier for the web function (for example, a Node.js runtime
   * identifier).</p>
   */
  inline const Aws::String& GetRuntime() const { return m_runtime; }
  inline bool RuntimeHasBeenSet() const { return m_runtimeHasBeenSet; }
  template <typename RuntimeT = Aws::String>
  void SetRuntime(RuntimeT&& value) {
    m_runtimeHasBeenSet = true;
    m_runtime = std::forward<RuntimeT>(value);
  }
  template <typename RuntimeT = Aws::String>
  RuntimeConfig& WithRuntime(RuntimeT&& value) {
    SetRuntime(std::forward<RuntimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_runtime;
  bool m_runtimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws
