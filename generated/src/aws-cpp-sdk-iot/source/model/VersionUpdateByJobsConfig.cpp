/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/VersionUpdateByJobsConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

VersionUpdateByJobsConfig::VersionUpdateByJobsConfig() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
}

VersionUpdateByJobsConfig::VersionUpdateByJobsConfig(JsonView jsonValue) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
  *this = jsonValue;
}

VersionUpdateByJobsConfig& VersionUpdateByJobsConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("enabled"))
  {
    m_enabled = jsonValue.GetBool("enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue VersionUpdateByJobsConfig::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("enabled", m_enabled);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
