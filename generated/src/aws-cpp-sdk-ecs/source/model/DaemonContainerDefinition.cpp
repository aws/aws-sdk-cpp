/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/DaemonContainerDefinition.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

DaemonContainerDefinition::DaemonContainerDefinition(JsonView jsonValue) { *this = jsonValue; }

DaemonContainerDefinition& DaemonContainerDefinition::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("image")) {
    m_image = jsonValue.GetString("image");
    m_imageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("memory")) {
    m_memory = jsonValue.GetInteger("memory");
    m_memoryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("memoryReservation")) {
    m_memoryReservation = jsonValue.GetInteger("memoryReservation");
    m_memoryReservationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("repositoryCredentials")) {
    m_repositoryCredentials = jsonValue.GetObject("repositoryCredentials");
    m_repositoryCredentialsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("healthCheck")) {
    m_healthCheck = jsonValue.GetObject("healthCheck");
    m_healthCheckHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cpu")) {
    m_cpu = jsonValue.GetInteger("cpu");
    m_cpuHasBeenSet = true;
  }
  if (jsonValue.ValueExists("essential")) {
    m_essential = jsonValue.GetBool("essential");
    m_essentialHasBeenSet = true;
  }
  if (jsonValue.ValueExists("entryPoint")) {
    Aws::Utils::Array<JsonView> entryPointJsonList = jsonValue.GetArray("entryPoint");
    for (unsigned entryPointIndex = 0; entryPointIndex < entryPointJsonList.GetLength(); ++entryPointIndex) {
      m_entryPoint.push_back(entryPointJsonList[entryPointIndex].AsString());
    }
    m_entryPointHasBeenSet = true;
  }
  if (jsonValue.ValueExists("command")) {
    Aws::Utils::Array<JsonView> commandJsonList = jsonValue.GetArray("command");
    for (unsigned commandIndex = 0; commandIndex < commandJsonList.GetLength(); ++commandIndex) {
      m_command.push_back(commandJsonList[commandIndex].AsString());
    }
    m_commandHasBeenSet = true;
  }
  if (jsonValue.ValueExists("workingDirectory")) {
    m_workingDirectory = jsonValue.GetString("workingDirectory");
    m_workingDirectoryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("environmentFiles")) {
    Aws::Utils::Array<JsonView> environmentFilesJsonList = jsonValue.GetArray("environmentFiles");
    for (unsigned environmentFilesIndex = 0; environmentFilesIndex < environmentFilesJsonList.GetLength(); ++environmentFilesIndex) {
      m_environmentFiles.push_back(environmentFilesJsonList[environmentFilesIndex].AsObject());
    }
    m_environmentFilesHasBeenSet = true;
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
  if (jsonValue.ValueExists("readonlyRootFilesystem")) {
    m_readonlyRootFilesystem = jsonValue.GetBool("readonlyRootFilesystem");
    m_readonlyRootFilesystemHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mountPoints")) {
    Aws::Utils::Array<JsonView> mountPointsJsonList = jsonValue.GetArray("mountPoints");
    for (unsigned mountPointsIndex = 0; mountPointsIndex < mountPointsJsonList.GetLength(); ++mountPointsIndex) {
      m_mountPoints.push_back(mountPointsJsonList[mountPointsIndex].AsObject());
    }
    m_mountPointsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("logConfiguration")) {
    m_logConfiguration = jsonValue.GetObject("logConfiguration");
    m_logConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("firelensConfiguration")) {
    m_firelensConfiguration = jsonValue.GetObject("firelensConfiguration");
    m_firelensConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("privileged")) {
    m_privileged = jsonValue.GetBool("privileged");
    m_privilegedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("user")) {
    m_user = jsonValue.GetString("user");
    m_userHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ulimits")) {
    Aws::Utils::Array<JsonView> ulimitsJsonList = jsonValue.GetArray("ulimits");
    for (unsigned ulimitsIndex = 0; ulimitsIndex < ulimitsJsonList.GetLength(); ++ulimitsIndex) {
      m_ulimits.push_back(ulimitsJsonList[ulimitsIndex].AsObject());
    }
    m_ulimitsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("linuxParameters")) {
    m_linuxParameters = jsonValue.GetObject("linuxParameters");
    m_linuxParametersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dependsOn")) {
    Aws::Utils::Array<JsonView> dependsOnJsonList = jsonValue.GetArray("dependsOn");
    for (unsigned dependsOnIndex = 0; dependsOnIndex < dependsOnJsonList.GetLength(); ++dependsOnIndex) {
      m_dependsOn.push_back(dependsOnJsonList[dependsOnIndex].AsObject());
    }
    m_dependsOnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startTimeout")) {
    m_startTimeout = jsonValue.GetInteger("startTimeout");
    m_startTimeoutHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stopTimeout")) {
    m_stopTimeout = jsonValue.GetInteger("stopTimeout");
    m_stopTimeoutHasBeenSet = true;
  }
  if (jsonValue.ValueExists("systemControls")) {
    Aws::Utils::Array<JsonView> systemControlsJsonList = jsonValue.GetArray("systemControls");
    for (unsigned systemControlsIndex = 0; systemControlsIndex < systemControlsJsonList.GetLength(); ++systemControlsIndex) {
      m_systemControls.push_back(systemControlsJsonList[systemControlsIndex].AsObject());
    }
    m_systemControlsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("interactive")) {
    m_interactive = jsonValue.GetBool("interactive");
    m_interactiveHasBeenSet = true;
  }
  if (jsonValue.ValueExists("pseudoTerminal")) {
    m_pseudoTerminal = jsonValue.GetBool("pseudoTerminal");
    m_pseudoTerminalHasBeenSet = true;
  }
  if (jsonValue.ValueExists("restartPolicy")) {
    m_restartPolicy = jsonValue.GetObject("restartPolicy");
    m_restartPolicyHasBeenSet = true;
  }
  return *this;
}

