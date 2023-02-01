/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/Resource.h>
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

Resource::Resource() : 
    m_portalHasBeenSet(false),
    m_projectHasBeenSet(false)
{
}

Resource::Resource(JsonView jsonValue) : 
    m_portalHasBeenSet(false),
    m_projectHasBeenSet(false)
{
  *this = jsonValue;
}

Resource& Resource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("portal"))
  {
    m_portal = jsonValue.GetObject("portal");

    m_portalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("project"))
  {
    m_project = jsonValue.GetObject("project");

    m_projectHasBeenSet = true;
  }

  return *this;
}

JsonValue Resource::Jsonize() const
{
  JsonValue payload;

  if(m_portalHasBeenSet)
  {
   payload.WithObject("portal", m_portal.Jsonize());

  }

  if(m_projectHasBeenSet)
  {
   payload.WithObject("project", m_project.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
