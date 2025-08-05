/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Bedrock
{
namespace Model
{
  enum class AutomatedReasoningPolicyBuildResultAssetType
  {
    NOT_SET,
    BUILD_LOG,
    QUALITY_REPORT,
    POLICY_DEFINITION
  };

namespace AutomatedReasoningPolicyBuildResultAssetTypeMapper
{
AWS_BEDROCK_API AutomatedReasoningPolicyBuildResultAssetType GetAutomatedReasoningPolicyBuildResultAssetTypeForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForAutomatedReasoningPolicyBuildResultAssetType(AutomatedReasoningPolicyBuildResultAssetType value);
} // namespace AutomatedReasoningPolicyBuildResultAssetTypeMapper
} // namespace Model
} // namespace Bedrock
} // namespace Aws
