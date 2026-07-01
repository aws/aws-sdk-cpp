/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/IntermediateTableVersionSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CleanRooms {
namespace Model {

IntermediateTableVersionSummary::IntermediateTableVersionSummary(JsonView jsonValue) { *this = jsonValue; }

IntermediateTableVersionSummary& IntermediateTableVersionSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("versionId")) {
    m_versionId = jsonValue.GetString("versionId");
    m_versionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tableId")) {
    m_tableId = jsonValue.GetString("tableId");
    m_tableIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createTime")) {
    m_createTime = jsonValue.GetDouble("createTime");
    m_createTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("analysisId")) {
    m_analysisId = jsonValue.GetString("analysisId");
    m_analysisIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = IntermediateTableVersionStatusMapper::GetIntermediateTableVersionStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("analysisType")) {
    m_analysisType =
        PopulateIntermediateTableAnalysisTypeMapper::GetPopulateIntermediateTableAnalysisTypeForName(jsonValue.GetString("analysisType"));
    m_analysisTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("kmsKeyArn")) {
    m_kmsKeyArn = jsonValue.GetString("kmsKeyArn");
    m_kmsKeyArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("expirationTime")) {
    m_expirationTime = jsonValue.GetDouble("expirationTime");
    m_expirationTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue IntermediateTableVersionSummary::Jsonize() const {
  JsonValue payload;

  if (m_versionIdHasBeenSet) {
    payload.WithString("versionId", m_versionId);
  }

  if (m_tableIdHasBeenSet) {
    payload.WithString("tableId", m_tableId);
  }

  if (m_createTimeHasBeenSet) {
    payload.WithDouble("createTime", m_createTime.SecondsWithMSPrecision());
  }

  if (m_analysisIdHasBeenSet) {
    payload.WithString("analysisId", m_analysisId);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", IntermediateTableVersionStatusMapper::GetNameForIntermediateTableVersionStatus(m_status));
  }

  if (m_analysisTypeHasBeenSet) {
    payload.WithString("analysisType",
                       PopulateIntermediateTableAnalysisTypeMapper::GetNameForPopulateIntermediateTableAnalysisType(m_analysisType));
  }

  if (m_kmsKeyArnHasBeenSet) {
    payload.WithString("kmsKeyArn", m_kmsKeyArn);
  }

  if (m_expirationTimeHasBeenSet) {
    payload.WithDouble("expirationTime", m_expirationTime.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
