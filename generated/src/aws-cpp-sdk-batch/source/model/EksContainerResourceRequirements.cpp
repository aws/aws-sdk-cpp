/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/EksContainerResourceRequirements.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Batch
{
namespace Model
{

EksContainerResourceRequirements::EksContainerResourceRequirements() : 
    m_limitsHasBeenSet(false),
    m_requestsHasBeenSet(false)
{
}

EksContainerResourceRequirements::EksContainerResourceRequirements(JsonView jsonValue) : 
    m_limitsHasBeenSet(false),
    m_requestsHasBeenSet(false)
{
  *this = jsonValue;
}

EksContainerResourceRequirements& EksContainerResourceRequirements::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("limits"))
  {
    Aws::Map<Aws::String, JsonView> limitsJsonMap = jsonValue.GetObject("limits").GetAllObjects();
    for(auto& limitsItem : limitsJsonMap)
    {
      m_limits[limitsItem.first] = limitsItem.second.AsString();
    }
    m_limitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("requests"))
  {
    Aws::Map<Aws::String, JsonView> requestsJsonMap = jsonValue.GetObject("requests").GetAllObjects();
    for(auto& requestsItem : requestsJsonMap)
    {
      m_requests[requestsItem.first] = requestsItem.second.AsString();
    }
    m_requestsHasBeenSet = true;
  }

  return *this;
}

JsonValue EksContainerResourceRequirements::Jsonize() const
{
  JsonValue payload;

  if(m_limitsHasBeenSet)
  {
   JsonValue limitsJsonMap;
   for(auto& limitsItem : m_limits)
   {
     limitsJsonMap.WithString(limitsItem.first, limitsItem.second);
   }
   payload.WithObject("limits", std::move(limitsJsonMap));

  }

  if(m_requestsHasBeenSet)
  {
   JsonValue requestsJsonMap;
   for(auto& requestsItem : m_requests)
   {
     requestsJsonMap.WithString(requestsItem.first, requestsItem.second);
   }
   payload.WithObject("requests", std::move(requestsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
