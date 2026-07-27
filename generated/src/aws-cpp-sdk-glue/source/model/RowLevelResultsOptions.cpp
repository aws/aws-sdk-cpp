/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/RowLevelResultsOptions.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

RowLevelResultsOptions::RowLevelResultsOptions(JsonView jsonValue) { *this = jsonValue; }

RowLevelResultsOptions& RowLevelResultsOptions::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("MaxRowsToWrite")) {
    m_maxRowsToWrite = jsonValue.GetInteger("MaxRowsToWrite");
    m_maxRowsToWriteHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResultType")) {
    m_resultType = ResultTypeEnumMapper::GetResultTypeEnumForName(jsonValue.GetString("ResultType"));
    m_resultTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CatalogTableConfig")) {
    m_catalogTableConfig = jsonValue.GetObject("CatalogTableConfig");
    m_catalogTableConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue RowLevelResultsOptions::Jsonize() const {
  JsonValue payload;

  if (m_maxRowsToWriteHasBeenSet) {
    payload.WithInteger("MaxRowsToWrite", m_maxRowsToWrite);
  }

  if (m_resultTypeHasBeenSet) {
    payload.WithString("ResultType", ResultTypeEnumMapper::GetNameForResultTypeEnum(m_resultType));
  }

  if (m_catalogTableConfigHasBeenSet) {
    payload.WithObject("CatalogTableConfig", m_catalogTableConfig.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
