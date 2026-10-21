/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/DescribeGatewayAlbConfiguration.h>

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
 * <p>The type-specific configuration for a gateway that is returned by
 * <code>DescribeGateway</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DescribeGatewayConfiguration">AWS
 * API Reference</a></p>
 */
class DescribeGatewayConfiguration {
 public:
  AWS_ECS_API DescribeGatewayConfiguration() = default;
  AWS_ECS_API DescribeGatewayConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API DescribeGatewayConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The configuration for a host-based, shared Application Load Balancer
   * gateway.</p>
   */
  inline const DescribeGatewayAlbConfiguration& GetHostSharedAlb() const { return m_hostSharedAlb; }
  inline bool HostSharedAlbHasBeenSet() const { return m_hostSharedAlbHasBeenSet; }
  template <typename HostSharedAlbT = DescribeGatewayAlbConfiguration>
  void SetHostSharedAlb(HostSharedAlbT&& value) {
    m_hostSharedAlbHasBeenSet = true;
    m_hostSharedAlb = std::forward<HostSharedAlbT>(value);
  }
  template <typename HostSharedAlbT = DescribeGatewayAlbConfiguration>
  DescribeGatewayConfiguration& WithHostSharedAlb(HostSharedAlbT&& value) {
    SetHostSharedAlb(std::forward<HostSharedAlbT>(value));
    return *this;
  }
  ///@}
 private:
  DescribeGatewayAlbConfiguration m_hostSharedAlb;
  bool m_hostSharedAlbHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
