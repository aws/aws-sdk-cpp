/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/Connector.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConfigService {
namespace Model {

Connector::Connector(JsonView jsonValue) { *this = jsonValue; }

Connector& Connector::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("connectorConfiguration")) {
    m_connectorConfiguration = jsonValue.GetObject("connectorConfiguration");
    m_connectorConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdTime")) {
    m_createdTime = jsonValue.GetDouble("createdTime");
    m_createdTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue Connector::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_connectorConfigurationHasBeenSet) {
    payload.WithObject("connectorConfiguration", m_connectorConfiguration.Jsonize());
  }

  if (m_createdTimeHasBeenSet) {
    payload.WithDouble("createdTime", m_createdTime.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace ConfigService
}  // namespace Aws
