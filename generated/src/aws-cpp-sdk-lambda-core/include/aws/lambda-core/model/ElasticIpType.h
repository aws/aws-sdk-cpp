/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda-core/LambdaCore_EXPORTS.h>

namespace Aws {
namespace LambdaCore {
namespace Model {
enum class ElasticIpType { NOT_SET, None, ServiceManaged };

namespace ElasticIpTypeMapper {
AWS_LAMBDACORE_API ElasticIpType GetElasticIpTypeForName(const Aws::String& name);

AWS_LAMBDACORE_API Aws::String GetNameForElasticIpType(ElasticIpType value);
}  // namespace ElasticIpTypeMapper
}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
