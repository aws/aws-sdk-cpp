/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/IngestionS3InputConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LookoutEquipment
{
namespace Model
{

IngestionS3InputConfiguration::IngestionS3InputConfiguration() : 
    m_bucketHasBeenSet(false),
    m_prefixHasBeenSet(false),
    m_keyPatternHasBeenSet(false)
{
}

IngestionS3InputConfiguration::IngestionS3InputConfiguration(JsonView jsonValue) : 
    m_bucketHasBeenSet(false),
    m_prefixHasBeenSet(false),
    m_keyPatternHasBeenSet(false)
{
  *this = jsonValue;
}

IngestionS3InputConfiguration& IngestionS3InputConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Bucket"))
  {
    m_bucket = jsonValue.GetString("Bucket");

    m_bucketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Prefix"))
  {
    m_prefix = jsonValue.GetString("Prefix");

    m_prefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeyPattern"))
  {
    m_keyPattern = jsonValue.GetString("KeyPattern");

    m_keyPatternHasBeenSet = true;
  }

  return *this;
}

JsonValue IngestionS3InputConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_bucketHasBeenSet)
  {
   payload.WithString("Bucket", m_bucket);

  }

  if(m_prefixHasBeenSet)
  {
   payload.WithString("Prefix", m_prefix);

  }

  if(m_keyPatternHasBeenSet)
  {
   payload.WithString("KeyPattern", m_keyPattern);

  }

  return payload;
}

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
