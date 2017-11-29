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

#include <aws/greengrass/model/Resource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Greengrass
{
namespace Model
{

Resource::Resource() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_resourceDataContainerHasBeenSet(false)
{
}

Resource::Resource(const JsonValue& jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_resourceDataContainerHasBeenSet(false)
{
  *this = jsonValue;
}

Resource& Resource::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceDataContainer"))
  {
    m_resourceDataContainer = jsonValue.GetObject("ResourceDataContainer");

    m_resourceDataContainerHasBeenSet = true;
  }

  return *this;
}

JsonValue Resource::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_resourceDataContainerHasBeenSet)
  {
   payload.WithObject("ResourceDataContainer", m_resourceDataContainer.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Greengrass
} // namespace Aws
