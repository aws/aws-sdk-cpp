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

#include <aws/guardduty/model/DnsRequestAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

DnsRequestAction::DnsRequestAction() : 
    m_domainHasBeenSet(false)
{
}

DnsRequestAction::DnsRequestAction(const JsonValue& jsonValue) : 
    m_domainHasBeenSet(false)
{
  *this = jsonValue;
}

DnsRequestAction& DnsRequestAction::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("domain"))
  {
    m_domain = jsonValue.GetString("domain");

    m_domainHasBeenSet = true;
  }

  return *this;
}

JsonValue DnsRequestAction::Jsonize() const
{
  JsonValue payload;

  if(m_domainHasBeenSet)
  {
   payload.WithString("domain", m_domain);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
