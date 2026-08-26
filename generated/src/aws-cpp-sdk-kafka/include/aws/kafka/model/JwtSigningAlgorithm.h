/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/Kafka_EXPORTS.h>

namespace Aws {
namespace Kafka {
namespace Model {
enum class JwtSigningAlgorithm { NOT_SET, RS256, ES384 };

namespace JwtSigningAlgorithmMapper {
AWS_KAFKA_API JwtSigningAlgorithm GetJwtSigningAlgorithmForName(const Aws::String& name);

AWS_KAFKA_API Aws::String GetNameForJwtSigningAlgorithm(JwtSigningAlgorithm value);
}  // namespace JwtSigningAlgorithmMapper
}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
