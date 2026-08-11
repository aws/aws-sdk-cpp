/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/AnalysisLogExport.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CleanRooms {
namespace Model {

AnalysisLogExport::AnalysisLogExport(JsonView jsonValue) { *this = jsonValue; }

AnalysisLogExport& AnalysisLogExport::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("analysisLogExportId")) {
    m_analysisLogExportId = jsonValue.GetString("analysisLogExportId");
    m_analysisLogExportIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("analysisId")) {
    m_analysisId = jsonValue.GetString("analysisId");
    m_analysisIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("analysisType")) {
    m_analysisType = LogExportAnalysisTypeMapper::GetLogExportAnalysisTypeForName(jsonValue.GetString("analysisType"));
    m_analysisTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("membershipId")) {
    m_membershipId = jsonValue.GetString("membershipId");
    m_membershipIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = AnalysisLogExportStatusMapper::GetAnalysisLogExportStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resultConfiguration")) {
    m_resultConfiguration = jsonValue.GetObject("resultConfiguration");
    m_resultConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createTime")) {
    m_createTime = jsonValue.GetDouble("createTime");
    m_createTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updateTime")) {
    m_updateTime = jsonValue.GetDouble("updateTime");
    m_updateTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("error")) {
    m_error = jsonValue.GetObject("error");
    m_errorHasBeenSet = true;
  }
  return *this;
}

JsonValue AnalysisLogExport::Jsonize() const {
  JsonValue payload;

  if (m_analysisLogExportIdHasBeenSet) {
    payload.WithString("analysisLogExportId", m_analysisLogExportId);
  }

  if (m_analysisIdHasBeenSet) {
    payload.WithString("analysisId", m_analysisId);
  }

  if (m_analysisTypeHasBeenSet) {
    payload.WithString("analysisType", LogExportAnalysisTypeMapper::GetNameForLogExportAnalysisType(m_analysisType));
  }

  if (m_membershipIdHasBeenSet) {
    payload.WithString("membershipId", m_membershipId);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", AnalysisLogExportStatusMapper::GetNameForAnalysisLogExportStatus(m_status));
  }

  if (m_resultConfigurationHasBeenSet) {
    payload.WithObject("resultConfiguration", m_resultConfiguration.Jsonize());
  }

  if (m_createTimeHasBeenSet) {
    payload.WithDouble("createTime", m_createTime.SecondsWithMSPrecision());
  }

  if (m_updateTimeHasBeenSet) {
    payload.WithDouble("updateTime", m_updateTime.SecondsWithMSPrecision());
  }

  if (m_errorHasBeenSet) {
    payload.WithObject("error", m_error.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
