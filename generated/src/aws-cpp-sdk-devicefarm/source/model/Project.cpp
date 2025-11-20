/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devicefarm/model/Project.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DeviceFarm {
namespace Model {

Project::Project(JsonView jsonValue) { *this = jsonValue; }

Project& Project::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("defaultJobTimeoutMinutes")) {
    m_defaultJobTimeoutMinutes = jsonValue.GetInteger("defaultJobTimeoutMinutes");
    m_defaultJobTimeoutMinutesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("created")) {
    m_created = jsonValue.GetDouble("created");
    m_createdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("vpcConfig")) {
    m_vpcConfig = jsonValue.GetObject("vpcConfig");
    m_vpcConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("environmentVariables")) {
    Aws::Utils::Array<JsonView> environmentVariablesJsonList = jsonValue.GetArray("environmentVariables");
    for (unsigned environmentVariablesIndex = 0; environmentVariablesIndex < environmentVariablesJsonList.GetLength();
         ++environmentVariablesIndex) {
      m_environmentVariables.push_back(environmentVariablesJsonList[environmentVariablesIndex].AsObject());
    }
    m_environmentVariablesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("executionRoleArn")) {
    m_executionRoleArn = jsonValue.GetString("executionRoleArn");
    m_executionRoleArnHasBeenSet = true;
  }
  return *this;
}

JsonValue Project::Jsonize() const {
  JsonValue payload;

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_defaultJobTimeoutMinutesHasBeenSet) {
    payload.WithInteger("defaultJobTimeoutMinutes", m_defaultJobTimeoutMinutes);
  }

  if (m_createdHasBeenSet) {
    payload.WithDouble("created", m_created.SecondsWithMSPrecision());
  }

  if (m_vpcConfigHasBeenSet) {
    payload.WithObject("vpcConfig", m_vpcConfig.Jsonize());
  }

  if (m_environmentVariablesHasBeenSet) {
    Aws::Utils::Array<JsonValue> environmentVariablesJsonList(m_environmentVariables.size());
    for (unsigned environmentVariablesIndex = 0; environmentVariablesIndex < environmentVariablesJsonList.GetLength();
         ++environmentVariablesIndex) {
      environmentVariablesJsonList[environmentVariablesIndex].AsObject(m_environmentVariables[environmentVariablesIndex].Jsonize());
    }
    payload.WithArray("environmentVariables", std::move(environmentVariablesJsonList));
  }

  if (m_executionRoleArnHasBeenSet) {
    payload.WithString("executionRoleArn", m_executionRoleArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace DeviceFarm
}  // namespace Aws
