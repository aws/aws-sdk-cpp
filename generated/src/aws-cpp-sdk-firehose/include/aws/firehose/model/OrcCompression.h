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
enum class OrcCompression { NOT_SET, NONE, ZLIB, SNAPPY };

namespace OrcCompressionMapper {
AWS_FIREHOSE_API OrcCompression GetOrcCompressionForName(const Aws::String& name);

AWS_FIREHOSE_API Aws::String GetNameForOrcCompression(OrcCompression value);
}  // namespace OrcCompressionMapper
}  // namespace Model
}  // namespace Firehose
}  // namespace Aws
