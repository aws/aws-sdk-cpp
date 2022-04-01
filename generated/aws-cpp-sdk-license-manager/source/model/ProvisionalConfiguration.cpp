/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/ProvisionalConfiguration.h>
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

ProvisionalConfiguration::ProvisionalConfiguration() : 
    m_maxTimeToLiveInMinutes(0),
    m_maxTimeToLiveInMinutesHasBeenSet(false)
{
}

ProvisionalConfiguration::ProvisionalConfiguration(JsonView jsonValue) : 
    m_maxTimeToLiveInMinutes(0),
    m_maxTimeToLiveInMinutesHasBeenSet(false)
{
  *this = jsonValue;
}

ProvisionalConfiguration& ProvisionalConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MaxTimeToLiveInMinutes"))
  {
    m_maxTimeToLiveInMinutes = jsonValue.GetInteger("MaxTimeToLiveInMinutes");

    m_maxTimeToLiveInMinutesHasBeenSet = true;
  }

  return *this;
}

JsonValue ProvisionalConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_maxTimeToLiveInMinutesHasBeenSet)
  {
   payload.WithInteger("MaxTimeToLiveInMinutes", m_maxTimeToLiveInMinutes);

  }

  return payload;
}

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
