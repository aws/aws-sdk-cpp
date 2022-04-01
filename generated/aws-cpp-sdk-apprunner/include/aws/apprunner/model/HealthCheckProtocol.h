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
  enum class HealthCheckProtocol
  {
    NOT_SET,
    TCP,
    HTTP
  };

namespace HealthCheckProtocolMapper
{
AWS_APPRUNNER_API HealthCheckProtocol GetHealthCheckProtocolForName(const Aws::String& name);

AWS_APPRUNNER_API Aws::String GetNameForHealthCheckProtocol(HealthCheckProtocol value);
} // namespace HealthCheckProtocolMapper
} // namespace Model
} // namespace AppRunner
} // namespace Aws
