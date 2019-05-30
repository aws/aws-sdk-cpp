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

#include <aws/pinpoint-email/model/DeliveryOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PinpointEmail
{
namespace Model
{

DeliveryOptions::DeliveryOptions() : 
    m_tlsPolicy(TlsPolicy::NOT_SET),
    m_tlsPolicyHasBeenSet(false),
    m_sendingPoolNameHasBeenSet(false)
{
}

DeliveryOptions::DeliveryOptions(JsonView jsonValue) : 
    m_tlsPolicy(TlsPolicy::NOT_SET),
    m_tlsPolicyHasBeenSet(false),
    m_sendingPoolNameHasBeenSet(false)
{
  *this = jsonValue;
}

DeliveryOptions& DeliveryOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TlsPolicy"))
  {
    m_tlsPolicy = TlsPolicyMapper::GetTlsPolicyForName(jsonValue.GetString("TlsPolicy"));

    m_tlsPolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SendingPoolName"))
  {
    m_sendingPoolName = jsonValue.GetString("SendingPoolName");

    m_sendingPoolNameHasBeenSet = true;
  }

  return *this;
}

JsonValue DeliveryOptions::Jsonize() const
{
  JsonValue payload;

  if(m_tlsPolicyHasBeenSet)
  {
   payload.WithString("TlsPolicy", TlsPolicyMapper::GetNameForTlsPolicy(m_tlsPolicy));
  }

  if(m_sendingPoolNameHasBeenSet)
  {
   payload.WithString("SendingPoolName", m_sendingPoolName);

  }

  return payload;
}

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
