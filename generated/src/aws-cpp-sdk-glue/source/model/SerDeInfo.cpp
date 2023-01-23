/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/SerDeInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

SerDeInfo::SerDeInfo() : 
    m_nameHasBeenSet(false),
    m_serializationLibraryHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
}

SerDeInfo::SerDeInfo(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_serializationLibraryHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
  *this = jsonValue;
}

SerDeInfo& SerDeInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SerializationLibrary"))
  {
    m_serializationLibrary = jsonValue.GetString("SerializationLibrary");

    m_serializationLibraryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Parameters"))
  {
    Aws::Map<Aws::String, JsonView> parametersJsonMap = jsonValue.GetObject("Parameters").GetAllObjects();
    for(auto& parametersItem : parametersJsonMap)
    {
      m_parameters[parametersItem.first] = parametersItem.second.AsString();
    }
    m_parametersHasBeenSet = true;
  }

  return *this;
}

JsonValue SerDeInfo::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_serializationLibraryHasBeenSet)
  {
   payload.WithString("SerializationLibrary", m_serializationLibrary);

  }

  if(m_parametersHasBeenSet)
  {
   JsonValue parametersJsonMap;
   for(auto& parametersItem : m_parameters)
   {
     parametersJsonMap.WithString(parametersItem.first, parametersItem.second);
   }
   payload.WithObject("Parameters", std::move(parametersJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
