/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/PrivateNetworkAccess.h>

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
 * <p>Specifies how AWS DevOps Agent reaches your application using a Release
 * Management Environment</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/NetworkAccessConfiguration">AWS
 * API Reference</a></p>
 */
class NetworkAccessConfiguration {
 public:
  AWS_DEVOPSAGENT_API NetworkAccessConfiguration() = default;
  AWS_DEVOPSAGENT_API NetworkAccessConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API NetworkAccessConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Private network access to the resource inside a VPC, using a private
   * connection.</p>
   */
  inline const PrivateNetworkAccess& GetPrivateAccess() const { return m_privateAccess; }
  inline bool PrivateAccessHasBeenSet() const { return m_privateAccessHasBeenSet; }
  template <typename PrivateAccessT = PrivateNetworkAccess>
  void SetPrivateAccess(PrivateAccessT&& value) {
    m_privateAccessHasBeenSet = true;
    m_privateAccess = std::forward<PrivateAccessT>(value);
  }
  template <typename PrivateAccessT = PrivateNetworkAccess>
  NetworkAccessConfiguration& WithPrivateAccess(PrivateAccessT&& value) {
    SetPrivateAccess(std::forward<PrivateAccessT>(value));
    return *this;
  }
  ///@}
 private:
  PrivateNetworkAccess m_privateAccess;
  bool m_privateAccessHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
