/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/CustomActionLambdaConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ARCRegionswitch
{
namespace Model
{

CustomActionLambdaConfiguration::CustomActionLambdaConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

CustomActionLambdaConfiguration& CustomActionLambdaConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("timeoutMinutes"))
  {
    m_timeoutMinutes = jsonValue.GetInteger("timeoutMinutes");
    m_timeoutMinutesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lambdas"))
  {
    Aws::Utils::Array<JsonView> lambdasJsonList = jsonValue.GetArray("lambdas");
    for(unsigned lambdasIndex = 0; lambdasIndex < lambdasJsonList.GetLength(); ++lambdasIndex)
    {
      m_lambdas.push_back(lambdasJsonList[lambdasIndex].AsObject());
    }
    m_lambdasHasBeenSet = true;
  }
  if(jsonValue.ValueExists("retryIntervalMinutes"))
  {
    m_retryIntervalMinutes = jsonValue.GetDouble("retryIntervalMinutes");
    m_retryIntervalMinutesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("regionToRun"))
  {
    m_regionToRun = RegionToRunInMapper::GetRegionToRunInForName(jsonValue.GetString("regionToRun"));
    m_regionToRunHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ungraceful"))
  {
    m_ungraceful = jsonValue.GetObject("ungraceful");
    m_ungracefulHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomActionLambdaConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_timeoutMinutesHasBeenSet)
  {
   payload.WithInteger("timeoutMinutes", m_timeoutMinutes);

  }

  if(m_lambdasHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> lambdasJsonList(m_lambdas.size());
   for(unsigned lambdasIndex = 0; lambdasIndex < lambdasJsonList.GetLength(); ++lambdasIndex)
   {
     lambdasJsonList[lambdasIndex].AsObject(m_lambdas[lambdasIndex].Jsonize());
   }
   payload.WithArray("lambdas", std::move(lambdasJsonList));

  }

  if(m_retryIntervalMinutesHasBeenSet)
  {
   payload.WithDouble("retryIntervalMinutes", m_retryIntervalMinutes);

  }

  if(m_regionToRunHasBeenSet)
  {
   payload.WithString("regionToRun", RegionToRunInMapper::GetNameForRegionToRunIn(m_regionToRun));
  }

  if(m_ungracefulHasBeenSet)
  {
   payload.WithObject("ungraceful", m_ungraceful.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
