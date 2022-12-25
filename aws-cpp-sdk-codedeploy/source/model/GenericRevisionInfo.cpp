/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/GenericRevisionInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

GenericRevisionInfo::GenericRevisionInfo() : 
    m_descriptionHasBeenSet(false),
    m_deploymentGroupsHasBeenSet(false),
    m_firstUsedTimeHasBeenSet(false),
    m_lastUsedTimeHasBeenSet(false),
    m_registerTimeHasBeenSet(false)
{
}

GenericRevisionInfo::GenericRevisionInfo(JsonView jsonValue) : 
    m_descriptionHasBeenSet(false),
    m_deploymentGroupsHasBeenSet(false),
    m_firstUsedTimeHasBeenSet(false),
    m_lastUsedTimeHasBeenSet(false),
    m_registerTimeHasBeenSet(false)
{
  *this = jsonValue;
}

GenericRevisionInfo& GenericRevisionInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deploymentGroups"))
  {
    Aws::Utils::Array<JsonView> deploymentGroupsJsonList = jsonValue.GetArray("deploymentGroups");
    for(unsigned deploymentGroupsIndex = 0; deploymentGroupsIndex < deploymentGroupsJsonList.GetLength(); ++deploymentGroupsIndex)
    {
      m_deploymentGroups.push_back(deploymentGroupsJsonList[deploymentGroupsIndex].AsString());
    }
    m_deploymentGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("firstUsedTime"))
  {
    m_firstUsedTime = jsonValue.GetDouble("firstUsedTime");

    m_firstUsedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUsedTime"))
  {
    m_lastUsedTime = jsonValue.GetDouble("lastUsedTime");

    m_lastUsedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("registerTime"))
  {
    m_registerTime = jsonValue.GetDouble("registerTime");

    m_registerTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue GenericRevisionInfo::Jsonize() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_deploymentGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> deploymentGroupsJsonList(m_deploymentGroups.size());
   for(unsigned deploymentGroupsIndex = 0; deploymentGroupsIndex < deploymentGroupsJsonList.GetLength(); ++deploymentGroupsIndex)
   {
     deploymentGroupsJsonList[deploymentGroupsIndex].AsString(m_deploymentGroups[deploymentGroupsIndex]);
   }
   payload.WithArray("deploymentGroups", std::move(deploymentGroupsJsonList));

  }

  if(m_firstUsedTimeHasBeenSet)
  {
   payload.WithDouble("firstUsedTime", m_firstUsedTime.SecondsWithMSPrecision());
  }

  if(m_lastUsedTimeHasBeenSet)
  {
   payload.WithDouble("lastUsedTime", m_lastUsedTime.SecondsWithMSPrecision());
  }

  if(m_registerTimeHasBeenSet)
  {
   payload.WithDouble("registerTime", m_registerTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
