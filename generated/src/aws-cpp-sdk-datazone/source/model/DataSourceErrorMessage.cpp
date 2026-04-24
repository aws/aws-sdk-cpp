/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/DataSourceErrorMessage.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

DataSourceErrorMessage::DataSourceErrorMessage(JsonView jsonValue) { *this = jsonValue; }

DataSourceErrorMessage& DataSourceErrorMessage::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("errorType")) {
    m_errorType = DataSourceErrorTypeMapper::GetDataSourceErrorTypeForName(jsonValue.GetString("errorType"));
    m_errorTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorDetail")) {
    m_errorDetail = jsonValue.GetString("errorDetail");
    m_errorDetailHasBeenSet = true;
  }
  return *this;
}

JsonValue DataSourceErrorMessage::Jsonize() const {
  JsonValue payload;

  if (m_errorTypeHasBeenSet) {
    payload.WithString("errorType", DataSourceErrorTypeMapper::GetNameForDataSourceErrorType(m_errorType));
  }

  if (m_errorDetailHasBeenSet) {
    payload.WithString("errorDetail", m_errorDetail);
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
