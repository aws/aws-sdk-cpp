/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/HoneycodeDestinationProperties.h>
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

HoneycodeDestinationProperties::HoneycodeDestinationProperties() : 
    m_objectHasBeenSet(false),
    m_errorHandlingConfigHasBeenSet(false)
{
}

HoneycodeDestinationProperties::HoneycodeDestinationProperties(JsonView jsonValue) : 
    m_objectHasBeenSet(false),
    m_errorHandlingConfigHasBeenSet(false)
{
  *this = jsonValue;
}

HoneycodeDestinationProperties& HoneycodeDestinationProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("object"))
  {
    m_object = jsonValue.GetString("object");

    m_objectHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorHandlingConfig"))
  {
    m_errorHandlingConfig = jsonValue.GetObject("errorHandlingConfig");

    m_errorHandlingConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue HoneycodeDestinationProperties::Jsonize() const
{
  JsonValue payload;

  if(m_objectHasBeenSet)
  {
   payload.WithString("object", m_object);

  }

  if(m_errorHandlingConfigHasBeenSet)
  {
   payload.WithObject("errorHandlingConfig", m_errorHandlingConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
