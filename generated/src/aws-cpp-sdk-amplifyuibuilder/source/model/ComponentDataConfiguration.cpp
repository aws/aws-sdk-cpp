/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/ComponentDataConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AmplifyUIBuilder
{
namespace Model
{

ComponentDataConfiguration::ComponentDataConfiguration() : 
    m_identifiersHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_predicateHasBeenSet(false),
    m_sortHasBeenSet(false)
{
}

ComponentDataConfiguration::ComponentDataConfiguration(JsonView jsonValue) : 
    m_identifiersHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_predicateHasBeenSet(false),
    m_sortHasBeenSet(false)
{
  *this = jsonValue;
}

ComponentDataConfiguration& ComponentDataConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("identifiers"))
  {
    Aws::Utils::Array<JsonView> identifiersJsonList = jsonValue.GetArray("identifiers");
    for(unsigned identifiersIndex = 0; identifiersIndex < identifiersJsonList.GetLength(); ++identifiersIndex)
    {
      m_identifiers.push_back(identifiersJsonList[identifiersIndex].AsString());
    }
    m_identifiersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("model"))
  {
    m_model = jsonValue.GetString("model");

    m_modelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("predicate"))
  {
    m_predicate = jsonValue.GetObject("predicate");

    m_predicateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sort"))
  {
    Aws::Utils::Array<JsonView> sortJsonList = jsonValue.GetArray("sort");
    for(unsigned sortIndex = 0; sortIndex < sortJsonList.GetLength(); ++sortIndex)
    {
      m_sort.push_back(sortJsonList[sortIndex].AsObject());
    }
    m_sortHasBeenSet = true;
  }

  return *this;
}

JsonValue ComponentDataConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_identifiersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> identifiersJsonList(m_identifiers.size());
   for(unsigned identifiersIndex = 0; identifiersIndex < identifiersJsonList.GetLength(); ++identifiersIndex)
   {
     identifiersJsonList[identifiersIndex].AsString(m_identifiers[identifiersIndex]);
   }
   payload.WithArray("identifiers", std::move(identifiersJsonList));

  }

  if(m_modelHasBeenSet)
  {
   payload.WithString("model", m_model);

  }

  if(m_predicateHasBeenSet)
  {
   payload.WithObject("predicate", m_predicate.Jsonize());

  }

  if(m_sortHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sortJsonList(m_sort.size());
   for(unsigned sortIndex = 0; sortIndex < sortJsonList.GetLength(); ++sortIndex)
   {
     sortJsonList[sortIndex].AsObject(m_sort[sortIndex].Jsonize());
   }
   payload.WithArray("sort", std::move(sortJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
