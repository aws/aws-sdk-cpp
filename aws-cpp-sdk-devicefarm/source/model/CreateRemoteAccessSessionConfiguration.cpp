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

#include <aws/devicefarm/model/CreateRemoteAccessSessionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

CreateRemoteAccessSessionConfiguration::CreateRemoteAccessSessionConfiguration() : 
    m_billingMethod(BillingMethod::NOT_SET),
    m_billingMethodHasBeenSet(false),
    m_vpceConfigurationArnsHasBeenSet(false)
{
}

CreateRemoteAccessSessionConfiguration::CreateRemoteAccessSessionConfiguration(JsonView jsonValue) : 
    m_billingMethod(BillingMethod::NOT_SET),
    m_billingMethodHasBeenSet(false),
    m_vpceConfigurationArnsHasBeenSet(false)
{
  *this = jsonValue;
}

CreateRemoteAccessSessionConfiguration& CreateRemoteAccessSessionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("billingMethod"))
  {
    m_billingMethod = BillingMethodMapper::GetBillingMethodForName(jsonValue.GetString("billingMethod"));

    m_billingMethodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vpceConfigurationArns"))
  {
    Array<JsonView> vpceConfigurationArnsJsonList = jsonValue.GetArray("vpceConfigurationArns");
    for(unsigned vpceConfigurationArnsIndex = 0; vpceConfigurationArnsIndex < vpceConfigurationArnsJsonList.GetLength(); ++vpceConfigurationArnsIndex)
    {
      m_vpceConfigurationArns.push_back(vpceConfigurationArnsJsonList[vpceConfigurationArnsIndex].AsString());
    }
    m_vpceConfigurationArnsHasBeenSet = true;
  }

  return *this;
}

JsonValue CreateRemoteAccessSessionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_billingMethodHasBeenSet)
  {
   payload.WithString("billingMethod", BillingMethodMapper::GetNameForBillingMethod(m_billingMethod));
  }

  if(m_vpceConfigurationArnsHasBeenSet)
  {
   Array<JsonValue> vpceConfigurationArnsJsonList(m_vpceConfigurationArns.size());
   for(unsigned vpceConfigurationArnsIndex = 0; vpceConfigurationArnsIndex < vpceConfigurationArnsJsonList.GetLength(); ++vpceConfigurationArnsIndex)
   {
     vpceConfigurationArnsJsonList[vpceConfigurationArnsIndex].AsString(m_vpceConfigurationArns[vpceConfigurationArnsIndex]);
   }
   payload.WithArray("vpceConfigurationArns", std::move(vpceConfigurationArnsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
