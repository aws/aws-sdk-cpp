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
  enum class ActionHistoryStatus
  {
    NOT_SET,
    Completed,
    Failed,
    Unknown
  };

namespace ActionHistoryStatusMapper
{
AWS_ELASTICBEANSTALK_API ActionHistoryStatus GetActionHistoryStatusForName(const Aws::String& name);

AWS_ELASTICBEANSTALK_API Aws::String GetNameForActionHistoryStatus(ActionHistoryStatus value);
} // namespace ActionHistoryStatusMapper
} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
