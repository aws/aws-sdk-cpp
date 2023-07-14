﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{
  enum class PublisherStatus
  {
    NOT_SET,
    VERIFIED,
    UNVERIFIED
  };

namespace PublisherStatusMapper
{
AWS_CLOUDFORMATION_API PublisherStatus GetPublisherStatusForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForPublisherStatus(PublisherStatus value);
} // namespace PublisherStatusMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
