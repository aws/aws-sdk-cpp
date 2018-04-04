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

SecurityServicePolicyData::SecurityServicePolicyData(const JsonValue& jsonValue) : 
    m_type(SecurityServiceType::NOT_SET),
    m_typeHasBeenSet(false),
    m_managedServiceDataHasBeenSet(false)
{
  *this = jsonValue;
}

SecurityServicePolicyData& SecurityServicePolicyData::operator =(const JsonValue& jsonValue)
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
