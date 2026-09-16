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
enum class ArchitectureType { NOT_SET, amd64, arm64 };

namespace ArchitectureTypeMapper {
AWS_ELASTICBEANSTALK_API ArchitectureType GetArchitectureTypeForName(const Aws::String& name);

AWS_ELASTICBEANSTALK_API Aws::String GetNameForArchitectureType(ArchitectureType value);
}  // namespace ArchitectureTypeMapper
}  // namespace Model
}  // namespace ElasticBeanstalk
}  // namespace Aws
