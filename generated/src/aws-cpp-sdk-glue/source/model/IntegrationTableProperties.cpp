/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/IntegrationTableProperties.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

IntegrationTableProperties::IntegrationTableProperties(JsonView jsonValue) { *this = jsonValue; }

IntegrationTableProperties& IntegrationTableProperties::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ResourceArn")) {
    m_resourceArn = jsonValue.GetString("ResourceArn");
    m_resourceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TableName")) {
    m_tableName = jsonValue.GetString("TableName");
    m_tableNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SourceTableConfig")) {
    m_sourceTableConfig = jsonValue.GetObject("SourceTableConfig");
    m_sourceTableConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TargetTableConfig")) {
    m_targetTableConfig = jsonValue.GetObject("TargetTableConfig");
    m_targetTableConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue IntegrationTableProperties::Jsonize() const {
  JsonValue payload;

  if (m_resourceArnHasBeenSet) {
    payload.WithString("ResourceArn", m_resourceArn);
  }

  if (m_tableNameHasBeenSet) {
    payload.WithString("TableName", m_tableName);
  }

  if (m_sourceTableConfigHasBeenSet) {
    payload.WithObject("SourceTableConfig", m_sourceTableConfig.Jsonize());
  }

  if (m_targetTableConfigHasBeenSet) {
    payload.WithObject("TargetTableConfig", m_targetTableConfig.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
