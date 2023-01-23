/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudTrail
{
namespace Model
{
  enum class LookupAttributeKey
  {
    NOT_SET,
    EventId,
    EventName,
    ReadOnly,
    Username,
    ResourceType,
    ResourceName,
    EventSource,
    AccessKeyId
  };

namespace LookupAttributeKeyMapper
{
AWS_CLOUDTRAIL_API LookupAttributeKey GetLookupAttributeKeyForName(const Aws::String& name);

AWS_CLOUDTRAIL_API Aws::String GetNameForLookupAttributeKey(LookupAttributeKey value);
} // namespace LookupAttributeKeyMapper
} // namespace Model
} // namespace CloudTrail
} // namespace Aws
