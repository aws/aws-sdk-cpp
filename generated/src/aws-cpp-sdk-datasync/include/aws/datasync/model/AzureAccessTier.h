/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataSync
{
namespace Model
{
  enum class AzureAccessTier
  {
    NOT_SET,
    HOT,
    COOL,
    ARCHIVE
  };

namespace AzureAccessTierMapper
{
AWS_DATASYNC_API AzureAccessTier GetAzureAccessTierForName(const Aws::String& name);

AWS_DATASYNC_API Aws::String GetNameForAzureAccessTier(AzureAccessTier value);
} // namespace AzureAccessTierMapper
} // namespace Model
} // namespace DataSync
} // namespace Aws
