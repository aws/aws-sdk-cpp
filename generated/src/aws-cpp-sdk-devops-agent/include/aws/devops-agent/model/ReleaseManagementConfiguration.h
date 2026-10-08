/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/NetworkAccessConfiguration.h>

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
 * <p>Configuration for a release management environment.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/ReleaseManagementConfiguration">AWS
 * API Reference</a></p>
 */
class ReleaseManagementConfiguration {
 public:
  AWS_DEVOPSAGENT_API ReleaseManagementConfiguration() = default;
  AWS_DEVOPSAGENT_API ReleaseManagementConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API ReleaseManagementConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name for this release management environment.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  ReleaseManagementConfiguration& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies how AWS DevOps Agent reaches your application using a Release
   * Management Environment</p>
   */
  inline const NetworkAccessConfiguration& GetNetworkAccess() const { return m_networkAccess; }
  inline bool NetworkAccessHasBeenSet() const { return m_networkAccessHasBeenSet; }
  template <typename NetworkAccessT = NetworkAccessConfiguration>
  void SetNetworkAccess(NetworkAccessT&& value) {
    m_networkAccessHasBeenSet = true;
    m_networkAccess = std::forward<NetworkAccessT>(value);
  }
  template <typename NetworkAccessT = NetworkAccessConfiguration>
  ReleaseManagementConfiguration& WithNetworkAccess(NetworkAccessT&& value) {
    SetNetworkAccess(std::forward<NetworkAccessT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  NetworkAccessConfiguration m_networkAccess;
  bool m_nameHasBeenSet = false;
  bool m_networkAccessHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
