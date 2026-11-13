/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/AffectedResource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

AffectedResource::AffectedResource(JsonView jsonValue) { *this = jsonValue; }

AffectedResource& AffectedResource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("identifier")) {
    m_identifier = jsonValue.GetString("identifier");
    m_identifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = InvestigationResourceTypeMapper::GetInvestigationResourceTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  return *this;
}

JsonValue AffectedResource::Jsonize() const {
  JsonValue payload;

  if (m_identifierHasBeenSet) {
    payload.WithString("identifier", m_identifier);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("type", InvestigationResourceTypeMapper::GetNameForInvestigationResourceType(m_type));
  }

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
