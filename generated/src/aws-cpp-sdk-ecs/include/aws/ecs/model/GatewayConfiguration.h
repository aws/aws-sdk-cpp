/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/HostSharedAlbConfiguration.h>

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
 * <p>The type-specific configuration for a gateway that you provide when you
 * create it. Exactly one variant is set, and it determines the gateway
 * type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/GatewayConfiguration">AWS
 * API Reference</a></p>
 */
class GatewayConfiguration {
 public:
  AWS_ECS_API GatewayConfiguration() = default;
  AWS_ECS_API GatewayConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API GatewayConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The configuration for a host-based, shared Application Load Balancer gateway.
   * Each service that uses the gateway is assigned a unique DNS host name.</p>
   */
  inline const HostSharedAlbConfiguration& GetHostSharedAlb() const { return m_hostSharedAlb; }
  inline bool HostSharedAlbHasBeenSet() const { return m_hostSharedAlbHasBeenSet; }
  template <typename HostSharedAlbT = HostSharedAlbConfiguration>
  void SetHostSharedAlb(HostSharedAlbT&& value) {
    m_hostSharedAlbHasBeenSet = true;
    m_hostSharedAlb = std::forward<HostSharedAlbT>(value);
  }
  template <typename HostSharedAlbT = HostSharedAlbConfiguration>
  GatewayConfiguration& WithHostSharedAlb(HostSharedAlbT&& value) {
    SetHostSharedAlb(std::forward<HostSharedAlbT>(value));
    return *this;
  }
  ///@}
 private:
  HostSharedAlbConfiguration m_hostSharedAlb;
  bool m_hostSharedAlbHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
