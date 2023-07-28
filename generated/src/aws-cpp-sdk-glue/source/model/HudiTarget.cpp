/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/HudiTarget.h>
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

HudiTarget::HudiTarget() : 
    m_pathsHasBeenSet(false),
    m_connectionNameHasBeenSet(false),
    m_exclusionsHasBeenSet(false),
    m_maximumTraversalDepth(0),
    m_maximumTraversalDepthHasBeenSet(false)
{
}

HudiTarget::HudiTarget(JsonView jsonValue) : 
    m_pathsHasBeenSet(false),
    m_connectionNameHasBeenSet(false),
    m_exclusionsHasBeenSet(false),
    m_maximumTraversalDepth(0),
    m_maximumTraversalDepthHasBeenSet(false)
{
  *this = jsonValue;
}

HudiTarget& HudiTarget::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Paths"))
  {
    Aws::Utils::Array<JsonView> pathsJsonList = jsonValue.GetArray("Paths");
    for(unsigned pathsIndex = 0; pathsIndex < pathsJsonList.GetLength(); ++pathsIndex)
    {
      m_paths.push_back(pathsJsonList[pathsIndex].AsString());
    }
    m_pathsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectionName"))
  {
    m_connectionName = jsonValue.GetString("ConnectionName");

    m_connectionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Exclusions"))
  {
    Aws::Utils::Array<JsonView> exclusionsJsonList = jsonValue.GetArray("Exclusions");
    for(unsigned exclusionsIndex = 0; exclusionsIndex < exclusionsJsonList.GetLength(); ++exclusionsIndex)
    {
      m_exclusions.push_back(exclusionsJsonList[exclusionsIndex].AsString());
    }
    m_exclusionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaximumTraversalDepth"))
  {
    m_maximumTraversalDepth = jsonValue.GetInteger("MaximumTraversalDepth");

    m_maximumTraversalDepthHasBeenSet = true;
  }

  return *this;
}

JsonValue HudiTarget::Jsonize() const
{
  JsonValue payload;

  if(m_pathsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> pathsJsonList(m_paths.size());
   for(unsigned pathsIndex = 0; pathsIndex < pathsJsonList.GetLength(); ++pathsIndex)
   {
     pathsJsonList[pathsIndex].AsString(m_paths[pathsIndex]);
   }
   payload.WithArray("Paths", std::move(pathsJsonList));

  }

  if(m_connectionNameHasBeenSet)
  {
   payload.WithString("ConnectionName", m_connectionName);

  }

  if(m_exclusionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> exclusionsJsonList(m_exclusions.size());
   for(unsigned exclusionsIndex = 0; exclusionsIndex < exclusionsJsonList.GetLength(); ++exclusionsIndex)
   {
     exclusionsJsonList[exclusionsIndex].AsString(m_exclusions[exclusionsIndex]);
   }
   payload.WithArray("Exclusions", std::move(exclusionsJsonList));

  }

  if(m_maximumTraversalDepthHasBeenSet)
  {
   payload.WithInteger("MaximumTraversalDepth", m_maximumTraversalDepth);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
