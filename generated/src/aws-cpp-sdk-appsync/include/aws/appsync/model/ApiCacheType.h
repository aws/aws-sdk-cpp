/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppSync
{
namespace Model
{
  enum class ApiCacheType
  {
    NOT_SET,
    T2_SMALL,
    T2_MEDIUM,
    R4_LARGE,
    R4_XLARGE,
    R4_2XLARGE,
    R4_4XLARGE,
    R4_8XLARGE,
    SMALL,
    MEDIUM,
    LARGE,
    XLARGE,
    LARGE_2X,
    LARGE_4X,
    LARGE_8X,
    LARGE_12X
  };

namespace ApiCacheTypeMapper
{
AWS_APPSYNC_API ApiCacheType GetApiCacheTypeForName(const Aws::String& name);

AWS_APPSYNC_API Aws::String GetNameForApiCacheType(ApiCacheType value);
} // namespace ApiCacheTypeMapper
} // namespace Model
} // namespace AppSync
} // namespace Aws
