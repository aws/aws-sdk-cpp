/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/EncryptionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

EncryptionConfiguration::EncryptionConfiguration() : 
    m_s3EncryptionHasBeenSet(false),
    m_cloudWatchEncryptionHasBeenSet(false),
    m_jobBookmarksEncryptionHasBeenSet(false)
{
}

EncryptionConfiguration::EncryptionConfiguration(JsonView jsonValue) : 
    m_s3EncryptionHasBeenSet(false),
    m_cloudWatchEncryptionHasBeenSet(false),
    m_jobBookmarksEncryptionHasBeenSet(false)
{
  *this = jsonValue;
}

EncryptionConfiguration& EncryptionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3Encryption"))
  {
    Aws::Utils::Array<JsonView> s3EncryptionJsonList = jsonValue.GetArray("S3Encryption");
    for(unsigned s3EncryptionIndex = 0; s3EncryptionIndex < s3EncryptionJsonList.GetLength(); ++s3EncryptionIndex)
    {
      m_s3Encryption.push_back(s3EncryptionJsonList[s3EncryptionIndex].AsObject());
    }
    m_s3EncryptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CloudWatchEncryption"))
  {
    m_cloudWatchEncryption = jsonValue.GetObject("CloudWatchEncryption");

    m_cloudWatchEncryptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JobBookmarksEncryption"))
  {
    m_jobBookmarksEncryption = jsonValue.GetObject("JobBookmarksEncryption");

    m_jobBookmarksEncryptionHasBeenSet = true;
  }

  return *this;
}

JsonValue EncryptionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_s3EncryptionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> s3EncryptionJsonList(m_s3Encryption.size());
   for(unsigned s3EncryptionIndex = 0; s3EncryptionIndex < s3EncryptionJsonList.GetLength(); ++s3EncryptionIndex)
   {
     s3EncryptionJsonList[s3EncryptionIndex].AsObject(m_s3Encryption[s3EncryptionIndex].Jsonize());
   }
   payload.WithArray("S3Encryption", std::move(s3EncryptionJsonList));

  }

  if(m_cloudWatchEncryptionHasBeenSet)
  {
   payload.WithObject("CloudWatchEncryption", m_cloudWatchEncryption.Jsonize());

  }

  if(m_jobBookmarksEncryptionHasBeenSet)
  {
   payload.WithObject("JobBookmarksEncryption", m_jobBookmarksEncryption.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
