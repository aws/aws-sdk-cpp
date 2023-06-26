/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/GlueDataCatalogConfigurationDescription.h>
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

GlueDataCatalogConfigurationDescription::GlueDataCatalogConfigurationDescription() : 
    m_databaseARNHasBeenSet(false)
{
}

GlueDataCatalogConfigurationDescription::GlueDataCatalogConfigurationDescription(JsonView jsonValue) : 
    m_databaseARNHasBeenSet(false)
{
  *this = jsonValue;
}

GlueDataCatalogConfigurationDescription& GlueDataCatalogConfigurationDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DatabaseARN"))
  {
    m_databaseARN = jsonValue.GetString("DatabaseARN");

    m_databaseARNHasBeenSet = true;
  }

  return *this;
}

JsonValue GlueDataCatalogConfigurationDescription::Jsonize() const
{
  JsonValue payload;

  if(m_databaseARNHasBeenSet)
  {
   payload.WithString("DatabaseARN", m_databaseARN);

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
