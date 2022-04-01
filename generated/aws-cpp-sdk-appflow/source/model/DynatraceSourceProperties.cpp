/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/DynatraceSourceProperties.h>
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

DynatraceSourceProperties::DynatraceSourceProperties() : 
    m_objectHasBeenSet(false)
{
}

DynatraceSourceProperties::DynatraceSourceProperties(JsonView jsonValue) : 
    m_objectHasBeenSet(false)
{
  *this = jsonValue;
}

DynatraceSourceProperties& DynatraceSourceProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("object"))
  {
    m_object = jsonValue.GetString("object");

    m_objectHasBeenSet = true;
  }

  return *this;
}

JsonValue DynatraceSourceProperties::Jsonize() const
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
