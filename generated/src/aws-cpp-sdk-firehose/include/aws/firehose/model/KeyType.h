/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Firehose
{
namespace Model
{
  enum class KeyType
  {
    NOT_SET,
    AWS_OWNED_CMK,
    CUSTOMER_MANAGED_CMK
  };

namespace KeyTypeMapper
{
AWS_FIREHOSE_API KeyType GetKeyTypeForName(const Aws::String& name);

AWS_FIREHOSE_API Aws::String GetNameForKeyType(KeyType value);
} // namespace KeyTypeMapper
} // namespace Model
} // namespace Firehose
} // namespace Aws
