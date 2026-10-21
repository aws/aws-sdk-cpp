/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/GatewayInfrastructureResources.h>

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
 * <p> <code>DescribeGatewayResources</code> returns the gateway-managed
 * infrastructure, grouped by gateway type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/GatewayResources">AWS
 * API Reference</a></p>
 */
class GatewayResources {
 public:
  AWS_ECS_API GatewayResources() = default;
  AWS_ECS_API GatewayResources(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API GatewayResources& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the gateway.</p>
   */
  inline const Aws::String& GetGatewayArn() const { return m_gatewayArn; }
  inline bool GatewayArnHasBeenSet() const { return m_gatewayArnHasBeenSet; }
  template <typename GatewayArnT = Aws::String>
  void SetGatewayArn(GatewayArnT&& value) {
    m_gatewayArnHasBeenSet = true;
    m_gatewayArn = std::forward<GatewayArnT>(value);
  }
  template <typename GatewayArnT = Aws::String>
  GatewayResources& WithGatewayArn(GatewayArnT&& value) {
    SetGatewayArn(std::forward<GatewayArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The infrastructure resources that the gateway manages.</p>
   */
  inline const GatewayInfrastructureResources& GetResources() const { return m_resources; }
  inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
  template <typename ResourcesT = GatewayInfrastructureResources>
  void SetResources(ResourcesT&& value) {
    m_resourcesHasBeenSet = true;
    m_resources = std::forward<ResourcesT>(value);
  }
  template <typename ResourcesT = GatewayInfrastructureResources>
  GatewayResources& WithResources(ResourcesT&& value) {
    SetResources(std::forward<ResourcesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_gatewayArn;

  GatewayInfrastructureResources m_resources;
  bool m_gatewayArnHasBeenSet = false;
  bool m_resourcesHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
