/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/CatalogConfigurationDescription.h>
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

CatalogConfigurationDescription::CatalogConfigurationDescription() : 
    m_glueDataCatalogConfigurationDescriptionHasBeenSet(false)
{
}

CatalogConfigurationDescription::CatalogConfigurationDescription(JsonView jsonValue) : 
    m_glueDataCatalogConfigurationDescriptionHasBeenSet(false)
{
  *this = jsonValue;
}

CatalogConfigurationDescription& CatalogConfigurationDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GlueDataCatalogConfigurationDescription"))
  {
    m_glueDataCatalogConfigurationDescription = jsonValue.GetObject("GlueDataCatalogConfigurationDescription");

    m_glueDataCatalogConfigurationDescriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue CatalogConfigurationDescription::Jsonize() const
{
  JsonValue payload;

  if(m_glueDataCatalogConfigurationDescriptionHasBeenSet)
  {
   payload.WithObject("GlueDataCatalogConfigurationDescription", m_glueDataCatalogConfigurationDescription.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
