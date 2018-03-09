﻿/*
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
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MQ
{
namespace Model
{
  enum class DeploymentMode
  {
    NOT_SET,
    SINGLE_INSTANCE,
    ACTIVE_STANDBY_MULTI_AZ
  };

namespace DeploymentModeMapper
{
AWS_MQ_API DeploymentMode GetDeploymentModeForName(const Aws::String& name);

AWS_MQ_API Aws::String GetNameForDeploymentMode(DeploymentMode value);
} // namespace DeploymentModeMapper
} // namespace Model
} // namespace MQ
} // namespace Aws
