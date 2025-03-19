/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/BurnRateConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApplicationSignals
{
namespace Model
{

BurnRateConfiguration::BurnRateConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

BurnRateConfiguration& BurnRateConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LookBackWindowMinutes"))
  {
    m_lookBackWindowMinutes = jsonValue.GetInteger("LookBackWindowMinutes");
    m_lookBackWindowMinutesHasBeenSet = true;
  }
  return *this;
}

JsonValue BurnRateConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_lookBackWindowMinutesHasBeenSet)
  {
   payload.WithInteger("LookBackWindowMinutes", m_lookBackWindowMinutes);

  }

  return payload;
}

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
