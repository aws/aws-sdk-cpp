/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/dax/model/ParameterGroupStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DAX
{
namespace Model
{

ParameterGroupStatus::ParameterGroupStatus() : 
    m_parameterGroupNameHasBeenSet(false),
    m_parameterApplyStatusHasBeenSet(false),
    m_nodeIdsToRebootHasBeenSet(false)
{
}

ParameterGroupStatus::ParameterGroupStatus(const JsonValue& jsonValue) : 
    m_parameterGroupNameHasBeenSet(false),
    m_parameterApplyStatusHasBeenSet(false),
    m_nodeIdsToRebootHasBeenSet(false)
{
  *this = jsonValue;
}

ParameterGroupStatus& ParameterGroupStatus::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ParameterGroupName"))
  {
    m_parameterGroupName = jsonValue.GetString("ParameterGroupName");

    m_parameterGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParameterApplyStatus"))
  {
    m_parameterApplyStatus = jsonValue.GetString("ParameterApplyStatus");

    m_parameterApplyStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NodeIdsToReboot"))
  {
    Array<JsonValue> nodeIdsToRebootJsonList = jsonValue.GetArray("NodeIdsToReboot");
    for(unsigned nodeIdsToRebootIndex = 0; nodeIdsToRebootIndex < nodeIdsToRebootJsonList.GetLength(); ++nodeIdsToRebootIndex)
    {
      m_nodeIdsToReboot.push_back(nodeIdsToRebootJsonList[nodeIdsToRebootIndex].AsString());
    }
    m_nodeIdsToRebootHasBeenSet = true;
  }

  return *this;
}

JsonValue ParameterGroupStatus::Jsonize() const
{
  JsonValue payload;

  if(m_parameterGroupNameHasBeenSet)
  {
   payload.WithString("ParameterGroupName", m_parameterGroupName);

  }

  if(m_parameterApplyStatusHasBeenSet)
  {
   payload.WithString("ParameterApplyStatus", m_parameterApplyStatus);

  }

  if(m_nodeIdsToRebootHasBeenSet)
  {
   Array<JsonValue> nodeIdsToRebootJsonList(m_nodeIdsToReboot.size());
   for(unsigned nodeIdsToRebootIndex = 0; nodeIdsToRebootIndex < nodeIdsToRebootJsonList.GetLength(); ++nodeIdsToRebootIndex)
   {
     nodeIdsToRebootJsonList[nodeIdsToRebootIndex].AsString(m_nodeIdsToReboot[nodeIdsToRebootIndex]);
   }
   payload.WithArray("NodeIdsToReboot", std::move(nodeIdsToRebootJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DAX
} // namespace Aws
