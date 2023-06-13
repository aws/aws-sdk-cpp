/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-security/CodeGuruSecurity_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeGuruSecurity
{
namespace Model
{
  enum class Severity
  {
    NOT_SET,
    Critical,
    High,
    Medium,
    Low,
    Info
  };

namespace SeverityMapper
{
AWS_CODEGURUSECURITY_API Severity GetSeverityForName(const Aws::String& name);

AWS_CODEGURUSECURITY_API Aws::String GetNameForSeverity(Severity value);
} // namespace SeverityMapper
} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
