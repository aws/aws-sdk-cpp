/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/UpdateGatewayAlbConfiguration.h>

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
 * <p>The type-specific configuration to change on a gateway. The variant must
 * match the gateway's existing type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/UpdateGatewayConfiguration">AWS
 * API Reference</a></p>
 */
class UpdateGatewayConfiguration {
 public:
  AWS_ECS_API UpdateGatewayConfiguration() = default;
  AWS_ECS_API UpdateGatewayConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API UpdateGatewayConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The mutable configuration for a host-based, shared Application Load Balancer
   * gateway.</p>
   */
  inline const UpdateGatewayAlbConfiguration& GetHostSharedAlb() const { return m_hostSharedAlb; }
  inline bool HostSharedAlbHasBeenSet() const { return m_hostSharedAlbHasBeenSet; }
  template <typename HostSharedAlbT = UpdateGatewayAlbConfiguration>
  void SetHostSharedAlb(HostSharedAlbT&& value) {
    m_hostSharedAlbHasBeenSet = true;
    m_hostSharedAlb = std::forward<HostSharedAlbT>(value);
  }
  template <typename HostSharedAlbT = UpdateGatewayAlbConfiguration>
  UpdateGatewayConfiguration& WithHostSharedAlb(HostSharedAlbT&& value) {
    SetHostSharedAlb(std::forward<HostSharedAlbT>(value));
    return *this;
  }
  ///@}
 private:
  UpdateGatewayAlbConfiguration m_hostSharedAlb;
  bool m_hostSharedAlbHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
