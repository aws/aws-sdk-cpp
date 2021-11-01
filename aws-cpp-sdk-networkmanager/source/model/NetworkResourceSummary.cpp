/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/NetworkResourceSummary.h>
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

NetworkResourceSummary::NetworkResourceSummary() : 
    m_registeredGatewayArnHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_definitionHasBeenSet(false),
    m_nameTagHasBeenSet(false),
    m_isMiddlebox(false),
    m_isMiddleboxHasBeenSet(false)
{
}

NetworkResourceSummary::NetworkResourceSummary(JsonView jsonValue) : 
    m_registeredGatewayArnHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_definitionHasBeenSet(false),
    m_nameTagHasBeenSet(false),
    m_isMiddlebox(false),
    m_isMiddleboxHasBeenSet(false)
{
  *this = jsonValue;
}

NetworkResourceSummary& NetworkResourceSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RegisteredGatewayArn"))
  {
    m_registeredGatewayArn = jsonValue.GetString("RegisteredGatewayArn");

    m_registeredGatewayArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceArn"))
  {
    m_resourceArn = jsonValue.GetString("ResourceArn");

    m_resourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = jsonValue.GetString("ResourceType");

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Definition"))
  {
    m_definition = jsonValue.GetString("Definition");

    m_definitionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NameTag"))
  {
    m_nameTag = jsonValue.GetString("NameTag");

    m_nameTagHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IsMiddlebox"))
  {
    m_isMiddlebox = jsonValue.GetBool("IsMiddlebox");

    m_isMiddleboxHasBeenSet = true;
  }

  return *this;
}

JsonValue NetworkResourceSummary::Jsonize() const
{
  JsonValue payload;

  if(m_registeredGatewayArnHasBeenSet)
  {
   payload.WithString("RegisteredGatewayArn", m_registeredGatewayArn);

  }

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", m_resourceType);

  }

  if(m_definitionHasBeenSet)
  {
   payload.WithString("Definition", m_definition);

  }

  if(m_nameTagHasBeenSet)
  {
   payload.WithString("NameTag", m_nameTag);

  }

  if(m_isMiddleboxHasBeenSet)
  {
   payload.WithBool("IsMiddlebox", m_isMiddlebox);

  }

  return payload;
}

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
