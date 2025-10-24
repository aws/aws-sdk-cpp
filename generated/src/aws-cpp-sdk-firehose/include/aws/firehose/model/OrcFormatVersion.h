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
enum class OrcFormatVersion { NOT_SET, V0_11, V0_12 };

namespace OrcFormatVersionMapper {
AWS_FIREHOSE_API OrcFormatVersion GetOrcFormatVersionForName(const Aws::String& name);

AWS_FIREHOSE_API Aws::String GetNameForOrcFormatVersion(OrcFormatVersion value);
}  // namespace OrcFormatVersionMapper
}  // namespace Model
}  // namespace Firehose
}  // namespace Aws
