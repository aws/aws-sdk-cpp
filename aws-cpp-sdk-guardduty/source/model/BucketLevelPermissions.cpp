/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
