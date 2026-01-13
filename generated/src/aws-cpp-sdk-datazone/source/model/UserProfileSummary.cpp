/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/UserProfileSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

UserProfileSummary::UserProfileSummary(JsonView jsonValue) { *this = jsonValue; }

UserProfileSummary& UserProfileSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("domainId")) {
    m_domainId = jsonValue.GetString("domainId");
    m_domainIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = UserProfileTypeMapper::GetUserProfileTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = UserProfileStatusMapper::GetUserProfileStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("details")) {
    m_details = jsonValue.GetObject("details");
    m_detailsHasBeenSet = true;
  }
  return *this;
}

JsonValue UserProfileSummary::Jsonize() const {
  JsonValue payload;

  if (m_domainIdHasBeenSet) {
    payload.WithString("domainId", m_domainId);
  }

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("type", UserProfileTypeMapper::GetNameForUserProfileType(m_type));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", UserProfileStatusMapper::GetNameForUserProfileStatus(m_status));
  }

  if (m_detailsHasBeenSet) {
    payload.WithObject("details", m_details.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
