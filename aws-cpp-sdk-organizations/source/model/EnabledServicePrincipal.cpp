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

#include <aws/organizations/model/EnabledServicePrincipal.h>
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

EnabledServicePrincipal::EnabledServicePrincipal() : 
    m_servicePrincipalHasBeenSet(false),
    m_dateEnabledHasBeenSet(false)
{
}

EnabledServicePrincipal::EnabledServicePrincipal(const JsonValue& jsonValue) : 
    m_servicePrincipalHasBeenSet(false),
    m_dateEnabledHasBeenSet(false)
{
  *this = jsonValue;
}

EnabledServicePrincipal& EnabledServicePrincipal::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ServicePrincipal"))
  {
    m_servicePrincipal = jsonValue.GetString("ServicePrincipal");

    m_servicePrincipalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DateEnabled"))
  {
    m_dateEnabled = jsonValue.GetDouble("DateEnabled");

    m_dateEnabledHasBeenSet = true;
  }

  return *this;
}

JsonValue EnabledServicePrincipal::Jsonize() const
{
  JsonValue payload;

  if(m_servicePrincipalHasBeenSet)
  {
   payload.WithString("ServicePrincipal", m_servicePrincipal);

  }

  if(m_dateEnabledHasBeenSet)
  {
   payload.WithDouble("DateEnabled", m_dateEnabled.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Organizations
} // namespace Aws
