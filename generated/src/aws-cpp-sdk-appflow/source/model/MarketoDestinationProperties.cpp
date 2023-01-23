/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/MarketoDestinationProperties.h>
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

MarketoDestinationProperties::MarketoDestinationProperties() : 
    m_objectHasBeenSet(false),
    m_errorHandlingConfigHasBeenSet(false)
{
}

MarketoDestinationProperties::MarketoDestinationProperties(JsonView jsonValue) : 
    m_objectHasBeenSet(false),
    m_errorHandlingConfigHasBeenSet(false)
{
  *this = jsonValue;
}

MarketoDestinationProperties& MarketoDestinationProperties::operator =(JsonView jsonValue)
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

JsonValue MarketoDestinationProperties::Jsonize() const
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
