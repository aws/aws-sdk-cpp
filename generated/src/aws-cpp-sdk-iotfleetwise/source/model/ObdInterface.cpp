/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/ObdInterface.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

ObdInterface::ObdInterface() : 
    m_nameHasBeenSet(false),
    m_requestMessageId(0),
    m_requestMessageIdHasBeenSet(false),
    m_obdStandardHasBeenSet(false),
    m_pidRequestIntervalSeconds(0),
    m_pidRequestIntervalSecondsHasBeenSet(false),
    m_dtcRequestIntervalSeconds(0),
    m_dtcRequestIntervalSecondsHasBeenSet(false),
    m_useExtendedIds(false),
    m_useExtendedIdsHasBeenSet(false),
    m_hasTransmissionEcu(false),
    m_hasTransmissionEcuHasBeenSet(false)
{
}

ObdInterface::ObdInterface(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_requestMessageId(0),
    m_requestMessageIdHasBeenSet(false),
    m_obdStandardHasBeenSet(false),
    m_pidRequestIntervalSeconds(0),
    m_pidRequestIntervalSecondsHasBeenSet(false),
    m_dtcRequestIntervalSeconds(0),
    m_dtcRequestIntervalSecondsHasBeenSet(false),
    m_useExtendedIds(false),
    m_useExtendedIdsHasBeenSet(false),
    m_hasTransmissionEcu(false),
    m_hasTransmissionEcuHasBeenSet(false)
{
  *this = jsonValue;
}

ObdInterface& ObdInterface::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("requestMessageId"))
  {
    m_requestMessageId = jsonValue.GetInteger("requestMessageId");

    m_requestMessageIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("obdStandard"))
  {
    m_obdStandard = jsonValue.GetString("obdStandard");

    m_obdStandardHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pidRequestIntervalSeconds"))
  {
    m_pidRequestIntervalSeconds = jsonValue.GetInteger("pidRequestIntervalSeconds");

    m_pidRequestIntervalSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dtcRequestIntervalSeconds"))
  {
    m_dtcRequestIntervalSeconds = jsonValue.GetInteger("dtcRequestIntervalSeconds");

    m_dtcRequestIntervalSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("useExtendedIds"))
  {
    m_useExtendedIds = jsonValue.GetBool("useExtendedIds");

    m_useExtendedIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hasTransmissionEcu"))
  {
    m_hasTransmissionEcu = jsonValue.GetBool("hasTransmissionEcu");

    m_hasTransmissionEcuHasBeenSet = true;
  }

  return *this;
}

JsonValue ObdInterface::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_requestMessageIdHasBeenSet)
  {
   payload.WithInteger("requestMessageId", m_requestMessageId);

  }

  if(m_obdStandardHasBeenSet)
  {
   payload.WithString("obdStandard", m_obdStandard);

  }

  if(m_pidRequestIntervalSecondsHasBeenSet)
  {
   payload.WithInteger("pidRequestIntervalSeconds", m_pidRequestIntervalSeconds);

  }

  if(m_dtcRequestIntervalSecondsHasBeenSet)
  {
   payload.WithInteger("dtcRequestIntervalSeconds", m_dtcRequestIntervalSeconds);

  }

  if(m_useExtendedIdsHasBeenSet)
  {
   payload.WithBool("useExtendedIds", m_useExtendedIds);

  }

  if(m_hasTransmissionEcuHasBeenSet)
  {
   payload.WithBool("hasTransmissionEcu", m_hasTransmissionEcu);

  }

  return payload;
}

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
