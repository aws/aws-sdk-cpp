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
#include <aws/iot/model/S3Action.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

S3Action::S3Action() : 
    m_roleArnHasBeenSet(false),
    m_bucketNameHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_cannedAcl(CannedAccessControlList::NOT_SET),
    m_cannedAclHasBeenSet(false)
{
}

S3Action::S3Action(const JsonValue& jsonValue) : 
    m_roleArnHasBeenSet(false),
    m_bucketNameHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_cannedAcl(CannedAccessControlList::NOT_SET),
    m_cannedAclHasBeenSet(false)
{
  *this = jsonValue;
}

S3Action& S3Action::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bucketName"))
  {
    m_bucketName = jsonValue.GetString("bucketName");

    m_bucketNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("key"))
  {
    m_key = jsonValue.GetString("key");

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cannedAcl"))
  {
    m_cannedAcl = CannedAccessControlListMapper::GetCannedAccessControlListForName(jsonValue.GetString("cannedAcl"));

    m_cannedAclHasBeenSet = true;
  }

  return *this;
}

JsonValue S3Action::Jsonize() const
{
  JsonValue payload;

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_bucketNameHasBeenSet)
  {
   payload.WithString("bucketName", m_bucketName);

  }

  if(m_keyHasBeenSet)
  {
   payload.WithString("key", m_key);

  }

  if(m_cannedAclHasBeenSet)
  {
   payload.WithString("cannedAcl", CannedAccessControlListMapper::GetNameForCannedAccessControlList(m_cannedAcl));
  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws