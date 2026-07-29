/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsitewise/model/PipelineSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {

PipelineSummary::PipelineSummary(JsonView jsonValue) { *this = jsonValue; }

PipelineSummary& PipelineSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("pipelineName")) {
    m_pipelineName = jsonValue.GetString("pipelineName");
    m_pipelineNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("pipelineArn")) {
    m_pipelineArn = jsonValue.GetString("pipelineArn");
    m_pipelineArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("version")) {
    m_version = jsonValue.GetString("version");
    m_versionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = jsonValue.GetObject("status");
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue PipelineSummary::Jsonize() const {
  JsonValue payload;

  if (m_pipelineNameHasBeenSet) {
    payload.WithString("pipelineName", m_pipelineName);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_pipelineArnHasBeenSet) {
    payload.WithString("pipelineArn", m_pipelineArn);
  }

  if (m_versionHasBeenSet) {
    payload.WithString("version", m_version);
  }

  if (m_statusHasBeenSet) {
    payload.WithObject("status", m_status.Jsonize());
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
