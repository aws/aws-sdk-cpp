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
  enum class AutoAcceptSharedAssociationsValue
  {
    NOT_SET,
    enable,
    disable
  };

namespace AutoAcceptSharedAssociationsValueMapper
{
AWS_EC2_API AutoAcceptSharedAssociationsValue GetAutoAcceptSharedAssociationsValueForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForAutoAcceptSharedAssociationsValue(AutoAcceptSharedAssociationsValue value);
} // namespace AutoAcceptSharedAssociationsValueMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
