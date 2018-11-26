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

#include <aws/datasync/model/S3Config.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataSync
{
namespace Model
{

S3Config::S3Config() : 
    m_bucketAccessRoleArnHasBeenSet(false)
{
}

S3Config::S3Config(JsonView jsonValue) : 
    m_bucketAccessRoleArnHasBeenSet(false)
{
  *this = jsonValue;
}

S3Config& S3Config::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BucketAccessRoleArn"))
  {
    m_bucketAccessRoleArn = jsonValue.GetString("BucketAccessRoleArn");

    m_bucketAccessRoleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue S3Config::Jsonize() const
{
  JsonValue payload;

  if(m_bucketAccessRoleArnHasBeenSet)
  {
   payload.WithString("BucketAccessRoleArn", m_bucketAccessRoleArn);

  }

  return payload;
}

} // namespace Model
} // namespace DataSync
} // namespace Aws
