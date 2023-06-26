/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/BorrowConfiguration.h>
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

BorrowConfiguration::BorrowConfiguration() : 
    m_allowEarlyCheckIn(false),
    m_allowEarlyCheckInHasBeenSet(false),
    m_maxTimeToLiveInMinutes(0),
    m_maxTimeToLiveInMinutesHasBeenSet(false)
{
}

BorrowConfiguration::BorrowConfiguration(JsonView jsonValue) : 
    m_allowEarlyCheckIn(false),
    m_allowEarlyCheckInHasBeenSet(false),
    m_maxTimeToLiveInMinutes(0),
    m_maxTimeToLiveInMinutesHasBeenSet(false)
{
  *this = jsonValue;
}

BorrowConfiguration& BorrowConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AllowEarlyCheckIn"))
  {
    m_allowEarlyCheckIn = jsonValue.GetBool("AllowEarlyCheckIn");

    m_allowEarlyCheckInHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxTimeToLiveInMinutes"))
  {
    m_maxTimeToLiveInMinutes = jsonValue.GetInteger("MaxTimeToLiveInMinutes");

    m_maxTimeToLiveInMinutesHasBeenSet = true;
  }

  return *this;
}

JsonValue BorrowConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_allowEarlyCheckInHasBeenSet)
  {
   payload.WithBool("AllowEarlyCheckIn", m_allowEarlyCheckIn);

  }

  if(m_maxTimeToLiveInMinutesHasBeenSet)
  {
   payload.WithInteger("MaxTimeToLiveInMinutes", m_maxTimeToLiveInMinutes);

  }

  return payload;
}

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
