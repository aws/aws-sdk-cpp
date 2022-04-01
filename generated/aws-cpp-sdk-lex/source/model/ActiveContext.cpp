/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex/model/ActiveContext.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexRuntimeService
{
namespace Model
{

ActiveContext::ActiveContext() : 
    m_nameHasBeenSet(false),
    m_timeToLiveHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
}

ActiveContext::ActiveContext(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_timeToLiveHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
  *this = jsonValue;
}

ActiveContext& ActiveContext::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timeToLive"))
  {
    m_timeToLive = jsonValue.GetObject("timeToLive");

    m_timeToLiveHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parameters"))
  {
    Aws::Map<Aws::String, JsonView> parametersJsonMap = jsonValue.GetObject("parameters").GetAllObjects();
    for(auto& parametersItem : parametersJsonMap)
    {
      m_parameters[parametersItem.first] = parametersItem.second.AsString();
    }
    m_parametersHasBeenSet = true;
  }

  return *this;
}

JsonValue ActiveContext::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_timeToLiveHasBeenSet)
  {
   payload.WithObject("timeToLive", m_timeToLive.Jsonize());

  }

  if(m_parametersHasBeenSet)
  {
   JsonValue parametersJsonMap;
   for(auto& parametersItem : m_parameters)
   {
     parametersJsonMap.WithString(parametersItem.first, parametersItem.second);
   }
   payload.WithObject("parameters", std::move(parametersJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace LexRuntimeService
} // namespace Aws
