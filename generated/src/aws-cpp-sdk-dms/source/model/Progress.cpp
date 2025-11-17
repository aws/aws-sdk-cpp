/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/dms/model/Progress.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DatabaseMigrationService {
namespace Model {

Progress::Progress(JsonView jsonValue) { *this = jsonValue; }

Progress& Progress::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ProgressPercent")) {
    m_progressPercent = jsonValue.GetDouble("ProgressPercent");
    m_progressPercentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TotalObjects")) {
    m_totalObjects = jsonValue.GetInt64("TotalObjects");
    m_totalObjectsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ProgressStep")) {
    m_progressStep = jsonValue.GetString("ProgressStep");
    m_progressStepHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ProcessedObject")) {
    m_processedObject = jsonValue.GetObject("ProcessedObject");
    m_processedObjectHasBeenSet = true;
  }
  return *this;
}

JsonValue Progress::Jsonize() const {
  JsonValue payload;

  if (m_progressPercentHasBeenSet) {
    payload.WithDouble("ProgressPercent", m_progressPercent);
  }

  if (m_totalObjectsHasBeenSet) {
    payload.WithInt64("TotalObjects", m_totalObjects);
  }

  if (m_progressStepHasBeenSet) {
    payload.WithString("ProgressStep", m_progressStep);
  }

  if (m_processedObjectHasBeenSet) {
    payload.WithObject("ProcessedObject", m_processedObject.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace DatabaseMigrationService
}  // namespace Aws
