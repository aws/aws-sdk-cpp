/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/BucketAccessLogConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

BucketAccessLogConfig::BucketAccessLogConfig() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_prefixHasBeenSet(false)
{
}

BucketAccessLogConfig::BucketAccessLogConfig(JsonView jsonValue) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_prefixHasBeenSet(false)
{
  *this = jsonValue;
}

BucketAccessLogConfig& BucketAccessLogConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("enabled"))
  {
    m_enabled = jsonValue.GetBool("enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destination"))
  {
    m_destination = jsonValue.GetString("destination");

    m_destinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("prefix"))
  {
    m_prefix = jsonValue.GetString("prefix");

    m_prefixHasBeenSet = true;
  }

  return *this;
}

JsonValue BucketAccessLogConfig::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("enabled", m_enabled);

  }

  if(m_destinationHasBeenSet)
  {
   payload.WithString("destination", m_destination);

  }

  if(m_prefixHasBeenSet)
  {
   payload.WithString("prefix", m_prefix);

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
