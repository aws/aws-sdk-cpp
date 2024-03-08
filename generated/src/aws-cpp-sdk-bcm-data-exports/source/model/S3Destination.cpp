/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-data-exports/model/S3Destination.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BCMDataExports
{
namespace Model
{

S3Destination::S3Destination() : 
    m_s3BucketHasBeenSet(false),
    m_s3OutputConfigurationsHasBeenSet(false),
    m_s3PrefixHasBeenSet(false),
    m_s3RegionHasBeenSet(false)
{
}

S3Destination::S3Destination(JsonView jsonValue) : 
    m_s3BucketHasBeenSet(false),
    m_s3OutputConfigurationsHasBeenSet(false),
    m_s3PrefixHasBeenSet(false),
    m_s3RegionHasBeenSet(false)
{
  *this = jsonValue;
}

S3Destination& S3Destination::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3Bucket"))
  {
    m_s3Bucket = jsonValue.GetString("S3Bucket");

    m_s3BucketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3OutputConfigurations"))
  {
    m_s3OutputConfigurations = jsonValue.GetObject("S3OutputConfigurations");

    m_s3OutputConfigurationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3Prefix"))
  {
    m_s3Prefix = jsonValue.GetString("S3Prefix");

    m_s3PrefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3Region"))
  {
    m_s3Region = jsonValue.GetString("S3Region");

    m_s3RegionHasBeenSet = true;
  }

  return *this;
}

JsonValue S3Destination::Jsonize() const
{
  JsonValue payload;

  if(m_s3BucketHasBeenSet)
  {
   payload.WithString("S3Bucket", m_s3Bucket);

  }

  if(m_s3OutputConfigurationsHasBeenSet)
  {
   payload.WithObject("S3OutputConfigurations", m_s3OutputConfigurations.Jsonize());

  }

  if(m_s3PrefixHasBeenSet)
  {
   payload.WithString("S3Prefix", m_s3Prefix);

  }

  if(m_s3RegionHasBeenSet)
  {
   payload.WithString("S3Region", m_s3Region);

  }

  return payload;
}

} // namespace Model
} // namespace BCMDataExports
} // namespace Aws
