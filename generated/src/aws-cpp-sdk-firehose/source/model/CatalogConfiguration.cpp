/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/CatalogConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Firehose
{
namespace Model
{

CatalogConfiguration::CatalogConfiguration() : 
    m_catalogARNHasBeenSet(false)
{
}

CatalogConfiguration::CatalogConfiguration(JsonView jsonValue)
  : CatalogConfiguration()
{
  *this = jsonValue;
}

CatalogConfiguration& CatalogConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CatalogARN"))
  {
    m_catalogARN = jsonValue.GetString("CatalogARN");

    m_catalogARNHasBeenSet = true;
  }

  return *this;
}

JsonValue CatalogConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_catalogARNHasBeenSet)
  {
   payload.WithString("CatalogARN", m_catalogARN);

  }

  return payload;
}

} // namespace Model
} // namespace Firehose
} // namespace Aws
