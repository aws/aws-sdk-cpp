/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/ServiceRevisionVpcLatticeConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

ServiceRevisionVpcLatticeConfiguration::ServiceRevisionVpcLatticeConfiguration(JsonView jsonValue) { *this = jsonValue; }

ServiceRevisionVpcLatticeConfiguration& ServiceRevisionVpcLatticeConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("targetGroupArn")) {
    m_targetGroupArn = jsonValue.GetString("targetGroupArn");
    m_targetGroupArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("productionListenerRule")) {
    m_productionListenerRule = jsonValue.GetString("productionListenerRule");
    m_productionListenerRuleHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceRevisionVpcLatticeConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_targetGroupArnHasBeenSet) {
    payload.WithString("targetGroupArn", m_targetGroupArn);
  }

  if (m_productionListenerRuleHasBeenSet) {
    payload.WithString("productionListenerRule", m_productionListenerRule);
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
