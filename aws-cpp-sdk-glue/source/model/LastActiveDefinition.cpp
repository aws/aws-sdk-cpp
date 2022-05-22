/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/LastActiveDefinition.h>
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

LastActiveDefinition::LastActiveDefinition() : 
    m_descriptionHasBeenSet(false),
    m_lastModifiedOnHasBeenSet(false),
    m_parameterSpecHasBeenSet(false),
    m_blueprintLocationHasBeenSet(false),
    m_blueprintServiceLocationHasBeenSet(false)
{
}

LastActiveDefinition::LastActiveDefinition(JsonView jsonValue) : 
    m_descriptionHasBeenSet(false),
    m_lastModifiedOnHasBeenSet(false),
    m_parameterSpecHasBeenSet(false),
    m_blueprintLocationHasBeenSet(false),
    m_blueprintServiceLocationHasBeenSet(false)
{
  *this = jsonValue;
}

LastActiveDefinition& LastActiveDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedOn"))
  {
    m_lastModifiedOn = jsonValue.GetDouble("LastModifiedOn");

    m_lastModifiedOnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParameterSpec"))
  {
    m_parameterSpec = jsonValue.GetString("ParameterSpec");

    m_parameterSpecHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BlueprintLocation"))
  {
    m_blueprintLocation = jsonValue.GetString("BlueprintLocation");

    m_blueprintLocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BlueprintServiceLocation"))
  {
    m_blueprintServiceLocation = jsonValue.GetString("BlueprintServiceLocation");

    m_blueprintServiceLocationHasBeenSet = true;
  }

  return *this;
}

JsonValue LastActiveDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_lastModifiedOnHasBeenSet)
  {
   payload.WithDouble("LastModifiedOn", m_lastModifiedOn.SecondsWithMSPrecision());
  }

  if(m_parameterSpecHasBeenSet)
  {
   payload.WithString("ParameterSpec", m_parameterSpec);

  }

  if(m_blueprintLocationHasBeenSet)
  {
   payload.WithString("BlueprintLocation", m_blueprintLocation);

  }

  if(m_blueprintServiceLocationHasBeenSet)
  {
   payload.WithString("BlueprintServiceLocation", m_blueprintServiceLocation);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
