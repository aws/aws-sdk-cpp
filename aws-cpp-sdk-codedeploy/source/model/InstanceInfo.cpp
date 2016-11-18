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
#include <aws/codedeploy/model/InstanceInfo.h>
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

InstanceInfo::InstanceInfo() : 
    m_instanceNameHasBeenSet(false),
    m_iamUserArnHasBeenSet(false),
    m_instanceArnHasBeenSet(false),
    m_registerTimeHasBeenSet(false),
    m_deregisterTimeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

InstanceInfo::InstanceInfo(const JsonValue& jsonValue) : 
    m_instanceNameHasBeenSet(false),
    m_iamUserArnHasBeenSet(false),
    m_instanceArnHasBeenSet(false),
    m_registerTimeHasBeenSet(false),
    m_deregisterTimeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceInfo& InstanceInfo::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("instanceName"))
  {
    m_instanceName = jsonValue.GetString("instanceName");

    m_instanceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("iamUserArn"))
  {
    m_iamUserArn = jsonValue.GetString("iamUserArn");

    m_iamUserArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("instanceArn"))
  {
    m_instanceArn = jsonValue.GetString("instanceArn");

    m_instanceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("registerTime"))
  {
    m_registerTime = jsonValue.GetDouble("registerTime");

    m_registerTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deregisterTime"))
  {
    m_deregisterTime = jsonValue.GetDouble("deregisterTime");

    m_deregisterTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Array<JsonValue> tagsJsonList = jsonValue.GetArray("tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceInfo::Jsonize() const
{
  JsonValue payload;

  if(m_instanceNameHasBeenSet)
  {
   payload.WithString("instanceName", m_instanceName);

  }

  if(m_iamUserArnHasBeenSet)
  {
   payload.WithString("iamUserArn", m_iamUserArn);

  }

  if(m_instanceArnHasBeenSet)
  {
   payload.WithString("instanceArn", m_instanceArn);

  }

  if(m_registerTimeHasBeenSet)
  {
   payload.WithDouble("registerTime", m_registerTime.SecondsWithMSPrecision());
  }

  if(m_deregisterTimeHasBeenSet)
  {
   payload.WithDouble("deregisterTime", m_deregisterTime.SecondsWithMSPrecision());
  }

  if(m_tagsHasBeenSet)
  {
   Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws