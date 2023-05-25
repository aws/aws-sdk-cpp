/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/GlueDataCatalogConfigurationUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{

GlueDataCatalogConfigurationUpdate::GlueDataCatalogConfigurationUpdate() : 
    m_databaseARNUpdateHasBeenSet(false)
{
}

GlueDataCatalogConfigurationUpdate::GlueDataCatalogConfigurationUpdate(JsonView jsonValue) : 
    m_databaseARNUpdateHasBeenSet(false)
{
  *this = jsonValue;
}

GlueDataCatalogConfigurationUpdate& GlueDataCatalogConfigurationUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DatabaseARNUpdate"))
  {
    m_databaseARNUpdate = jsonValue.GetString("DatabaseARNUpdate");

    m_databaseARNUpdateHasBeenSet = true;
  }

  return *this;
}

JsonValue GlueDataCatalogConfigurationUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_databaseARNUpdateHasBeenSet)
  {
   payload.WithString("DatabaseARNUpdate", m_databaseARNUpdate);

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
