/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/inspector2/model/ServerlessFunction.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {

ServerlessFunction::ServerlessFunction(JsonView jsonValue) { *this = jsonValue; }

ServerlessFunction& ServerlessFunction::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("serverlessFunctionName")) {
    m_serverlessFunctionName = jsonValue.GetString("serverlessFunctionName");
    m_serverlessFunctionNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("runtime")) {
    m_runtime = jsonValue.GetString("runtime");
    m_runtimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("version")) {
    m_version = jsonValue.GetString("version");
    m_versionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("codeDigest")) {
    m_codeDigest = jsonValue.GetString("codeDigest");
    m_codeDigestHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastModifiedAt")) {
    m_lastModifiedAt = jsonValue.GetDouble("lastModifiedAt");
    m_lastModifiedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("networkId")) {
    m_networkId = jsonValue.GetString("networkId");
    m_networkIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("subnetIds")) {
    Aws::Utils::Array<JsonView> subnetIdsJsonList = jsonValue.GetArray("subnetIds");
    for (unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex) {
      m_subnetIds.push_back(subnetIdsJsonList[subnetIdsIndex].AsString());
    }
    m_subnetIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("securityGroupIds")) {
    Aws::Utils::Array<JsonView> securityGroupIdsJsonList = jsonValue.GetArray("securityGroupIds");
    for (unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex) {
      m_securityGroupIds.push_back(securityGroupIdsJsonList[securityGroupIdsIndex].AsString());
    }
    m_securityGroupIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("executionRole")) {
    m_executionRole = jsonValue.GetString("executionRole");
    m_executionRoleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("packageType")) {
    m_packageType = PackageTypeMapper::GetPackageTypeForName(jsonValue.GetString("packageType"));
    m_packageTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("architectures")) {
    Aws::Utils::Array<JsonView> architecturesJsonList = jsonValue.GetArray("architectures");
    for (unsigned architecturesIndex = 0; architecturesIndex < architecturesJsonList.GetLength(); ++architecturesIndex) {
      m_architectures.push_back(ArchitectureMapper::GetArchitectureForName(architecturesJsonList[architecturesIndex].AsString()));
    }
    m_architecturesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("layers")) {
    Aws::Utils::Array<JsonView> layersJsonList = jsonValue.GetArray("layers");
    for (unsigned layersIndex = 0; layersIndex < layersJsonList.GetLength(); ++layersIndex) {
      m_layers.push_back(layersJsonList[layersIndex].AsString());
    }
    m_layersHasBeenSet = true;
  }
  return *this;
}

JsonValue ServerlessFunction::Jsonize() const {
  JsonValue payload;

  if (m_serverlessFunctionNameHasBeenSet) {
    payload.WithString("serverlessFunctionName", m_serverlessFunctionName);
  }

  if (m_runtimeHasBeenSet) {
    payload.WithString("runtime", m_runtime);
  }

  if (m_versionHasBeenSet) {
    payload.WithString("version", m_version);
  }

  if (m_codeDigestHasBeenSet) {
    payload.WithString("codeDigest", m_codeDigest);
  }

  if (m_lastModifiedAtHasBeenSet) {
    payload.WithDouble("lastModifiedAt", m_lastModifiedAt.SecondsWithMSPrecision());
  }

  if (m_networkIdHasBeenSet) {
    payload.WithString("networkId", m_networkId);
  }

  if (m_subnetIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> subnetIdsJsonList(m_subnetIds.size());
    for (unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex) {
      subnetIdsJsonList[subnetIdsIndex].AsString(m_subnetIds[subnetIdsIndex]);
    }
    payload.WithArray("subnetIds", std::move(subnetIdsJsonList));
  }

  if (m_securityGroupIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> securityGroupIdsJsonList(m_securityGroupIds.size());
    for (unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex) {
      securityGroupIdsJsonList[securityGroupIdsIndex].AsString(m_securityGroupIds[securityGroupIdsIndex]);
    }
    payload.WithArray("securityGroupIds", std::move(securityGroupIdsJsonList));
  }

  if (m_executionRoleHasBeenSet) {
    payload.WithString("executionRole", m_executionRole);
  }

  if (m_packageTypeHasBeenSet) {
    payload.WithString("packageType", PackageTypeMapper::GetNameForPackageType(m_packageType));
  }

  if (m_architecturesHasBeenSet) {
    Aws::Utils::Array<JsonValue> architecturesJsonList(m_architectures.size());
    for (unsigned architecturesIndex = 0; architecturesIndex < architecturesJsonList.GetLength(); ++architecturesIndex) {
      architecturesJsonList[architecturesIndex].AsString(ArchitectureMapper::GetNameForArchitecture(m_architectures[architecturesIndex]));
    }
    payload.WithArray("architectures", std::move(architecturesJsonList));
  }

  if (m_layersHasBeenSet) {
    Aws::Utils::Array<JsonValue> layersJsonList(m_layers.size());
    for (unsigned layersIndex = 0; layersIndex < layersJsonList.GetLength(); ++layersIndex) {
      layersJsonList[layersIndex].AsString(m_layers[layersIndex]);
    }
    payload.WithArray("layers", std::move(layersJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
