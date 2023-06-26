/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataExchange
{
namespace Model
{
  enum class LFResourceType
  {
    NOT_SET,
    TABLE,
    DATABASE
  };

namespace LFResourceTypeMapper
{
AWS_DATAEXCHANGE_API LFResourceType GetLFResourceTypeForName(const Aws::String& name);

AWS_DATAEXCHANGE_API Aws::String GetNameForLFResourceType(LFResourceType value);
} // namespace LFResourceTypeMapper
} // namespace Model
} // namespace DataExchange
} // namespace Aws
