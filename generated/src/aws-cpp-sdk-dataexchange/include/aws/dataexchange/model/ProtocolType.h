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
  enum class ProtocolType
  {
    NOT_SET,
    REST
  };

namespace ProtocolTypeMapper
{
AWS_DATAEXCHANGE_API ProtocolType GetProtocolTypeForName(const Aws::String& name);

AWS_DATAEXCHANGE_API Aws::String GetNameForProtocolType(ProtocolType value);
} // namespace ProtocolTypeMapper
} // namespace Model
} // namespace DataExchange
} // namespace Aws
