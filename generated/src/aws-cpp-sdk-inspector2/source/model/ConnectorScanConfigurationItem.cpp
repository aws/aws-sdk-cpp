/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/inspector2/model/ConnectorScanConfigurationItem.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {

ConnectorScanConfigurationItem::ConnectorScanConfigurationItem(JsonView jsonValue) { *this = jsonValue; }

ConnectorScanConfigurationItem& ConnectorScanConfigurationItem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("awsConfigConnectorArn")) {
    m_awsConfigConnectorArn = jsonValue.GetString("awsConfigConnectorArn");
    m_awsConfigConnectorArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("connectorArns")) {
    Aws::Utils::Array<JsonView> connectorArnsJsonList = jsonValue.GetArray("connectorArns");
    for (unsigned connectorArnsIndex = 0; connectorArnsIndex < connectorArnsJsonList.GetLength(); ++connectorArnsIndex) {
      m_connectorArns.push_back(connectorArnsJsonList[connectorArnsIndex].AsString());
    }
    m_connectorArnsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scanConfiguration")) {
    m_scanConfiguration = jsonValue.GetObject("scanConfiguration");
    m_scanConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue ConnectorScanConfigurationItem::Jsonize() const {
  JsonValue payload;

  if (m_awsConfigConnectorArnHasBeenSet) {
    payload.WithString("awsConfigConnectorArn", m_awsConfigConnectorArn);
  }

  if (m_connectorArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> connectorArnsJsonList(m_connectorArns.size());
    for (unsigned connectorArnsIndex = 0; connectorArnsIndex < connectorArnsJsonList.GetLength(); ++connectorArnsIndex) {
      connectorArnsJsonList[connectorArnsIndex].AsString(m_connectorArns[connectorArnsIndex]);
    }
    payload.WithArray("connectorArns", std::move(connectorArnsJsonList));
  }

  if (m_scanConfigurationHasBeenSet) {
    payload.WithObject("scanConfiguration", m_scanConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
