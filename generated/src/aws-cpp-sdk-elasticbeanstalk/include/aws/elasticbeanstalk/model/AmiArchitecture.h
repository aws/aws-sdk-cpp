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
enum class AmiArchitecture { NOT_SET, x86_64, arm64 };

namespace AmiArchitectureMapper {
AWS_ELASTICBEANSTALK_API AmiArchitecture GetAmiArchitectureForName(const Aws::String& name);

AWS_ELASTICBEANSTALK_API Aws::String GetNameForAmiArchitecture(AmiArchitecture value);
}  // namespace AmiArchitectureMapper
}  // namespace Model
}  // namespace ElasticBeanstalk
}  // namespace Aws
