/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/Location.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

Location::Location() : 
    m_pathHasBeenSet(false),
    m_spanHasBeenSet(false)
{
}

Location::Location(JsonView jsonValue) : 
    m_pathHasBeenSet(false),
    m_spanHasBeenSet(false)
{
  *this = jsonValue;
}

Location& Location::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("path"))
  {
    Aws::Utils::Array<JsonView> pathJsonList = jsonValue.GetArray("path");
    for(unsigned pathIndex = 0; pathIndex < pathJsonList.GetLength(); ++pathIndex)
    {
      m_path.push_back(pathJsonList[pathIndex].AsObject());
    }
    m_pathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("span"))
  {
    m_span = jsonValue.GetObject("span");

    m_spanHasBeenSet = true;
  }

  return *this;
}

JsonValue Location::Jsonize() const
{
  JsonValue payload;

  if(m_pathHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> pathJsonList(m_path.size());
   for(unsigned pathIndex = 0; pathIndex < pathJsonList.GetLength(); ++pathIndex)
   {
     pathJsonList[pathIndex].AsObject(m_path[pathIndex].Jsonize());
   }
   payload.WithArray("path", std::move(pathJsonList));

  }

  if(m_spanHasBeenSet)
  {
   payload.WithObject("span", m_span.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