JsonValue DaemonContainerDefinition::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_imageHasBeenSet) {
    payload.WithString("image", m_image);
  }

  if (m_memoryHasBeenSet) {
    payload.WithInteger("memory", m_memory);
  }

  if (m_memoryReservationHasBeenSet) {
    payload.WithInteger("memoryReservation", m_memoryReservation);
  }

  if (m_repositoryCredentialsHasBeenSet) {
    payload.WithObject("repositoryCredentials", m_repositoryCredentials.Jsonize());
  }

  if (m_healthCheckHasBeenSet) {
    payload.WithObject("healthCheck", m_healthCheck.Jsonize());
  }

  if (m_cpuHasBeenSet) {
    payload.WithInteger("cpu", m_cpu);
  }

  if (m_essentialHasBeenSet) {
    payload.WithBool("essential", m_essential);
  }

  if (m_entryPointHasBeenSet) {
    Aws::Utils::Array<JsonValue> entryPointJsonList(m_entryPoint.size());
    for (unsigned entryPointIndex = 0; entryPointIndex < entryPointJsonList.GetLength(); ++entryPointIndex) {
      entryPointJsonList[entryPointIndex].AsString(m_entryPoint[entryPointIndex]);
    }
    payload.WithArray("entryPoint", std::move(entryPointJsonList));
  }

  if (m_commandHasBeenSet) {
    Aws::Utils::Array<JsonValue> commandJsonList(m_command.size());
    for (unsigned commandIndex = 0; commandIndex < commandJsonList.GetLength(); ++commandIndex) {
      commandJsonList[commandIndex].AsString(m_command[commandIndex]);
    }
    payload.WithArray("command", std::move(commandJsonList));
  }

  if (m_workingDirectoryHasBeenSet) {
    payload.WithString("workingDirectory", m_workingDirectory);
  }

  if (m_environmentFilesHasBeenSet) {
    Aws::Utils::Array<JsonValue> environmentFilesJsonList(m_environmentFiles.size());
    for (unsigned environmentFilesIndex = 0; environmentFilesIndex < environmentFilesJsonList.GetLength(); ++environmentFilesIndex) {
      environmentFilesJsonList[environmentFilesIndex].AsObject(m_environmentFiles[environmentFilesIndex].Jsonize());
    }
    payload.WithArray("environmentFiles", std::move(environmentFilesJsonList));
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

  if (m_readonlyRootFilesystemHasBeenSet) {
    payload.WithBool("readonlyRootFilesystem", m_readonlyRootFilesystem);
  }

  if (m_mountPointsHasBeenSet) {
    Aws::Utils::Array<JsonValue> mountPointsJsonList(m_mountPoints.size());
    for (unsigned mountPointsIndex = 0; mountPointsIndex < mountPointsJsonList.GetLength(); ++mountPointsIndex) {
      mountPointsJsonList[mountPointsIndex].AsObject(m_mountPoints[mountPointsIndex].Jsonize());
    }
    payload.WithArray("mountPoints", std::move(mountPointsJsonList));
  }

  if (m_logConfigurationHasBeenSet) {
    payload.WithObject("logConfiguration", m_logConfiguration.Jsonize());
  }

  if (m_firelensConfigurationHasBeenSet) {
    payload.WithObject("firelensConfiguration", m_firelensConfiguration.Jsonize());
  }

  if (m_privilegedHasBeenSet) {
    payload.WithBool("privileged", m_privileged);
  }

  if (m_userHasBeenSet) {
    payload.WithString("user", m_user);
  }

  if (m_ulimitsHasBeenSet) {
    Aws::Utils::Array<JsonValue> ulimitsJsonList(m_ulimits.size());
    for (unsigned ulimitsIndex = 0; ulimitsIndex < ulimitsJsonList.GetLength(); ++ulimitsIndex) {
      ulimitsJsonList[ulimitsIndex].AsObject(m_ulimits[ulimitsIndex].Jsonize());
    }
    payload.WithArray("ulimits", std::move(ulimitsJsonList));
  }

  if (m_linuxParametersHasBeenSet) {
    payload.WithObject("linuxParameters", m_linuxParameters.Jsonize());
  }

  if (m_dependsOnHasBeenSet) {
    Aws::Utils::Array<JsonValue> dependsOnJsonList(m_dependsOn.size());
    for (unsigned dependsOnIndex = 0; dependsOnIndex < dependsOnJsonList.GetLength(); ++dependsOnIndex) {
      dependsOnJsonList[dependsOnIndex].AsObject(m_dependsOn[dependsOnIndex].Jsonize());
    }
    payload.WithArray("dependsOn", std::move(dependsOnJsonList));
  }

  if (m_startTimeoutHasBeenSet) {
    payload.WithInteger("startTimeout", m_startTimeout);
  }

  if (m_stopTimeoutHasBeenSet) {
    payload.WithInteger("stopTimeout", m_stopTimeout);
  }

  if (m_systemControlsHasBeenSet) {
    Aws::Utils::Array<JsonValue> systemControlsJsonList(m_systemControls.size());
    for (unsigned systemControlsIndex = 0; systemControlsIndex < systemControlsJsonList.GetLength(); ++systemControlsIndex) {
      systemControlsJsonList[systemControlsIndex].AsObject(m_systemControls[systemControlsIndex].Jsonize());
    }
    payload.WithArray("systemControls", std::move(systemControlsJsonList));
  }

  if (m_interactiveHasBeenSet) {
    payload.WithBool("interactive", m_interactive);
  }

  if (m_pseudoTerminalHasBeenSet) {
    payload.WithBool("pseudoTerminal", m_pseudoTerminal);
  }

  if (m_restartPolicyHasBeenSet) {
    payload.WithObject("restartPolicy", m_restartPolicy.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
