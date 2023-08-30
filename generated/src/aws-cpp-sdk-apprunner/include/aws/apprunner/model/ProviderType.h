/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppRunner
{
namespace Model
{
  enum class ProviderType
  {
    NOT_SET,
    GITHUB,
    BITBUCKET
  };

namespace ProviderTypeMapper
{
AWS_APPRUNNER_API ProviderType GetProviderTypeForName(const Aws::String& name);

AWS_APPRUNNER_API Aws::String GetNameForProviderType(ProviderType value);
} // namespace ProviderTypeMapper
} // namespace Model
} // namespace AppRunner
} // namespace Aws
