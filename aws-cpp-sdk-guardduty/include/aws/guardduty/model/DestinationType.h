/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GuardDuty
{
namespace Model
{
  enum class DestinationType
  {
    NOT_SET,
    S3
  };

namespace DestinationTypeMapper
{
AWS_GUARDDUTY_API DestinationType GetDestinationTypeForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForDestinationType(DestinationType value);
} // namespace DestinationTypeMapper
} // namespace Model
} // namespace GuardDuty
} // namespace Aws
