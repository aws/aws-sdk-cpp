/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

ParameterGroupStatus::ParameterGroupStatus(JsonView jsonValue) : 
    m_parameterGroupNameHasBeenSet(false),
    m_parameterApplyStatusHasBeenSet(false),
    m_nodeIdsToRebootHasBeenSet(false)
{
  *this = jsonValue;
}

ParameterGroupStatus& ParameterGroupStatus::operator =(JsonView jsonValue)
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
    Aws::Utils::Array<JsonView> nodeIdsToRebootJsonList = jsonValue.GetArray("NodeIdsToReboot");
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
   Aws::Utils::Array<JsonValue> nodeIdsToRebootJsonList(m_nodeIdsToReboot.size());
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
