﻿/**
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
  enum class AzureBlobAuthenticationType
  {
    NOT_SET,
    SAS,
    NONE
  };

namespace AzureBlobAuthenticationTypeMapper
{
AWS_DATASYNC_API AzureBlobAuthenticationType GetAzureBlobAuthenticationTypeForName(const Aws::String& name);

AWS_DATASYNC_API Aws::String GetNameForAzureBlobAuthenticationType(AzureBlobAuthenticationType value);
} // namespace AzureBlobAuthenticationTypeMapper
} // namespace Model
} // namespace DataSync
} // namespace Aws
