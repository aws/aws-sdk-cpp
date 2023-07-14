/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/CatalogConfigurationUpdate.h>
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

CatalogConfigurationUpdate::CatalogConfigurationUpdate() : 
    m_glueDataCatalogConfigurationUpdateHasBeenSet(false)
{
}

CatalogConfigurationUpdate::CatalogConfigurationUpdate(JsonView jsonValue) : 
    m_glueDataCatalogConfigurationUpdateHasBeenSet(false)
{
  *this = jsonValue;
}

CatalogConfigurationUpdate& CatalogConfigurationUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GlueDataCatalogConfigurationUpdate"))
  {
    m_glueDataCatalogConfigurationUpdate = jsonValue.GetObject("GlueDataCatalogConfigurationUpdate");

    m_glueDataCatalogConfigurationUpdateHasBeenSet = true;
  }

  return *this;
}

JsonValue CatalogConfigurationUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_glueDataCatalogConfigurationUpdateHasBeenSet)
  {
   payload.WithObject("GlueDataCatalogConfigurationUpdate", m_glueDataCatalogConfigurationUpdate.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
