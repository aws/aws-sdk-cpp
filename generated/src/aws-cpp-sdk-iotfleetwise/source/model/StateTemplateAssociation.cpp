/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/StateTemplateAssociation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

StateTemplateAssociation::StateTemplateAssociation(JsonView jsonValue)
{
  *this = jsonValue;
}

StateTemplateAssociation& StateTemplateAssociation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("identifier"))
  {
    m_identifier = jsonValue.GetString("identifier");
    m_identifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("stateTemplateUpdateStrategy"))
  {
    m_stateTemplateUpdateStrategy = jsonValue.GetObject("stateTemplateUpdateStrategy");
    m_stateTemplateUpdateStrategyHasBeenSet = true;
  }
  return *this;
}

JsonValue StateTemplateAssociation::Jsonize() const
{
  JsonValue payload;

  if(m_identifierHasBeenSet)
  {
   payload.WithString("identifier", m_identifier);

  }

  if(m_stateTemplateUpdateStrategyHasBeenSet)
  {
   payload.WithObject("stateTemplateUpdateStrategy", m_stateTemplateUpdateStrategy.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
