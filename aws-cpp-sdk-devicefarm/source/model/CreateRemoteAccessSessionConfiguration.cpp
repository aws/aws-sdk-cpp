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
    m_billingMethodHasBeenSet(false)
{
}

CreateRemoteAccessSessionConfiguration::CreateRemoteAccessSessionConfiguration(const JsonValue& jsonValue) : 
    m_billingMethod(BillingMethod::NOT_SET),
    m_billingMethodHasBeenSet(false)
{
  *this = jsonValue;
}

CreateRemoteAccessSessionConfiguration& CreateRemoteAccessSessionConfiguration::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("billingMethod"))
  {
    m_billingMethod = BillingMethodMapper::GetBillingMethodForName(jsonValue.GetString("billingMethod"));

    m_billingMethodHasBeenSet = true;
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

  return payload;
}

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws