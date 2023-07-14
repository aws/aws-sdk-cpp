/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
