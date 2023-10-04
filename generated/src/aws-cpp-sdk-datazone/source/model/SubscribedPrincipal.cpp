/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/SubscribedPrincipal.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

SubscribedPrincipal::SubscribedPrincipal() : 
    m_projectHasBeenSet(false)
{
}

SubscribedPrincipal::SubscribedPrincipal(JsonView jsonValue) : 
    m_projectHasBeenSet(false)
{
  *this = jsonValue;
}

SubscribedPrincipal& SubscribedPrincipal::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("project"))
  {
    m_project = jsonValue.GetObject("project");

    m_projectHasBeenSet = true;
  }

  return *this;
}

JsonValue SubscribedPrincipal::Jsonize() const
{
  JsonValue payload;

  if(m_projectHasBeenSet)
  {
   payload.WithObject("project", m_project.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
