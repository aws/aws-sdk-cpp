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
  enum class ApplicationVersionStatus
  {
    NOT_SET,
    Processed,
    Unprocessed,
    Failed,
    Processing,
    Building
  };

namespace ApplicationVersionStatusMapper
{
AWS_ELASTICBEANSTALK_API ApplicationVersionStatus GetApplicationVersionStatusForName(const Aws::String& name);

AWS_ELASTICBEANSTALK_API Aws::String GetNameForApplicationVersionStatus(ApplicationVersionStatus value);
} // namespace ApplicationVersionStatusMapper
} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
