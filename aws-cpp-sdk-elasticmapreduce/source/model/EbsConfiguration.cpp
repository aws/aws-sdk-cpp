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
#include <aws/elasticmapreduce/model/EbsConfiguration.h>
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

EbsConfiguration::EbsConfiguration() : 
    m_ebsBlockDeviceConfigsHasBeenSet(false),
    m_ebsOptimized(false),
    m_ebsOptimizedHasBeenSet(false)
{
}

EbsConfiguration::EbsConfiguration(const JsonValue& jsonValue) : 
    m_ebsBlockDeviceConfigsHasBeenSet(false),
    m_ebsOptimized(false),
    m_ebsOptimizedHasBeenSet(false)
{
  *this = jsonValue;
}

EbsConfiguration& EbsConfiguration::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("EbsBlockDeviceConfigs"))
  {
    Array<JsonValue> ebsBlockDeviceConfigsJsonList = jsonValue.GetArray("EbsBlockDeviceConfigs");
    for(unsigned ebsBlockDeviceConfigsIndex = 0; ebsBlockDeviceConfigsIndex < ebsBlockDeviceConfigsJsonList.GetLength(); ++ebsBlockDeviceConfigsIndex)
    {
      m_ebsBlockDeviceConfigs.push_back(ebsBlockDeviceConfigsJsonList[ebsBlockDeviceConfigsIndex].AsObject());
    }
    m_ebsBlockDeviceConfigsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EbsOptimized"))
  {
    m_ebsOptimized = jsonValue.GetBool("EbsOptimized");

    m_ebsOptimizedHasBeenSet = true;
  }

  return *this;
}

JsonValue EbsConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_ebsBlockDeviceConfigsHasBeenSet)
  {
   Array<JsonValue> ebsBlockDeviceConfigsJsonList(m_ebsBlockDeviceConfigs.size());
   for(unsigned ebsBlockDeviceConfigsIndex = 0; ebsBlockDeviceConfigsIndex < ebsBlockDeviceConfigsJsonList.GetLength(); ++ebsBlockDeviceConfigsIndex)
   {
     ebsBlockDeviceConfigsJsonList[ebsBlockDeviceConfigsIndex].AsObject(m_ebsBlockDeviceConfigs[ebsBlockDeviceConfigsIndex].Jsonize());
   }
   payload.WithArray("EbsBlockDeviceConfigs", std::move(ebsBlockDeviceConfigsJsonList));

  }

  if(m_ebsOptimizedHasBeenSet)
  {
   payload.WithBool("EbsOptimized", m_ebsOptimized);

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws