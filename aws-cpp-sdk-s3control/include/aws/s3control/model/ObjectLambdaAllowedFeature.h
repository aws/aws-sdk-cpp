/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace S3Control
{
namespace Model
{
  enum class ObjectLambdaAllowedFeature
  {
    NOT_SET,
    GetObject_Range,
    GetObject_PartNumber,
    HeadObject_Range,
    HeadObject_PartNumber
  };

namespace ObjectLambdaAllowedFeatureMapper
{
AWS_S3CONTROL_API ObjectLambdaAllowedFeature GetObjectLambdaAllowedFeatureForName(const Aws::String& name);

AWS_S3CONTROL_API Aws::String GetNameForObjectLambdaAllowedFeature(ObjectLambdaAllowedFeature value);
} // namespace ObjectLambdaAllowedFeatureMapper
} // namespace Model
} // namespace S3Control
} // namespace Aws
