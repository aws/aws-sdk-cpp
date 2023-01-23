/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{
  enum class ComputeType
  {
    NOT_SET,
    BUILD_GENERAL1_SMALL,
    BUILD_GENERAL1_MEDIUM,
    BUILD_GENERAL1_LARGE
  };

namespace ComputeTypeMapper
{
AWS_ELASTICBEANSTALK_API ComputeType GetComputeTypeForName(const Aws::String& name);

AWS_ELASTICBEANSTALK_API Aws::String GetNameForComputeType(ComputeType value);
} // namespace ComputeTypeMapper
} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
