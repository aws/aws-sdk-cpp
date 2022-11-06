/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/RouteAnalysisPath.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

RouteAnalysisPath::RouteAnalysisPath() : 
    m_completionStatusHasBeenSet(false),
    m_pathHasBeenSet(false)
{
}

RouteAnalysisPath::RouteAnalysisPath(JsonView jsonValue) : 
    m_completionStatusHasBeenSet(false),
    m_pathHasBeenSet(false)
{
  *this = jsonValue;
}

RouteAnalysisPath& RouteAnalysisPath::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CompletionStatus"))
  {
    m_completionStatus = jsonValue.GetObject("CompletionStatus");

    m_completionStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Path"))
  {
    Aws::Utils::Array<JsonView> pathJsonList = jsonValue.GetArray("Path");
    for(unsigned pathIndex = 0; pathIndex < pathJsonList.GetLength(); ++pathIndex)
    {
      m_path.push_back(pathJsonList[pathIndex].AsObject());
    }
    m_pathHasBeenSet = true;
  }

  return *this;
}

JsonValue RouteAnalysisPath::Jsonize() const
{
  JsonValue payload;

  if(m_completionStatusHasBeenSet)
  {
   payload.WithObject("CompletionStatus", m_completionStatus.Jsonize());

  }

  if(m_pathHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> pathJsonList(m_path.size());
   for(unsigned pathIndex = 0; pathIndex < pathJsonList.GetLength(); ++pathIndex)
   {
     pathJsonList[pathIndex].AsObject(m_path[pathIndex].Jsonize());
   }
   payload.WithArray("Path", std::move(pathJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
