/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/Route.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FMS
{
namespace Model
{

Route::Route() : 
    m_destinationType(DestinationType::NOT_SET),
    m_destinationTypeHasBeenSet(false),
    m_targetType(TargetType::NOT_SET),
    m_targetTypeHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_targetHasBeenSet(false)
{
}

Route::Route(JsonView jsonValue) : 
    m_destinationType(DestinationType::NOT_SET),
    m_destinationTypeHasBeenSet(false),
    m_targetType(TargetType::NOT_SET),
    m_targetTypeHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_targetHasBeenSet(false)
{
  *this = jsonValue;
}

Route& Route::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DestinationType"))
  {
    m_destinationType = DestinationTypeMapper::GetDestinationTypeForName(jsonValue.GetString("DestinationType"));

    m_destinationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetType"))
  {
    m_targetType = TargetTypeMapper::GetTargetTypeForName(jsonValue.GetString("TargetType"));

    m_targetTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Destination"))
  {
    m_destination = jsonValue.GetString("Destination");

    m_destinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Target"))
  {
    m_target = jsonValue.GetString("Target");

    m_targetHasBeenSet = true;
  }

  return *this;
}

JsonValue Route::Jsonize() const
{
  JsonValue payload;

  if(m_destinationTypeHasBeenSet)
  {
   payload.WithString("DestinationType", DestinationTypeMapper::GetNameForDestinationType(m_destinationType));
  }

  if(m_targetTypeHasBeenSet)
  {
   payload.WithString("TargetType", TargetTypeMapper::GetNameForTargetType(m_targetType));
  }

  if(m_destinationHasBeenSet)
  {
   payload.WithString("Destination", m_destination);

  }

  if(m_targetHasBeenSet)
  {
   payload.WithString("Target", m_target);

  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
