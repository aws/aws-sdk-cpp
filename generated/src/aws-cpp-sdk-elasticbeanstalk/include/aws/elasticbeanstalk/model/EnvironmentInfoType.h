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
enum class EnvironmentInfoType { NOT_SET, tail, bundle };

namespace EnvironmentInfoTypeMapper {
AWS_ELASTICBEANSTALK_API EnvironmentInfoType GetEnvironmentInfoTypeForName(const Aws::String& name);

AWS_ELASTICBEANSTALK_API Aws::String GetNameForEnvironmentInfoType(EnvironmentInfoType value);
}  // namespace EnvironmentInfoTypeMapper
}  // namespace Model
}  // namespace ElasticBeanstalk
}  // namespace Aws
