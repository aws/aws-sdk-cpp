/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/S3ExportConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

S3ExportConfiguration::S3ExportConfiguration() : 
    m_roleNameHasBeenSet(false),
    m_diskImageFormat(DiskImageFormat::NOT_SET),
    m_diskImageFormatHasBeenSet(false),
    m_s3BucketHasBeenSet(false),
    m_s3PrefixHasBeenSet(false)
{
}

S3ExportConfiguration::S3ExportConfiguration(JsonView jsonValue) : 
    m_roleNameHasBeenSet(false),
    m_diskImageFormat(DiskImageFormat::NOT_SET),
    m_diskImageFormatHasBeenSet(false),
    m_s3BucketHasBeenSet(false),
    m_s3PrefixHasBeenSet(false)
{
  *this = jsonValue;
}

S3ExportConfiguration& S3ExportConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("roleName"))
  {
    m_roleName = jsonValue.GetString("roleName");

    m_roleNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("diskImageFormat"))
  {
    m_diskImageFormat = DiskImageFormatMapper::GetDiskImageFormatForName(jsonValue.GetString("diskImageFormat"));

    m_diskImageFormatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3Bucket"))
  {
    m_s3Bucket = jsonValue.GetString("s3Bucket");

    m_s3BucketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3Prefix"))
  {
    m_s3Prefix = jsonValue.GetString("s3Prefix");

    m_s3PrefixHasBeenSet = true;
  }

  return *this;
}

JsonValue S3ExportConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_roleNameHasBeenSet)
  {
   payload.WithString("roleName", m_roleName);

  }

  if(m_diskImageFormatHasBeenSet)
  {
   payload.WithString("diskImageFormat", DiskImageFormatMapper::GetNameForDiskImageFormat(m_diskImageFormat));
  }

  if(m_s3BucketHasBeenSet)
  {
   payload.WithString("s3Bucket", m_s3Bucket);

  }

  if(m_s3PrefixHasBeenSet)
  {
   payload.WithString("s3Prefix", m_s3Prefix);

  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
