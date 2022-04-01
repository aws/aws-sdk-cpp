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
  enum class ActionType
  {
    NOT_SET,
    InstanceRefresh,
    PlatformUpdate,
    Unknown
  };

namespace ActionTypeMapper
{
AWS_ELASTICBEANSTALK_API ActionType GetActionTypeForName(const Aws::String& name);

AWS_ELASTICBEANSTALK_API Aws::String GetNameForActionType(ActionType value);
} // namespace ActionTypeMapper
} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
