/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Private network access to the resource inside a VPC, using a private
 * connection.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/PrivateNetworkAccess">AWS
 * API Reference</a></p>
 */
class PrivateNetworkAccess {
 public:
  AWS_DEVOPSAGENT_API PrivateNetworkAccess() = default;
  AWS_DEVOPSAGENT_API PrivateNetworkAccess(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API PrivateNetworkAccess& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Name of the private connection that supplies the VPC configuration for this
   * release management environment.</p>
   */
  inline const Aws::String& GetPrivateConnectionName() const { return m_privateConnectionName; }
  inline bool PrivateConnectionNameHasBeenSet() const { return m_privateConnectionNameHasBeenSet; }
  template <typename PrivateConnectionNameT = Aws::String>
  void SetPrivateConnectionName(PrivateConnectionNameT&& value) {
    m_privateConnectionNameHasBeenSet = true;
    m_privateConnectionName = std::forward<PrivateConnectionNameT>(value);
  }
  template <typename PrivateConnectionNameT = Aws::String>
  PrivateNetworkAccess& WithPrivateConnectionName(PrivateConnectionNameT&& value) {
    SetPrivateConnectionName(std::forward<PrivateConnectionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Role ARN that AWS DevOps Agent assumes at runtime to connect to your VPC.</p>
   */
  inline const Aws::String& GetRuntimeRoleArn() const { return m_runtimeRoleArn; }
  inline bool RuntimeRoleArnHasBeenSet() const { return m_runtimeRoleArnHasBeenSet; }
  template <typename RuntimeRoleArnT = Aws::String>
  void SetRuntimeRoleArn(RuntimeRoleArnT&& value) {
    m_runtimeRoleArnHasBeenSet = true;
    m_runtimeRoleArn = std::forward<RuntimeRoleArnT>(value);
  }
  template <typename RuntimeRoleArnT = Aws::String>
  PrivateNetworkAccess& WithRuntimeRoleArn(RuntimeRoleArnT&& value) {
    SetRuntimeRoleArn(std::forward<RuntimeRoleArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_privateConnectionName;

  Aws::String m_runtimeRoleArn;
  bool m_privateConnectionNameHasBeenSet = false;
  bool m_runtimeRoleArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
