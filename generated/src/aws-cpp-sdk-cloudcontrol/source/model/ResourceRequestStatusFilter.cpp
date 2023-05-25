/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudcontrol/model/ResourceRequestStatusFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudControlApi
{
namespace Model
{

ResourceRequestStatusFilter::ResourceRequestStatusFilter() : 
    m_operationsHasBeenSet(false),
    m_operationStatusesHasBeenSet(false)
{
}

ResourceRequestStatusFilter::ResourceRequestStatusFilter(JsonView jsonValue) : 
    m_operationsHasBeenSet(false),
    m_operationStatusesHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceRequestStatusFilter& ResourceRequestStatusFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Operations"))
  {
    Aws::Utils::Array<JsonView> operationsJsonList = jsonValue.GetArray("Operations");
    for(unsigned operationsIndex = 0; operationsIndex < operationsJsonList.GetLength(); ++operationsIndex)
    {
      m_operations.push_back(OperationMapper::GetOperationForName(operationsJsonList[operationsIndex].AsString()));
    }
    m_operationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OperationStatuses"))
  {
    Aws::Utils::Array<JsonView> operationStatusesJsonList = jsonValue.GetArray("OperationStatuses");
    for(unsigned operationStatusesIndex = 0; operationStatusesIndex < operationStatusesJsonList.GetLength(); ++operationStatusesIndex)
    {
      m_operationStatuses.push_back(OperationStatusMapper::GetOperationStatusForName(operationStatusesJsonList[operationStatusesIndex].AsString()));
    }
    m_operationStatusesHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceRequestStatusFilter::Jsonize() const
{
  JsonValue payload;

  if(m_operationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> operationsJsonList(m_operations.size());
   for(unsigned operationsIndex = 0; operationsIndex < operationsJsonList.GetLength(); ++operationsIndex)
   {
     operationsJsonList[operationsIndex].AsString(OperationMapper::GetNameForOperation(m_operations[operationsIndex]));
   }
   payload.WithArray("Operations", std::move(operationsJsonList));

  }

  if(m_operationStatusesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> operationStatusesJsonList(m_operationStatuses.size());
   for(unsigned operationStatusesIndex = 0; operationStatusesIndex < operationStatusesJsonList.GetLength(); ++operationStatusesIndex)
   {
     operationStatusesJsonList[operationStatusesIndex].AsString(OperationStatusMapper::GetNameForOperationStatus(m_operationStatuses[operationStatusesIndex]));
   }
   payload.WithArray("OperationStatuses", std::move(operationStatusesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CloudControlApi
} // namespace Aws
