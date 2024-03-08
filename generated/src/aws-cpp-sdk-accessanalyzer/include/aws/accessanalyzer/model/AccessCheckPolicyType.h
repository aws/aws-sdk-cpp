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
  enum class AccessCheckPolicyType
  {
    NOT_SET,
    IDENTITY_POLICY,
    RESOURCE_POLICY
  };

namespace AccessCheckPolicyTypeMapper
{
AWS_ACCESSANALYZER_API AccessCheckPolicyType GetAccessCheckPolicyTypeForName(const Aws::String& name);

AWS_ACCESSANALYZER_API Aws::String GetNameForAccessCheckPolicyType(AccessCheckPolicyType value);
} // namespace AccessCheckPolicyTypeMapper
} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
