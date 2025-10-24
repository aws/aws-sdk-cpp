/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/firehose/Firehose_EXPORTS.h>

namespace Aws {
namespace Firehose {
namespace Model {
enum class ProcessorType {
  NOT_SET,
  RecordDeAggregation,
  Decompression,
  CloudWatchLogProcessing,
  Lambda,
  MetadataExtraction,
  AppendDelimiterToRecord
};

namespace ProcessorTypeMapper {
AWS_FIREHOSE_API ProcessorType GetProcessorTypeForName(const Aws::String& name);

AWS_FIREHOSE_API Aws::String GetNameForProcessorType(ProcessorType value);
}  // namespace ProcessorTypeMapper
}  // namespace Model
}  // namespace Firehose
}  // namespace Aws
