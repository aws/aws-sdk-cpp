/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesis/Kinesis_EXPORTS.h>

namespace Aws {
namespace Kinesis {
namespace Model {
enum class ChannelDestinationType { NOT_SET, S3, S3_TABLES };

namespace ChannelDestinationTypeMapper {
AWS_KINESIS_API ChannelDestinationType GetChannelDestinationTypeForName(const Aws::String& name);

AWS_KINESIS_API Aws::String GetNameForChannelDestinationType(ChannelDestinationType value);
}  // namespace ChannelDestinationTypeMapper
}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
