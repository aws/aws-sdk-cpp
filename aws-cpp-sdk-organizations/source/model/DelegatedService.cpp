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

#include <aws/organizations/model/DelegatedService.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Organizations
{
namespace Model
{

DelegatedService::DelegatedService() : 
    m_servicePrincipalHasBeenSet(false),
    m_delegationEnabledDateHasBeenSet(false)
{
}

DelegatedService::DelegatedService(JsonView jsonValue) : 
    m_servicePrincipalHasBeenSet(false),
    m_delegationEnabledDateHasBeenSet(false)
{
  *this = jsonValue;
}

DelegatedService& DelegatedService::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ServicePrincipal"))
  {
    m_servicePrincipal = jsonValue.GetString("ServicePrincipal");

    m_servicePrincipalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DelegationEnabledDate"))
  {
    m_delegationEnabledDate = jsonValue.GetDouble("DelegationEnabledDate");

    m_delegationEnabledDateHasBeenSet = true;
  }

  return *this;
}

JsonValue DelegatedService::Jsonize() const
{
  JsonValue payload;

  if(m_servicePrincipalHasBeenSet)
  {
   payload.WithString("ServicePrincipal", m_servicePrincipal);

  }

  if(m_delegationEnabledDateHasBeenSet)
  {
   payload.WithDouble("DelegationEnabledDate", m_delegationEnabledDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Organizations
} // namespace Aws
