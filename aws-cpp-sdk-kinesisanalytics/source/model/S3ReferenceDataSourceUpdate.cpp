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
#include <aws/kinesisanalytics/model/S3ReferenceDataSourceUpdate.h>
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

S3ReferenceDataSourceUpdate::S3ReferenceDataSourceUpdate() : 
    m_bucketARNUpdateHasBeenSet(false),
    m_fileKeyUpdateHasBeenSet(false),
    m_referenceRoleARNUpdateHasBeenSet(false)
{
}

S3ReferenceDataSourceUpdate::S3ReferenceDataSourceUpdate(const JsonValue& jsonValue) : 
    m_bucketARNUpdateHasBeenSet(false),
    m_fileKeyUpdateHasBeenSet(false),
    m_referenceRoleARNUpdateHasBeenSet(false)
{
  *this = jsonValue;
}

S3ReferenceDataSourceUpdate& S3ReferenceDataSourceUpdate::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("BucketARNUpdate"))
  {
    m_bucketARNUpdate = jsonValue.GetString("BucketARNUpdate");

    m_bucketARNUpdateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FileKeyUpdate"))
  {
    m_fileKeyUpdate = jsonValue.GetString("FileKeyUpdate");

    m_fileKeyUpdateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReferenceRoleARNUpdate"))
  {
    m_referenceRoleARNUpdate = jsonValue.GetString("ReferenceRoleARNUpdate");

    m_referenceRoleARNUpdateHasBeenSet = true;
  }

  return *this;
}

JsonValue S3ReferenceDataSourceUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_bucketARNUpdateHasBeenSet)
  {
   payload.WithString("BucketARNUpdate", m_bucketARNUpdate);

  }

  if(m_fileKeyUpdateHasBeenSet)
  {
   payload.WithString("FileKeyUpdate", m_fileKeyUpdate);

  }

  if(m_referenceRoleARNUpdateHasBeenSet)
  {
   payload.WithString("ReferenceRoleARNUpdate", m_referenceRoleARNUpdate);

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws