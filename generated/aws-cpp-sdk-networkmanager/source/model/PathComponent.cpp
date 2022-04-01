/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/PathComponent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

PathComponent::PathComponent() : 
    m_sequence(0),
    m_sequenceHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_destinationCidrBlockHasBeenSet(false)
{
}

PathComponent::PathComponent(JsonView jsonValue) : 
    m_sequence(0),
    m_sequenceHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_destinationCidrBlockHasBeenSet(false)
{
  *this = jsonValue;
}

PathComponent& PathComponent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Sequence"))
  {
    m_sequence = jsonValue.GetInteger("Sequence");

    m_sequenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Resource"))
  {
    m_resource = jsonValue.GetObject("Resource");

    m_resourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DestinationCidrBlock"))
  {
    m_destinationCidrBlock = jsonValue.GetString("DestinationCidrBlock");

    m_destinationCidrBlockHasBeenSet = true;
  }

  return *this;
}

JsonValue PathComponent::Jsonize() const
{
  JsonValue payload;

  if(m_sequenceHasBeenSet)
  {
   payload.WithInteger("Sequence", m_sequence);

  }

  if(m_resourceHasBeenSet)
  {
   payload.WithObject("Resource", m_resource.Jsonize());

  }

  if(m_destinationCidrBlockHasBeenSet)
  {
   payload.WithString("DestinationCidrBlock", m_destinationCidrBlock);

  }

  return payload;
}

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
