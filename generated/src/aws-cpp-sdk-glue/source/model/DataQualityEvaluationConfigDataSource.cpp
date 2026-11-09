/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/DataQualityEvaluationConfigDataSource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

DataQualityEvaluationConfigDataSource::DataQualityEvaluationConfigDataSource(JsonView jsonValue) { *this = jsonValue; }

DataQualityEvaluationConfigDataSource& DataQualityEvaluationConfigDataSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("GlueTables")) {
    m_glueTables = jsonValue.GetObject("GlueTables");
    m_glueTablesHasBeenSet = true;
  }
  return *this;
}

JsonValue DataQualityEvaluationConfigDataSource::Jsonize() const {
  JsonValue payload;

  if (m_glueTablesHasBeenSet) {
    payload.WithObject("GlueTables", m_glueTables.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
