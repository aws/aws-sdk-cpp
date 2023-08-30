/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/SAPODataSourceProperties.h>
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

SAPODataSourceProperties::SAPODataSourceProperties() : 
    m_objectPathHasBeenSet(false),
    m_parallelismConfigHasBeenSet(false),
    m_paginationConfigHasBeenSet(false)
{
}

SAPODataSourceProperties::SAPODataSourceProperties(JsonView jsonValue) : 
    m_objectPathHasBeenSet(false),
    m_parallelismConfigHasBeenSet(false),
    m_paginationConfigHasBeenSet(false)
{
  *this = jsonValue;
}

SAPODataSourceProperties& SAPODataSourceProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("objectPath"))
  {
    m_objectPath = jsonValue.GetString("objectPath");

    m_objectPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parallelismConfig"))
  {
    m_parallelismConfig = jsonValue.GetObject("parallelismConfig");

    m_parallelismConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("paginationConfig"))
  {
    m_paginationConfig = jsonValue.GetObject("paginationConfig");

    m_paginationConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue SAPODataSourceProperties::Jsonize() const
{
  JsonValue payload;

  if(m_objectPathHasBeenSet)
  {
   payload.WithString("objectPath", m_objectPath);

  }

  if(m_parallelismConfigHasBeenSet)
  {
   payload.WithObject("parallelismConfig", m_parallelismConfig.Jsonize());

  }

  if(m_paginationConfigHasBeenSet)
  {
   payload.WithObject("paginationConfig", m_paginationConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
