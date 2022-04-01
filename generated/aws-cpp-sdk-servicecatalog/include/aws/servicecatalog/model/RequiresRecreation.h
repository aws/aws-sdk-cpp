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
  enum class RequiresRecreation
  {
    NOT_SET,
    NEVER,
    CONDITIONALLY,
    ALWAYS
  };

namespace RequiresRecreationMapper
{
AWS_SERVICECATALOG_API RequiresRecreation GetRequiresRecreationForName(const Aws::String& name);

AWS_SERVICECATALOG_API Aws::String GetNameForRequiresRecreation(RequiresRecreation value);
} // namespace RequiresRecreationMapper
} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
