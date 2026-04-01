/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/ecs/ECS_EXPORTS.h>

#include <utility>

namespace Aws {
namespace ECS {
namespace Model {

/**
 */
class DescribeDaemonDeploymentsRequest : public ECSRequest {
 public:
  AWS_ECS_API DescribeDaemonDeploymentsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeDaemonDeployments"; }

  AWS_ECS_API Aws::String SerializePayload() const override;

  AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The ARN of the daemon deployments to describe. You can specify up to 20
   * ARNs.</p>
   */
  inline const Aws::Vector<Aws::String>& GetDaemonDeploymentArns() const { return m_daemonDeploymentArns; }
  inline bool DaemonDeploymentArnsHasBeenSet() const { return m_daemonDeploymentArnsHasBeenSet; }
  template <typename DaemonDeploymentArnsT = Aws::Vector<Aws::String>>
  void SetDaemonDeploymentArns(DaemonDeploymentArnsT&& value) {
    m_daemonDeploymentArnsHasBeenSet = true;
    m_daemonDeploymentArns = std::forward<DaemonDeploymentArnsT>(value);
  }
  template <typename DaemonDeploymentArnsT = Aws::Vector<Aws::String>>
  DescribeDaemonDeploymentsRequest& WithDaemonDeploymentArns(DaemonDeploymentArnsT&& value) {
    SetDaemonDeploymentArns(std::forward<DaemonDeploymentArnsT>(value));
    return *this;
  }
  template <typename DaemonDeploymentArnsT = Aws::String>
  DescribeDaemonDeploymentsRequest& AddDaemonDeploymentArns(DaemonDeploymentArnsT&& value) {
    m_daemonDeploymentArnsHasBeenSet = true;
    m_daemonDeploymentArns.emplace_back(std::forward<DaemonDeploymentArnsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_daemonDeploymentArns;
  bool m_daemonDeploymentArnsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
