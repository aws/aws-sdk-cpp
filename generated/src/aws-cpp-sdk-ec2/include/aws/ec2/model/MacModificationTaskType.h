/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EC2
{
namespace Model
{
  enum class MacModificationTaskType
  {
    NOT_SET,
    sip_modification,
    volume_ownership_delegation
  };

namespace MacModificationTaskTypeMapper
{
AWS_EC2_API MacModificationTaskType GetMacModificationTaskTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForMacModificationTaskType(MacModificationTaskType value);
} // namespace MacModificationTaskTypeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
