/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/model/RecoveryPlanExecutionServer.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace drs {
namespace Model {

/**
 * <p>Configuration for a <code>SERVER</code> type execution step.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/ExecutionServerStepConfiguration">AWS
 * API Reference</a></p>
 */
class ExecutionServerStepConfiguration {
 public:
  AWS_DRS_API ExecutionServerStepConfiguration() = default;
  AWS_DRS_API ExecutionServerStepConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_DRS_API ExecutionServerStepConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The list of servers in this execution step.</p>
   */
  inline const Aws::Vector<RecoveryPlanExecutionServer>& GetServers() const { return m_servers; }
  inline bool ServersHasBeenSet() const { return m_serversHasBeenSet; }
  template <typename ServersT = Aws::Vector<RecoveryPlanExecutionServer>>
  void SetServers(ServersT&& value) {
    m_serversHasBeenSet = true;
    m_servers = std::forward<ServersT>(value);
  }
  template <typename ServersT = Aws::Vector<RecoveryPlanExecutionServer>>
  ExecutionServerStepConfiguration& WithServers(ServersT&& value) {
    SetServers(std::forward<ServersT>(value));
    return *this;
  }
  template <typename ServersT = RecoveryPlanExecutionServer>
  ExecutionServerStepConfiguration& AddServers(ServersT&& value) {
    m_serversHasBeenSet = true;
    m_servers.emplace_back(std::forward<ServersT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<RecoveryPlanExecutionServer> m_servers;
  bool m_serversHasBeenSet = false;
};

}  // namespace Model
}  // namespace drs
}  // namespace Aws
