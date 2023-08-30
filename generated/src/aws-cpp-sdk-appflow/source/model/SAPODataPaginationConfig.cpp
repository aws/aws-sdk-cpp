/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/SAPODataPaginationConfig.h>
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

SAPODataPaginationConfig::SAPODataPaginationConfig() : 
    m_maxPageSize(0),
    m_maxPageSizeHasBeenSet(false)
{
}

SAPODataPaginationConfig::SAPODataPaginationConfig(JsonView jsonValue) : 
    m_maxPageSize(0),
    m_maxPageSizeHasBeenSet(false)
{
  *this = jsonValue;
}

SAPODataPaginationConfig& SAPODataPaginationConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("maxPageSize"))
  {
    m_maxPageSize = jsonValue.GetInteger("maxPageSize");

    m_maxPageSizeHasBeenSet = true;
  }

  return *this;
}

JsonValue SAPODataPaginationConfig::Jsonize() const
{
  JsonValue payload;

  if(m_maxPageSizeHasBeenSet)
  {
   payload.WithInteger("maxPageSize", m_maxPageSize);

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
