/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/CreateEnvironmentProfilePolicyGrantDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

CreateEnvironmentProfilePolicyGrantDetail::CreateEnvironmentProfilePolicyGrantDetail(JsonView jsonValue)
{
  *this = jsonValue;
}

CreateEnvironmentProfilePolicyGrantDetail& CreateEnvironmentProfilePolicyGrantDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("domainUnitId"))
  {
    m_domainUnitId = jsonValue.GetString("domainUnitId");
    m_domainUnitIdHasBeenSet = true;
  }
  return *this;
}

JsonValue CreateEnvironmentProfilePolicyGrantDetail::Jsonize() const
{
  JsonValue payload;

  if(m_domainUnitIdHasBeenSet)
  {
   payload.WithString("domainUnitId", m_domainUnitId);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
