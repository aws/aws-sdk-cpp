/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/ComponentDeploymentSpecification.h>
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

ComponentDeploymentSpecification::ComponentDeploymentSpecification() : 
    m_componentVersionHasBeenSet(false),
    m_configurationUpdateHasBeenSet(false),
    m_runWithHasBeenSet(false)
{
}

ComponentDeploymentSpecification::ComponentDeploymentSpecification(JsonView jsonValue) : 
    m_componentVersionHasBeenSet(false),
    m_configurationUpdateHasBeenSet(false),
    m_runWithHasBeenSet(false)
{
  *this = jsonValue;
}

ComponentDeploymentSpecification& ComponentDeploymentSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("componentVersion"))
  {
    m_componentVersion = jsonValue.GetString("componentVersion");

    m_componentVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("configurationUpdate"))
  {
    m_configurationUpdate = jsonValue.GetObject("configurationUpdate");

    m_configurationUpdateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("runWith"))
  {
    m_runWith = jsonValue.GetObject("runWith");

    m_runWithHasBeenSet = true;
  }

  return *this;
}

JsonValue ComponentDeploymentSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_componentVersionHasBeenSet)
  {
   payload.WithString("componentVersion", m_componentVersion);

  }

  if(m_configurationUpdateHasBeenSet)
  {
   payload.WithObject("configurationUpdate", m_configurationUpdate.Jsonize());

  }

  if(m_runWithHasBeenSet)
  {
   payload.WithObject("runWith", m_runWith.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
