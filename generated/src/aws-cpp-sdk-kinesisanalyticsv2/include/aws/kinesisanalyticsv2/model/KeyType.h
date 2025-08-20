/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{
  enum class KeyType
  {
    NOT_SET,
    AWS_OWNED_KEY,
    CUSTOMER_MANAGED_KEY
  };

namespace KeyTypeMapper
{
AWS_KINESISANALYTICSV2_API KeyType GetKeyTypeForName(const Aws::String& name);

AWS_KINESISANALYTICSV2_API Aws::String GetNameForKeyType(KeyType value);
} // namespace KeyTypeMapper
} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
