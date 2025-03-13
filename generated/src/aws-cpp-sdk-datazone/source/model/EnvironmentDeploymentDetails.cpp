/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/EnvironmentDeploymentDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

EnvironmentDeploymentDetails::EnvironmentDeploymentDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

EnvironmentDeploymentDetails& EnvironmentDeploymentDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("environmentFailureReasons"))
  {
    Aws::Map<Aws::String, JsonView> environmentFailureReasonsJsonMap = jsonValue.GetObject("environmentFailureReasons").GetAllObjects();
    for(auto& environmentFailureReasonsItem : environmentFailureReasonsJsonMap)
    {
      Aws::Utils::Array<JsonView> environmentFailureReasonsListJsonList = environmentFailureReasonsItem.second.AsArray();
      Aws::Vector<EnvironmentError> environmentFailureReasonsListList;
      environmentFailureReasonsListList.reserve((size_t)environmentFailureReasonsListJsonList.GetLength());
      for(unsigned environmentFailureReasonsListIndex = 0; environmentFailureReasonsListIndex < environmentFailureReasonsListJsonList.GetLength(); ++environmentFailureReasonsListIndex)
      {
        environmentFailureReasonsListList.push_back(environmentFailureReasonsListJsonList[environmentFailureReasonsListIndex].AsObject());
      }
      m_environmentFailureReasons[environmentFailureReasonsItem.first] = std::move(environmentFailureReasonsListList);
    }
    m_environmentFailureReasonsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("overallDeploymentStatus"))
  {
    m_overallDeploymentStatus = OverallDeploymentStatusMapper::GetOverallDeploymentStatusForName(jsonValue.GetString("overallDeploymentStatus"));
    m_overallDeploymentStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue EnvironmentDeploymentDetails::Jsonize() const
{
  JsonValue payload;

  if(m_environmentFailureReasonsHasBeenSet)
  {
   JsonValue environmentFailureReasonsJsonMap;
   for(auto& environmentFailureReasonsItem : m_environmentFailureReasons)
   {
     Aws::Utils::Array<JsonValue> environmentFailureReasonsListJsonList(environmentFailureReasonsItem.second.size());
     for(unsigned environmentFailureReasonsListIndex = 0; environmentFailureReasonsListIndex < environmentFailureReasonsListJsonList.GetLength(); ++environmentFailureReasonsListIndex)
     {
       environmentFailureReasonsListJsonList[environmentFailureReasonsListIndex].AsObject(environmentFailureReasonsItem.second[environmentFailureReasonsListIndex].Jsonize());
     }
     environmentFailureReasonsJsonMap.WithArray(environmentFailureReasonsItem.first, std::move(environmentFailureReasonsListJsonList));
   }
   payload.WithObject("environmentFailureReasons", std::move(environmentFailureReasonsJsonMap));

  }

  if(m_overallDeploymentStatusHasBeenSet)
  {
   payload.WithString("overallDeploymentStatus", OverallDeploymentStatusMapper::GetNameForOverallDeploymentStatus(m_overallDeploymentStatus));
  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
