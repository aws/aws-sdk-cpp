/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-core/model/NetworkConnectorSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LambdaCore {
namespace Model {

NetworkConnectorSummary::NetworkConnectorSummary(JsonView jsonValue) { *this = jsonValue; }

NetworkConnectorSummary& NetworkConnectorSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Arn")) {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Id")) {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Type")) {
    m_type = NetworkConnectorTypeMapper::GetNetworkConnectorTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("State")) {
    m_state = NetworkConnectorStateMapper::GetNetworkConnectorStateForName(jsonValue.GetString("State"));
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastModified")) {
    m_lastModified = jsonValue.GetString("LastModified");
    m_lastModifiedHasBeenSet = true;
  }
  return *this;
}

JsonValue NetworkConnectorSummary::Jsonize() const {
  JsonValue payload;

  if (m_arnHasBeenSet) {
    payload.WithString("Arn", m_arn);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_idHasBeenSet) {
    payload.WithString("Id", m_id);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("Type", NetworkConnectorTypeMapper::GetNameForNetworkConnectorType(m_type));
  }

  if (m_stateHasBeenSet) {
    payload.WithString("State", NetworkConnectorStateMapper::GetNameForNetworkConnectorState(m_state));
  }

  if (m_lastModifiedHasBeenSet) {
    payload.WithString("LastModified", m_lastModified.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
