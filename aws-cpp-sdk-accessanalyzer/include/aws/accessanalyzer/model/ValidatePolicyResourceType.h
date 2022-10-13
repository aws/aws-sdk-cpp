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
  enum class ValidatePolicyResourceType
  {
    NOT_SET,
    AWS_S3_Bucket,
    AWS_S3_AccessPoint,
    AWS_S3_MultiRegionAccessPoint,
    AWS_S3ObjectLambda_AccessPoint,
    AWS_IAM_AssumeRolePolicyDocument
  };

namespace ValidatePolicyResourceTypeMapper
{
AWS_ACCESSANALYZER_API ValidatePolicyResourceType GetValidatePolicyResourceTypeForName(const Aws::String& name);

AWS_ACCESSANALYZER_API Aws::String GetNameForValidatePolicyResourceType(ValidatePolicyResourceType value);
} // namespace ValidatePolicyResourceTypeMapper
} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
