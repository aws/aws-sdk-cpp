﻿/*
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

#include <aws/kinesisanalytics/model/S3Configuration.h>
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

S3Configuration::S3Configuration() : 
    m_roleARNHasBeenSet(false),
    m_bucketARNHasBeenSet(false),
    m_fileKeyHasBeenSet(false)
{
}

S3Configuration::S3Configuration(JsonView jsonValue) : 
    m_roleARNHasBeenSet(false),
    m_bucketARNHasBeenSet(false),
    m_fileKeyHasBeenSet(false)
{
  *this = jsonValue;
}

S3Configuration& S3Configuration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RoleARN"))
  {
    m_roleARN = jsonValue.GetString("RoleARN");

    m_roleARNHasBeenSet = true;
  }

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

  return *this;
}

JsonValue S3Configuration::Jsonize() const
{
  JsonValue payload;

  if(m_roleARNHasBeenSet)
  {
   payload.WithString("RoleARN", m_roleARN);

  }

  if(m_bucketARNHasBeenSet)
  {
   payload.WithString("BucketARN", m_bucketARN);

  }

  if(m_fileKeyHasBeenSet)
  {
   payload.WithString("FileKey", m_fileKey);

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
