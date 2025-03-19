/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/IoTJobTimeoutConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GreengrassV2
{
namespace Model
{

IoTJobTimeoutConfig::IoTJobTimeoutConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

IoTJobTimeoutConfig& IoTJobTimeoutConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("inProgressTimeoutInMinutes"))
  {
    m_inProgressTimeoutInMinutes = jsonValue.GetInt64("inProgressTimeoutInMinutes");
    m_inProgressTimeoutInMinutesHasBeenSet = true;
  }
  return *this;
}

JsonValue IoTJobTimeoutConfig::Jsonize() const
{
  JsonValue payload;

  if(m_inProgressTimeoutInMinutesHasBeenSet)
  {
   payload.WithInt64("inProgressTimeoutInMinutes", m_inProgressTimeoutInMinutes);

  }

  return payload;
}

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
