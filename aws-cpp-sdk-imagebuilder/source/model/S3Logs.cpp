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

#include <aws/imagebuilder/model/S3Logs.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

S3Logs::S3Logs() : 
    m_s3BucketNameHasBeenSet(false),
    m_s3KeyPrefixHasBeenSet(false)
{
}

S3Logs::S3Logs(JsonView jsonValue) : 
    m_s3BucketNameHasBeenSet(false),
    m_s3KeyPrefixHasBeenSet(false)
{
  *this = jsonValue;
}

S3Logs& S3Logs::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3BucketName"))
  {
    m_s3BucketName = jsonValue.GetString("s3BucketName");

    m_s3BucketNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3KeyPrefix"))
  {
    m_s3KeyPrefix = jsonValue.GetString("s3KeyPrefix");

    m_s3KeyPrefixHasBeenSet = true;
  }

  return *this;
}

JsonValue S3Logs::Jsonize() const
{
  JsonValue payload;

  if(m_s3BucketNameHasBeenSet)
  {
   payload.WithString("s3BucketName", m_s3BucketName);

  }

  if(m_s3KeyPrefixHasBeenSet)
  {
   payload.WithString("s3KeyPrefix", m_s3KeyPrefix);

  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
