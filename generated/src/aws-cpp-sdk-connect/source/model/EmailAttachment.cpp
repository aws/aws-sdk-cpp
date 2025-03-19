/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EmailAttachment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

EmailAttachment::EmailAttachment(JsonView jsonValue)
{
  *this = jsonValue;
}

EmailAttachment& EmailAttachment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FileName"))
  {
    m_fileName = jsonValue.GetString("FileName");
    m_fileNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("S3Url"))
  {
    m_s3Url = jsonValue.GetString("S3Url");
    m_s3UrlHasBeenSet = true;
  }
  return *this;
}

JsonValue EmailAttachment::Jsonize() const
{
  JsonValue payload;

  if(m_fileNameHasBeenSet)
  {
   payload.WithString("FileName", m_fileName);

  }

  if(m_s3UrlHasBeenSet)
  {
   payload.WithString("S3Url", m_s3Url);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
