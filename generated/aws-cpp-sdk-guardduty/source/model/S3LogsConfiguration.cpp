/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/S3LogsConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

S3LogsConfiguration::S3LogsConfiguration() : 
    m_enable(false),
    m_enableHasBeenSet(false)
{
}

S3LogsConfiguration::S3LogsConfiguration(JsonView jsonValue) : 
    m_enable(false),
    m_enableHasBeenSet(false)
{
  *this = jsonValue;
}

S3LogsConfiguration& S3LogsConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("enable"))
  {
    m_enable = jsonValue.GetBool("enable");

    m_enableHasBeenSet = true;
  }

  return *this;
}

JsonValue S3LogsConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_enableHasBeenSet)
  {
   payload.WithBool("enable", m_enable);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
