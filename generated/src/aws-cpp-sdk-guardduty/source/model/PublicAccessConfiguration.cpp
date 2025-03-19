/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/PublicAccessConfiguration.h>
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

PublicAccessConfiguration::PublicAccessConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

PublicAccessConfiguration& PublicAccessConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("publicAclAccess"))
  {
    m_publicAclAccess = PublicAccessStatusMapper::GetPublicAccessStatusForName(jsonValue.GetString("publicAclAccess"));
    m_publicAclAccessHasBeenSet = true;
  }
  if(jsonValue.ValueExists("publicPolicyAccess"))
  {
    m_publicPolicyAccess = PublicAccessStatusMapper::GetPublicAccessStatusForName(jsonValue.GetString("publicPolicyAccess"));
    m_publicPolicyAccessHasBeenSet = true;
  }
  if(jsonValue.ValueExists("publicAclIgnoreBehavior"))
  {
    m_publicAclIgnoreBehavior = PublicAclIgnoreBehaviorMapper::GetPublicAclIgnoreBehaviorForName(jsonValue.GetString("publicAclIgnoreBehavior"));
    m_publicAclIgnoreBehaviorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("publicBucketRestrictBehavior"))
  {
    m_publicBucketRestrictBehavior = PublicBucketRestrictBehaviorMapper::GetPublicBucketRestrictBehaviorForName(jsonValue.GetString("publicBucketRestrictBehavior"));
    m_publicBucketRestrictBehaviorHasBeenSet = true;
  }
  return *this;
}

JsonValue PublicAccessConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_publicAclAccessHasBeenSet)
  {
   payload.WithString("publicAclAccess", PublicAccessStatusMapper::GetNameForPublicAccessStatus(m_publicAclAccess));
  }

  if(m_publicPolicyAccessHasBeenSet)
  {
   payload.WithString("publicPolicyAccess", PublicAccessStatusMapper::GetNameForPublicAccessStatus(m_publicPolicyAccess));
  }

  if(m_publicAclIgnoreBehaviorHasBeenSet)
  {
   payload.WithString("publicAclIgnoreBehavior", PublicAclIgnoreBehaviorMapper::GetNameForPublicAclIgnoreBehavior(m_publicAclIgnoreBehavior));
  }

  if(m_publicBucketRestrictBehaviorHasBeenSet)
  {
   payload.WithString("publicBucketRestrictBehavior", PublicBucketRestrictBehaviorMapper::GetNameForPublicBucketRestrictBehavior(m_publicBucketRestrictBehavior));
  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
