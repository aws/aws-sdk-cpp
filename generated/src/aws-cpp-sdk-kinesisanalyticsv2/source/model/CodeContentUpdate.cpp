/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/CodeContentUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{

CodeContentUpdate::CodeContentUpdate() : 
    m_textContentUpdateHasBeenSet(false),
    m_zipFileContentUpdateHasBeenSet(false),
    m_s3ContentLocationUpdateHasBeenSet(false)
{
}

CodeContentUpdate::CodeContentUpdate(JsonView jsonValue) : 
    m_textContentUpdateHasBeenSet(false),
    m_zipFileContentUpdateHasBeenSet(false),
    m_s3ContentLocationUpdateHasBeenSet(false)
{
  *this = jsonValue;
}

CodeContentUpdate& CodeContentUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TextContentUpdate"))
  {
    m_textContentUpdate = jsonValue.GetString("TextContentUpdate");

    m_textContentUpdateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ZipFileContentUpdate"))
  {
    m_zipFileContentUpdate = HashingUtils::Base64Decode(jsonValue.GetString("ZipFileContentUpdate"));
    m_zipFileContentUpdateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3ContentLocationUpdate"))
  {
    m_s3ContentLocationUpdate = jsonValue.GetObject("S3ContentLocationUpdate");

    m_s3ContentLocationUpdateHasBeenSet = true;
  }

  return *this;
}

JsonValue CodeContentUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_textContentUpdateHasBeenSet)
  {
   payload.WithString("TextContentUpdate", m_textContentUpdate);

  }

  if(m_zipFileContentUpdateHasBeenSet)
  {
   payload.WithString("ZipFileContentUpdate", HashingUtils::Base64Encode(m_zipFileContentUpdate));
  }

  if(m_s3ContentLocationUpdateHasBeenSet)
  {
   payload.WithObject("S3ContentLocationUpdate", m_s3ContentLocationUpdate.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
