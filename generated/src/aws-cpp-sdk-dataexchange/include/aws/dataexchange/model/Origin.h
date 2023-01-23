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
  enum class Origin
  {
    NOT_SET,
    OWNED,
    ENTITLED
  };

namespace OriginMapper
{
AWS_DATAEXCHANGE_API Origin GetOriginForName(const Aws::String& name);

AWS_DATAEXCHANGE_API Aws::String GetNameForOrigin(Origin value);
} // namespace OriginMapper
} // namespace Model
} // namespace DataExchange
} // namespace Aws
