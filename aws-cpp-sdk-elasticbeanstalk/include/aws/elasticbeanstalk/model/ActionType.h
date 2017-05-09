/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
