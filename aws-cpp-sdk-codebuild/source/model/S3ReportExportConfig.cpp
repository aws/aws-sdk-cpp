/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/S3ReportExportConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

S3ReportExportConfig::S3ReportExportConfig() : 
    m_bucketHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_packaging(ReportPackagingType::NOT_SET),
    m_packagingHasBeenSet(false),
    m_encryptionKeyHasBeenSet(false),
    m_encryptionDisabled(false),
    m_encryptionDisabledHasBeenSet(false)
{
}

S3ReportExportConfig::S3ReportExportConfig(JsonView jsonValue) : 
    m_bucketHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_packaging(ReportPackagingType::NOT_SET),
    m_packagingHasBeenSet(false),
    m_encryptionKeyHasBeenSet(false),
    m_encryptionDisabled(false),
    m_encryptionDisabledHasBeenSet(false)
{
  *this = jsonValue;
}

S3ReportExportConfig& S3ReportExportConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bucket"))
  {
    m_bucket = jsonValue.GetString("bucket");

    m_bucketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("path"))
  {
    m_path = jsonValue.GetString("path");

    m_pathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("packaging"))
  {
    m_packaging = ReportPackagingTypeMapper::GetReportPackagingTypeForName(jsonValue.GetString("packaging"));

    m_packagingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("encryptionKey"))
  {
    m_encryptionKey = jsonValue.GetString("encryptionKey");

    m_encryptionKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("encryptionDisabled"))
  {
    m_encryptionDisabled = jsonValue.GetBool("encryptionDisabled");

    m_encryptionDisabledHasBeenSet = true;
  }

  return *this;
}

JsonValue S3ReportExportConfig::Jsonize() const
{
  JsonValue payload;

  if(m_bucketHasBeenSet)
  {
   payload.WithString("bucket", m_bucket);

  }

  if(m_pathHasBeenSet)
  {
   payload.WithString("path", m_path);

  }

  if(m_packagingHasBeenSet)
  {
   payload.WithString("packaging", ReportPackagingTypeMapper::GetNameForReportPackagingType(m_packaging));
  }

  if(m_encryptionKeyHasBeenSet)
  {
   payload.WithString("encryptionKey", m_encryptionKey);

  }

  if(m_encryptionDisabledHasBeenSet)
  {
   payload.WithBool("encryptionDisabled", m_encryptionDisabled);

  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
