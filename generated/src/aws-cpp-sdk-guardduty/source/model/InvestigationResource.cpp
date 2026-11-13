/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/InvestigationResource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

InvestigationResource::InvestigationResource(JsonView jsonValue) { *this = jsonValue; }

InvestigationResource& InvestigationResource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("uid")) {
    m_uid = jsonValue.GetString("uid");
    m_uidHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceType")) {
    m_resourceType = InvestigationResourceTypeMapper::GetInvestigationResourceTypeForName(jsonValue.GetString("resourceType"));
    m_resourceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("data")) {
    m_data = jsonValue.GetObject("data");
    m_dataHasBeenSet = true;
  }
  return *this;
}

JsonValue InvestigationResource::Jsonize() const {
  JsonValue payload;

  if (m_uidHasBeenSet) {
    payload.WithString("uid", m_uid);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_resourceTypeHasBeenSet) {
    payload.WithString("resourceType", InvestigationResourceTypeMapper::GetNameForInvestigationResourceType(m_resourceType));
  }

  if (m_dataHasBeenSet) {
    payload.WithObject("data", m_data.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
