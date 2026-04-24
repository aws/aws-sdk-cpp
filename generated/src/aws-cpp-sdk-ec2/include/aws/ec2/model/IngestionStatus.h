/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>

namespace Aws {
namespace EC2 {
namespace Model {
enum class IngestionStatus { NOT_SET, initial_ingestion_in_progress, ingestion_complete, ingestion_failed };

namespace IngestionStatusMapper {
AWS_EC2_API IngestionStatus GetIngestionStatusForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForIngestionStatus(IngestionStatus value);
}  // namespace IngestionStatusMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
