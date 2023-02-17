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
  enum class OperationType
  {
    NOT_SET,
    START_DEPLOYMENT,
    CREATE_SERVICE,
    PAUSE_SERVICE,
    RESUME_SERVICE,
    DELETE_SERVICE,
    UPDATE_SERVICE
  };

namespace OperationTypeMapper
{
AWS_APPRUNNER_API OperationType GetOperationTypeForName(const Aws::String& name);

AWS_APPRUNNER_API Aws::String GetNameForOperationType(OperationType value);
} // namespace OperationTypeMapper
} // namespace Model
} // namespace AppRunner
} // namespace Aws
