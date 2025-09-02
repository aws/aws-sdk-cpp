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
  enum class AttachmentLimitType
  {
    NOT_SET,
    shared,
    dedicated
  };

namespace AttachmentLimitTypeMapper
{
AWS_EC2_API AttachmentLimitType GetAttachmentLimitTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForAttachmentLimitType(AttachmentLimitType value);
} // namespace AttachmentLimitTypeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
