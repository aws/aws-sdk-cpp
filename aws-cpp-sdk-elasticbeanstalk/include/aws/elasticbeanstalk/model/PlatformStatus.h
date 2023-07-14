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
  enum class PlatformStatus
  {
    NOT_SET,
    Creating,
    Failed,
    Ready,
    Deleting,
    Deleted
  };

namespace PlatformStatusMapper
{
AWS_ELASTICBEANSTALK_API PlatformStatus GetPlatformStatusForName(const Aws::String& name);

AWS_ELASTICBEANSTALK_API Aws::String GetNameForPlatformStatus(PlatformStatus value);
} // namespace PlatformStatusMapper
} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
