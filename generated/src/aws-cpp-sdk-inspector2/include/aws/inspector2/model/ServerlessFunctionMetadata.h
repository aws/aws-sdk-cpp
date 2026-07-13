/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Inspector2 {
namespace Model {

/**
 * <p>Contains metadata about a serverless function associated with a covered
 * resource.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ServerlessFunctionMetadata">AWS
 * API Reference</a></p>
 */
class ServerlessFunctionMetadata {
 public:
  AWS_INSPECTOR2_API ServerlessFunctionMetadata() = default;
  AWS_INSPECTOR2_API ServerlessFunctionMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API ServerlessFunctionMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the serverless function.</p>
   */
  inline const Aws::String& GetServerlessFunctionName() const { return m_serverlessFunctionName; }
  inline bool ServerlessFunctionNameHasBeenSet() const { return m_serverlessFunctionNameHasBeenSet; }
  template <typename ServerlessFunctionNameT = Aws::String>
  void SetServerlessFunctionName(ServerlessFunctionNameT&& value) {
    m_serverlessFunctionNameHasBeenSet = true;
    m_serverlessFunctionName = std::forward<ServerlessFunctionNameT>(value);
  }
  template <typename ServerlessFunctionNameT = Aws::String>
  ServerlessFunctionMetadata& WithServerlessFunctionName(ServerlessFunctionNameT&& value) {
    SetServerlessFunctionName(std::forward<ServerlessFunctionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The runtime of the serverless function.</p>
   */
  inline const Aws::String& GetRuntime() const { return m_runtime; }
  inline bool RuntimeHasBeenSet() const { return m_runtimeHasBeenSet; }
  template <typename RuntimeT = Aws::String>
  void SetRuntime(RuntimeT&& value) {
    m_runtimeHasBeenSet = true;
    m_runtime = std::forward<RuntimeT>(value);
  }
  template <typename RuntimeT = Aws::String>
  ServerlessFunctionMetadata& WithRuntime(RuntimeT&& value) {
    SetRuntime(std::forward<RuntimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags associated with the serverless function.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetFunctionTags() const { return m_functionTags; }
  inline bool FunctionTagsHasBeenSet() const { return m_functionTagsHasBeenSet; }
  template <typename FunctionTagsT = Aws::Map<Aws::String, Aws::String>>
  void SetFunctionTags(FunctionTagsT&& value) {
    m_functionTagsHasBeenSet = true;
    m_functionTags = std::forward<FunctionTagsT>(value);
  }
  template <typename FunctionTagsT = Aws::Map<Aws::String, Aws::String>>
  ServerlessFunctionMetadata& WithFunctionTags(FunctionTagsT&& value) {
    SetFunctionTags(std::forward<FunctionTagsT>(value));
    return *this;
  }
  template <typename FunctionTagsKeyT = Aws::String, typename FunctionTagsValueT = Aws::String>
  ServerlessFunctionMetadata& AddFunctionTags(FunctionTagsKeyT&& key, FunctionTagsValueT&& value) {
    m_functionTagsHasBeenSet = true;
    m_functionTags.emplace(std::forward<FunctionTagsKeyT>(key), std::forward<FunctionTagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_serverlessFunctionName;

  Aws::String m_runtime;

  Aws::Map<Aws::String, Aws::String> m_functionTags;
  bool m_serverlessFunctionNameHasBeenSet = false;
  bool m_runtimeHasBeenSet = false;
  bool m_functionTagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
