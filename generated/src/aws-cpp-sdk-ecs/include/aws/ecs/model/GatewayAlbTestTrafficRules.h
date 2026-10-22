/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/GatewayTestTrafficHeader.h>

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
 * <p>The rules that route test traffic to services behind a gateway during
 * progressive deployments.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/GatewayAlbTestTrafficRules">AWS
 * API Reference</a></p>
 */
class GatewayAlbTestTrafficRules {
 public:
  AWS_ECS_API GatewayAlbTestTrafficRules() = default;
  AWS_ECS_API GatewayAlbTestTrafficRules(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API GatewayAlbTestTrafficRules& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The header-based rule that identifies test traffic.</p>
   */
  inline const GatewayTestTrafficHeader& GetHeader() const { return m_header; }
  inline bool HeaderHasBeenSet() const { return m_headerHasBeenSet; }
  template <typename HeaderT = GatewayTestTrafficHeader>
  void SetHeader(HeaderT&& value) {
    m_headerHasBeenSet = true;
    m_header = std::forward<HeaderT>(value);
  }
  template <typename HeaderT = GatewayTestTrafficHeader>
  GatewayAlbTestTrafficRules& WithHeader(HeaderT&& value) {
    SetHeader(std::forward<HeaderT>(value));
    return *this;
  }
  ///@}
 private:
  GatewayTestTrafficHeader m_header;
  bool m_headerHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
