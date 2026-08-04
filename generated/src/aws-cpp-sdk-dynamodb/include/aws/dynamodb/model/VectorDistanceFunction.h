/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/DynamoDB_EXPORTS.h>

namespace Aws {
namespace DynamoDB {
namespace Model {
enum class VectorDistanceFunction { NOT_SET, COSINE, DOT_PRODUCT, EUCLIDEAN };

namespace VectorDistanceFunctionMapper {
AWS_DYNAMODB_API VectorDistanceFunction GetVectorDistanceFunctionForName(const Aws::String& name);

AWS_DYNAMODB_API Aws::String GetNameForVectorDistanceFunction(VectorDistanceFunction value);
}  // namespace VectorDistanceFunctionMapper
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
