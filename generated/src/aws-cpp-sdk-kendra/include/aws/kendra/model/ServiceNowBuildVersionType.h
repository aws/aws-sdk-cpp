/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace kendra
{
namespace Model
{
  enum class ServiceNowBuildVersionType
  {
    NOT_SET,
    LONDON,
    OTHERS
  };

namespace ServiceNowBuildVersionTypeMapper
{
AWS_KENDRA_API ServiceNowBuildVersionType GetServiceNowBuildVersionTypeForName(const Aws::String& name);

AWS_KENDRA_API Aws::String GetNameForServiceNowBuildVersionType(ServiceNowBuildVersionType value);
} // namespace ServiceNowBuildVersionTypeMapper
} // namespace Model
} // namespace kendra
} // namespace Aws
