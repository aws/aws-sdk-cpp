/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
