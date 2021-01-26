/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConfigService
{
namespace Model
{
  enum class ResourceCountGroupKey
  {
    NOT_SET,
    RESOURCE_TYPE,
    ACCOUNT_ID,
    AWS_REGION
  };

namespace ResourceCountGroupKeyMapper
{
AWS_CONFIGSERVICE_API ResourceCountGroupKey GetResourceCountGroupKeyForName(const Aws::String& name);

AWS_CONFIGSERVICE_API Aws::String GetNameForResourceCountGroupKey(ResourceCountGroupKey value);
} // namespace ResourceCountGroupKeyMapper
} // namespace Model
} // namespace ConfigService
} // namespace Aws
