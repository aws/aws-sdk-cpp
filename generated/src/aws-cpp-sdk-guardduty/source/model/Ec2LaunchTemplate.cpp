/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/Ec2LaunchTemplate.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

Ec2LaunchTemplate::Ec2LaunchTemplate(JsonView jsonValue) { *this = jsonValue; }

Ec2LaunchTemplate& Ec2LaunchTemplate::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ec2InstanceUids")) {
    Aws::Utils::Array<JsonView> ec2InstanceUidsJsonList = jsonValue.GetArray("ec2InstanceUids");
    for (unsigned ec2InstanceUidsIndex = 0; ec2InstanceUidsIndex < ec2InstanceUidsJsonList.GetLength(); ++ec2InstanceUidsIndex) {
      m_ec2InstanceUids.push_back(ec2InstanceUidsJsonList[ec2InstanceUidsIndex].AsString());
    }
    m_ec2InstanceUidsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("version")) {
    m_version = jsonValue.GetString("version");
    m_versionHasBeenSet = true;
  }
  return *this;
}

JsonValue Ec2LaunchTemplate::Jsonize() const {
  JsonValue payload;

  if (m_ec2InstanceUidsHasBeenSet) {
    Aws::Utils::Array<JsonValue> ec2InstanceUidsJsonList(m_ec2InstanceUids.size());
    for (unsigned ec2InstanceUidsIndex = 0; ec2InstanceUidsIndex < ec2InstanceUidsJsonList.GetLength(); ++ec2InstanceUidsIndex) {
      ec2InstanceUidsJsonList[ec2InstanceUidsIndex].AsString(m_ec2InstanceUids[ec2InstanceUidsIndex]);
    }
    payload.WithArray("ec2InstanceUids", std::move(ec2InstanceUidsJsonList));
  }

  if (m_versionHasBeenSet) {
    payload.WithString("version", m_version);
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
