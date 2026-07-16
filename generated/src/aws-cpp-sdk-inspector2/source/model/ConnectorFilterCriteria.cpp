/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/inspector2/model/ConnectorFilterCriteria.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {

ConnectorFilterCriteria::ConnectorFilterCriteria(JsonView jsonValue) { *this = jsonValue; }

ConnectorFilterCriteria& ConnectorFilterCriteria::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("connectorArns")) {
    Aws::Utils::Array<JsonView> connectorArnsJsonList = jsonValue.GetArray("connectorArns");
    for (unsigned connectorArnsIndex = 0; connectorArnsIndex < connectorArnsJsonList.GetLength(); ++connectorArnsIndex) {
      m_connectorArns.push_back(connectorArnsJsonList[connectorArnsIndex].AsObject());
    }
    m_connectorArnsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accounts")) {
    Aws::Utils::Array<JsonView> accountsJsonList = jsonValue.GetArray("accounts");
    for (unsigned accountsIndex = 0; accountsIndex < accountsJsonList.GetLength(); ++accountsIndex) {
      m_accounts.push_back(accountsJsonList[accountsIndex].AsObject());
    }
    m_accountsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("awsConfigConnectorArns")) {
    Aws::Utils::Array<JsonView> awsConfigConnectorArnsJsonList = jsonValue.GetArray("awsConfigConnectorArns");
    for (unsigned awsConfigConnectorArnsIndex = 0; awsConfigConnectorArnsIndex < awsConfigConnectorArnsJsonList.GetLength();
         ++awsConfigConnectorArnsIndex) {
      m_awsConfigConnectorArns.push_back(awsConfigConnectorArnsJsonList[awsConfigConnectorArnsIndex].AsObject());
    }
    m_awsConfigConnectorArnsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("connectorType")) {
    Aws::Utils::Array<JsonView> connectorTypeJsonList = jsonValue.GetArray("connectorType");
    for (unsigned connectorTypeIndex = 0; connectorTypeIndex < connectorTypeJsonList.GetLength(); ++connectorTypeIndex) {
      m_connectorType.push_back(connectorTypeJsonList[connectorTypeIndex].AsObject());
    }
    m_connectorTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("provider")) {
    Aws::Utils::Array<JsonView> providerJsonList = jsonValue.GetArray("provider");
    for (unsigned providerIndex = 0; providerIndex < providerJsonList.GetLength(); ++providerIndex) {
      m_provider.push_back(providerJsonList[providerIndex].AsObject());
    }
    m_providerHasBeenSet = true;
  }
  return *this;
}

JsonValue ConnectorFilterCriteria::Jsonize() const {
  JsonValue payload;

  if (m_connectorArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> connectorArnsJsonList(m_connectorArns.size());
    for (unsigned connectorArnsIndex = 0; connectorArnsIndex < connectorArnsJsonList.GetLength(); ++connectorArnsIndex) {
      connectorArnsJsonList[connectorArnsIndex].AsObject(m_connectorArns[connectorArnsIndex].Jsonize());
    }
    payload.WithArray("connectorArns", std::move(connectorArnsJsonList));
  }

  if (m_accountsHasBeenSet) {
    Aws::Utils::Array<JsonValue> accountsJsonList(m_accounts.size());
    for (unsigned accountsIndex = 0; accountsIndex < accountsJsonList.GetLength(); ++accountsIndex) {
      accountsJsonList[accountsIndex].AsObject(m_accounts[accountsIndex].Jsonize());
    }
    payload.WithArray("accounts", std::move(accountsJsonList));
  }

  if (m_awsConfigConnectorArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> awsConfigConnectorArnsJsonList(m_awsConfigConnectorArns.size());
    for (unsigned awsConfigConnectorArnsIndex = 0; awsConfigConnectorArnsIndex < awsConfigConnectorArnsJsonList.GetLength();
         ++awsConfigConnectorArnsIndex) {
      awsConfigConnectorArnsJsonList[awsConfigConnectorArnsIndex].AsObject(m_awsConfigConnectorArns[awsConfigConnectorArnsIndex].Jsonize());
    }
    payload.WithArray("awsConfigConnectorArns", std::move(awsConfigConnectorArnsJsonList));
  }

  if (m_connectorTypeHasBeenSet) {
    Aws::Utils::Array<JsonValue> connectorTypeJsonList(m_connectorType.size());
    for (unsigned connectorTypeIndex = 0; connectorTypeIndex < connectorTypeJsonList.GetLength(); ++connectorTypeIndex) {
      connectorTypeJsonList[connectorTypeIndex].AsObject(m_connectorType[connectorTypeIndex].Jsonize());
    }
    payload.WithArray("connectorType", std::move(connectorTypeJsonList));
  }

  if (m_providerHasBeenSet) {
    Aws::Utils::Array<JsonValue> providerJsonList(m_provider.size());
    for (unsigned providerIndex = 0; providerIndex < providerJsonList.GetLength(); ++providerIndex) {
      providerJsonList[providerIndex].AsObject(m_provider[providerIndex].Jsonize());
    }
    payload.WithArray("provider", std::move(providerJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
