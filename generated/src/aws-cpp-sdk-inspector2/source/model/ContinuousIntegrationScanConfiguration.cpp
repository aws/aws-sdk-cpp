/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/ContinuousIntegrationScanConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

ContinuousIntegrationScanConfiguration::ContinuousIntegrationScanConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ContinuousIntegrationScanConfiguration& ContinuousIntegrationScanConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("supportedEvents"))
  {
    Aws::Utils::Array<JsonView> supportedEventsJsonList = jsonValue.GetArray("supportedEvents");
    for(unsigned supportedEventsIndex = 0; supportedEventsIndex < supportedEventsJsonList.GetLength(); ++supportedEventsIndex)
    {
      m_supportedEvents.push_back(ContinuousIntegrationScanEventMapper::GetContinuousIntegrationScanEventForName(supportedEventsJsonList[supportedEventsIndex].AsString()));
    }
    m_supportedEventsHasBeenSet = true;
  }
  return *this;
}

JsonValue ContinuousIntegrationScanConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_supportedEventsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportedEventsJsonList(m_supportedEvents.size());
   for(unsigned supportedEventsIndex = 0; supportedEventsIndex < supportedEventsJsonList.GetLength(); ++supportedEventsIndex)
   {
     supportedEventsJsonList[supportedEventsIndex].AsString(ContinuousIntegrationScanEventMapper::GetNameForContinuousIntegrationScanEvent(m_supportedEvents[supportedEventsIndex]));
   }
   payload.WithArray("supportedEvents", std::move(supportedEventsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
