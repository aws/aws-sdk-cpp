/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/AccessType.h>

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
 * <p>The filters that determine which gateway ingress paths a connector applies
 * to.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/GatewayConnectorFilters">AWS
 * API Reference</a></p>
 */
class GatewayConnectorFilters {
 public:
  AWS_ECS_API GatewayConnectorFilters() = default;
  AWS_ECS_API GatewayConnectorFilters(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API GatewayConnectorFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The access types of the gateway ingress paths that the connector applies
   * to.</p> <p>The access type can be one of the following values:</p> <ul> <li> <p>
   * <code>PUBLIC</code> - The ingress path is publicly accessible.</p> </li> <li>
   * <p> <code>PRIVATE</code> - The ingress path is only accessible privately.</p>
   * </li> </ul>
   */
  inline const Aws::Vector<AccessType>& GetAccessTypes() const { return m_accessTypes; }
  inline bool AccessTypesHasBeenSet() const { return m_accessTypesHasBeenSet; }
  template <typename AccessTypesT = Aws::Vector<AccessType>>
  void SetAccessTypes(AccessTypesT&& value) {
    m_accessTypesHasBeenSet = true;
    m_accessTypes = std::forward<AccessTypesT>(value);
  }
  template <typename AccessTypesT = Aws::Vector<AccessType>>
  GatewayConnectorFilters& WithAccessTypes(AccessTypesT&& value) {
    SetAccessTypes(std::forward<AccessTypesT>(value));
    return *this;
  }
  inline GatewayConnectorFilters& AddAccessTypes(AccessType value) {
    m_accessTypesHasBeenSet = true;
    m_accessTypes.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<AccessType> m_accessTypes;
  bool m_accessTypesHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
