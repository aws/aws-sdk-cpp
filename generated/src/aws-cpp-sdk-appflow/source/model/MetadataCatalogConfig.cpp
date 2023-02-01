/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/MetadataCatalogConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Appflow
{
namespace Model
{

MetadataCatalogConfig::MetadataCatalogConfig() : 
    m_glueDataCatalogHasBeenSet(false)
{
}

MetadataCatalogConfig::MetadataCatalogConfig(JsonView jsonValue) : 
    m_glueDataCatalogHasBeenSet(false)
{
  *this = jsonValue;
}

MetadataCatalogConfig& MetadataCatalogConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("glueDataCatalog"))
  {
    m_glueDataCatalog = jsonValue.GetObject("glueDataCatalog");

    m_glueDataCatalogHasBeenSet = true;
  }

  return *this;
}

JsonValue MetadataCatalogConfig::Jsonize() const
{
  JsonValue payload;

  if(m_glueDataCatalogHasBeenSet)
  {
   payload.WithObject("glueDataCatalog", m_glueDataCatalog.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
