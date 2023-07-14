/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{
  enum class Type
  {
    NOT_SET,
    ACCOUNT,
    ORGANIZATION
  };

namespace TypeMapper
{
AWS_ACCESSANALYZER_API Type GetTypeForName(const Aws::String& name);

AWS_ACCESSANALYZER_API Aws::String GetNameForType(Type value);
} // namespace TypeMapper
} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
