/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/CodeContent.h>
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

CodeContent::CodeContent() : 
    m_textContentHasBeenSet(false),
    m_zipFileContentHasBeenSet(false),
    m_s3ContentLocationHasBeenSet(false)
{
}

CodeContent::CodeContent(JsonView jsonValue) : 
    m_textContentHasBeenSet(false),
    m_zipFileContentHasBeenSet(false),
    m_s3ContentLocationHasBeenSet(false)
{
  *this = jsonValue;
}

CodeContent& CodeContent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TextContent"))
  {
    m_textContent = jsonValue.GetString("TextContent");

    m_textContentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ZipFileContent"))
  {
    m_zipFileContent = HashingUtils::Base64Decode(jsonValue.GetString("ZipFileContent"));
    m_zipFileContentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3ContentLocation"))
  {
    m_s3ContentLocation = jsonValue.GetObject("S3ContentLocation");

    m_s3ContentLocationHasBeenSet = true;
  }

  return *this;
}

JsonValue CodeContent::Jsonize() const
{
  JsonValue payload;

  if(m_textContentHasBeenSet)
  {
   payload.WithString("TextContent", m_textContent);

  }

  if(m_zipFileContentHasBeenSet)
  {
   payload.WithString("ZipFileContent", HashingUtils::Base64Encode(m_zipFileContent));
  }

  if(m_s3ContentLocationHasBeenSet)
  {
   payload.WithObject("S3ContentLocation", m_s3ContentLocation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
