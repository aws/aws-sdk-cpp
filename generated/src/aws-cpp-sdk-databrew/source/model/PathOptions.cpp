/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/PathOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GlueDataBrew
{
namespace Model
{

PathOptions::PathOptions() : 
    m_lastModifiedDateConditionHasBeenSet(false),
    m_filesLimitHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
}

PathOptions::PathOptions(JsonView jsonValue) : 
    m_lastModifiedDateConditionHasBeenSet(false),
    m_filesLimitHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
  *this = jsonValue;
}

PathOptions& PathOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LastModifiedDateCondition"))
  {
    m_lastModifiedDateCondition = jsonValue.GetObject("LastModifiedDateCondition");

    m_lastModifiedDateConditionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FilesLimit"))
  {
    m_filesLimit = jsonValue.GetObject("FilesLimit");

    m_filesLimitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Parameters"))
  {
    Aws::Map<Aws::String, JsonView> parametersJsonMap = jsonValue.GetObject("Parameters").GetAllObjects();
    for(auto& parametersItem : parametersJsonMap)
    {
      m_parameters[parametersItem.first] = parametersItem.second.AsObject();
    }
    m_parametersHasBeenSet = true;
  }

  return *this;
}

JsonValue PathOptions::Jsonize() const
{
  JsonValue payload;

  if(m_lastModifiedDateConditionHasBeenSet)
  {
   payload.WithObject("LastModifiedDateCondition", m_lastModifiedDateCondition.Jsonize());

  }

  if(m_filesLimitHasBeenSet)
  {
   payload.WithObject("FilesLimit", m_filesLimit.Jsonize());

  }

  if(m_parametersHasBeenSet)
  {
   JsonValue parametersJsonMap;
   for(auto& parametersItem : m_parameters)
   {
     parametersJsonMap.WithObject(parametersItem.first, parametersItem.second.Jsonize());
   }
   payload.WithObject("Parameters", std::move(parametersJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
