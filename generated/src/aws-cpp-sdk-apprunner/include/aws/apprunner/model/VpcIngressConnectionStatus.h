/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppRunner
{
namespace Model
{
  enum class VpcIngressConnectionStatus
  {
    NOT_SET,
    AVAILABLE,
    PENDING_CREATION,
    PENDING_UPDATE,
    PENDING_DELETION,
    FAILED_CREATION,
    FAILED_UPDATE,
    FAILED_DELETION,
    DELETED
  };

namespace VpcIngressConnectionStatusMapper
{
AWS_APPRUNNER_API VpcIngressConnectionStatus GetVpcIngressConnectionStatusForName(const Aws::String& name);

AWS_APPRUNNER_API Aws::String GetNameForVpcIngressConnectionStatus(VpcIngressConnectionStatus value);
} // namespace VpcIngressConnectionStatusMapper
} // namespace Model
} // namespace AppRunner
} // namespace Aws
