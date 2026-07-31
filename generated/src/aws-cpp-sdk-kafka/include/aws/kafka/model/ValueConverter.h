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
enum class ValueConverter { NOT_SET, BYTE_ARRAY, JSON, JSON_SCHEMA_GSR, STRING };

namespace ValueConverterMapper {
AWS_KAFKA_API ValueConverter GetValueConverterForName(const Aws::String& name);

AWS_KAFKA_API Aws::String GetNameForValueConverter(ValueConverter value);
}  // namespace ValueConverterMapper
}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
