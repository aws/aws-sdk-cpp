/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/config/model/ConfigStreamDeliveryInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConfigService
{
namespace Model
{

ConfigStreamDeliveryInfo::ConfigStreamDeliveryInfo() : 
    m_lastStatus(DeliveryStatus::NOT_SET),
    m_lastStatusHasBeenSet(false),
    m_lastErrorCodeHasBeenSet(false),
    m_lastErrorMessageHasBeenSet(false),
    m_lastStatusChangeTimeHasBeenSet(false)
{
}

ConfigStreamDeliveryInfo::ConfigStreamDeliveryInfo(const JsonValue& jsonValue) : 
    m_lastStatus(DeliveryStatus::NOT_SET),
    m_lastStatusHasBeenSet(false),
    m_lastErrorCodeHasBeenSet(false),
    m_lastErrorMessageHasBeenSet(false),
    m_lastStatusChangeTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ConfigStreamDeliveryInfo& ConfigStreamDeliveryInfo::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("lastStatus"))
  {
    m_lastStatus = DeliveryStatusMapper::GetDeliveryStatusForName(jsonValue.GetString("lastStatus"));

    m_lastStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastErrorCode"))
  {
    m_lastErrorCode = jsonValue.GetString("lastErrorCode");

    m_lastErrorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastErrorMessage"))
  {
    m_lastErrorMessage = jsonValue.GetString("lastErrorMessage");

    m_lastErrorMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastStatusChangeTime"))
  {
    m_lastStatusChangeTime = jsonValue.GetDouble("lastStatusChangeTime");

    m_lastStatusChangeTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ConfigStreamDeliveryInfo::Jsonize() const
{
  JsonValue payload;

  if(m_lastStatusHasBeenSet)
  {
   payload.WithString("lastStatus", DeliveryStatusMapper::GetNameForDeliveryStatus(m_lastStatus));
  }

  if(m_lastErrorCodeHasBeenSet)
  {
   payload.WithString("lastErrorCode", m_lastErrorCode);

  }

  if(m_lastErrorMessageHasBeenSet)
  {
   payload.WithString("lastErrorMessage", m_lastErrorMessage);

  }

  if(m_lastStatusChangeTimeHasBeenSet)
  {
   payload.WithDouble("lastStatusChangeTime", m_lastStatusChangeTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws