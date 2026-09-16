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
enum class ImageBuildType { NOT_SET, docker, buildpack };

namespace ImageBuildTypeMapper {
AWS_ELASTICBEANSTALK_API ImageBuildType GetImageBuildTypeForName(const Aws::String& name);

AWS_ELASTICBEANSTALK_API Aws::String GetNameForImageBuildType(ImageBuildType value);
}  // namespace ImageBuildTypeMapper
}  // namespace Model
}  // namespace ElasticBeanstalk
}  // namespace Aws
