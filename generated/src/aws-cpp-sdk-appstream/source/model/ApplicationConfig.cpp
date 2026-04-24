/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/ApplicationConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AppStream {
namespace Model {

ApplicationConfig::ApplicationConfig(JsonView jsonValue) { *this = jsonValue; }

ApplicationConfig& ApplicationConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DisplayName")) {
    m_displayName = jsonValue.GetString("DisplayName");
    m_displayNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AbsoluteAppPath")) {
    m_absoluteAppPath = jsonValue.GetString("AbsoluteAppPath");
    m_absoluteAppPathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AbsoluteIconPath")) {
    m_absoluteIconPath = jsonValue.GetString("AbsoluteIconPath");
    m_absoluteIconPathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AbsoluteManifestPath")) {
    m_absoluteManifestPath = jsonValue.GetString("AbsoluteManifestPath");
    m_absoluteManifestPathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("WorkingDirectory")) {
    m_workingDirectory = jsonValue.GetString("WorkingDirectory");
    m_workingDirectoryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LaunchParameters")) {
    m_launchParameters = jsonValue.GetString("LaunchParameters");
    m_launchParametersHasBeenSet = true;
  }
  return *this;
}

JsonValue ApplicationConfig::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_displayNameHasBeenSet) {
    payload.WithString("DisplayName", m_displayName);
  }

  if (m_absoluteAppPathHasBeenSet) {
    payload.WithString("AbsoluteAppPath", m_absoluteAppPath);
  }

  if (m_absoluteIconPathHasBeenSet) {
    payload.WithString("AbsoluteIconPath", m_absoluteIconPath);
  }

  if (m_absoluteManifestPathHasBeenSet) {
    payload.WithString("AbsoluteManifestPath", m_absoluteManifestPath);
  }

  if (m_workingDirectoryHasBeenSet) {
    payload.WithString("WorkingDirectory", m_workingDirectory);
  }

  if (m_launchParametersHasBeenSet) {
    payload.WithString("LaunchParameters", m_launchParameters);
  }

  return payload;
}

}  // namespace Model
}  // namespace AppStream
}  // namespace Aws
