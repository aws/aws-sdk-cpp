/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/SubscribedPrincipalInput.h>
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

SubscribedPrincipalInput::SubscribedPrincipalInput() : 
    m_projectHasBeenSet(false)
{
}

SubscribedPrincipalInput::SubscribedPrincipalInput(JsonView jsonValue) : 
    m_projectHasBeenSet(false)
{
  *this = jsonValue;
}

SubscribedPrincipalInput& SubscribedPrincipalInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("project"))
  {
    m_project = jsonValue.GetObject("project");

    m_projectHasBeenSet = true;
  }

  return *this;
}

JsonValue SubscribedPrincipalInput::Jsonize() const
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
