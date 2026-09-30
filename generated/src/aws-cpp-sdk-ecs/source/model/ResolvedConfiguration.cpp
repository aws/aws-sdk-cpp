/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/ResolvedConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

ResolvedConfiguration::ResolvedConfiguration(JsonView jsonValue) { *this = jsonValue; }

ResolvedConfiguration& ResolvedConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("loadBalancers")) {
    Aws::Utils::Array<JsonView> loadBalancersJsonList = jsonValue.GetArray("loadBalancers");
    for (unsigned loadBalancersIndex = 0; loadBalancersIndex < loadBalancersJsonList.GetLength(); ++loadBalancersIndex) {
      m_loadBalancers.push_back(loadBalancersJsonList[loadBalancersIndex].AsObject());
    }
    m_loadBalancersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("vpcLatticeConfigurations")) {
    Aws::Utils::Array<JsonView> vpcLatticeConfigurationsJsonList = jsonValue.GetArray("vpcLatticeConfigurations");
    for (unsigned vpcLatticeConfigurationsIndex = 0; vpcLatticeConfigurationsIndex < vpcLatticeConfigurationsJsonList.GetLength();
         ++vpcLatticeConfigurationsIndex) {
      m_vpcLatticeConfigurations.push_back(vpcLatticeConfigurationsJsonList[vpcLatticeConfigurationsIndex].AsObject());
    }
    m_vpcLatticeConfigurationsHasBeenSet = true;
  }
  return *this;
}

JsonValue ResolvedConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_loadBalancersHasBeenSet) {
    Aws::Utils::Array<JsonValue> loadBalancersJsonList(m_loadBalancers.size());
    for (unsigned loadBalancersIndex = 0; loadBalancersIndex < loadBalancersJsonList.GetLength(); ++loadBalancersIndex) {
      loadBalancersJsonList[loadBalancersIndex].AsObject(m_loadBalancers[loadBalancersIndex].Jsonize());
    }
    payload.WithArray("loadBalancers", std::move(loadBalancersJsonList));
  }

  if (m_vpcLatticeConfigurationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> vpcLatticeConfigurationsJsonList(m_vpcLatticeConfigurations.size());
    for (unsigned vpcLatticeConfigurationsIndex = 0; vpcLatticeConfigurationsIndex < vpcLatticeConfigurationsJsonList.GetLength();
         ++vpcLatticeConfigurationsIndex) {
      vpcLatticeConfigurationsJsonList[vpcLatticeConfigurationsIndex].AsObject(
          m_vpcLatticeConfigurations[vpcLatticeConfigurationsIndex].Jsonize());
    }
    payload.WithArray("vpcLatticeConfigurations", std::move(vpcLatticeConfigurationsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
