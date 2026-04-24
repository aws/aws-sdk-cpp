/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>

namespace Aws {
namespace ElasticBeanstalk {
namespace Model {
enum class EnvironmentHealth { NOT_SET, Green, Yellow, Red, Grey };

namespace EnvironmentHealthMapper {
AWS_ELASTICBEANSTALK_API EnvironmentHealth GetEnvironmentHealthForName(const Aws::String& name);

AWS_ELASTICBEANSTALK_API Aws::String GetNameForEnvironmentHealth(EnvironmentHealth value);
}  // namespace EnvironmentHealthMapper
}  // namespace Model
}  // namespace ElasticBeanstalk
}  // namespace Aws
