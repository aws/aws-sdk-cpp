/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda-core/LambdaCoreRequest.h>
#include <aws/lambda-core/LambdaCore_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace LambdaCore {
namespace Model {

/**
 */
class RestoreRuntimeRequest : public LambdaCoreRequest {
 public:
  AWS_LAMBDACORE_API RestoreRuntimeRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "RestoreRuntime"; }

  AWS_LAMBDACORE_API Aws::String SerializePayload() const override;

  AWS_LAMBDACORE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The name or ARN of the runtime to restore. When RuntimeVersion or
   * RuntimeAlias is specified, the runtime that owns the runtime version or runtime
   * alias to restore.</p>
   */
  inline const Aws::String& GetRuntimeName() const { return m_runtimeName; }
  inline bool RuntimeNameHasBeenSet() const { return m_runtimeNameHasBeenSet; }
  template <typename RuntimeNameT = Aws::String>
  void SetRuntimeName(RuntimeNameT&& value) {
    m_runtimeNameHasBeenSet = true;
    m_runtimeName = std::forward<RuntimeNameT>(value);
  }
  template <typename RuntimeNameT = Aws::String>
  RestoreRuntimeRequest& WithRuntimeName(RuntimeNameT&& value) {
    SetRuntimeName(std::forward<RuntimeNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional. Restores the named RuntimeVersion under RuntimeName. Mutually
   * exclusive with RuntimeAlias; supplying both is rejected with
   * InvalidParameterValueException.</p>
   */
  inline const Aws::String& GetRuntimeVersion() const { return m_runtimeVersion; }
  inline bool RuntimeVersionHasBeenSet() const { return m_runtimeVersionHasBeenSet; }
  template <typename RuntimeVersionT = Aws::String>
  void SetRuntimeVersion(RuntimeVersionT&& value) {
    m_runtimeVersionHasBeenSet = true;
    m_runtimeVersion = std::forward<RuntimeVersionT>(value);
  }
  template <typename RuntimeVersionT = Aws::String>
  RestoreRuntimeRequest& WithRuntimeVersion(RuntimeVersionT&& value) {
    SetRuntimeVersion(std::forward<RuntimeVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional. Restores the named RuntimeAlias under RuntimeName. Mutually
   * exclusive with RuntimeVersion; supplying both is rejected with
   * InvalidParameterValueException.</p>
   */
  inline const Aws::String& GetRuntimeAlias() const { return m_runtimeAlias; }
  inline bool RuntimeAliasHasBeenSet() const { return m_runtimeAliasHasBeenSet; }
  template <typename RuntimeAliasT = Aws::String>
  void SetRuntimeAlias(RuntimeAliasT&& value) {
    m_runtimeAliasHasBeenSet = true;
    m_runtimeAlias = std::forward<RuntimeAliasT>(value);
  }
  template <typename RuntimeAliasT = Aws::String>
  RestoreRuntimeRequest& WithRuntimeAlias(RuntimeAliasT&& value) {
    SetRuntimeAlias(std::forward<RuntimeAliasT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_runtimeName;

  Aws::String m_runtimeVersion;

  Aws::String m_runtimeAlias;
  bool m_runtimeNameHasBeenSet = false;
  bool m_runtimeVersionHasBeenSet = false;
  bool m_runtimeAliasHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
