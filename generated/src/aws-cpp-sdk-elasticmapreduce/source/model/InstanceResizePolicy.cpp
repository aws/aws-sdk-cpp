/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

InstanceResizePolicy::InstanceResizePolicy(JsonView jsonValue) : 
    m_instancesToTerminateHasBeenSet(false),
    m_instancesToProtectHasBeenSet(false),
    m_instanceTerminationTimeout(0),
    m_instanceTerminationTimeoutHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceResizePolicy& InstanceResizePolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InstancesToTerminate"))
  {
    Aws::Utils::Array<JsonView> instancesToTerminateJsonList = jsonValue.GetArray("InstancesToTerminate");
    for(unsigned instancesToTerminateIndex = 0; instancesToTerminateIndex < instancesToTerminateJsonList.GetLength(); ++instancesToTerminateIndex)
    {
      m_instancesToTerminate.push_back(instancesToTerminateJsonList[instancesToTerminateIndex].AsString());
    }
    m_instancesToTerminateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstancesToProtect"))
  {
    Aws::Utils::Array<JsonView> instancesToProtectJsonList = jsonValue.GetArray("InstancesToProtect");
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
   Aws::Utils::Array<JsonValue> instancesToTerminateJsonList(m_instancesToTerminate.size());
   for(unsigned instancesToTerminateIndex = 0; instancesToTerminateIndex < instancesToTerminateJsonList.GetLength(); ++instancesToTerminateIndex)
   {
     instancesToTerminateJsonList[instancesToTerminateIndex].AsString(m_instancesToTerminate[instancesToTerminateIndex]);
   }
   payload.WithArray("InstancesToTerminate", std::move(instancesToTerminateJsonList));

  }

  if(m_instancesToProtectHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instancesToProtectJsonList(m_instancesToProtect.size());
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
