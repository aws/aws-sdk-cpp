/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/Component.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GreengrassV2
{
namespace Model
{

Component::Component() : 
    m_arnHasBeenSet(false),
    m_componentNameHasBeenSet(false),
    m_latestVersionHasBeenSet(false)
{
}

Component::Component(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_componentNameHasBeenSet(false),
    m_latestVersionHasBeenSet(false)
{
  *this = jsonValue;
}

Component& Component::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("componentName"))
  {
    m_componentName = jsonValue.GetString("componentName");

    m_componentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("latestVersion"))
  {
    m_latestVersion = jsonValue.GetObject("latestVersion");

    m_latestVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue Component::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_componentNameHasBeenSet)
  {
   payload.WithString("componentName", m_componentName);

  }

  if(m_latestVersionHasBeenSet)
  {
   payload.WithObject("latestVersion", m_latestVersion.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
