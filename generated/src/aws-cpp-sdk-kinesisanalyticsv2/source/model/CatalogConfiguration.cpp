/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/CatalogConfiguration.h>
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

CatalogConfiguration::CatalogConfiguration() : 
    m_glueDataCatalogConfigurationHasBeenSet(false)
{
}

CatalogConfiguration::CatalogConfiguration(JsonView jsonValue) : 
    m_glueDataCatalogConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

CatalogConfiguration& CatalogConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GlueDataCatalogConfiguration"))
  {
    m_glueDataCatalogConfiguration = jsonValue.GetObject("GlueDataCatalogConfiguration");

    m_glueDataCatalogConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue CatalogConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_glueDataCatalogConfigurationHasBeenSet)
  {
   payload.WithObject("GlueDataCatalogConfiguration", m_glueDataCatalogConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
