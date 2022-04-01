/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EKS
{
namespace Model
{
  enum class LogType
  {
    NOT_SET,
    api,
    audit,
    authenticator,
    controllerManager,
    scheduler
  };

namespace LogTypeMapper
{
AWS_EKS_API LogType GetLogTypeForName(const Aws::String& name);

AWS_EKS_API Aws::String GetNameForLogType(LogType value);
} // namespace LogTypeMapper
} // namespace Model
} // namespace EKS
} // namespace Aws
