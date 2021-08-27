/**
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
  enum class ConformancePackState
  {
    NOT_SET,
    CREATE_IN_PROGRESS,
    CREATE_COMPLETE,
    CREATE_FAILED,
    DELETE_IN_PROGRESS,
    DELETE_FAILED
  };

namespace ConformancePackStateMapper
{
AWS_CONFIGSERVICE_API ConformancePackState GetConformancePackStateForName(const Aws::String& name);

AWS_CONFIGSERVICE_API Aws::String GetNameForConformancePackState(ConformancePackState value);
} // namespace ConformancePackStateMapper
} // namespace Model
} // namespace ConfigService
} // namespace Aws
