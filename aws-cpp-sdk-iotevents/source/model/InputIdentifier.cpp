/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/InputIdentifier.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTEvents
{
namespace Model
{

InputIdentifier::InputIdentifier() : 
    m_iotEventsInputIdentifierHasBeenSet(false),
    m_iotSiteWiseInputIdentifierHasBeenSet(false)
{
}

InputIdentifier::InputIdentifier(JsonView jsonValue) : 
    m_iotEventsInputIdentifierHasBeenSet(false),
    m_iotSiteWiseInputIdentifierHasBeenSet(false)
{
  *this = jsonValue;
}

InputIdentifier& InputIdentifier::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("iotEventsInputIdentifier"))
  {
    m_iotEventsInputIdentifier = jsonValue.GetObject("iotEventsInputIdentifier");

    m_iotEventsInputIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("iotSiteWiseInputIdentifier"))
  {
    m_iotSiteWiseInputIdentifier = jsonValue.GetObject("iotSiteWiseInputIdentifier");

    m_iotSiteWiseInputIdentifierHasBeenSet = true;
  }

  return *this;
}

JsonValue InputIdentifier::Jsonize() const
{
  JsonValue payload;

  if(m_iotEventsInputIdentifierHasBeenSet)
  {
   payload.WithObject("iotEventsInputIdentifier", m_iotEventsInputIdentifier.Jsonize());

  }

  if(m_iotSiteWiseInputIdentifierHasBeenSet)
  {
   payload.WithObject("iotSiteWiseInputIdentifier", m_iotSiteWiseInputIdentifier.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
