/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/S3InputFormatConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Appflow
{
namespace Model
{

S3InputFormatConfig::S3InputFormatConfig() : 
    m_s3InputFileType(S3InputFileType::NOT_SET),
    m_s3InputFileTypeHasBeenSet(false)
{
}

S3InputFormatConfig::S3InputFormatConfig(JsonView jsonValue) : 
    m_s3InputFileType(S3InputFileType::NOT_SET),
    m_s3InputFileTypeHasBeenSet(false)
{
  *this = jsonValue;
}

S3InputFormatConfig& S3InputFormatConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3InputFileType"))
  {
    m_s3InputFileType = S3InputFileTypeMapper::GetS3InputFileTypeForName(jsonValue.GetString("s3InputFileType"));

    m_s3InputFileTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue S3InputFormatConfig::Jsonize() const
{
  JsonValue payload;

  if(m_s3InputFileTypeHasBeenSet)
  {
   payload.WithString("s3InputFileType", S3InputFileTypeMapper::GetNameForS3InputFileType(m_s3InputFileType));
  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
