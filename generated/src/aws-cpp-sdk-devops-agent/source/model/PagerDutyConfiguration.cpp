/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/PagerDutyConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

PagerDutyConfiguration::PagerDutyConfiguration(JsonView jsonValue) { *this = jsonValue; }

PagerDutyConfiguration& PagerDutyConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("services")) {
    Aws::Utils::Array<JsonView> servicesJsonList = jsonValue.GetArray("services");
    for (unsigned servicesIndex = 0; servicesIndex < servicesJsonList.GetLength(); ++servicesIndex) {
      m_services.push_back(servicesJsonList[servicesIndex].AsString());
    }
    m_servicesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("customerEmail")) {
    m_customerEmail = jsonValue.GetString("customerEmail");
    m_customerEmailHasBeenSet = true;
  }
  return *this;
}

JsonValue PagerDutyConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_servicesHasBeenSet) {
    Aws::Utils::Array<JsonValue> servicesJsonList(m_services.size());
    for (unsigned servicesIndex = 0; servicesIndex < servicesJsonList.GetLength(); ++servicesIndex) {
      servicesJsonList[servicesIndex].AsString(m_services[servicesIndex]);
    }
    payload.WithArray("services", std::move(servicesJsonList));
  }

  if (m_customerEmailHasBeenSet) {
    payload.WithString("customerEmail", m_customerEmail);
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
