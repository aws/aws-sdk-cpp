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

#include <aws/lightsail/model/DomainEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

DomainEntry::DomainEntry() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_optionsHasBeenSet(false)
{
}

DomainEntry::DomainEntry(const JsonValue& jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_optionsHasBeenSet(false)
{
  *this = jsonValue;
}

DomainEntry& DomainEntry::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("target"))
  {
    m_target = jsonValue.GetString("target");

    m_targetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetString("type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("options"))
  {
    Aws::Map<Aws::String, JsonValue> optionsJsonMap = jsonValue.GetObject("options").GetAllObjects();
    for(auto& optionsItem : optionsJsonMap)
    {
      m_options[optionsItem.first] = optionsItem.second.AsString();
    }
    m_optionsHasBeenSet = true;
  }

  return *this;
}

JsonValue DomainEntry::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_targetHasBeenSet)
  {
   payload.WithString("target", m_target);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", m_type);

  }

  if(m_optionsHasBeenSet)
  {
   JsonValue optionsJsonMap;
   for(auto& optionsItem : m_options)
   {
     optionsJsonMap.WithString(optionsItem.first, optionsItem.second);
   }
   payload.WithObject("options", std::move(optionsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws