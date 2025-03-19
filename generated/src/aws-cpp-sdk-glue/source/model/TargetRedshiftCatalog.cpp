/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/TargetRedshiftCatalog.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

TargetRedshiftCatalog::TargetRedshiftCatalog(JsonView jsonValue)
{
  *this = jsonValue;
}

TargetRedshiftCatalog& TargetRedshiftCatalog::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CatalogArn"))
  {
    m_catalogArn = jsonValue.GetString("CatalogArn");
    m_catalogArnHasBeenSet = true;
  }
  return *this;
}

JsonValue TargetRedshiftCatalog::Jsonize() const
{
  JsonValue payload;

  if(m_catalogArnHasBeenSet)
  {
   payload.WithString("CatalogArn", m_catalogArn);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
