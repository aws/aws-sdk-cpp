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
  enum class ResourceType
  {
    NOT_SET,
    AWS_S3_Bucket,
    AWS_IAM_Role,
    AWS_SQS_Queue,
    AWS_Lambda_Function,
    AWS_Lambda_LayerVersion,
    AWS_KMS_Key
  };

namespace ResourceTypeMapper
{
AWS_ACCESSANALYZER_API ResourceType GetResourceTypeForName(const Aws::String& name);

AWS_ACCESSANALYZER_API Aws::String GetNameForResourceType(ResourceType value);
} // namespace ResourceTypeMapper
} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
