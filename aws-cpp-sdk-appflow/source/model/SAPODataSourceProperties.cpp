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
    m_objectPathHasBeenSet(false)
{
}

SAPODataSourceProperties::SAPODataSourceProperties(JsonView jsonValue) : 
    m_objectPathHasBeenSet(false)
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

  return *this;
}

JsonValue SAPODataSourceProperties::Jsonize() const
{
  JsonValue payload;

  if(m_objectPathHasBeenSet)
  {
   payload.WithString("objectPath", m_objectPath);

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
