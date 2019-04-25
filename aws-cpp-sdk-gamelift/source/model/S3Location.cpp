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

#include <aws/gamelift/model/S3Location.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GameLift
{
namespace Model
{

S3Location::S3Location() : 
    m_bucketHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_objectVersionHasBeenSet(false)
{
}

S3Location::S3Location(JsonView jsonValue) : 
    m_bucketHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_objectVersionHasBeenSet(false)
{
  *this = jsonValue;
}

S3Location& S3Location::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Bucket"))
  {
    m_bucket = jsonValue.GetString("Bucket");

    m_bucketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Key"))
  {
    m_key = jsonValue.GetString("Key");

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ObjectVersion"))
  {
    m_objectVersion = jsonValue.GetString("ObjectVersion");

    m_objectVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue S3Location::Jsonize() const
{
  JsonValue payload;

  if(m_bucketHasBeenSet)
  {
   payload.WithString("Bucket", m_bucket);

  }

  if(m_keyHasBeenSet)
  {
   payload.WithString("Key", m_key);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_objectVersionHasBeenSet)
  {
   payload.WithString("ObjectVersion", m_objectVersion);

  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
