/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/AccountAffectedResource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

AccountAffectedResource::AccountAffectedResource(JsonView jsonValue) { *this = jsonValue; }

AccountAffectedResource& AccountAffectedResource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("identifier")) {
    m_identifier = jsonValue.GetString("identifier");
    m_identifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = InvestigationResourceTypeMapper::GetInvestigationResourceTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("findingCount")) {
    m_findingCount = jsonValue.GetInteger("findingCount");
    m_findingCountHasBeenSet = true;
  }
  return *this;
}

JsonValue AccountAffectedResource::Jsonize() const {
  JsonValue payload;

  if (m_identifierHasBeenSet) {
    payload.WithString("identifier", m_identifier);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("type", InvestigationResourceTypeMapper::GetNameForInvestigationResourceType(m_type));
  }

  if (m_findingCountHasBeenSet) {
    payload.WithInteger("findingCount", m_findingCount);
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
