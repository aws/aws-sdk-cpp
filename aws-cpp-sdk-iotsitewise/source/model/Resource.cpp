/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
