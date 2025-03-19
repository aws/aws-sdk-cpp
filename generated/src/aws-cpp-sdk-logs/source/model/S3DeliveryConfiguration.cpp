/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/S3DeliveryConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

S3DeliveryConfiguration::S3DeliveryConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

S3DeliveryConfiguration& S3DeliveryConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("suffixPath"))
  {
    m_suffixPath = jsonValue.GetString("suffixPath");
    m_suffixPathHasBeenSet = true;
  }
  if(jsonValue.ValueExists("enableHiveCompatiblePath"))
  {
    m_enableHiveCompatiblePath = jsonValue.GetBool("enableHiveCompatiblePath");
    m_enableHiveCompatiblePathHasBeenSet = true;
  }
  return *this;
}

JsonValue S3DeliveryConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_suffixPathHasBeenSet)
  {
   payload.WithString("suffixPath", m_suffixPath);

  }

  if(m_enableHiveCompatiblePathHasBeenSet)
  {
   payload.WithBool("enableHiveCompatiblePath", m_enableHiveCompatiblePath);

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
