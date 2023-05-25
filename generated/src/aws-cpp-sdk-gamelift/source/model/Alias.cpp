/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/Alias.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GameLift
{
namespace Model
{

Alias::Alias() : 
    m_aliasIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_aliasArnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_routingStrategyHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false)
{
}

Alias::Alias(JsonView jsonValue) : 
    m_aliasIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_aliasArnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_routingStrategyHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false)
{
  *this = jsonValue;
}

Alias& Alias::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AliasId"))
  {
    m_aliasId = jsonValue.GetString("AliasId");

    m_aliasIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AliasArn"))
  {
    m_aliasArn = jsonValue.GetString("AliasArn");

    m_aliasArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoutingStrategy"))
  {
    m_routingStrategy = jsonValue.GetObject("RoutingStrategy");

    m_routingStrategyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("LastUpdatedTime");

    m_lastUpdatedTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue Alias::Jsonize() const
{
  JsonValue payload;

  if(m_aliasIdHasBeenSet)
  {
   payload.WithString("AliasId", m_aliasId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_aliasArnHasBeenSet)
  {
   payload.WithString("AliasArn", m_aliasArn);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_routingStrategyHasBeenSet)
  {
   payload.WithObject("RoutingStrategy", m_routingStrategy.Jsonize());

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
