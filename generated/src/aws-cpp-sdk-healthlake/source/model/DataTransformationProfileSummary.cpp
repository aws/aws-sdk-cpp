/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/healthlake/model/DataTransformationProfileSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace HealthLake {
namespace Model {

DataTransformationProfileSummary::DataTransformationProfileSummary(JsonView jsonValue) { *this = jsonValue; }

DataTransformationProfileSummary& DataTransformationProfileSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ProfileId")) {
    m_profileId = jsonValue.GetString("ProfileId");
    m_profileIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Version")) {
    m_version = jsonValue.GetInteger("Version");
    m_versionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SourceFormat")) {
    m_sourceFormat = SourceFormatMapper::GetSourceFormatForName(jsonValue.GetString("SourceFormat"));
    m_sourceFormatHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TargetFormat")) {
    m_targetFormat = TargetFormatMapper::GetTargetFormatForName(jsonValue.GetString("TargetFormat"));
    m_targetFormatHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ProfileName")) {
    m_profileName = jsonValue.GetString("ProfileName");
    m_profileNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ProfileDescription")) {
    m_profileDescription = jsonValue.GetString("ProfileDescription");
    m_profileDescriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastUpdatedAt")) {
    m_lastUpdatedAt = jsonValue.GetDouble("LastUpdatedAt");
    m_lastUpdatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue DataTransformationProfileSummary::Jsonize() const {
  JsonValue payload;

  if (m_profileIdHasBeenSet) {
    payload.WithString("ProfileId", m_profileId);
  }

  if (m_versionHasBeenSet) {
    payload.WithInteger("Version", m_version);
  }

  if (m_sourceFormatHasBeenSet) {
    payload.WithString("SourceFormat", SourceFormatMapper::GetNameForSourceFormat(m_sourceFormat));
  }

  if (m_targetFormatHasBeenSet) {
    payload.WithString("TargetFormat", TargetFormatMapper::GetNameForTargetFormat(m_targetFormat));
  }

  if (m_profileNameHasBeenSet) {
    payload.WithString("ProfileName", m_profileName);
  }

  if (m_profileDescriptionHasBeenSet) {
    payload.WithString("ProfileDescription", m_profileDescription);
  }

  if (m_lastUpdatedAtHasBeenSet) {
    payload.WithDouble("LastUpdatedAt", m_lastUpdatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
