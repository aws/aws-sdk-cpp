/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/GlueConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{

GlueConfiguration::GlueConfiguration() : 
    m_tableNameHasBeenSet(false),
    m_databaseNameHasBeenSet(false)
{
}

GlueConfiguration::GlueConfiguration(JsonView jsonValue) : 
    m_tableNameHasBeenSet(false),
    m_databaseNameHasBeenSet(false)
{
  *this = jsonValue;
}

GlueConfiguration& GlueConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("tableName"))
  {
    m_tableName = jsonValue.GetString("tableName");

    m_tableNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("databaseName"))
  {
    m_databaseName = jsonValue.GetString("databaseName");

    m_databaseNameHasBeenSet = true;
  }

  return *this;
}

JsonValue GlueConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("tableName", m_tableName);

  }

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("databaseName", m_databaseName);

  }

  return payload;
}

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
