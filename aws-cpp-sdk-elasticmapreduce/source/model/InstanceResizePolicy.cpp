/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticmapreduce/model/InstanceResizePolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMR
{
namespace Model
{

InstanceResizePolicy::InstanceResizePolicy() : 
    m_instancesToTerminateHasBeenSet(false),
    m_instancesToProtectHasBeenSet(false),
    m_instanceTerminationTimeout(0),
    m_instanceTerminationTimeoutHasBeenSet(false)
{
}

InstanceResizePolicy::InstanceResizePolicy(const JsonValue& jsonValue) : 
    m_instancesToTerminateHasBeenSet(false),
    m_instancesToProtectHasBeenSet(false),
    m_instanceTerminationTimeout(0),
    m_instanceTerminationTimeoutHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceResizePolicy& InstanceResizePolicy::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("InstancesToTerminate"))
  {
    Array<JsonValue> instancesToTerminateJsonList = jsonValue.GetArray("InstancesToTerminate");
    for(unsigned instancesToTerminateIndex = 0; instancesToTerminateIndex < instancesToTerminateJsonList.GetLength(); ++instancesToTerminateIndex)
    {
      m_instancesToTerminate.push_back(instancesToTerminateJsonList[instancesToTerminateIndex].AsString());
    }
    m_instancesToTerminateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstancesToProtect"))
  {
    Array<JsonValue> instancesToProtectJsonList = jsonValue.GetArray("InstancesToProtect");
    for(unsigned instancesToProtectIndex = 0; instancesToProtectIndex < instancesToProtectJsonList.GetLength(); ++instancesToProtectIndex)
    {
      m_instancesToProtect.push_back(instancesToProtectJsonList[instancesToProtectIndex].AsString());
    }
    m_instancesToProtectHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceTerminationTimeout"))
  {
    m_instanceTerminationTimeout = jsonValue.GetInteger("InstanceTerminationTimeout");

    m_instanceTerminationTimeoutHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceResizePolicy::Jsonize() const
{
  JsonValue payload;

  if(m_instancesToTerminateHasBeenSet)
  {
   Array<JsonValue> instancesToTerminateJsonList(m_instancesToTerminate.size());
   for(unsigned instancesToTerminateIndex = 0; instancesToTerminateIndex < instancesToTerminateJsonList.GetLength(); ++instancesToTerminateIndex)
   {
     instancesToTerminateJsonList[instancesToTerminateIndex].AsString(m_instancesToTerminate[instancesToTerminateIndex]);
   }
   payload.WithArray("InstancesToTerminate", std::move(instancesToTerminateJsonList));

  }

  if(m_instancesToProtectHasBeenSet)
  {
   Array<JsonValue> instancesToProtectJsonList(m_instancesToProtect.size());
   for(unsigned instancesToProtectIndex = 0; instancesToProtectIndex < instancesToProtectJsonList.GetLength(); ++instancesToProtectIndex)
   {
     instancesToProtectJsonList[instancesToProtectIndex].AsString(m_instancesToProtect[instancesToProtectIndex]);
   }
   payload.WithArray("InstancesToProtect", std::move(instancesToProtectJsonList));

  }

  if(m_instanceTerminationTimeoutHasBeenSet)
  {
   payload.WithInteger("InstanceTerminationTimeout", m_instanceTerminationTimeout);

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws