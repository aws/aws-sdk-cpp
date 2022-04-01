﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConfigService
{
namespace Model
{
  enum class RemediationTargetType
  {
    NOT_SET,
    SSM_DOCUMENT
  };

namespace RemediationTargetTypeMapper
{
AWS_CONFIGSERVICE_API RemediationTargetType GetRemediationTargetTypeForName(const Aws::String& name);

AWS_CONFIGSERVICE_API Aws::String GetNameForRemediationTargetType(RemediationTargetType value);
} // namespace RemediationTargetTypeMapper
} // namespace Model
} // namespace ConfigService
} // namespace Aws
