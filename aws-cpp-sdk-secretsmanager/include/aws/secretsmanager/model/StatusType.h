/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SecretsManager
{
namespace Model
{
  enum class StatusType
  {
    NOT_SET,
    InSync,
    Failed,
    InProgress
  };

namespace StatusTypeMapper
{
AWS_SECRETSMANAGER_API StatusType GetStatusTypeForName(const Aws::String& name);

AWS_SECRETSMANAGER_API Aws::String GetNameForStatusType(StatusType value);
} // namespace StatusTypeMapper
} // namespace Model
} // namespace SecretsManager
} // namespace Aws
