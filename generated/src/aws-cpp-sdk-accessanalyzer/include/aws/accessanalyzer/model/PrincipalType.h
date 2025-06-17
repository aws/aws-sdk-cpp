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
  enum class PrincipalType
  {
    NOT_SET,
    IAM_ROLE,
    IAM_USER
  };

namespace PrincipalTypeMapper
{
AWS_ACCESSANALYZER_API PrincipalType GetPrincipalTypeForName(const Aws::String& name);

AWS_ACCESSANALYZER_API Aws::String GetNameForPrincipalType(PrincipalType value);
} // namespace PrincipalTypeMapper
} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
