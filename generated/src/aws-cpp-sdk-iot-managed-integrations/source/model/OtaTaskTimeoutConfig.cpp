/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/OtaTaskTimeoutConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTManagedIntegrations
{
namespace Model
{

OtaTaskTimeoutConfig::OtaTaskTimeoutConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

OtaTaskTimeoutConfig& OtaTaskTimeoutConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InProgressTimeoutInMinutes"))
  {
    m_inProgressTimeoutInMinutes = jsonValue.GetInt64("InProgressTimeoutInMinutes");
    m_inProgressTimeoutInMinutesHasBeenSet = true;
  }
  return *this;
}

JsonValue OtaTaskTimeoutConfig::Jsonize() const
{
  JsonValue payload;

  if(m_inProgressTimeoutInMinutesHasBeenSet)
  {
   payload.WithInt64("InProgressTimeoutInMinutes", m_inProgressTimeoutInMinutes);

  }

  return payload;
}

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
