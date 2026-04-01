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
 * <p>Details specific to a registered ServiceNow instance.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/RegisteredServiceNowDetails">AWS
 * API Reference</a></p>
 */
class RegisteredServiceNowDetails {
 public:
  AWS_DEVOPSAGENT_API RegisteredServiceNowDetails() = default;
  AWS_DEVOPSAGENT_API RegisteredServiceNowDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API RegisteredServiceNowDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ServiceNow instance url</p>
   */
  inline const Aws::String& GetInstanceUrl() const { return m_instanceUrl; }
  inline bool InstanceUrlHasBeenSet() const { return m_instanceUrlHasBeenSet; }
  template <typename InstanceUrlT = Aws::String>
  void SetInstanceUrl(InstanceUrlT&& value) {
    m_instanceUrlHasBeenSet = true;
    m_instanceUrl = std::forward<InstanceUrlT>(value);
  }
  template <typename InstanceUrlT = Aws::String>
  RegisteredServiceNowDetails& WithInstanceUrl(InstanceUrlT&& value) {
    SetInstanceUrl(std::forward<InstanceUrlT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceUrl;
  bool m_instanceUrlHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
