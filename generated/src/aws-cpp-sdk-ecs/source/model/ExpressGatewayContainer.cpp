/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/ExpressGatewayContainer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

ExpressGatewayContainer::ExpressGatewayContainer(JsonView jsonValue) { *this = jsonValue; }

ExpressGatewayContainer& ExpressGatewayContainer::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("image")) {
    m_image = jsonValue.GetString("image");
    m_imageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("containerPort")) {
    m_containerPort = jsonValue.GetInteger("containerPort");
    m_containerPortHasBeenSet = true;
  }
  if (jsonValue.ValueExists("awsLogsConfiguration")) {
    m_awsLogsConfiguration = jsonValue.GetObject("awsLogsConfiguration");
    m_awsLogsConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("repositoryCredentials")) {
    m_repositoryCredentials = jsonValue.GetObject("repositoryCredentials");
    m_repositoryCredentialsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("command")) {
    Aws::Utils::Array<JsonView> commandJsonList = jsonValue.GetArray("command");
    for (unsigned commandIndex = 0; commandIndex < commandJsonList.GetLength(); ++commandIndex) {
      m_command.push_back(commandJsonList[commandIndex].AsString());
    }
    m_commandHasBeenSet = true;
  }
  if (jsonValue.ValueExists("environment")) {
    Aws::Utils::Array<JsonView> environmentJsonList = jsonValue.GetArray("environment");
    for (unsigned environmentIndex = 0; environmentIndex < environmentJsonList.GetLength(); ++environmentIndex) {
      m_environment.push_back(environmentJsonList[environmentIndex].AsObject());
    }
    m_environmentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("secrets")) {
    Aws::Utils::Array<JsonView> secretsJsonList = jsonValue.GetArray("secrets");
    for (unsigned secretsIndex = 0; secretsIndex < secretsJsonList.GetLength(); ++secretsIndex) {
      m_secrets.push_back(secretsJsonList[secretsIndex].AsObject());
    }
    m_secretsHasBeenSet = true;
  }
  return *this;
}

JsonValue ExpressGatewayContainer::Jsonize() const {
  JsonValue payload;

  if (m_imageHasBeenSet) {
    payload.WithString("image", m_image);
  }

  if (m_containerPortHasBeenSet) {
    payload.WithInteger("containerPort", m_containerPort);
  }

  if (m_awsLogsConfigurationHasBeenSet) {
    payload.WithObject("awsLogsConfiguration", m_awsLogsConfiguration.Jsonize());
  }

  if (m_repositoryCredentialsHasBeenSet) {
    payload.WithObject("repositoryCredentials", m_repositoryCredentials.Jsonize());
  }

  if (m_commandHasBeenSet) {
    Aws::Utils::Array<JsonValue> commandJsonList(m_command.size());
    for (unsigned commandIndex = 0; commandIndex < commandJsonList.GetLength(); ++commandIndex) {
      commandJsonList[commandIndex].AsString(m_command[commandIndex]);
    }
    payload.WithArray("command", std::move(commandJsonList));
  }

  if (m_environmentHasBeenSet) {
    Aws::Utils::Array<JsonValue> environmentJsonList(m_environment.size());
    for (unsigned environmentIndex = 0; environmentIndex < environmentJsonList.GetLength(); ++environmentIndex) {
      environmentJsonList[environmentIndex].AsObject(m_environment[environmentIndex].Jsonize());
    }
    payload.WithArray("environment", std::move(environmentJsonList));
  }

  if (m_secretsHasBeenSet) {
    Aws::Utils::Array<JsonValue> secretsJsonList(m_secrets.size());
    for (unsigned secretsIndex = 0; secretsIndex < secretsJsonList.GetLength(); ++secretsIndex) {
      secretsJsonList[secretsIndex].AsObject(m_secrets[secretsIndex].Jsonize());
    }
    payload.WithArray("secrets", std::move(secretsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
