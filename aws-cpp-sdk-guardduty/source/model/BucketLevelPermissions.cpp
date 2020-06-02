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

#include <aws/guardduty/model/BucketLevelPermissions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

BucketLevelPermissions::BucketLevelPermissions() : 
    m_accessControlListHasBeenSet(false),
    m_bucketPolicyHasBeenSet(false),
    m_blockPublicAccessHasBeenSet(false)
{
}

BucketLevelPermissions::BucketLevelPermissions(JsonView jsonValue) : 
    m_accessControlListHasBeenSet(false),
    m_bucketPolicyHasBeenSet(false),
    m_blockPublicAccessHasBeenSet(false)
{
  *this = jsonValue;
}

BucketLevelPermissions& BucketLevelPermissions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accessControlList"))
  {
    m_accessControlList = jsonValue.GetObject("accessControlList");

    m_accessControlListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bucketPolicy"))
  {
    m_bucketPolicy = jsonValue.GetObject("bucketPolicy");

    m_bucketPolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("blockPublicAccess"))
  {
    m_blockPublicAccess = jsonValue.GetObject("blockPublicAccess");

    m_blockPublicAccessHasBeenSet = true;
  }

  return *this;
}

JsonValue BucketLevelPermissions::Jsonize() const
{
  JsonValue payload;

  if(m_accessControlListHasBeenSet)
  {
   payload.WithObject("accessControlList", m_accessControlList.Jsonize());

  }

  if(m_bucketPolicyHasBeenSet)
  {
   payload.WithObject("bucketPolicy", m_bucketPolicy.Jsonize());

  }

  if(m_blockPublicAccessHasBeenSet)
  {
   payload.WithObject("blockPublicAccess", m_blockPublicAccess.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
