/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/PolicyDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

PolicyDetails::PolicyDetails() : 
    m_actionHasBeenSet(false),
    m_actorHasBeenSet(false)
{
}

PolicyDetails::PolicyDetails(JsonView jsonValue) : 
    m_actionHasBeenSet(false),
    m_actorHasBeenSet(false)
{
  *this = jsonValue;
}

PolicyDetails& PolicyDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("action"))
  {
    m_action = jsonValue.GetObject("action");

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("actor"))
  {
    m_actor = jsonValue.GetObject("actor");

    m_actorHasBeenSet = true;
  }

  return *this;
}

JsonValue PolicyDetails::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithObject("action", m_action.Jsonize());

  }

  if(m_actorHasBeenSet)
  {
   payload.WithObject("actor", m_actor.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
