/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/kinesisanalytics/model/S3ReferenceDataSourceDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisAnalytics
{
namespace Model
{

S3ReferenceDataSourceDescription::S3ReferenceDataSourceDescription() : 
    m_bucketARNHasBeenSet(false),
    m_fileKeyHasBeenSet(false),
    m_referenceRoleARNHasBeenSet(false)
{
}

S3ReferenceDataSourceDescription::S3ReferenceDataSourceDescription(const JsonValue& jsonValue) : 
    m_bucketARNHasBeenSet(false),
    m_fileKeyHasBeenSet(false),
    m_referenceRoleARNHasBeenSet(false)
{
  *this = jsonValue;
}

S3ReferenceDataSourceDescription& S3ReferenceDataSourceDescription::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("BucketARN"))
  {
    m_bucketARN = jsonValue.GetString("BucketARN");

    m_bucketARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FileKey"))
  {
    m_fileKey = jsonValue.GetString("FileKey");

    m_fileKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReferenceRoleARN"))
  {
    m_referenceRoleARN = jsonValue.GetString("ReferenceRoleARN");

    m_referenceRoleARNHasBeenSet = true;
  }

  return *this;
}

JsonValue S3ReferenceDataSourceDescription::Jsonize() const
{
  JsonValue payload;

  if(m_bucketARNHasBeenSet)
  {
   payload.WithString("BucketARN", m_bucketARN);

  }

  if(m_fileKeyHasBeenSet)
  {
   payload.WithString("FileKey", m_fileKey);

  }

  if(m_referenceRoleARNHasBeenSet)
  {
   payload.WithString("ReferenceRoleARN", m_referenceRoleARN);

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws