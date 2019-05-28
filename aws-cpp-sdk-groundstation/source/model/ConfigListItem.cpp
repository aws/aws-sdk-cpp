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

#include <aws/groundstation/model/ConfigListItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GroundStation
{
namespace Model
{

ConfigListItem::ConfigListItem() : 
    m_configArnHasBeenSet(false),
    m_configIdHasBeenSet(false),
    m_configType(ConfigCapabilityType::NOT_SET),
    m_configTypeHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

ConfigListItem::ConfigListItem(JsonView jsonValue) : 
    m_configArnHasBeenSet(false),
    m_configIdHasBeenSet(false),
    m_configType(ConfigCapabilityType::NOT_SET),
    m_configTypeHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

ConfigListItem& ConfigListItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("configArn"))
  {
    m_configArn = jsonValue.GetString("configArn");

    m_configArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("configId"))
  {
    m_configId = jsonValue.GetString("configId");

    m_configIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("configType"))
  {
    m_configType = ConfigCapabilityTypeMapper::GetConfigCapabilityTypeForName(jsonValue.GetString("configType"));

    m_configTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue ConfigListItem::Jsonize() const
{
  JsonValue payload;

  if(m_configArnHasBeenSet)
  {
   payload.WithString("configArn", m_configArn);

  }

  if(m_configIdHasBeenSet)
  {
   payload.WithString("configId", m_configId);

  }

  if(m_configTypeHasBeenSet)
  {
   payload.WithString("configType", ConfigCapabilityTypeMapper::GetNameForConfigCapabilityType(m_configType));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace GroundStation
} // namespace Aws
