/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/ssm/model/LoggingInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

LoggingInfo::LoggingInfo() : 
    m_s3BucketNameHasBeenSet(false),
    m_s3KeyPrefixHasBeenSet(false),
    m_s3RegionHasBeenSet(false)
{
}

LoggingInfo::LoggingInfo(const JsonValue& jsonValue) : 
    m_s3BucketNameHasBeenSet(false),
    m_s3KeyPrefixHasBeenSet(false),
    m_s3RegionHasBeenSet(false)
{
  *this = jsonValue;
}

LoggingInfo& LoggingInfo::operator =(const JsonValue& jsonValue)
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

  if(jsonValue.ValueExists("S3Region"))
  {
    m_s3Region = jsonValue.GetString("S3Region");

    m_s3RegionHasBeenSet = true;
  }

  return *this;
}

JsonValue LoggingInfo::Jsonize() const
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

  if(m_s3RegionHasBeenSet)
  {
   payload.WithString("S3Region", m_s3Region);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws