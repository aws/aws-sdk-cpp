/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/ReportDestination.h>
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

ReportDestination::ReportDestination() : 
    m_s3BucketNameHasBeenSet(false),
    m_s3KeysHasBeenSet(false)
{
}

ReportDestination::ReportDestination(JsonView jsonValue) : 
    m_s3BucketNameHasBeenSet(false),
    m_s3KeysHasBeenSet(false)
{
  *this = jsonValue;
}

ReportDestination& ReportDestination::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3BucketName"))
  {
    m_s3BucketName = jsonValue.GetString("S3BucketName");

    m_s3BucketNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3Keys"))
  {
    Aws::Utils::Array<JsonView> s3KeysJsonList = jsonValue.GetArray("S3Keys");
    for(unsigned s3KeysIndex = 0; s3KeysIndex < s3KeysJsonList.GetLength(); ++s3KeysIndex)
    {
      m_s3Keys.push_back(s3KeysJsonList[s3KeysIndex].AsString());
    }
    m_s3KeysHasBeenSet = true;
  }

  return *this;
}

JsonValue ReportDestination::Jsonize() const
{
  JsonValue payload;

  if(m_s3BucketNameHasBeenSet)
  {
   payload.WithString("S3BucketName", m_s3BucketName);

  }

  if(m_s3KeysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> s3KeysJsonList(m_s3Keys.size());
   for(unsigned s3KeysIndex = 0; s3KeysIndex < s3KeysJsonList.GetLength(); ++s3KeysIndex)
   {
     s3KeysJsonList[s3KeysIndex].AsString(m_s3Keys[s3KeysIndex]);
   }
   payload.WithArray("S3Keys", std::move(s3KeysJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Backup
} // namespace Aws
