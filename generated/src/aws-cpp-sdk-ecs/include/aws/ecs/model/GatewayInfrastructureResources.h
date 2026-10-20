/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/ElbGatewayResources.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ECS {
namespace Model {

/**
 * <p>The gateway-managed infrastructure in a <code>DescribeGatewayResources</code>
 * response, as a union keyed by gateway type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/GatewayInfrastructureResources">AWS
 * API Reference</a></p>
 */
class GatewayInfrastructureResources {
 public:
  AWS_ECS_API GatewayInfrastructureResources() = default;
  AWS_ECS_API GatewayInfrastructureResources(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API GatewayInfrastructureResources& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Application Load Balancer resource groups for a host-based, shared ALB
   * gateway.</p>
   */
  inline const Aws::Vector<ElbGatewayResources>& GetHostSharedAlb() const { return m_hostSharedAlb; }
  inline bool HostSharedAlbHasBeenSet() const { return m_hostSharedAlbHasBeenSet; }
  template <typename HostSharedAlbT = Aws::Vector<ElbGatewayResources>>
  void SetHostSharedAlb(HostSharedAlbT&& value) {
    m_hostSharedAlbHasBeenSet = true;
    m_hostSharedAlb = std::forward<HostSharedAlbT>(value);
  }
  template <typename HostSharedAlbT = Aws::Vector<ElbGatewayResources>>
  GatewayInfrastructureResources& WithHostSharedAlb(HostSharedAlbT&& value) {
    SetHostSharedAlb(std::forward<HostSharedAlbT>(value));
    return *this;
  }
  template <typename HostSharedAlbT = ElbGatewayResources>
  GatewayInfrastructureResources& AddHostSharedAlb(HostSharedAlbT&& value) {
    m_hostSharedAlbHasBeenSet = true;
    m_hostSharedAlb.emplace_back(std::forward<HostSharedAlbT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ElbGatewayResources> m_hostSharedAlb;
  bool m_hostSharedAlbHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
