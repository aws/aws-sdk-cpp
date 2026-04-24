/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/QuickConnectContactData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

QuickConnectContactData::QuickConnectContactData(JsonView jsonValue) { *this = jsonValue; }

QuickConnectContactData& QuickConnectContactData::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ContactId")) {
    m_contactId = jsonValue.GetString("ContactId");
    m_contactIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InitiationTimestamp")) {
    m_initiationTimestamp = jsonValue.GetDouble("InitiationTimestamp");
    m_initiationTimestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("QuickConnectId")) {
    m_quickConnectId = jsonValue.GetString("QuickConnectId");
    m_quickConnectIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("QuickConnectName")) {
    m_quickConnectName = jsonValue.GetString("QuickConnectName");
    m_quickConnectNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("QuickConnectType")) {
    m_quickConnectType = QuickConnectTypeMapper::GetQuickConnectTypeForName(jsonValue.GetString("QuickConnectType"));
    m_quickConnectTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue QuickConnectContactData::Jsonize() const {
  JsonValue payload;

  if (m_contactIdHasBeenSet) {
    payload.WithString("ContactId", m_contactId);
  }

  if (m_initiationTimestampHasBeenSet) {
    payload.WithDouble("InitiationTimestamp", m_initiationTimestamp.SecondsWithMSPrecision());
  }

  if (m_quickConnectIdHasBeenSet) {
    payload.WithString("QuickConnectId", m_quickConnectId);
  }

  if (m_quickConnectNameHasBeenSet) {
    payload.WithString("QuickConnectName", m_quickConnectName);
  }

  if (m_quickConnectTypeHasBeenSet) {
    payload.WithString("QuickConnectType", QuickConnectTypeMapper::GetNameForQuickConnectType(m_quickConnectType));
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
