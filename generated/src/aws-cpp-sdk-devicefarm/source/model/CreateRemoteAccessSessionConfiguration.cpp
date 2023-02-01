/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    Aws::Utils::Array<JsonView> vpceConfigurationArnsJsonList = jsonValue.GetArray("vpceConfigurationArns");
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
   Aws::Utils::Array<JsonValue> vpceConfigurationArnsJsonList(m_vpceConfigurationArns.size());
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
