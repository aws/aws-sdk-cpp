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

#include <aws/license-manager/model/AutomatedDiscoveryInformation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LicenseManager
{
namespace Model
{

AutomatedDiscoveryInformation::AutomatedDiscoveryInformation() : 
    m_lastRunTimeHasBeenSet(false)
{
}

AutomatedDiscoveryInformation::AutomatedDiscoveryInformation(JsonView jsonValue) : 
    m_lastRunTimeHasBeenSet(false)
{
  *this = jsonValue;
}

AutomatedDiscoveryInformation& AutomatedDiscoveryInformation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LastRunTime"))
  {
    m_lastRunTime = jsonValue.GetDouble("LastRunTime");

    m_lastRunTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue AutomatedDiscoveryInformation::Jsonize() const
{
  JsonValue payload;

  if(m_lastRunTimeHasBeenSet)
  {
   payload.WithDouble("LastRunTime", m_lastRunTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
