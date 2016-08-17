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
#include <aws/codepipeline/model/S3ArtifactLocation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

S3ArtifactLocation::S3ArtifactLocation() : 
    m_bucketNameHasBeenSet(false),
    m_objectKeyHasBeenSet(false)
{
}

S3ArtifactLocation::S3ArtifactLocation(const JsonValue& jsonValue) : 
    m_bucketNameHasBeenSet(false),
    m_objectKeyHasBeenSet(false)
{
  *this = jsonValue;
}

S3ArtifactLocation& S3ArtifactLocation::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("bucketName"))
  {
    m_bucketName = jsonValue.GetString("bucketName");

    m_bucketNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("objectKey"))
  {
    m_objectKey = jsonValue.GetString("objectKey");

    m_objectKeyHasBeenSet = true;
  }

  return *this;
}

JsonValue S3ArtifactLocation::Jsonize() const
{
  JsonValue payload;

  if(m_bucketNameHasBeenSet)
  {
   payload.WithString("bucketName", m_bucketName);

  }

  if(m_objectKeyHasBeenSet)
  {
   payload.WithString("objectKey", m_objectKey);

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws