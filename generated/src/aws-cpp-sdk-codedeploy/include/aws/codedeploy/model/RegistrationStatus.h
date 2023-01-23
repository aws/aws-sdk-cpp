/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{
  enum class RegistrationStatus
  {
    NOT_SET,
    Registered,
    Deregistered
  };

namespace RegistrationStatusMapper
{
AWS_CODEDEPLOY_API RegistrationStatus GetRegistrationStatusForName(const Aws::String& name);

AWS_CODEDEPLOY_API Aws::String GetNameForRegistrationStatus(RegistrationStatus value);
} // namespace RegistrationStatusMapper
} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
