/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/ServiceNowSourceProperties.h>
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

ServiceNowSourceProperties::ServiceNowSourceProperties() : 
    m_objectHasBeenSet(false)
{
}

ServiceNowSourceProperties::ServiceNowSourceProperties(JsonView jsonValue) : 
    m_objectHasBeenSet(false)
{
  *this = jsonValue;
}

ServiceNowSourceProperties& ServiceNowSourceProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("object"))
  {
    m_object = jsonValue.GetString("object");

    m_objectHasBeenSet = true;
  }

  return *this;
}

JsonValue ServiceNowSourceProperties::Jsonize() const
{
  JsonValue payload;

  if(m_objectHasBeenSet)
  {
   payload.WithString("object", m_object);

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
