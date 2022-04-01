/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/GlueDataCatalogConfiguration.h>
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

GlueDataCatalogConfiguration::GlueDataCatalogConfiguration() : 
    m_databaseARNHasBeenSet(false)
{
}

GlueDataCatalogConfiguration::GlueDataCatalogConfiguration(JsonView jsonValue) : 
    m_databaseARNHasBeenSet(false)
{
  *this = jsonValue;
}

GlueDataCatalogConfiguration& GlueDataCatalogConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DatabaseARN"))
  {
    m_databaseARN = jsonValue.GetString("DatabaseARN");

    m_databaseARNHasBeenSet = true;
  }

  return *this;
}

JsonValue GlueDataCatalogConfiguration::Jsonize() const
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
