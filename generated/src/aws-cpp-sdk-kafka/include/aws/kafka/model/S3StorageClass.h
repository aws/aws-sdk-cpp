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
enum class S3StorageClass { NOT_SET, STANDARD, INTELLIGENT_TIERING, GLACIER_IR };

namespace S3StorageClassMapper {
AWS_KAFKA_API S3StorageClass GetS3StorageClassForName(const Aws::String& name);

AWS_KAFKA_API Aws::String GetNameForS3StorageClass(S3StorageClass value);
}  // namespace S3StorageClassMapper
}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
