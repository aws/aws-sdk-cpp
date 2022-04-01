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
  enum class AccessStatus
  {
    NOT_SET,
    ENABLED,
    UNDER_CHANGE,
    DISABLED
  };

namespace AccessStatusMapper
{
AWS_SERVICECATALOG_API AccessStatus GetAccessStatusForName(const Aws::String& name);

AWS_SERVICECATALOG_API Aws::String GetNameForAccessStatus(AccessStatus value);
} // namespace AccessStatusMapper
} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
