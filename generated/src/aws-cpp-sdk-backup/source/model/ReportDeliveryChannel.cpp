/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/ReportDeliveryChannel.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Backup
{
namespace Model
{

ReportDeliveryChannel::ReportDeliveryChannel() : 
    m_s3BucketNameHasBeenSet(false),
    m_s3KeyPrefixHasBeenSet(false),
    m_formatsHasBeenSet(false)
{
}

ReportDeliveryChannel::ReportDeliveryChannel(JsonView jsonValue) : 
    m_s3BucketNameHasBeenSet(false),
    m_s3KeyPrefixHasBeenSet(false),
    m_formatsHasBeenSet(false)
{
  *this = jsonValue;
}

ReportDeliveryChannel& ReportDeliveryChannel::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3BucketName"))
  {
    m_s3BucketName = jsonValue.GetString("S3BucketName");

    m_s3BucketNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3KeyPrefix"))
  {
    m_s3KeyPrefix = jsonValue.GetString("S3KeyPrefix");

    m_s3KeyPrefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Formats"))
  {
    Aws::Utils::Array<JsonView> formatsJsonList = jsonValue.GetArray("Formats");
    for(unsigned formatsIndex = 0; formatsIndex < formatsJsonList.GetLength(); ++formatsIndex)
    {
      m_formats.push_back(formatsJsonList[formatsIndex].AsString());
    }
    m_formatsHasBeenSet = true;
  }

  return *this;
}

JsonValue ReportDeliveryChannel::Jsonize() const
{
  JsonValue payload;

  if(m_s3BucketNameHasBeenSet)
  {
   payload.WithString("S3BucketName", m_s3BucketName);

  }

  if(m_s3KeyPrefixHasBeenSet)
  {
   payload.WithString("S3KeyPrefix", m_s3KeyPrefix);

  }

  if(m_formatsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> formatsJsonList(m_formats.size());
   for(unsigned formatsIndex = 0; formatsIndex < formatsJsonList.GetLength(); ++formatsIndex)
   {
     formatsJsonList[formatsIndex].AsString(m_formats[formatsIndex]);
   }
   payload.WithArray("Formats", std::move(formatsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Backup
} // namespace Aws
