/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/internetmonitor/InternetMonitor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace InternetMonitor
{
namespace Model
{
  enum class Operator
  {
    NOT_SET,
    EQUALS,
    NOT_EQUALS
  };

namespace OperatorMapper
{
AWS_INTERNETMONITOR_API Operator GetOperatorForName(const Aws::String& name);

AWS_INTERNETMONITOR_API Aws::String GetNameForOperator(Operator value);
} // namespace OperatorMapper
} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
