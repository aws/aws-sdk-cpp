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
  enum class PolicyType
  {
    NOT_SET,
    IDENTITY_POLICY,
    RESOURCE_POLICY,
    SERVICE_CONTROL_POLICY
  };

namespace PolicyTypeMapper
{
AWS_ACCESSANALYZER_API PolicyType GetPolicyTypeForName(const Aws::String& name);

AWS_ACCESSANALYZER_API Aws::String GetNameForPolicyType(PolicyType value);
} // namespace PolicyTypeMapper
} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
