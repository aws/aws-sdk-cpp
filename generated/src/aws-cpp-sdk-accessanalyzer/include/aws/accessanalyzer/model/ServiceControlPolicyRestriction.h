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
  enum class ServiceControlPolicyRestriction
  {
    NOT_SET,
    APPLICABLE,
    FAILED_TO_EVALUATE_SCP,
    NOT_APPLICABLE,
    APPLIED
  };

namespace ServiceControlPolicyRestrictionMapper
{
AWS_ACCESSANALYZER_API ServiceControlPolicyRestriction GetServiceControlPolicyRestrictionForName(const Aws::String& name);

AWS_ACCESSANALYZER_API Aws::String GetNameForServiceControlPolicyRestriction(ServiceControlPolicyRestriction value);
} // namespace ServiceControlPolicyRestrictionMapper
} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
