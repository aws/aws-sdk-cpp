/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/OrganizationEbsVolumesResult.h>
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

OrganizationEbsVolumesResult::OrganizationEbsVolumesResult() : 
    m_autoEnable(false),
    m_autoEnableHasBeenSet(false)
{
}

OrganizationEbsVolumesResult::OrganizationEbsVolumesResult(JsonView jsonValue) : 
    m_autoEnable(false),
    m_autoEnableHasBeenSet(false)
{
  *this = jsonValue;
}

OrganizationEbsVolumesResult& OrganizationEbsVolumesResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("autoEnable"))
  {
    m_autoEnable = jsonValue.GetBool("autoEnable");

    m_autoEnableHasBeenSet = true;
  }

  return *this;
}

JsonValue OrganizationEbsVolumesResult::Jsonize() const
{
  JsonValue payload;

  if(m_autoEnableHasBeenSet)
  {
   payload.WithBool("autoEnable", m_autoEnable);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
