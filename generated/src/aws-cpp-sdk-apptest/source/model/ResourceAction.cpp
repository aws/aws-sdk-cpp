/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/ResourceAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppTest
{
namespace Model
{

ResourceAction::ResourceAction(JsonView jsonValue)
{
  *this = jsonValue;
}

ResourceAction& ResourceAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("m2ManagedApplicationAction"))
  {
    m_m2ManagedApplicationAction = jsonValue.GetObject("m2ManagedApplicationAction");
    m_m2ManagedApplicationActionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("m2NonManagedApplicationAction"))
  {
    m_m2NonManagedApplicationAction = jsonValue.GetObject("m2NonManagedApplicationAction");
    m_m2NonManagedApplicationActionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("cloudFormationAction"))
  {
    m_cloudFormationAction = jsonValue.GetObject("cloudFormationAction");
    m_cloudFormationActionHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourceAction::Jsonize() const
{
  JsonValue payload;

  if(m_m2ManagedApplicationActionHasBeenSet)
  {
   payload.WithObject("m2ManagedApplicationAction", m_m2ManagedApplicationAction.Jsonize());

  }

  if(m_m2NonManagedApplicationActionHasBeenSet)
  {
   payload.WithObject("m2NonManagedApplicationAction", m_m2NonManagedApplicationAction.Jsonize());

  }

  if(m_cloudFormationActionHasBeenSet)
  {
   payload.WithObject("cloudFormationAction", m_cloudFormationAction.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppTest
} // namespace Aws
