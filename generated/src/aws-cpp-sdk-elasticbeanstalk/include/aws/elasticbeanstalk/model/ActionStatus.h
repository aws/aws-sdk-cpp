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
  enum class ActionStatus
  {
    NOT_SET,
    Scheduled,
    Pending,
    Running,
    Unknown
  };

namespace ActionStatusMapper
{
AWS_ELASTICBEANSTALK_API ActionStatus GetActionStatusForName(const Aws::String& name);

AWS_ELASTICBEANSTALK_API Aws::String GetNameForActionStatus(ActionStatus value);
} // namespace ActionStatusMapper
} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
