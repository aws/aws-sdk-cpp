/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/MetadataGenerationRunTypeStat.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

MetadataGenerationRunTypeStat::MetadataGenerationRunTypeStat(JsonView jsonValue) { *this = jsonValue; }

MetadataGenerationRunTypeStat& MetadataGenerationRunTypeStat::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("type")) {
    m_type = MetadataGenerationRunTypeMapper::GetMetadataGenerationRunTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = MetadataGenerationRunStatusMapper::GetMetadataGenerationRunStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorMessage")) {
    m_errorMessage = jsonValue.GetString("errorMessage");
    m_errorMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue MetadataGenerationRunTypeStat::Jsonize() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("type", MetadataGenerationRunTypeMapper::GetNameForMetadataGenerationRunType(m_type));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", MetadataGenerationRunStatusMapper::GetNameForMetadataGenerationRunStatus(m_status));
  }

  if (m_errorMessageHasBeenSet) {
    payload.WithString("errorMessage", m_errorMessage);
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
