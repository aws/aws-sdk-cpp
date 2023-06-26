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
  enum class DestinationType
  {
    NOT_SET,
    EVENT_DATA_STORE,
    AWS_SERVICE
  };

namespace DestinationTypeMapper
{
AWS_CLOUDTRAIL_API DestinationType GetDestinationTypeForName(const Aws::String& name);

AWS_CLOUDTRAIL_API Aws::String GetNameForDestinationType(DestinationType value);
} // namespace DestinationTypeMapper
} // namespace Model
} // namespace CloudTrail
} // namespace Aws
