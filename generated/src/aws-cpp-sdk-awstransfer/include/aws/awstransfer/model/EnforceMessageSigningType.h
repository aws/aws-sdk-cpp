/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Transfer
{
namespace Model
{
  enum class EnforceMessageSigningType
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace EnforceMessageSigningTypeMapper
{
AWS_TRANSFER_API EnforceMessageSigningType GetEnforceMessageSigningTypeForName(const Aws::String& name);

AWS_TRANSFER_API Aws::String GetNameForEnforceMessageSigningType(EnforceMessageSigningType value);
} // namespace EnforceMessageSigningTypeMapper
} // namespace Model
} // namespace Transfer
} // namespace Aws
