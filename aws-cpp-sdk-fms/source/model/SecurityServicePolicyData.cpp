/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/SecurityServicePolicyData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FMS
{
namespace Model
{

SecurityServicePolicyData::SecurityServicePolicyData() : 
    m_type(SecurityServiceType::NOT_SET),
    m_typeHasBeenSet(false),
    m_managedServiceDataHasBeenSet(false)
{
}

SecurityServicePolicyData::SecurityServicePolicyData(JsonView jsonValue) : 
    m_type(SecurityServiceType::NOT_SET),
    m_typeHasBeenSet(false),
    m_managedServiceDataHasBeenSet(false)
{
  *this = jsonValue;
}

SecurityServicePolicyData& SecurityServicePolicyData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = SecurityServiceTypeMapper::GetSecurityServiceTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ManagedServiceData"))
  {
    m_managedServiceData = jsonValue.GetString("ManagedServiceData");

    m_managedServiceDataHasBeenSet = true;
  }

  return *this;
}

JsonValue SecurityServicePolicyData::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", SecurityServiceTypeMapper::GetNameForSecurityServiceType(m_type));
  }

  if(m_managedServiceDataHasBeenSet)
  {
   payload.WithString("ManagedServiceData", m_managedServiceData);

  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
