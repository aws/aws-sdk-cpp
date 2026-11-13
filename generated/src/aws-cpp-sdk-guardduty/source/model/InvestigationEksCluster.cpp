/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/InvestigationEksCluster.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

InvestigationEksCluster::InvestigationEksCluster(JsonView jsonValue) { *this = jsonValue; }

InvestigationEksCluster& InvestigationEksCluster::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = jsonValue.GetString("status");
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("vpcId")) {
    m_vpcId = jsonValue.GetString("vpcId");
    m_vpcIdHasBeenSet = true;
  }
  return *this;
}

JsonValue InvestigationEksCluster::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", m_status);
  }

  if (m_vpcIdHasBeenSet) {
    payload.WithString("vpcId", m_vpcId);
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
