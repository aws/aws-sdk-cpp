/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{
  enum class PropertyKey
  {
    NOT_SET,
    OWNER,
    LAUNCH_ROLE
  };

namespace PropertyKeyMapper
{
AWS_SERVICECATALOG_API PropertyKey GetPropertyKeyForName(const Aws::String& name);

AWS_SERVICECATALOG_API Aws::String GetNameForPropertyKey(PropertyKey value);
} // namespace PropertyKeyMapper
} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
