﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/ActionSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

ActionSummary::ActionSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ActionSummary& ActionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("actionId"))
  {
    m_actionId = jsonValue.GetString("actionId");
    m_actionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("actionDefinitionId"))
  {
    m_actionDefinitionId = jsonValue.GetString("actionDefinitionId");
    m_actionDefinitionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("targetResource"))
  {
    m_targetResource = jsonValue.GetObject("targetResource");
    m_targetResourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resolveTo"))
  {
    m_resolveTo = jsonValue.GetObject("resolveTo");
    m_resolveToHasBeenSet = true;
  }
  return *this;
}

JsonValue ActionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_actionIdHasBeenSet)
  {
   payload.WithString("actionId", m_actionId);

  }

  if(m_actionDefinitionIdHasBeenSet)
  {
   payload.WithString("actionDefinitionId", m_actionDefinitionId);

  }

  if(m_targetResourceHasBeenSet)
  {
   payload.WithObject("targetResource", m_targetResource.Jsonize());

  }

  if(m_resolveToHasBeenSet)
  {
   payload.WithObject("resolveTo", m_resolveTo.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
