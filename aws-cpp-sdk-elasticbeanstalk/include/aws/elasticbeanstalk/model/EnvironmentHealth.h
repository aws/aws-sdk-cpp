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
  enum class EnvironmentHealth
  {
    NOT_SET,
    Green,
    Yellow,
    Red,
    Grey
  };

namespace EnvironmentHealthMapper
{
AWS_ELASTICBEANSTALK_API EnvironmentHealth GetEnvironmentHealthForName(const Aws::String& name);

AWS_ELASTICBEANSTALK_API Aws::String GetNameForEnvironmentHealth(EnvironmentHealth value);
} // namespace EnvironmentHealthMapper
} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
