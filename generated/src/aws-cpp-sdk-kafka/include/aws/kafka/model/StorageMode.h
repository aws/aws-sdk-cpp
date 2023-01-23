/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Kafka
{
namespace Model
{
  enum class StorageMode
  {
    NOT_SET,
    LOCAL,
    TIERED
  };

namespace StorageModeMapper
{
AWS_KAFKA_API StorageMode GetStorageModeForName(const Aws::String& name);

AWS_KAFKA_API Aws::String GetNameForStorageMode(StorageMode value);
} // namespace StorageModeMapper
} // namespace Model
} // namespace Kafka
} // namespace Aws
